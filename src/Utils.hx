package ;
class Utils
{
    public static inline function randomRange(lowerBound:Float, upperBound:Float):Float
    {
        return lowerBound + Math.random() * (upperBound - lowerBound + 1);
    }

    public static function randSign():Int
    {
        if (Math.random() > 0.5)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }

    public static inline function coinFlip(): Bool
    {
        return Math.random() > 0.5;
    }

    public static inline function mod(value:Float):Float
    {
        return value < 0 ? -value : value;
    }


    public static inline function randInt(max:Int):Int
    {
        return Math.floor(Math.random() * max);
    }

    public static function clamp(value : Float, min : Float, max : Float) : Float
    {
        if(value > max) {return max;}
        else if(value < min) {return min;}
        return value;
    }

}
