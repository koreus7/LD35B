package;

import com.haxepunk.tweens.motion.QuadMotion;
import com.haxepunk.Tween;
import com.haxepunk.utils.Ease;
import com.haxepunk.tweens.misc.VarTween;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Graphic;
import com.haxepunk.Mask;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

/**
 * ...
 * @author Leo Mahon
 */
class Runner extends BaseWorldEntity
{

	private var _animatedSprite : Spritemap;
	
	private var _speed : Float;
    private var _jumpTweenX : TimeScaleTween;
    private var _jumpTweenY : TimeScaleTween;
    private var _jumpHeight : Float;
    private var _jumpUpTime : Float;
    private var _jumping : Bool;
    private var _startedUpwardMovement : Bool;
	
	public function new(x:Float=100, y:Float=100, graphic:Graphic=null, mask:Mask=null)  
	{
		
		_speed = 550;

        _jumpHeight = 200;
        _jumpUpTime = 3.0;
        _jumping = false;
        _startedUpwardMovement = false;


		_animatedSprite = new Spritemap("graphics/runner.png", 64, 64);
		_animatedSprite.add("run", [0, 1, 2, 3, 4, 5], 12);
		_animatedSprite.add("idle", [6], 10);
		_animatedSprite.add("jump", [8,9,10], 5, false);
		_animatedSprite.play("run");
		this.graphic = _animatedSprite;
		
		super(x, y, graphic, mask);
		
		
	}
	
	override public function update()
	{
		_animatedSprite.rate = G.timeSpeed;

        if(!_jumping)
        {
            if (Input.check(Key.A))
            {
                moveBy( -_speed * G.delta, 0);
                _animatedSprite.flipped = false;
                _animatedSprite.play("run");
            }
            else if (Input.check(Key.D))
            {
                moveBy(_speed * G.delta, 0);
                _animatedSprite.flipped = true;
                _animatedSprite.play("run");
            }
            else
            {
                _animatedSprite.play("idle");
            }
        }

        if(Input.pressed(Key.W) && !_jumping)
        {
            _jumping = true;
            _animatedSprite.play("jump");
            var t = new TimerEntity(0.3, startUpMovmement);
            G.world.add(t);
        }


	}

    private function startUpMovmement(data :Dynamic = null)
    {
        var t = new TimerEntity(0.7, slowDownTime);
        G.world.add(t);

        _startedUpwardMovement  = true;

        _jumpTweenY = new TimeScaleTween(jumpFinished, TweenType.OneShot);
        _jumpTweenY.tween(this,"y", y - _jumpHeight, _jumpUpTime,  Ease.backOut);

        _jumpTweenX = new TimeScaleTween(null, TweenType.OneShot);

        var xOffSet = _animatedSprite.flipped? 50 : -50;

        _jumpTweenX.tween(this,"x", x + xOffSet, _jumpUpTime,  Ease.quadOut);


        this.addTween(_jumpTweenY, true);
        this.addTween(_jumpTweenX, true);
    }

    private function slowDownTime(data : Dynamic = null)
    {
        G.timeSpeed = 0.05;
    }


    public function jumpFinished(data : Dynamic) : Void
    {
        G.timeSpeed = 1.0;
        _jumping = false;
        _startedUpwardMovement = false;
    }
}