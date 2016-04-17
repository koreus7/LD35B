package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("graphics/debug/console_debug.png", "graphics/debug/console_debug.png");
			type.set ("graphics/debug/console_debug.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_hidden.png", "graphics/debug/console_hidden.png");
			type.set ("graphics/debug/console_hidden.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_logo.png", "graphics/debug/console_logo.png");
			type.set ("graphics/debug/console_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_output.png", "graphics/debug/console_output.png");
			type.set ("graphics/debug/console_output.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_pause.png", "graphics/debug/console_pause.png");
			type.set ("graphics/debug/console_pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_play.png", "graphics/debug/console_play.png");
			type.set ("graphics/debug/console_play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_step.png", "graphics/debug/console_step.png");
			type.set ("graphics/debug/console_step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_visible.png", "graphics/debug/console_visible.png");
			type.set ("graphics/debug/console_visible.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/preloader/haxepunk.png", "graphics/preloader/haxepunk.png");
			type.set ("graphics/preloader/haxepunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("font/04B_03__.ttf", "font/04B_03__.ttf");
			type.set ("font/04B_03__.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("font/04B_03__.ttf.png", "font/04B_03__.ttf.png");
			type.set ("font/04B_03__.ttf.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/background.png", "graphics/background.png");
			type.set ("graphics/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/paralax1.png", "graphics/paralax1.png");
			type.set ("graphics/paralax1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/paralax2.png", "graphics/paralax2.png");
			type.set ("graphics/paralax2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/road.png", "graphics/road.png");
			type.set ("graphics/road.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/runner.png", "graphics/runner.png");
			type.set ("graphics/runner.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/runneralt.png", "graphics/runneralt.png");
			type.set ("graphics/runneralt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/walker.png", "graphics/walker.png");
			type.set ("graphics/walker.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("audio/Noir Jazz - Click Button.wav", "audio/Noir Jazz - Click Button.wav");
			type.set ("audio/Noir Jazz - Click Button.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/Noir Jazz - Footsteps.wav", "audio/Noir Jazz - Footsteps.wav");
			type.set ("audio/Noir Jazz - Footsteps.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/Noir Jazz - In Game Music.wav", "audio/Noir Jazz - In Game Music.wav");
			type.set ("audio/Noir Jazz - In Game Music.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/Noir Jazz - Main Theme.wav", "audio/Noir Jazz - Main Theme.wav");
			type.set ("audio/Noir Jazz - Main Theme.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("shaders/lighting.frag", "shaders/lighting.frag");
			type.set ("shaders/lighting.frag", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
