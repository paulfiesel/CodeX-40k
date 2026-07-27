{"default"
	{clip
		{viewMin		-50	}	; camera rotate upward limit (looking down)
		{viewMax		55	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	100	}	; camera max distance from object. value / 20 = meters
	}
	; each level derives parameters from previous one
	{level ;0
		{linkBone "head"}
		{faroffset 0 11 22}
		{nearoffset	10 11 12}
		{delta 30}			; distance delta, effects number of steps in between near and far
		{camera "human_zoom0"}
		{ManualAccuracyZoom}
		{blur_strength 2}
		;{hide_hitmarker 1}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
	}
	{level ;1
		{zoom}
		{linkBone "head"}
		{distanceset 0}
		{distance 40}		; activation distance
		{delta 30 }			; distance delta, effects number of steps in between near and far
		{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		{camera "human_zoom1.5"}
		{offset 3 8 4.75}
		{blur_strength 10}
		
		; /// SC PLATAFORM

		{with_owner
			{viewoff 	"orkboy_weapon_loota_dakka"}
			{viewoff 	"orkboy_weapon_loota_beamy"}
			{viewoff 	"ork_rig-foresight_deffgun_dakka_mz1"}
			{viewoff 	"ork_rig-foresight_deffgun_dakka_mz2"}
		}
	}
;// {level ;2
	;// {with_owner
		;// {viewoff 	"skin head"	}
		;// {boneon 	"fps_arms"	}
	;// }
	;// {zoom}
	;// {vision_modes_active	}
	;// {vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
	;// {camera		"human_zoom1.5"}
	;// {vignette_recoil 2.75 1.1}		; speed, scale
	;// {vignette_fade_speed   5}		; factoring the speed at which the vignette fades in/out
	;// {drop_zoom_on_reload}
	;// {blur_strength 3}
	;// {mouse_speed_factor 0.6}
	;// {ManualAccuracyZoom}
	
	;// {scope_vignette "/texture/common/environment/ironsights/zoom_vignette_infantry_enfield"}
	;// {blur_mask "/texture/common/environment/ironsights/zoom_vignette_infantry_01_mask"}
	;// {bump_spec_mask "/texture/common/environment/ironsights/zoom_vignette_infantry_enfield"}
	
	;// {vignette_gloss 10}
	;// {offset		2.5 2.25 0.75	}
	;// {hide_weapon 1}
	;// {with_owner
	;// {viewoff 	"fps_arms"	}
	;// }
	;// {with_weapon
		;// {viewon		"foresight3"}
	;// }
	;// {hide_crosshair}
	;// {weapon_sway_active}
	;// {drop_zoom_after_shot}
;// }
}