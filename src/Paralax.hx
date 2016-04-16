package ;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Image;

class Paralax extends BaseWorldEntity{

    public var rate : Float;
    public static var offset : Float;
    public var image : Image;

    public function new(x : Float, y: Float, imagePath : String)
    {
        image = new Image(imagePath);
        super(x,y, image);
    }

    override public function update() : Void
    {
        x = HXP.width/2 - image.width/2;
        graphic.x = offset * rate;
    }

}
