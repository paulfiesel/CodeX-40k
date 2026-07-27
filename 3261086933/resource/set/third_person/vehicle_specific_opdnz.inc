			{"vehicle.novator"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset 0 0 50}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{offset -15 10 44}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;2
				{camera "zoom5"}
			}
			}


{"tank.m1a1" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangal"}
			    }					
			}
			{level ;2
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}

}

{"tank.m2a2" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor3"}
				{offset 5 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangal"}
			    }					
			}
			{level ;2
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}

}

{"tank.kraz" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangal"}
			    }					
			}
}

{"tank.tt" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangal"}
			    }					
			}
			{level ;2
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}

}

{"tank.m1a1sa" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "Visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}

}

		{"tank.t72b3"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangale"}
			    }				
			}
			{level ;2
				{camera "zoom3"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom6"}
				{offset 2 0 2}
			}
		}

		{"tank.t80bvm"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
				{with_owner
				     {viewoff "mangale"}
			    }					
			}
			{level ;2
				{camera "zoom3"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom8"}
				{offset 2 0 2}
			}
		}

		{"aircraft.ka52"
			{clip
				{viewMin		-65}	; camera rotate upward limit (looking down)
				{viewMax		45	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		-45	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	300	}	; camera min distance from object. value / 20 = meters
				{distanceMax	800	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}		; camera position offect at distanceMax
				{nearoffset 0 0 70}		; camera position offect at distanceMin
				{hide_crosshair 0}		; hides curser / crosshair
				{hide_hitmarker 0}		; hides hit indicators
				{blur_strength 2}		; blur strength modifier
				{disable_fow 0}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "basis"}
				{offset 100 10 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_base"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_bp"}
				;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
				{offset 100 10 2}
			}
			{level ;2
				{camera "zoom9"}
				{offset 100 10 2}
			}
		}
		{"tank.aavp1"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -45 -15 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 1}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor4"}
				{offset 0 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_usa_m69g"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
				{offset 0 0 0}
			}
			{level ;2
				{camera "zoom5"}
				{offset 0 0 0}
			}
		}		

		{"tank.t84"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "Visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom3"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom8"}
				{offset 2 0 2}
			}
		}
		
	

		{"tank.ugv"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "Visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_base"} ;//tsh2b-41
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom3"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom8"}
				{offset 2 0 2}
			}
		}

		{"aircraft.fpv"
			{clip
				{viewMin		-65}	; camera rotate upward limit (looking down)
				{viewMax		45	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		-45	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	20	}	; camera min distance from object. value / 20 = meters
				{distanceMax	20	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 0}		; camera position offect at distanceMax
				{nearoffset 15 0 6}		; camera position offect at distanceMin
				{hide_crosshair 0}		; hides curser / crosshair
				{hide_hitmarker 0}		; hides hit indicators
				{blur_strength 2}		; blur strength modifier
				{disable_fow 0}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "foresight1"}
				{offset 100 10 2}
				{scope_vignette "/texture/common/environment/lens_effects/FPV_drone_vison"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_helicopter_bp"}
				;{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
				{offset 100 10 2}
			}
			{level ;2
				{camera "zoom9"}
				{offset 100 10 2}
			}
		}


;=================== Cars ===================
	
	{"novator_stugna_p" inherit "vehicle vehicle.novator"}
	{"2s6_ukr" inherit "vehicle tank.m1a1"} 
	{"2s6" inherit "vehicle tank.m1a1"} 
	{"amx10rc" inherit "vehicle tank.m1a1"} 
	{"m1a1" inherit "vehicle tank.m1a1"} 
	{"m1a1_n" inherit "vehicle tank.m1a1"} 
	{"m1a1_sa" inherit "vehicle tank.m1a1sa"} 

	{"centauro_105_n" inherit "vehicle tank.m1a1"} 
	{"centauro_rgo" inherit "vehicle tank.m1a1"} 	
	{"leopord_2a6_ma3" inherit "vehicle tank.m1a1"} 
	{"m10_booker" inherit "vehicle tank.m1a1"} 	
	{"leopord_2a6_era" inherit "vehicle tank.m1a1"} 
	
	{"aaleo_ukr" inherit "vehicle tank.m1a1sa"} 
	
	{"bmpt_72" inherit "vehicle tank.m1a1"} 
	{"aaleo_n" inherit "vehicle tank.m1a1sa"} 	
	{"typhoon_vdv" inherit "vehicle tank.m1a1"} 
	{"btr-82at" inherit "vehicle tank.m1a1"} 
	{"btr3e" inherit "vehicle tank.m1a1"} 
	{"btr4e" inherit "vehicle tank.m1a1"} 	
	{"btr-82a" inherit "vehicle tank.m1a1"} 	
	{"bmp-1am" inherit "vehicle tank.m1a1"} 	
	{"bmp3_rus" inherit "vehicle tank.m1a1"} 
	{"t72b3_2024_mod2" inherit "vehicle tank.m1a1"} 
	{"t-72b3a" inherit "vehicle tank.m1a1"} 	
		{"t72b3_2024_mod1" inherit "vehicle tank.m1a1"} 
	{"bmp3_ukr" inherit "vehicle tank.m1a1"} 
	{"kraz_fiona_bm3m" inherit "vehicle tank.kraz"} 
	{"bmp-3_armor" inherit "vehicle tank.m1a1"} 
	{"t64bv2017" inherit "vehicle tank.m1a1"}
	{"t64bv2022" inherit "vehicle tank.m1a1"}
	{"t64bv2024" inherit "vehicle tank.m1a1"}	
	{"bmd4" inherit "vehicle tank.m1a1"} 
	{"bmd_4m" inherit "vehicle tank.m1a1"} 	
	{"warrior" inherit "vehicle tank.m1a1"} 
	{"t72amt_mod2022" inherit "vehicle tank.m1a1"}
	{"t72amt_mod2017" inherit "vehicle tank.m1a1"}
	{"t72b3" inherit "vehicle tank.m1a1"} 
	{"t90a_rus" inherit "vehicle tank.m1a1"} 
	{"t90a_ukr" inherit "vehicle tank.m1a1"} 	
	{"t80bvm1" inherit "vehicle tank.m1a1"} 
	{"t-80ue-1" inherit "vehicle tank.m1a1"} 	
	{"t80bvm_k1" inherit "vehicle tank.m1a1"} 	
	{"t80bvm_2024_mod1" inherit "vehicle tank.m1a1"} 
	{"t84_oplot_m" inherit "vehicle tank.m1a1"} 
	{"t80bvm_2024_mod3" inherit "vehicle tank.m1a1"} 
	{"bmp_2m" inherit "vehicle tank.m1a1"} 
	{"t80umd1" inherit "vehicle tank.m1a1"} 
	{"t72b3_ubh" inherit "vehicle tank.m1a1"} 
	{"t72a" inherit "vehicle tank.m1a1"} 
	{"t80bvm" inherit "vehicle tank.m1a1"} 
	{"t80bv_2023" inherit "vehicle tank.m1a1"} 
	{"t80uk" inherit "vehicle tank.m1a1"} 	
	{"t90m_ha" inherit "vehicle tank.m1a1"} 
	{"t90m" inherit "vehicle tank.m1a1"} 
	{"ka52" inherit "vehicle aircraft.ka52"} 
	{"ka52k" inherit "vehicle aircraft.ka52"} 
	{"ka52_nar" inherit "vehicle aircraft.ka52"} 
	{"ah1z" inherit "vehicle aircraft.ka52"} 
	{"mi-24p_2" inherit "vehicle aircraft.ka52"} 
	{"mi-24p_3" inherit "vehicle aircraft.ka52"} 	
	{"uh1y" inherit "vehicle aircraft.ka52"} 
	{"mi28ub" inherit "vehicle aircraft.ka52"} 	
	{"uh1y1" inherit "vehicle aircraft.ka52"} 	
	{"drone_fpv" inherit "vehicle aircraft.fpv"}		
	{"mi17_b8_rus" inherit "vehicle aircraft.ka52"} 
	{"tiger_hap_support" inherit "vehicle aircraft.ka52"} 	
	{"mi-24v" inherit "vehicle aircraft.ka52"} 
	{"mi-24v2" inherit "vehicle aircraft.ka52"} 	
	{"sa342m1" inherit "vehicle aircraft.ka52"} 	
	{"mi17_b8_ukr" inherit "vehicle aircraft.ka52"} 
	{"z-10_rkt" inherit "vehicle aircraft.ka52"} 
	{"z-10_support" inherit "vehicle aircraft.ka52"} 	
	{"t72a_mod2025" inherit "vehicle tank.m1a1"}
	{"t72a_mod2025_cope" inherit "vehicle tank.m1a1"}

	{"t84_120_yatagan" inherit "vehicle tank.m1a1"} 

	{"aavp7" inherit "vehicle tank.aavp1"} 	
	{"lav-atws" inherit "vehicle tank.m1a1"} 
	{"lav25" inherit "vehicle tank.m1a1"} 
	{"vilkas" inherit "vehicle tank.m1a1"} 
	{"derivatsiya-2s38" inherit "vehicle tank.m1a1"} 

	{"boxer_mgs" inherit "vehicle tank.m1a1"} 
	{"kwm_ampv" inherit "vehicle tank.m1a1"} 
	{"cv_9030" inherit "vehicle tank.m1a1"} 
	{"cv_9035" inherit "vehicle tank.m1a1"} 	
		{"kipri1" inherit "vehicle tank.m1a1"} 
	{"m2a2_ods_bradley" inherit "vehicle tank.m2a2"} 		
	{"m2a2_ods_bradley_arat" inherit "vehicle tank.m2a2"} 	
	{"m2a2_ods_bradley_arat_rus" inherit "vehicle tank.m2a2"}	
	{"m2a3" inherit "vehicle tank.m1a1"} 
	{"m2a3_brat" inherit "vehicle tank.m1a1"} 	 	
    {"marder_1a3_n" inherit "vehicle tank.m1a1"}  
	{"puma" inherit "vehicle tank.m1a1"} 
	{"puma_vjtf" inherit "vehicle tank.m1a1"} 
	{"leclerc" inherit "vehicle tank.m1a1"} 	
	{"leclerc_sxxi" inherit "vehicle tank.m1a1"} 
	{"leclerc_azur" inherit "vehicle tank.m1a1"} 
	{"challenger2_n" inherit "vehicle tank.m1a1"} 
	{"challenger2_tes" inherit "vehicle tank.m1a1"} 
	{"m1a2-abrams" inherit "vehicle tank.m1a1"} 
	{"m1a2_sepv1" inherit "vehicle tank.m1a1"} 
	{"m1a2_sepv2" inherit "vehicle tank.m1a1"} 	
	{"m1a2_sep_armor" inherit "vehicle tank.m1a1"} 
	{"leopard_1a5_n" inherit "vehicle tank.m1a1"} 
	{"leopard_1a5_ukr" inherit "vehicle tank.m1a1"} 	
	{"leopard_c2_mexas" inherit "vehicle tank.m1a1"} 
	{"leopord_2a4_ger" inherit "vehicle tank.m1a1"} 
	{"leopord_2a4" inherit "vehicle tank.m1a1"} 	
	{"c1_ariete_pso" inherit "vehicle tank.m1a1"} 
	{"otomatic" inherit "vehicle tank.m1a1"} 
	{"leopard_2_pl" inherit "vehicle tank.m1a1"} 
	{"leopord_2a4m" inherit "vehicle tank.m1a1"} 
	{"leopard-2a5" inherit "vehicle tank.m1a1"} 
	{"leopord_2a6_n" inherit "vehicle tank.m1a1"} 	
	{"leopard_2a7+" inherit "vehicle tank.m1a1"} 		
	{"m1128" inherit "vehicle tank.m1a1"} 	
	{"leopard_1a5_kontakt-1_era" inherit "vehicle tank.m1a1"} 
	{"k2_batch_i" inherit "vehicle tank.m1a1"} 
	{"k2_batch_i_era" inherit "vehicle tank.m1a1"} 	
	{"strv_122_n" inherit "vehicle tank.m1a1"} 	
	{"strv_122" inherit "vehicle tank.m1a1"} 
	{"strv_122_era" inherit "vehicle tank.m1a1"} 	
	{"strf9040c" inherit "vehicle tank.m1a1"} 	
		{"strf9040c_n" inherit "vehicle tank.m1a1"} 	
				{"t80bvm2" inherit "vehicle tank.m1a1"} 	
				{"t_64_bv-turtletank" inherit "vehicle tank.tt"} 	
				{"t_64_bv-turtletank_ukr" inherit "vehicle tank.tt"} 
		{"zbd04_a" inherit "vehicle tank.m1a1"} 					
		{"ztz99a" inherit "vehicle tank.m1a1"} 	
		{"ztz96_a" inherit "vehicle tank.m1a1"} 	
		{"ztz96ap" inherit "vehicle tank.m1a1"} 
		{"ztz96_a_gy" inherit "vehicle tank.m1a1"} 			
		{"wz1001" inherit "vehicle tank.m1a1"} 	
		{"aft-10" inherit "vehicle tank.m1a1"} 			
		{"zbl08" inherit "vehicle tank.m1a1"} 	
		{"zbl08_atgm" inherit "vehicle tank.m1a1"} 		
		{"zbd04_a_gy" inherit "vehicle tank.m1a1"} 	