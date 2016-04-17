package ;
import com.haxepunk.utils.Input;
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

    public static var lampTop : Float = 0.0;
    public static var lampAngle : Float = Utils.degToRad(30);

    private var lampPositions : Array<Float>;

    public function new()
    {
        super(0,0);

        this.lampPositions = new Array<Float>();

        layer = Layers.lightMask;
    }

    public function generate()
    {

        //Width of the throw of the light
        var tw = Math.tan(lampAngle*0.5)*lampTop*2.0;

        P5.fill(0x000000,1.0);
        P5.noStroke();

        P5.beginShape();

        P5.vertex(0,0);
        P5.vertex(0,HXP.height);
        lampPositions.sort(Utils.compareFloat);

        for(i in 0...lampPositions.length)
        {
            var x = lampPositions[i];

            var xn : Float = HXP.width + 500;
            var xp : Float = -500;

            if(i + 1 < lampPositions.length)
            {
                xn = lampPositions[i + 1];
            }
            if(i - 1 >= 0)
            {
                xp = lampPositions[i - 1];
            }


            if(xp + tw/2 > x - tw/2)
            {
                //Vertex already exists because they overlap.
            }
            else
            {

                P5.vertex(x - tw/2, HXP.height);
            }


            var flatAmount: Float = 5;
            //Flatten top of tri
            P5.vertex(x - flatAmount, lampTop + flatAmount*2.5);
            P5.vertex(x + flatAmount, lampTop + flatAmount*2.5);

            if(x + tw/2 > xn - tw/2)
            {
                //Overlap with next = special vertex.
                P5.vertex(x + 0.5*(xn - x),
                    lampTop + 0.25 * (xn - x)*Math.tan(0.5*(Math.PI - lampAngle)));
            }
            else
            {
                P5.vertex(x + tw/2, HXP.height);
            }




        }
        P5.vertex(HXP.width, HXP.height);
        P5.vertex(HXP.width,0);
        image = P5.endShape();
        image.blend = BlendMode.MULTIPLY;
        image.alpha = 0.5;
        graphic = image;

    }

    public function addLamp(x : Float)
    {
        var lamp = new Lamp(0, lampTop - 5);
        lamp.x = x - 64;
        scene.add(lamp);
        lampPositions.push(x);
    }

    override public function firstUpdateCallback(): Void
    {
        super.firstUpdateCallback();
        addLamp(178);
        addLamp(387);
        addLamp(602);

        generate();

    }





}
