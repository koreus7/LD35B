package ;
// Globals
class G {
    // Delta time.
    public static var delta : Float = 0.0;
    public static var timeSpeed : Float = 1.0;
    public static var ground : Float = 0.0;
    public static var lighingMult : Int =  0x151616;//0xe6e6e6;
    public static var world : BaseWorld;
    public static var runAway : Bool;
    public static var stageOver : Bool = false;
    public static var stageNumber : Int = 0;
    public static var transitionText : String = "Press Space";
    public static var killCount : Int = 0;
    public static var shifterCount : Int = 0;
}
