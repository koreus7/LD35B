package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.system.ThreadPool;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var threadPool:ThreadPool;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__font_04b_03___ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__font_zorus_serif_ttf);
		
		#end
		
		#if flash
		
		className.set ("graphics/debug/console_debug.png", __ASSET__graphics_debug_console_debug_png);
		type.set ("graphics/debug/console_debug.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_hidden.png", __ASSET__graphics_debug_console_hidden_png);
		type.set ("graphics/debug/console_hidden.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_logo.png", __ASSET__graphics_debug_console_logo_png);
		type.set ("graphics/debug/console_logo.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_output.png", __ASSET__graphics_debug_console_output_png);
		type.set ("graphics/debug/console_output.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_pause.png", __ASSET__graphics_debug_console_pause_png);
		type.set ("graphics/debug/console_pause.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_play.png", __ASSET__graphics_debug_console_play_png);
		type.set ("graphics/debug/console_play.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_step.png", __ASSET__graphics_debug_console_step_png);
		type.set ("graphics/debug/console_step.png", AssetType.IMAGE);
		className.set ("graphics/debug/console_visible.png", __ASSET__graphics_debug_console_visible_png);
		type.set ("graphics/debug/console_visible.png", AssetType.IMAGE);
		className.set ("graphics/preloader/haxepunk.png", __ASSET__graphics_preloader_haxepunk_png);
		type.set ("graphics/preloader/haxepunk.png", AssetType.IMAGE);
		className.set ("font/04B_03__.ttf", __ASSET__font_04b_03___ttf);
		type.set ("font/04B_03__.ttf", AssetType.FONT);
		className.set ("font/04B_03__.ttf.png", __ASSET__font_04b_03___ttf_png);
		type.set ("font/04B_03__.ttf.png", AssetType.IMAGE);
		className.set ("graphics/background.png", __ASSET__graphics_background_png);
		type.set ("graphics/background.png", AssetType.IMAGE);
		className.set ("graphics/bullet.png", __ASSET__graphics_bullet_png);
		type.set ("graphics/bullet.png", AssetType.IMAGE);
		className.set ("graphics/howToPlay.png", __ASSET__graphics_howtoplay_png);
		type.set ("graphics/howToPlay.png", AssetType.IMAGE);
		className.set ("graphics/lamp.png", __ASSET__graphics_lamp_png);
		type.set ("graphics/lamp.png", AssetType.IMAGE);
		className.set ("graphics/lampLight.png", __ASSET__graphics_lamplight_png);
		type.set ("graphics/lampLight.png", AssetType.IMAGE);
		className.set ("graphics/lightingMask.png", __ASSET__graphics_lightingmask_png);
		type.set ("graphics/lightingMask.png", AssetType.IMAGE);
		className.set ("graphics/menu.png", __ASSET__graphics_menu_png);
		type.set ("graphics/menu.png", AssetType.IMAGE);
		className.set ("graphics/mouse.png", __ASSET__graphics_mouse_png);
		type.set ("graphics/mouse.png", AssetType.IMAGE);
		className.set ("graphics/overlay.png", __ASSET__graphics_overlay_png);
		type.set ("graphics/overlay.png", AssetType.IMAGE);
		className.set ("graphics/paralax1.png", __ASSET__graphics_paralax1_png);
		type.set ("graphics/paralax1.png", AssetType.IMAGE);
		className.set ("graphics/paralax2.png", __ASSET__graphics_paralax2_png);
		type.set ("graphics/paralax2.png", AssetType.IMAGE);
		className.set ("graphics/road.png", __ASSET__graphics_road_png);
		type.set ("graphics/road.png", AssetType.IMAGE);
		className.set ("graphics/runner.png", __ASSET__graphics_runner_png);
		type.set ("graphics/runner.png", AssetType.IMAGE);
		className.set ("graphics/runneralt.png", __ASSET__graphics_runneralt_png);
		type.set ("graphics/runneralt.png", AssetType.IMAGE);
		className.set ("graphics/topGun.png", __ASSET__graphics_topgun_png);
		type.set ("graphics/topGun.png", AssetType.IMAGE);
		className.set ("graphics/walker.png", __ASSET__graphics_walker_png);
		type.set ("graphics/walker.png", AssetType.IMAGE);
		className.set ("audio/Exit Slow Mo.mp3", __ASSET__audio_exit_slow_mo_mp3);
		type.set ("audio/Exit Slow Mo.mp3", AssetType.MUSIC);
		className.set ("audio/ExitSlowMo.mp3", __ASSET__audio_exitslowmo_mp3);
		type.set ("audio/ExitSlowMo.mp3", AssetType.MUSIC);
		className.set ("audio/Gun Impact.mp3", __ASSET__audio_gun_impact_mp3);
		type.set ("audio/Gun Impact.mp3", AssetType.MUSIC);
		className.set ("audio/In Game FX V2.mp3", __ASSET__audio_in_game_fx_v2_mp3);
		type.set ("audio/In Game FX V2.mp3", AssetType.MUSIC);
		className.set ("audio/Jump .mp3", __ASSET__audio_jump__mp3);
		type.set ("audio/Jump .mp3", AssetType.MUSIC);
		className.set ("audio/Land.mp3", __ASSET__audio_land_mp3);
		type.set ("audio/Land.mp3", AssetType.MUSIC);
		className.set ("audio/Main Theme Master.mp3", __ASSET__audio_main_theme_master_mp3);
		type.set ("audio/Main Theme Master.mp3", AssetType.MUSIC);
		className.set ("audio/Main Theme V2 Master.mp3", __ASSET__audio_main_theme_v2_master_mp3);
		type.set ("audio/Main Theme V2 Master.mp3", AssetType.MUSIC);
		className.set ("audio/Menu Click.mp3", __ASSET__audio_menu_click_mp3);
		type.set ("audio/Menu Click.mp3", AssetType.MUSIC);
		className.set ("audio/Protaginist Walk.mp3", __ASSET__audio_protaginist_walk_mp3);
		type.set ("audio/Protaginist Walk.mp3", AssetType.MUSIC);
		className.set ("audio/Shapeshifter .mp3", __ASSET__audio_shapeshifter__mp3);
		type.set ("audio/Shapeshifter .mp3", AssetType.MUSIC);
		className.set ("audio/Slow Mo Cartridge.mp3", __ASSET__audio_slow_mo_cartridge_mp3);
		type.set ("audio/Slow Mo Cartridge.mp3", AssetType.MUSIC);
		className.set ("audio/Slow Mo Fx.mp3", __ASSET__audio_slow_mo_fx_mp3);
		type.set ("audio/Slow Mo Fx.mp3", AssetType.MUSIC);
		className.set ("audio/Slow Mo Gun Shot.mp3", __ASSET__audio_slow_mo_gun_shot_mp3);
		type.set ("audio/Slow Mo Gun Shot.mp3", AssetType.MUSIC);
		className.set ("audio/SlowMoFx.mp3", __ASSET__audio_slowmofx_mp3);
		type.set ("audio/SlowMoFx.mp3", AssetType.MUSIC);
		className.set ("audio/Teleport 1.mp3", __ASSET__audio_teleport_1_mp3);
		type.set ("audio/Teleport 1.mp3", AssetType.MUSIC);
		className.set ("audio/Teleport 2.mp3", __ASSET__audio_teleport_2_mp3);
		type.set ("audio/Teleport 2.mp3", AssetType.MUSIC);
		className.set ("font/Zorus_Serif.ttf", __ASSET__font_zorus_serif_ttf);
		type.set ("font/Zorus_Serif.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "graphics/debug/console_debug.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_hidden.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_logo.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_output.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_pause.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_play.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_step.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/debug/console_visible.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/preloader/haxepunk.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "font/04B_03__.ttf";
		className.set (id, __ASSET__font_04b_03___ttf);
		
		type.set (id, AssetType.FONT);
		id = "font/04B_03__.ttf.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/background.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/bullet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/howToPlay.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/lamp.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/lampLight.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/lightingMask.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/menu.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/mouse.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/overlay.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/paralax1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/paralax2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/road.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/runner.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/runneralt.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/topGun.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "graphics/walker.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "audio/Exit Slow Mo.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/ExitSlowMo.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Gun Impact.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/In Game FX V2.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Jump .mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Land.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Main Theme Master.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Main Theme V2 Master.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Menu Click.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Protaginist Walk.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Shapeshifter .mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Slow Mo Cartridge.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Slow Mo Fx.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Slow Mo Gun Shot.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/SlowMoFx.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Teleport 1.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "audio/Teleport 2.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "font/Zorus_Serif.ttf";
		className.set (id, __ASSET__font_zorus_serif_ttf);
		
		type.set (id, AssetType.FONT);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("graphics/debug/console_debug.png", __ASSET__graphics_debug_console_debug_png);
		type.set ("graphics/debug/console_debug.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_hidden.png", __ASSET__graphics_debug_console_hidden_png);
		type.set ("graphics/debug/console_hidden.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_logo.png", __ASSET__graphics_debug_console_logo_png);
		type.set ("graphics/debug/console_logo.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_output.png", __ASSET__graphics_debug_console_output_png);
		type.set ("graphics/debug/console_output.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_pause.png", __ASSET__graphics_debug_console_pause_png);
		type.set ("graphics/debug/console_pause.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_play.png", __ASSET__graphics_debug_console_play_png);
		type.set ("graphics/debug/console_play.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_step.png", __ASSET__graphics_debug_console_step_png);
		type.set ("graphics/debug/console_step.png", AssetType.IMAGE);
		
		className.set ("graphics/debug/console_visible.png", __ASSET__graphics_debug_console_visible_png);
		type.set ("graphics/debug/console_visible.png", AssetType.IMAGE);
		
		className.set ("graphics/preloader/haxepunk.png", __ASSET__graphics_preloader_haxepunk_png);
		type.set ("graphics/preloader/haxepunk.png", AssetType.IMAGE);
		
		className.set ("font/04B_03__.ttf", __ASSET__font_04b_03___ttf);
		type.set ("font/04B_03__.ttf", AssetType.FONT);
		
		className.set ("font/04B_03__.ttf.png", __ASSET__font_04b_03___ttf_png);
		type.set ("font/04B_03__.ttf.png", AssetType.IMAGE);
		
		className.set ("graphics/background.png", __ASSET__graphics_background_png);
		type.set ("graphics/background.png", AssetType.IMAGE);
		
		className.set ("graphics/bullet.png", __ASSET__graphics_bullet_png);
		type.set ("graphics/bullet.png", AssetType.IMAGE);
		
		className.set ("graphics/howToPlay.png", __ASSET__graphics_howtoplay_png);
		type.set ("graphics/howToPlay.png", AssetType.IMAGE);
		
		className.set ("graphics/lamp.png", __ASSET__graphics_lamp_png);
		type.set ("graphics/lamp.png", AssetType.IMAGE);
		
		className.set ("graphics/lampLight.png", __ASSET__graphics_lamplight_png);
		type.set ("graphics/lampLight.png", AssetType.IMAGE);
		
		className.set ("graphics/lightingMask.png", __ASSET__graphics_lightingmask_png);
		type.set ("graphics/lightingMask.png", AssetType.IMAGE);
		
		className.set ("graphics/menu.png", __ASSET__graphics_menu_png);
		type.set ("graphics/menu.png", AssetType.IMAGE);
		
		className.set ("graphics/mouse.png", __ASSET__graphics_mouse_png);
		type.set ("graphics/mouse.png", AssetType.IMAGE);
		
		className.set ("graphics/overlay.png", __ASSET__graphics_overlay_png);
		type.set ("graphics/overlay.png", AssetType.IMAGE);
		
		className.set ("graphics/paralax1.png", __ASSET__graphics_paralax1_png);
		type.set ("graphics/paralax1.png", AssetType.IMAGE);
		
		className.set ("graphics/paralax2.png", __ASSET__graphics_paralax2_png);
		type.set ("graphics/paralax2.png", AssetType.IMAGE);
		
		className.set ("graphics/road.png", __ASSET__graphics_road_png);
		type.set ("graphics/road.png", AssetType.IMAGE);
		
		className.set ("graphics/runner.png", __ASSET__graphics_runner_png);
		type.set ("graphics/runner.png", AssetType.IMAGE);
		
		className.set ("graphics/runneralt.png", __ASSET__graphics_runneralt_png);
		type.set ("graphics/runneralt.png", AssetType.IMAGE);
		
		className.set ("graphics/topGun.png", __ASSET__graphics_topgun_png);
		type.set ("graphics/topGun.png", AssetType.IMAGE);
		
		className.set ("graphics/walker.png", __ASSET__graphics_walker_png);
		type.set ("graphics/walker.png", AssetType.IMAGE);
		
		className.set ("audio/Exit Slow Mo.mp3", __ASSET__audio_exit_slow_mo_mp3);
		type.set ("audio/Exit Slow Mo.mp3", AssetType.MUSIC);
		
		className.set ("audio/ExitSlowMo.mp3", __ASSET__audio_exitslowmo_mp3);
		type.set ("audio/ExitSlowMo.mp3", AssetType.MUSIC);
		
		className.set ("audio/Gun Impact.mp3", __ASSET__audio_gun_impact_mp3);
		type.set ("audio/Gun Impact.mp3", AssetType.MUSIC);
		
		className.set ("audio/In Game FX V2.mp3", __ASSET__audio_in_game_fx_v2_mp3);
		type.set ("audio/In Game FX V2.mp3", AssetType.MUSIC);
		
		className.set ("audio/Jump .mp3", __ASSET__audio_jump__mp3);
		type.set ("audio/Jump .mp3", AssetType.MUSIC);
		
		className.set ("audio/Land.mp3", __ASSET__audio_land_mp3);
		type.set ("audio/Land.mp3", AssetType.MUSIC);
		
		className.set ("audio/Main Theme Master.mp3", __ASSET__audio_main_theme_master_mp3);
		type.set ("audio/Main Theme Master.mp3", AssetType.MUSIC);
		
		className.set ("audio/Main Theme V2 Master.mp3", __ASSET__audio_main_theme_v2_master_mp3);
		type.set ("audio/Main Theme V2 Master.mp3", AssetType.MUSIC);
		
		className.set ("audio/Menu Click.mp3", __ASSET__audio_menu_click_mp3);
		type.set ("audio/Menu Click.mp3", AssetType.MUSIC);
		
		className.set ("audio/Protaginist Walk.mp3", __ASSET__audio_protaginist_walk_mp3);
		type.set ("audio/Protaginist Walk.mp3", AssetType.MUSIC);
		
		className.set ("audio/Shapeshifter .mp3", __ASSET__audio_shapeshifter__mp3);
		type.set ("audio/Shapeshifter .mp3", AssetType.MUSIC);
		
		className.set ("audio/Slow Mo Cartridge.mp3", __ASSET__audio_slow_mo_cartridge_mp3);
		type.set ("audio/Slow Mo Cartridge.mp3", AssetType.MUSIC);
		
		className.set ("audio/Slow Mo Fx.mp3", __ASSET__audio_slow_mo_fx_mp3);
		type.set ("audio/Slow Mo Fx.mp3", AssetType.MUSIC);
		
		className.set ("audio/Slow Mo Gun Shot.mp3", __ASSET__audio_slow_mo_gun_shot_mp3);
		type.set ("audio/Slow Mo Gun Shot.mp3", AssetType.MUSIC);
		
		className.set ("audio/SlowMoFx.mp3", __ASSET__audio_slowmofx_mp3);
		type.set ("audio/SlowMoFx.mp3", AssetType.MUSIC);
		
		className.set ("audio/Teleport 1.mp3", __ASSET__audio_teleport_1_mp3);
		type.set ("audio/Teleport 1.mp3", AssetType.MUSIC);
		
		className.set ("audio/Teleport 2.mp3", __ASSET__audio_teleport_2_mp3);
		type.set ("audio/Teleport 2.mp3", AssetType.MUSIC);
		
		className.set ("font/Zorus_Serif.ttf", __ASSET__font_zorus_serif_ttf);
		type.set ("font/Zorus_Serif.ttf", AssetType.FONT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	private function createThreadPool ():Void {
		
		threadPool = new ThreadPool (0, 2);
		threadPool.doWork.add (function (id, data) {
			
			data.result = data.getMethod (id);
			threadPool.sendComplete (data.handler, data);
			
		});
		threadPool.onComplete.add (function (id, data) {
			
			data.handler (data.result);
			
		});
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getAudioBuffer (id));
			
		}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				handler (loader.data);
				
			});
			
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		if (threadPool == null) {
			
			createThreadPool ();
			
		}
		
		threadPool.queue (id, { handler: handler, getMethod: getBytes });
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				handler (Image.fromImageElement (image));
				
			}
			image.src = path.get (id);
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		if (threadPool == null) {
			
			createThreadPool ();
			
		}
		
		threadPool.queue (id, { handler: handler, getMethod: getImage });
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				handler (loader.data);
				
			});
			
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_debug_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_hidden_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_output_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_pause_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_step_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_debug_console_visible_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_preloader_haxepunk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__font_04b_03___ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__font_04b_03___ttf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_bullet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_howtoplay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_lamp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_lamplight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_lightingmask_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_mouse_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_overlay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_paralax1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_paralax2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_road_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_runner_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_runneralt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_topgun_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__graphics_walker_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__audio_exit_slow_mo_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_exitslowmo_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_gun_impact_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_in_game_fx_v2_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_jump__mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_land_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_main_theme_master_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_main_theme_v2_master_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_menu_click_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_protaginist_walk_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_shapeshifter__mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_slow_mo_cartridge_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_slow_mo_fx_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_slow_mo_gun_shot_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_slowmofx_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_teleport_1_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_teleport_2_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__font_zorus_serif_ttf extends flash.text.Font { }


