import openfl._legacy.ui.Mouse;
import flash.display.BitmapData;
import com.haxepunk.Engine;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import flash.events.Event;
import flash.display.Bitmap;

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
        Mouse.hide();
//#if debug
		HXP.console.enable();

        HXP.console.toggleKey = Key.F3;
//#end
		HXP.scene = new Menu();
        super.init();
	}

	public static function main() { new Main(); }

    override public function update()
    {
        if (Input.pressed(Key.F))
        {
            HXP.fullscreen = !HXP.fullscreen;
        }

        super.update();

    }


}