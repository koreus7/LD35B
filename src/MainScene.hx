import com.haxepunk.graphics.Image;
import com.haxepunk.Scene;
import com.haxepunk.HXP;

class MainScene extends BaseWorld
{
    private var p1 : Paralax;
    private var p2 : Paralax;
    private var player : Runner;

    override public function begin()
	{
		P5.fill(0x272727, 1.0);
		P5.noStroke();
		addGraphic( P5.rect(HXP.width/2, HXP.height/2,HXP.width, HXP.height), Layers.back);

        var background = new BaseWorldEntity(0,0, new Image("graphics/background.png"));
        background.layer = Layers.back;

        p1 = new Paralax(0,0,"graphics/paralax1.png");
        p1.layer = Layers.forwardParalax;

        p2 = new Paralax(0,0,"graphics/paralax2.png");
        p2.layer = Layers.backParalax;

        p1.rate = 0.8;
        p2.rate = 0.9;

		player = new Runner();
		player.layer = Layers.top;

        this.add(background);
        this.add(p2);
        this.add(p1);
		this.add(player);
	}

    override public function update()
    {
        G.delta = HXP.elapsed * G.timeSpeed;
        Paralax.offset = player.x - HXP.width/2.0;
        super.update();
    }
}