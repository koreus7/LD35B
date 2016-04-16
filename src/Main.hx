import com.haxepunk.Engine;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import flash.events.Event;

class Main extends Engine
{
    public static inline var kScreenWidth:Int = 750;
    public static inline var kScreenHeight:Int = 450;
    public static inline var kFrameRate:Int = 30;

    function new()
    {
        super(kScreenWidth, kScreenHeight, kFrameRate, false);
    }

	override public function init()
	{
//#if debug
		HXP.console.enable();

        HXP.console.toggleKey = Key.F3;
//#end
		HXP.scene = new MainScene();
	}

	public static function main() { new Main(); }


    override private function onStage(e:Event = null):Void{
        super.onStage(e);

        this.onResize(new Event("resize"));
        HXP.stage.addEventListener(Event.RESIZE, this.onResize);
    }

    public function onResize(event:Event) : Void {
        HXP.width = HXP.stage.stageWidth;
        HXP.height = HXP.stage.stageHeight;

        HXP.resize(HXP.stage.stageWidth, HXP.stage.stageHeight);

    }


}