#elseif html5










@:keep #if display private #end class __ASSET__font_04b_03___ttf extends lime.text.Font { public function new () { super (); name = "04b03"; } } 


































@:keep #if display private #end class __ASSET__font_zorus_serif_ttf extends lime.text.Font { public function new () { super (); name = "Zorus Serif"; } } 


#else



#if (windows || mac || linux || cpp)


@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_debug.png") #if display private #end class __ASSET__graphics_debug_console_debug_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_hidden.png") #if display private #end class __ASSET__graphics_debug_console_hidden_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_logo.png") #if display private #end class __ASSET__graphics_debug_console_logo_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_output.png") #if display private #end class __ASSET__graphics_debug_console_output_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_pause.png") #if display private #end class __ASSET__graphics_debug_console_pause_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_play.png") #if display private #end class __ASSET__graphics_debug_console_play_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_step.png") #if display private #end class __ASSET__graphics_debug_console_step_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/debug/console_visible.png") #if display private #end class __ASSET__graphics_debug_console_visible_png extends lime.graphics.Image {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/graphics/preloader/haxepunk.png") #if display private #end class __ASSET__graphics_preloader_haxepunk_png extends lime.graphics.Image {}
@:font("/usr/lib/haxelib/HaxePunk/2,5,6/assets/font/04B_03__.ttf") #if display private #end class __ASSET__font_04b_03___ttf extends lime.text.Font {}
@:image("/usr/lib/haxelib/HaxePunk/2,5,6/assets/font/04B_03__.ttf.png") #if display private #end class __ASSET__font_04b_03___ttf_png extends lime.graphics.Image {}
@:image("assets/graphics/background.png") #if display private #end class __ASSET__graphics_background_png extends lime.graphics.Image {}
@:image("assets/graphics/bullet.png") #if display private #end class __ASSET__graphics_bullet_png extends lime.graphics.Image {}
@:image("assets/graphics/howToPlay.png") #if display private #end class __ASSET__graphics_howtoplay_png extends lime.graphics.Image {}
@:image("assets/graphics/lamp.png") #if display private #end class __ASSET__graphics_lamp_png extends lime.graphics.Image {}
@:image("assets/graphics/lampLight.png") #if display private #end class __ASSET__graphics_lamplight_png extends lime.graphics.Image {}
@:image("assets/graphics/lightingMask.png") #if display private #end class __ASSET__graphics_lightingmask_png extends lime.graphics.Image {}
@:image("assets/graphics/menu.png") #if display private #end class __ASSET__graphics_menu_png extends lime.graphics.Image {}
@:image("assets/graphics/mouse.png") #if display private #end class __ASSET__graphics_mouse_png extends lime.graphics.Image {}
@:image("assets/graphics/overlay.png") #if display private #end class __ASSET__graphics_overlay_png extends lime.graphics.Image {}
@:image("assets/graphics/paralax1.png") #if display private #end class __ASSET__graphics_paralax1_png extends lime.graphics.Image {}
@:image("assets/graphics/paralax2.png") #if display private #end class __ASSET__graphics_paralax2_png extends lime.graphics.Image {}
@:image("assets/graphics/road.png") #if display private #end class __ASSET__graphics_road_png extends lime.graphics.Image {}
@:image("assets/graphics/runner.png") #if display private #end class __ASSET__graphics_runner_png extends lime.graphics.Image {}
@:image("assets/graphics/runneralt.png") #if display private #end class __ASSET__graphics_runneralt_png extends lime.graphics.Image {}
@:image("assets/graphics/topGun.png") #if display private #end class __ASSET__graphics_topgun_png extends lime.graphics.Image {}
@:image("assets/graphics/walker.png") #if display private #end class __ASSET__graphics_walker_png extends lime.graphics.Image {}
@:file("assets/audio/Exit Slow Mo.mp3") #if display private #end class __ASSET__audio_exit_slow_mo_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/ExitSlowMo.mp3") #if display private #end class __ASSET__audio_exitslowmo_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Gun Impact.mp3") #if display private #end class __ASSET__audio_gun_impact_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/In Game FX V2.mp3") #if display private #end class __ASSET__audio_in_game_fx_v2_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Jump .mp3") #if display private #end class __ASSET__audio_jump__mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Land.mp3") #if display private #end class __ASSET__audio_land_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Main Theme Master.mp3") #if display private #end class __ASSET__audio_main_theme_master_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Main Theme V2 Master.mp3") #if display private #end class __ASSET__audio_main_theme_v2_master_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Menu Click.mp3") #if display private #end class __ASSET__audio_menu_click_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Protaginist Walk.mp3") #if display private #end class __ASSET__audio_protaginist_walk_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Shapeshifter .mp3") #if display private #end class __ASSET__audio_shapeshifter__mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Slow Mo Cartridge.mp3") #if display private #end class __ASSET__audio_slow_mo_cartridge_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Slow Mo Fx.mp3") #if display private #end class __ASSET__audio_slow_mo_fx_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Slow Mo Gun Shot.mp3") #if display private #end class __ASSET__audio_slow_mo_gun_shot_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/SlowMoFx.mp3") #if display private #end class __ASSET__audio_slowmofx_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Teleport 1.mp3") #if display private #end class __ASSET__audio_teleport_1_mp3 extends lime.utils.ByteArray {}
@:file("assets/audio/Teleport 2.mp3") #if display private #end class __ASSET__audio_teleport_2_mp3 extends lime.utils.ByteArray {}
@:font("assets/font/Zorus_Serif.ttf") #if display private #end class __ASSET__font_zorus_serif_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__font_04b_03___ttf extends openfl.text.Font { public function new () { var font = new __ASSET__font_04b_03___ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__font_zorus_serif_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__font_zorus_serif_ttf (); src = font.src; name = font.name; super (); }}

#end

#end