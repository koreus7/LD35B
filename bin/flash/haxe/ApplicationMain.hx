#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new com.haxepunk.Preloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("graphics/debug/console_debug.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_hidden.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_logo.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_output.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_pause.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_play.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_step.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/debug/console_visible.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/preloader/haxepunk.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("04b03");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("font/04B_03__.ttf.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/background.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/bullet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/howToPlay.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/lamp.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/lampLight.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/lightingMask.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/menu.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/mouse.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/overlay.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/paralax1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/paralax2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/road.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/runner.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/runneralt.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/topGun.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("graphics/walker.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("audio/Exit Slow Mo.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/ExitSlowMo.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Gun Impact.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/In Game FX V2.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Jump .mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Land.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Main Theme Master.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Main Theme V2 Master.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Menu Click.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Protaginist Walk.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Shapeshifter .mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Slow Mo Cartridge.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Slow Mo Fx.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Slow Mo Gun Shot.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/SlowMoFx.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Teleport 1.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("audio/Teleport 2.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("Zorus Serif");
		types.push (lime.Assets.AssetType.FONT);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "1123",
			company: "",
			file: "Main",
			fps: 60,
			name: "HaxePunk_Project",
			orientation: "",
			packageName: "com.example.app",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 3355443,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 450,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "HaxePunk_Project",
					vsync: false,
					width: 750,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 750, 450, "333333");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
