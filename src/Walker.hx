package ;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Graphic;
import com.haxepunk.Mask;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

class Walker extends BaseWorldEntity
{
    private var _animatedSprite : Spritemap;

    public function new(x : Float, y : Float)
    {
        super(x,y);

        _animatedSprite = new Spritemap("graphics/walker.png", 64, 64);

        _animatedSprite.add("walk", [0, 1, 2, 3, 4, 5, 6, 7], 10);
        _animatedSprite.add("idle", [6], 10);
        _animatedSprite.play("walk");

        this.graphic = _animatedSprite;
    }
}
