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
import com.haxepunk.Sfx;
import com.haxepunk.graphics.Image;

/**
 * ...
 * @author Leo Mahon
 */
class Runner extends BaseWorldEntity
{

	private var _animatedSprite : Spritemap;
	
    private var _jumpTweenX : TimeScaleTween;
    private var _jumpTweenY : TimeScaleTween;
    private var _fallTweenX : TimeScaleTween;
    private var _fallTweenY : TimeScaleTween;


    private var _speed          : Float;
    private var _jumpHeight     : Float;
    private var _jumpUpTime     : Float;
    private var _fallDownTime   : Float;
    private var _slowTimeAmount : Float;
    private var _yBeforeJump    : Float;
    
    private var _jumping : Bool;
    private var _falling : Bool;
    private var _landing : Bool;
    private var _startedUpwardMovement : Bool;

    private var slowMoFX        : Sfx;
    private var exitSlowMoFx    : Sfx;
    private var jumpFX          : Sfx;
    private var landFX          : Sfx;
    private var shootFX         : Sfx;
    private var runFX           : Sfx;
    private var backgroundSound : Sfx;


    private var _gunTop : Image;
    private var _gunRotateOffX : Float;
    private var _gunRotateOffY : Float;
    private var _topRot : Float;
    
    private var shots : Int;
    

	
	public function new(x:Float=100, y:Float=100, graphic:Graphic=null, mask:Mask=null)  
	{


        backgroundSound = Utils.audex("In Game FX V2");
        backgroundSound.loop();

		
		_speed = 550;


        shots = 6;
        _jumpHeight = 200;
        _jumpUpTime = 2.7;
        _jumping = false;
        _falling = false;
        _fallDownTime = 0.5;
        _slowTimeAmount = 0.2;


        slowMoFX =  Utils.audex("SlowMoFx");
        exitSlowMoFx = Utils.audex("ExitSlowMo");
        runFX = Utils.audex("Protaginist Walk");


        jumpFX = Utils.audex("Jump ");
        landFX = Utils.audex("Land");
        shootFX = Utils.audex("Slow Mo Gun Shot");


		_animatedSprite = new Spritemap("graphics/runner.png", 64, 64);
		_animatedSprite.add("run", [0, 1, 2, 3, 4, 5], 12);
		_animatedSprite.add("idle", [6], 10);
		_animatedSprite.add("jump", [8,9,10,11], 5, false);
        _animatedSprite.add("fall", [12], 5);
        _animatedSprite.add("land", [13], 5);
		_animatedSprite.play("run");

        _gunTop = new Image("graphics/topGun.png");
        _gunTop.visible = false;
        _gunRotateOffX = 35;
        _gunRotateOffY = 29;
        _gunTop.originX = _gunRotateOffX;
        _gunTop.originY = _gunRotateOffY;
        _gunTop.x = _gunRotateOffX;
        _gunTop.y = _gunRotateOffY;


		this.addGraphic(_animatedSprite);
        this.addGraphic(_gunTop);
		
		super(x, y, graphic, mask);
		
	}

    private function rotateTop(x : Float, y : Float)
    {

        var ox : Float;
        var oy : Float;


        //TODO FIX THIS ROTATIONTHING
        if(x > this.x && false)
        {

            _gunTop.originX = _gunTop.x =   width - _gunRotateOffX;
            _gunTop.originY = _gunTop.y =   _gunRotateOffY;

            ox = this.x + _gunTop.originX;
            oy = this.y + _gunTop.originY;

            _animatedSprite.flipped = true;
            _gunTop.flipped = true;
        }
        else
        {
            _gunTop.originX = _gunTop.x =   _gunRotateOffX;
            _gunTop.originY = _gunTop.y =   _gunRotateOffY;

            ox = this.x + _gunTop.originX;
            oy = this.y + _gunTop.originY - 40;
            _animatedSprite.flipped = false;
            _gunTop.flipped = false;
        }

        var d =  Utils.distance(ox, oy, x , y );

        var alpha = Math.PI/2 - Math.atan2(y - oy, x - ox);
        var beta = Math.acos(_gunRotateOffY / d);

        _topRot = alpha + beta;

        _gunTop.angle = Utils.radToDeg(
            _topRot
        );
    }
	
