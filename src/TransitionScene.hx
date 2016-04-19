package ;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;


class TransitionScene extends BaseWorld
{
    public function new()
    {
        super();
    }


    override public function begin()
    {
        add(new TextOverlay(G.transitionText));
    }

    override public function update() : Void
    {
        if(Input.pressed(Key.SPACE) || Input.pressed(Key.ENTER))
        {
            G.runAway = false;
            G.timeSpeed = 1.0;
            G.stageOver = false;
            HXP.scene = new MainScene();
        }

        super.update();
    }
}
