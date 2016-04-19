import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.Sfx;

class MainScene extends BaseWorld
{
    private var p1 : Paralax;
    private var p2 : Paralax;
    private var player : Runner;
    private var walkers : Array<Walker>;
    private var handledEndStage : Bool;



    private var mouse : Entity;

    override public function begin()
	{


        handledEndStage = false;

        walkers = new Array<Walker>();

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


        var lightMask = new LightMask();
        LightMask.lampTop = G.ground - 130;



        this.add(lightMask);


        addWalker(true);

        for(i in 0...(3*G.stageNumber))
        {
            addWalker(false);
        }


		this.add(player);

        mouse = new Entity(0,0,new Image("graphics/mouse.png"));
        add(mouse);


	}

    private function addWalker(hack : Bool ) : Void
    {
        var shifter = Utils.randInt(10) <= 5 || hack;
        var walker : Walker = new Walker(
            Utils.clamp(Utils.randInt(HXP.width), 0, HXP.width - 64),
            player.y,
            Utils.coinFlip(),
            shifter,
            Utils.coinFlip()
        );

        walkers.push(walker);

        add(walker);
    }

    override public function update()
    {
        G.delta = HXP.elapsed * G.timeSpeed;
        Paralax.offset = HXP.width/2.0 - player.x;
        mouse.x = Input.mouseX - 4;
        mouse.y = Input.mouseY - 4;




        if(G.stageOver && !handledEndStage)
        {
            handleStageOver();
        } 



        super.update();
    }

    private function handleStageOver()
    {
        var totalShapeShifters = 0;
        var deadShapeShifers = 0;

        for(walker in walkers)
        {
            if(walker.getIsShapeShifter())
            {
                totalShapeShifters += 1;
                
                if(walker.dead)
                {
                    deadShapeShifers += 1;
                }
            }
        }

        G.stageNumber ++;
        HXP.scene = new TransitionScene("You killed " + Std.string(deadShapeShifers) + " / " + Std.string(totalShapeShifters) + "\n" + "\n" + "Press Space");

    }
}