	override public function update()
	{
        rotateTop(Input.mouseX, Input.mouseY);

		_animatedSprite.rate = G.timeSpeed;

        if(!_jumping && !_landing)
        {
            if (Input.check(Key.A))
            {
                if(!runFX.playing)runFX.play();
                runFX.play();
                moveBy( -_speed * G.delta, 0);
                _animatedSprite.flipped = false;
                _animatedSprite.play("run");
            }
            else if (Input.check(Key.D))
            {
                if(!runFX.playing)runFX.play();
                moveBy(_speed * G.delta, 0);
                _animatedSprite.flipped = true;
                _animatedSprite.play("run");
            }
            else
            {
                runFX.stop();
                _animatedSprite.play("idle");
            }
        }
        else
        {
              runFX.stop();
        }

        if(Input.pressed(Key.W) && !_jumping)
        {

            jumpFX.play();

            _yBeforeJump = y;
            _jumping = true;
            _animatedSprite.play("jump");

            var t = new TimerEntity(0.3, startUpMovmement);
            G.world.add(t);

            var t1 = new TimerEntity(0.85, function( data : Dynamic = null){
                _gunTop.visible = true;
            });

            G.world.add(t);
            G.world.add(t1);
        }

        if(_jumping && !_falling && !_landing)
        {
            if(Input.mousePressed && shots > 0)
            {
                shots -= 1;
                shootFX.play();
                var ox = this.x + _gunTop.x  - 14*Math.sin(_topRot);
                var oy = this.y + _gunTop.y  - 14*Math.cos(_topRot);

                var v : Vector2D = new Vector2D(Input.mouseX - ox, Input.mouseY - oy);

                v.normalize();

                var b = v.normalized().returnScaled(17);
                v.scale(10);

                var b = new Bullet(ox + b.x,oy + b.y,v.x,v.y);
                b.layer = Layers.main;
                G.world.add(b);
            }
        }



	}

    private function startUpMovmement(data :Dynamic = null)
    {
        var t = new TimerEntity(0.08, slowDownTime);
        G.world.add(t);
        G.runAway = true;

        _startedUpwardMovement  = true;

        _jumpTweenY = new TimeScaleTween(fall, TweenType.OneShot);
        _jumpTweenY.tween(this,"y", y - _jumpHeight, _jumpUpTime,  Ease.expoOut);

        _jumpTweenX = new TimeScaleTween(null, TweenType.OneShot);

        var xOffSet = _animatedSprite.flipped? 100 : -100;

        _jumpTweenX.tween(this,"x", x + xOffSet, _jumpUpTime + _fallDownTime, Utils.linearEase);


        this.addTween(_jumpTweenY, true);
        this.addTween(_jumpTweenX, true);


        var t = new TimerEntity(_jumpUpTime/_slowTimeAmount -2.0, function( data : Dynamic = null ) {
            exitSlowMoFx.play();
            exitSlowMoFx.complete = function(){
                slowMoFX.stop();
            }
        });
        G.world.add(t);

    }




    private function slowDownTime(data : Dynamic = null)
    {
        backgroundSound.stop();
        slowMoFX.play();

        var t = new TimerEntity(0.08, function( data : Dynamic = null ) {
            G.timeSpeed = _slowTimeAmount;
        });
        G.world.add(t);

    }



    public function jumpFinished(data : Dynamic) : Void
    {
        landFX.play();
        _animatedSprite.play("land");



        var t = new TimerEntity(0.2, function( data : Dynamic = null ) {
            G.stageOver = true;
        });
        G.world.add(t);

        _falling = false;
        _landing = true;
        _jumping = false;
    }

    public function fall(data : Dynamic) : Void
    {
        _falling = true;
        G.timeSpeed = 1.0;

        _gunTop.visible = false;
        _animatedSprite.play("fall");

        _fallTweenY = new TimeScaleTween(jumpFinished, TweenType.OneShot);
        _fallTweenY.tween(this, "y", _yBeforeJump, _fallDownTime, Ease.quadIn);
        this.addTween(_fallTweenY, true);

        G.timeSpeed = 1.0;

    }
}