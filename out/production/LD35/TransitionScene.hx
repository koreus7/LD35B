package ;
import com.haxepunk.utils.Input;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;


class TransitionScene extends BaseWorld
{
    public function new(t : String )
    {
        add(new TextOverlay(t));

        super();
    }

    override public function update() : Void
    {
        if(Input.pressed(Key.SPACE) || Input.pressed(Key.ENTER))
        {
            HXP.scene = new MainScene();
        }

        super.update();
    }
}
