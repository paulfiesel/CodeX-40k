
{"uav.fpv"
	{clip
		{viewMin		-120}	; camera rotate upward limit (looking down)
		{viewMax		120 }	; camera rotate downward limit (looking up)
		{distanceMin	-10}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 10}
		{nearoffset -30 0 -5}
		{camera "zoom0"}
		{hide_hitmarker 0}
		{blur_strength 20}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "foresight1"}
		{offset 10 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{scope_vignette "/texture/common/environment/lens_effects/FPV_drone_vison"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}		
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 50}
		{disable_fow 1}
		{no_rim_light}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}

{"uav.at4"
	{clip
		{viewMin		-120}	; camera rotate upward limit (looking down)
		{viewMax		120 }	; camera rotate downward limit (looking up)
		{distanceMin	-10}	; camera min distance from object. value / 20 = meters
		{distanceMax	50}	; camera max distance from object. value / 20 = meters
	}
	{level ;0
		{linkBone "basis"}
		{faroffset 0 0 10}
		{nearoffset -30 0 -5}
		{camera "zoom0"}
		{hide_hitmarker 0}
		{blur_strength 20}
		{disable_fow 0}
		{no_grain}
	}
	{level ;1
		{zoom}
		{vision_modes_active}
		{linkBone "foresight1"}
		{offset 10 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
		{scope_vignette "/texture/common/environment/lens_effects/DJI_drone_vison"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}		
		{distance 10}
		{distanceSet 0}
		{delta 0}
		{camera "zoom1"}
		{ManualAccuracyZoom}
		{blur_strength 50}
		{disable_fow 1}
		{no_rim_light}
	}
	{level ;2
		{camera "zoom2.5"}
	}
}
		{"fpv_ukr_bomb" inherit "vehicle uav.at4"}
		{"fpv_rpg" inherit "vehicle uav.fpv"}
		{"fpv_bomber" inherit "vehicle uav.at4"}
		{"fpv_at4" inherit "vehicle uav.fpv"}
	