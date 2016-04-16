package;
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
	
	public function new(x:Float=100, y:Float=100, graphic:Graphic=null, mask:Mask=null)  
	{
		
		_speed = 600;
		
		_animatedSprite = new Spritemap("graphics/runner.png", 64, 64);
		_animatedSprite.add("run", [0, 1, 2, 3, 4, 5], 12);
		_animatedSprite.add("idle", [6], 10);
		_animatedSprite.play("run");
		this.graphic = _animatedSprite;
		
		super(x, y, graphic, mask);
		
		
	}
	
	override public function update()
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
	
}