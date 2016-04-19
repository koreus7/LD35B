package ;
import com.haxepunk.Tween.TweenType;
import com.haxepunk.tweens.misc.VarTween;
import com.haxepunk.utils.Ease;
import com.haxepunk.graphics.Text;
import flash.text.TextFormatAlign;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;

class TextOverlay extends BaseWorldEntity{

	private var textG : Text;

	private var back : Image;




    public function new(text : String) 
    {    

    	super(0,0);


    	P5.fill(0x272727, 1.0);
		P5.noStroke();
		back = P5.rect(HXP.width/2, HXP.height/2,HXP.width, HXP.height);
		addGraphic(back);

    	textG = new Text(text);

		textG.font = "font/Zorus_Serif.ttf";
        textG.size = 32;

    	addGraphic(textG);


    	layer = Layers.hud;
    }

}
