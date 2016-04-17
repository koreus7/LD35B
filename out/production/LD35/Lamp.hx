package ;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
class Lamp extends BaseWorldEntity
{

    var lampSprite : Image;
   // var light : Entity;

    public function new(x : Float, y : Float)
    {

        super(x,y);

        lampSprite = new Image("graphics/lamp.png");

        graphic = lampSprite;



        setHitbox(128,128);

        type = "Lamp";

    }

    override public function firstUpdateCallback():Void
    {
        super.firstUpdateCallback();

        //light = baseWorld.addLight("graphics/lampLight.png",0,0);
    }

    override public function update() : Void
    {


        super.update();

    }

}