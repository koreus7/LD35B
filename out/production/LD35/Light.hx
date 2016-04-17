package ;
import flash.display.BlendMode;
import com.haxepunk.graphics.Image;
class Light extends BaseWorldEntity
{
    var image : Image;

    public function new( x : Float, y : Float, image : Image)
    {
        super(x,y,image);

        this.image = image;

        layer = Layers.lights;
        image.blend = BlendMode.HARDLIGHT;


    }

    override public function update() : Void
    {
        super.update();
        //setHitbox(128, 512, x + 128, y);
        var w : Walker = cast collide("walker",x,y);

        
        if(w != null)
        {
        	if(w.isGoingRight())
        	{
        		if(w.x  < centerX)
        		{
        			w.visible = true;
        		}
        		else if(w.x > width - 10)
        		{
        			trace("InVisible");
        			w.visible = false;
        		}
        	}
        	else
        	{
        		if(w.x > centerX)
        		{
        			w.visible = true;
        		}
        		else if(w.x + w.width < x + 10)
        		{
        			w.visible = false;
        		}
        	}
        }

    }
}
