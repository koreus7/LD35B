package ;
import com.haxepunk.graphics.Image;
import com.haxepunk.Entity;
import com.haxepunk.Scene;
/**
 * ...
 * @author Leo Mahon
 */
class BaseWorld extends Scene
{

	public function new() 
	{
		super();
	}

	public function addLight(image : String, x : Float, y : Float) : Entity
	{

		var light : Light = new Light(x,y, new Image(image));
		light.layer = Layers.lights;
		add(light);

		return light;
	}

}