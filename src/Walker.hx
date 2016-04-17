package ;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Graphic;
import com.haxepunk.HXP;


class Walker extends BaseWorldEntity
{
    private var _animatedSprite : Spritemap;

    private var _speed : Float;
    private var _speedMod : Float;

    public var isShapeShifter : Bool;

    private var turnTimer : TimerEntity;

    private var _maxTurnTime : Float;
    private var _minTurnTime : Float;

    private var goingRight : Bool;

    private var slowDownTimer : TimerEntity;

    private var _isOld : Bool;

    // Speed framerate ratio.
    private var _speed2FR :  Float;

    private var goingFast : Bool;

    private static var idCount : Int = 0;
    private var walkerId : Int;

    //Walker to temporarily not overtake.
    private var dontOvertakeID : Int;


    public function new(x : Float, y : Float)
    {
        super(x,y);

        walkerId = idCount;
        idCount ++;


        type = "walker";

        _maxTurnTime = 4.0;
        _minTurnTime = 1.0;
        _speed2FR= 0.2;
        _speedMod = 1.0;
        goingFast = false;


        _animatedSprite = new Spritemap("graphics/walker.png", 64, 64);

        _isOld = false;

        this.graphic = _animatedSprite;

        if(Utils.coinFlip())
        {

            _speed = 50 + Utils.randInt(20);
            _animatedSprite.add("walk", [0, 1, 2, 3, 4, 5, 6, 7], _speed * _speed2FR * 0.9);
            _animatedSprite.add("walkFast", [0, 1, 2, 3, 4, 5, 6, 7], _speed * _speed2FR * 0.9 * 2.0);
            _animatedSprite.play("walk");

        }
        else
        {
            _isOld = true;
            _speed = 30 + Utils.randInt(20);
            _animatedSprite.add("hobble", [8, 9, 10, 11, 12, 13, 14, 15], _speed * _speed2FR);
            _animatedSprite.play("hobble");

        }
        setHitbox(_animatedSprite.width, _animatedSprite.height);


        goingRight = Utils.coinFlip();

        turn();
    }

    override public function update() : Void
    {
        if( x  >= HXP.width && goingRight)
        {
            x = -_animatedSprite.width;
        }
        else if( x + _animatedSprite.width  <= -2 && !goingRight)
        {
            x = HXP.width;
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
}
