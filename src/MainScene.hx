import com.haxepunk.Entity;
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

        G.ground = HXP.height - 30.0;
		P5.fill(0x272727, 1.0);
		P5.noStroke();
		addGraphic( P5.rect(HXP.width/2, HXP.height/2,HXP.width, HXP.height), Layers.back);

        var background = new BaseWorldEntity(0,0, new Image("graphics/background.png"));
        background.layer = Layers.back;

        p1 = new Paralax(0,0,"graphics/paralax1.png");
        p1.layer = Layers.forwardParalax;

        p2 = new Paralax(0,0,"graphics/paralax2.png");
        p2.layer = Layers.backParalax;

        p1.rate = 0.006;
        p2.rate = 0.015;

		player = new Runner();
		player.layer = Layers.top;


        player.x = HXP.width/2;
        player.y = G.ground - 64;

        var road = new BaseWorldEntity(0,0, new Image("graphics/road.png"));
        road.layer = Layers.main;


        this.add(background);
        this.add(p2);
        this.add(p1);
        this.add(road);
        this.add(new LightMask());

        var lampA = new Lamp(0, G.ground - 134);
        lampA.centerX = 200;

        this.add(lampA);

        var lampB = new Lamp(0, G.ground - 134);
        lampB.centerX = 526;

        this.add(lampB);


        for(i in 0...3)
        {
            var walker : Walker = new Walker(
                Utils.clamp(Utils.randInt(HXP.width), 0, HXP.width - 64),
                player.y
            );
            add(walker);
        }


		this.add(player);

	}


    override public function update()
    {
        G.delta = HXP.elapsed * G.timeSpeed;
        Paralax.offset = HXP.width/2.0 - player.x;
        super.update();
    }
}