package ;
import com.haxepunk.graphics.Image;

class Paralax extends BaseWorldEntity{

    public var rate : Float;
    public static var offset : Float;

    public function new(x : Float, y: Float, imagePath : String)
    {
        super(x,y, new Image(imagePath));
    }

    override public function update() : Void
    {
        graphic.x = offset * rate;
    }

}
