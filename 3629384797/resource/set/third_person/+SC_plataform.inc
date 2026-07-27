
; ("SC_plataform_tank_Default" name() camera_bone0() camera_bone1() zoom() d_max(350) min(-12) max(41) zoom_level()
;	fx(0) fy(10) fz(27)
;	nx(5) ny(10) nz(10)
;	zx(55) zy(1) zz(3)
;)

(Define "zoom_tank_open_top"
	{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
	{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
	{soundEffect "opentop_vehicle"}
	{camera "zoom1.5"}
)

(Define "zoom_tank_default"
	{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
	{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
	{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
	{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
	{soundEffect "enclosed_vehicle"}
	{camera "zoom1.5"}
)

(define "zoom_level0"
)

(define "zoom_level3"
	{level ;2
		{camera "zoom3"}
	}
)
(define "zoom_level5"
	{level ;2
		{camera "zoom5"}
	}
)

(Define "SC_Plataform_Vehicle_Default_S1"
	{"sc.%name" 
		{clip
			{viewMin 		-%min}	; camera rotate upward limit (looking down)
			{viewMax		 %max}	; camera rotate downward limit (looking up)
			{distanceMin	002}	; camera min distance from object. value / 20 = meters
			{distanceMax	%d_max}	; camera max distance from object. value / 20 = meters
		}
		{level ;0
			{linkBone "%camera_bone0"}
			{faroffset %fx %fy %fz}
			{nearoffset %nx %ny %nz}
			{camera "zoom1"}
			;{hide_hitmarker 1}
			{blur_strength 2}
			{disable_fow 0}
			{no_grain}
		}
		{level ;1
			{zoom}
			{vision_modes_active}
			{linkBone "%camera_bone1"}
			{offset %zx %zy %zz}
			("zoom_%zoom")
			{distance 30}
			{distanceSet 0}
			{delta 0}
			{no_rim_light}
			{ManualAccuracyZoom}
			{blur_strength 5}
			{disable_fow 0}
			{with_owner
				{viewoff "%dsb_1"}
				{viewoff "%dsb_2"}
				{viewoff "%dsb_3"}
			}
		}
		("zoom_%zoom_level")
	}
)

; ================================================================================================================================
; // SC PLATAFORM - TP CONTROL SETTINGS
; ================================================================================================================================

(Define "SC_plataform_troopers_default"
	{clip
		{viewMin		%viewMin	}
		{viewMax		%viewMax	}
		{distanceMin	%distanceMin	}
		{distanceMax	%distanceMax	}
		{defaultLevel	0}
	}
	; each level derives parameters from previous one
	{level ;0
		{linkBone	"tp_camera_head"}
		{faroffset  %f_offsetx %f_offsety %f_offsetz }
		{nearoffset	%n_offsetx %n_offsety %n_offsetz }
		{delta		20}		; distance delta
		{camera "human_zoom0"}
		{hide_hitmarker 1}
		{blur_strength 1}
		
		;//{hide_crosshair 1}
		;//{forceGrass 1}
		
		{disable_fow}
		{no_grain}
		{no_rim_light}
		
		{with_owner
			; [...]
		}
		{with_weapon
			; [...]
		}
	}
	{level ;1
		{zoom}
		{linkBone	"tp_camera_head"}
		{offset		%z_offsetx %z_offsety %z_offsetz}
		{distance		%distanceMin}	; activation distance
		{delta		20}	; distance delta
		{distanceset 	0}
		{camera "human_zoom1.25"}			
		{blur_strength 5}
		{hide_hitmarker 1}
		
		;//{disable_fow 0}
		;//{forceGrass 1}
		
		{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
		{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
		
		{with_owner
			{viewoff 	"basis"}
		}
		{with_weapon
			; [...]
		}
	}
)
		
{"SC_plataform_prop_troopers_size1"	
	("SC_plataform_troopers_default"
		viewMin(-50)				
		viewMax(55)				
		distanceMin(40)
		distanceMax(110)		
		f_offsetx(0) f_offsety(11) f_offsetz(22)	
		n_offsetx(10) n_offsety(11) n_offsetz(12)			
		z_offsetx(3) z_offsety(8) z_offsetz(5)		
	)
}

{"SC_plataform_prop_troopers_size2"	
	("SC_plataform_troopers_default" 
		viewMin(-50)				
		viewMax(55)				
		distanceMin(80)
		distanceMax(140)				
		f_offsetx(0) f_offsety(18) f_offsetz(30)	
		n_offsetx(17) n_offsety(18) n_offsetz(19)			
		z_offsetx(5) z_offsety(12) z_offsetz(8)						
	)
}

{"SC_plataform_prop_troopers_size3"	
	("SC_plataform_troopers_default" 
		viewMin(-50)				
		viewMax(55)				
		distanceMin(75)
		distanceMax(150)				
		f_offsetx(0) f_offsety(20) f_offsetz(24)	
		n_offsetx(17) n_offsety(17) n_offsetz(16)			
		z_offsetx(5) z_offsety(12) z_offsetz(7)						
	)
}

{"SC_plataform_prop_troopers_size4"	
	("SC_plataform_troopers_default" 
		viewMin(-50)				
		viewMax(55)				
		distanceMin(100)
		distanceMax(200)				
		f_offsetx(0) f_offsety(28) f_offsetz(28)	
		n_offsetx(16) n_offsety(24) n_offsetz(15)			
		z_offsetx(8) z_offsety(20) z_offsetz(12)						
	)
}

{"SC_plataform_prop_troopers_size5"	
	("SC_plataform_troopers_default" 
		viewMin(-55)				
		viewMax(60)				
		distanceMin(150)
		distanceMax(250)				
		f_offsetx(0) f_offsety(32) f_offsetz(36)	
		n_offsetx(18) n_offsety(30) n_offsetz(16)			
		z_offsetx(9) z_offsety(24) z_offsetz(14)						
	)
}

{"SC_plataform_prop_troopers_size6"	
	("SC_plataform_troopers_default" 
		viewMin(-60)				
		viewMax(75)				
		distanceMin(175)
		distanceMax(400)				
		f_offsetx(0) f_offsety(40) f_offsetz(40)	
		n_offsetx(20) n_offsety(32) n_offsetz(20)			
		z_offsetx(10) z_offsety(27) z_offsetz(18)						
	)
}

(Include "SC_DLC_HALO_vehicle.inc")
(Include "SC_DLC_LV40k_vehicle.inc")