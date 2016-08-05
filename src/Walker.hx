package ;
import flash.display.BlendMode;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Graphic;
import com.haxepunk.HXP;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;


class Walker extends BaseWorldEntity
{
    private var _animatedSprite : Spritemap;

    private var _speed : Float;
    private var _speedMod : Float;

    private var turnTimer : TimerEntity;

    private var _maxTurnTime : Float;
    private var _minTurnTime : Float;

    private var goingRight : Bool;

    public var isShapeShifter : Bool;

    private var slowDownTimer : TimerEntity;

    private var _isOld : Bool;

    // Speed framerate ratio.
    private var _speed2FR :  Float;

    private var goingFast : Bool;

    private static var idCount : Int = 0;
    private var walkerId : Int;

    //Walker to temporarily not overtake.
    private var dontOvertakeID : Int;

    private var inLight : Bool;

    private var shiftTimer : TimerEntity;

    private var shifted : Bool;

    private var runSpeed : Float;

    public var dead : Bool;

    private var bulletFX : Sfx;
    private var tel1 : Sfx;
    private var tel2 : Sfx;
    private var shift : Sfx;



    public function new(x : Float, y : Float, isOld : Bool, isShapeShifter : Bool, goingRight : Bool)
    {
        super(x,y);

        this.isShapeShifter = isShapeShifter;
        walkerId = idCount;
        idCount ++;

        bulletFX = Utils.audex("Gun Impact");
        tel1 = Utils.audex("Teleport 1");
        tel2= Utils.audex("Teleport 2");
        shift = Utils.audex("Shapeshifter ");

        type = "walker";

        _maxTurnTime = 4.0;
        _minTurnTime = 1.0;
        _speed2FR= 0.2;
        _speedMod = 1.0;
        goingFast = false;
        shifted = false;
        dead = false;
        runSpeed = 2.5;

        _animatedSprite = new Spritemap("graphics/walker.png", 64, 64);

        _isOld = isOld;

        this.graphic = _animatedSprite;


        if(!isOld)
        {

            _speed = 50 + Utils.randInt(20);
            _animatedSprite.add("walk", [0, 1, 2, 3, 4, 5, 6, 7], _speed * _speed2FR * 0.9);
            _animatedSprite.add("walkFast", [0, 1, 2, 3, 4, 5, 6, 7], _speed * _speed2FR * 0.9 * 2.0);
            _animatedSprite.add("run", [16,17,18,19,20,21], 10);
            _animatedSprite.play("walk");

        }
        else
        {
            _speed = 30 + Utils.randInt(20);
            _animatedSprite.add("hobble", [8, 9, 10, 11, 12, 13, 14, 15], _speed * _speed2FR);
            _animatedSprite.add("hobbleFast", [8, 9, 10, 11, 12, 13, 14, 15], _speed * _speed2FR * runSpeed);
            _animatedSprite.play("hobble");

        }
        setHitbox(_animatedSprite.width - 10, _animatedSprite.height - 10);


        _animatedSprite.add("die", [22,23,24,25], 13, false);

        this.goingRight = goingRight;

        turn();

    }

    override public function update() : Void
    {
        _animatedSprite.rate = G.timeSpeed;

        if(dead)
        {

        }
        else
        {
            if(G.runAway)
            {
                runAwayAI();
            }
            else
            {
                crowdAI();
            }

            if(collide("Lamp",x,y) == null)
            {
                inLight = false;
            }
            else
            {
                inLight = true;
            }
        }

        var bullet : Bullet = cast collide("bullet",x,y);
        if(bullet != null)
        {
            if(isShapeShifter)
            {
                die();
                bulletFX.play();
            }
            G.world.remove(bullet);
        }
  
        super.update();
    }

    private function runAwayAI()
    {

        if(x > HXP.width/2)
        {
            _animatedSprite.flipped = false;
            moveBy(runSpeed * G.delta * _speed ,0);
        }
        else
        {
            _animatedSprite.flipped = true;
            moveBy(-runSpeed * G.delta * _speed,0);
        }

        if(_isOld)
        {
            if(_animatedSprite.currentAnim != "hobbleFast ")
                _animatedSprite.play("hobbleFast");
        }
        else
        {
            
            if(_animatedSprite.currentAnim != "run")
                _animatedSprite.play("run");
        }
    }

