package ;
import flash.geom.Rectangle;
import com.haxepunk.HXP;
import flash.display.BitmapData;
import flash.display.BlendMode;
import com.haxepunk.graphics.Image;
import flash.display.Bitmap;

class LightMask extends BaseWorldEntity
{
    private var image : Image;
    private var data : BitmapData;
    private var flip : Bool;

    public function new()
    {
        super(0,0);
        graphic = new Image("graphics/lightingMask.png");

        layer = Layers.lightMask;


    }



}
