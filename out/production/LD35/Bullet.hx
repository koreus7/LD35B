package ;

import com.haxepunk.graphics.Image;


class Bullet extends BaseWorldEntity
{
	private var velX : Float;
	private var velY : Float;
	private var image : Image;

    public function new( x : Float, y : Float, velX : Float, velY : Float) 
    {
    	image = new Image("graphics/bullet.png");

    	this.velX = velX;
    	this.velY = velY;


    	image.angle = Utils.radToDeg(Math.atan2(-velY,-velX));


    	super(x,y, image);
        type = "bullet";


        this.setHitbox(6,6);

    }

    override public function update() : Void
    {
    	x += velX;
    	y += velY;
    }
}