    private function telFX()
    {
        if(Utils.coinFlip())
        {
            tel1.play();
        }
        else
        {
            tel2.play();
        }
    }

    private function crowdAI()
    {
        if( x  >= HXP.width && goingRight)
        {
            x = -_animatedSprite.width;

            telFX();
        }
        else if( x + _animatedSprite.width  <= -2 && !goingRight)
        {
            x = HXP.width;
            telFX();
        }

        if(goingRight)
        {
            _animatedSprite.flipped = false;
            moveBy( _speed * _speedMod * G.delta, 0);
        }
        else
        {
            _animatedSprite.flipped = true;
            moveBy( -_speed *  _speedMod * G.delta, 0);
        }

        var checkOffset : Float = isGoingRight() ? _animatedSprite.width : - _animatedSprite.width;

        var inFront : Walker = cast collide("walker", x + checkOffset , y);

        //No one in front
        if(inFront == null)
        {
            //Check for parralel walkers.
            inFront = cast collide("walker", x  , y);


            if(inFront != null && inFront.getWalkerId() != dontOvertakeID && !_isOld)
            {
                //Stop the other one from trying to overtake
                inFront.dontOvertakeID = getWalkerId();
                //Overtake.
                walkFast();
            }
            else
            {
                if(isGoingFast() && !_isOld)
                {
                    //Slow down becase there is no one to overtake.
                    walk();
                }

            }
        }
            //We are gonna bump into the person in front.
        else if (inFront.isGoingRight() == isGoingRight() && ! inFront.isGoingFast()
        && inFront.getSpeed() < _speed )
        {
            if(Utils.coinFlip() && !_isOld)// && inFront.getWalkerId() != dontOvertakeID)
            {
                //Overtake.
                //If not already overtaking
                if(!goingFast)
                {
                    walkFast();
                }
            }
            else
            {
                //Match Speed.
                _speed = inFront.getSpeed();
            }
        }
            //Not gonna bump in so should walk.
            //Old can only hobble.
        else if(!_isOld)
        {
            walk();
        }


    }

    override public function firstUpdateCallback() : Void
    {
        if(this.isShapeShifter)
        {
            shiftTimer = new TimerEntity(5, shapeShiftTimerCallback, true);
            scene.add(shiftTimer);
        }
    }

    public function shapeShiftTimerCallback(data : Dynamic = null) : Void
    {
        if(!inLight)
        {
            shapeShift();
        }
    }

    public function getWalkerId() : Int
    {
        return walkerId;
    }

    public function getSpeed() : Float
    {
        return _speed;
    }

    public function isGoingRight() : Bool
    {
        return goingRight;
    }

    public function isGoingFast() : Bool
    {
        return goingFast;
    }

    public function walkFast() : Void
    {
        goingFast = true;
        _speedMod = 2.0;
        _animatedSprite.play("walkFast");
    }

    public function walk( data : Dynamic = null) : Void
    {
        goingFast = false;
        _speedMod = 1.0;
        _animatedSprite.play("walk");
    }

    private function turn ( data:Dynamic = null ) : Void
    {
        goingRight = !goingRight;
    }

    public function triggerShapeShift() : Void
    {
        if(isShapeShifter)
        {
            shapeShift();
        }
    }

    public function getIsShapeShifter() : Bool
    {
        return isShapeShifter;
    }

    private function shapeShift() : Void
    {
        if(!shifted && !G.runAway)
        {
            shift.play();
            var newForm : Walker = new Walker(x,y, !_isOld, true, !goingRight);
            if(G.world== null) trace("baseWorld");
            G.world.add(newForm);
            graphic.destroy();
            G.world.remove(shiftTimer);
            G.world.remove(this);
            shifted = true;
        }
    }

    private function die() : Void
    {
        
        if(!dead)
        {
            G.killCount ++;
        }
        
        dead = true;
        setHitbox(64,20);
        _animatedSprite.play("die");    
    }
}
