
; // Revisit / GOH has no 1p mode except for snipers...

; // GOH Default 3p 

(define "scopeview"
	{thirdpersonparams inherit "human default"
		{level 1
			{distanceset 		0		}
			{distance			35		}	; activation distance
			{delta 				20		}
			{linkBone			"head"	}

			{zoom}
			{vision_modes_active}
			{vignette_recoil 2.75 1.1}		; speed, scale
			{vignette_fade_speed 5}			; factoring the speed at which the vignette fades in/out
			{drop_zoom_on_reload}
			{blur_strength 10}
			{mouse_speed_factor 0.6}
			{ManualAccuracyZoom}

			{camera "human_zoom4"}	; magnification x4
			{scope_vignette "/texture/common/environment/lens_effects/%scope"}
			{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_scope_01_mask"}
			{bump_spec_mask "/texture/common/environment/lens_effects/%scope"}
			{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_scope_01_bp"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset 35 2.25 0.75}
			{hide_weapon 1}
			{with_owner
				{viewoff "skin"}
			}
			{with_weapon
				{viewon "foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{aimer_type "sniper"}
		}
	}
)

; ================================================================================================================== ; 

(define "zoom_srs99"
	{thirdpersonparams inherit "human default"
		{level 0
			{aimer_type "weapon_bullet"}
		}
		{level 1
			{aimer_type "weapon_bullet"}
		}
		{level 2
			{zoom}
			{camera "human_zoom10"}
			{scope_vignette "/texture/common/environment/lens_effects/zoom_srs99"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 8}
			;{enable_special} ; enable aimed shot
			{aimer_type "sniper"}
			{drop_zoom_after_shot}
		}
	}
)


(define "zoom_srs99-spv3"
	{thirdpersonparams inherit "human default"
		{level 0
			{aimer_type "weapon_bullet"}
		}
		{level 1
			{aimer_type "weapon_bullet"}
		}
		{level 2
			{zoom}
			{camera "human_zoom10"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_sniperrifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 8}
			;{enable_special} ; enable aimed shot
			{aimer_type "sniper"}
			;{drop_zoom_after_shot}
		}
	}
)

(define "zoom_ar-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom2"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_assaultrifle"}

			{vignette_gloss 20}
			{offset		3.0 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
		}
	}
)

(define "zoom_smg"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom2"}
			{scope_vignette "/texture/common/environment/lens_effects/nv4"}

			{vignette_gloss 20}
			{offset		3.0 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
		}
	}
)

(define "zoom_smg_s"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom2"}
			{scope_vignette "/texture/common/environment/lens_effects/blue_holo"}

			{vignette_gloss 20}
			{offset		3.0 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
		}
	}
)


(define "zoom_smg_s-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom2"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_smg"}

			{vignette_gloss 20}
			{offset		3.0 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
		}
	}
)

(define "zoom_dmr_amp"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/m394_scope"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_dmr"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/dmr_scope"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_dmr-spv3_5x"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom10"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_dmr-5x"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_dmr-spv3_3x"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_dmr-3x"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_br55"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/br_scope"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_br55-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_battlerifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_br55_s-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_battlerifle_secom"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_magnum"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/scope_m6"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)

(define "zoom_magnum-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_magnum"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_spnkr"
	{thirdpersonparams inherit "human default"
		{level 1
			{hide_crosshair 1}
		}
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/m41_scope"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair 1}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
	{toplayerVignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_mg_heavy_crosshair"} 
)
(define "zoom_spnkr-spv3"
	{thirdpersonparams inherit "human default"
		{level 1
			{hide_crosshair 1}
		}
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_bazooka"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair 1}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
	{toplayerVignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_mg_heavy_crosshair"} 
)
(define "zoom_needlerifle"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/needlerifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_focusrifle"
	{thirdpersonparams inherit "human default"
		{level 0
			{aimer_type "weapon_bullet"}
		}
		{level 1
			{aimer_type "weapon_bullet"}
		}
		{level 2
			{zoom}
			{camera "human_zoom8"}
			{scope_vignette "/texture/common/environment/lens_effects/focusrifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 25}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 8}
			;{enable_special} ; enable aimed shot
			{aimer_type "sniper"}
			{drop_zoom_after_shot}
		}
	}
)

(define "zoom_needlerifle-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_needlerifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_carabine-spv3"
	{thirdpersonparams inherit "human default"
		{level 2
			{camera "human_zoom4"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_carabine"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 10}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 4}
		}
	}
)
(define "zoom_focusrifle-spv3"
	{thirdpersonparams inherit "human default"
		{level 0
			{aimer_type "weapon_bullet"}
		}
		{level 1
			{aimer_type "weapon_bullet"}
		}
		{level 2
			{zoom}
			{camera "human_zoom8"}
			{scope_vignette "/texture/common/environment/lens_effects/spv3_focusrifle"}
			{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
			{vignette_gloss 25}
			{offset		2.5 2.25 0.75	}
			{hide_weapon 1}
			{with_owner
				{viewoff 	"fps_arms"	}
			}
			{with_weapon
				{viewon		"foresight3"}
			}
			{hide_crosshair}
			{weapon_sway_active}
			{blur_strength 8}
			;{enable_special} ; enable aimed shot
			{aimer_type "sniper"}
		;	{drop_zoom_after_shot}
		}
	}
)