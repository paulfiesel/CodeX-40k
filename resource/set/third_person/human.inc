; CX40K compatibility: preserve West-81's three-level human camera base.
; Code-X weapon presets modify level 2, while the later SC/LV runtime leaves the
; effective human default without that level and crashes during startup.

		;;; Woo boy
		;
		; FROM camera.reg:
		; {fov} //Field of View; this is what actually zooms (lower FOV = more zoom). Can use here without referencing zoom# with string: {camera "{fov #}"}
		; {znear/zfar} //Seem to do nothing whatsoever.
		;
		; {viewMin/viewMax} //Camera depression/elevation, applies to all zoom levels;
		; {distanceMin/distanceMax} //Distances camera can be from linkbone object?
		;
		; {offset z x y} //Literally moves the LENS of the camera forward/backwards - left/right - up/down in relation to distance?!, but does NOT change point of rotation!
		; {nearoffset} //and {faroffset} No idea!
		;
		; {camera ""} //selects camera presets from camera.reg
		; {hide_hitmarker} //Not sure what hitmarker is
		; {hide_crosshair} //Game-generated crosshair
		; {blur_strength} //May have to do with blur at edges of screen in scoped mode
		; {disable_fow} //Binary -- Disables the brightness/darkness "fog" showing view cones
		; {no_grain} //Probably removes grain ziler
		;
		; {zoom} //ID's this as an actual scoped zoom view as opposed to "externa" view
		; {vision_modes_active} //Does the same in different ways and probably activates application of lens effects and blurs and such
		; {scope_vignette} //Points to .dds image file of the scope view
		; {distance} //??? Actual Camera origin (rotation) distance from linkbone?!?!?
		; {distanceSet} //???
		; {ManualAccuracyZoom} //???
		; {no_rim_light} //not sure what rim lights are but this disables it
		; {soundEffect} //Sound filter?
		
		{"default"
			{clip
				{viewMin		-70	}
				{viewMax		70	}
				{distanceMin	1	}
				{distanceMax	200	}
				{defaultLevel	0	}
			}
			{level ;0
				{linkBone	"basis"	}
				{faroffset  0 12 15 }
				{nearoffset	0 12 10	}
				{delta		20		}		; distance delta
				{camera "human_zoom0"}
				{blur_strength 2}
				{hide_hitmarker 1}
				{forceGrass 0}
				{disable_fow}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{no_grain}
				{no_rim_light}
				{disable_fow 0}
			}
			{level ;1
				{linkBone	"head"	}
				{distanceset 		1}
				{distance			20}	; activation distance
				{delta		20		}		; distance delta
			    {nearspace_views 	"fps_arms"	}
			    {nearspace_weapon	1	}
				{camera				"human_zoom1"}
			    ;{offset		0 12 4.5}
				{offset		39 0.3 1.2	}
				{blur_strength 10}
				{hide_hitmarker 1}
				{forceGrass 0}
				{disable_fow 0}
			    {with_owner
				{viewoff 	"head"	}
				{viewoff 	"face"	}
				{boneon 	"fps_arms"	}
			    }
				{with_weapon
					{viewoff	"fx_light"}
				    {viewon 	"fps_arms"	}
				}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{no_grain}
				{no_rim_light}
			}
			{level ;2
				{zoom}
				;{vision_modes_active}
				{scope_vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{camera		"human_zoom1.5"}
				{vignette_recoil 2.75 1.1}		; speed, scale
				{vignette_fade_speed   5}		; factoring the speed at which the vignette fades in/out
				{drop_zoom_on_reload}
				{blur_strength 3}
				{mouse_speed_factor 0.6}
				;{with_owner
					{viewoff 	"head"	}
					;{boneon 	"fps_arms"	}
				;}
				{ManualAccuracyZoom}
                                {viewoff "skin"	}
			}
			
		}
		
		