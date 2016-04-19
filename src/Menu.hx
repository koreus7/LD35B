package ;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;

class Menu extends BaseWorld
{
    private var s : Sfx;
    private var s1 : Sfx;
    private var showIn : Bool;
    
    override public function begin()
	{

		this.addGraphic(new Image("graphics/menu.png"));

        s = Utils.audex("Main Theme V2 Master");
        s.loop();

        s1 = Utils.audex("Menu Click");

	}

	override public function update() : Void
	{
		if(Input.pressed(Key.SPACE) || Input.pressed(Key.ENTER))
		{
            if(!showIn)
            {
                s1.play();
                showIn = true;
                this.addGraphic(new Image("graphics/howToPlay.png"));
            }
            else
            {
                s1.play();
                s.stop();
                HXP.scene = new MainScene();
            }

		}
	}
}
