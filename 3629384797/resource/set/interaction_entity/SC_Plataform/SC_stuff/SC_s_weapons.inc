
;	<<<<---------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Stuff Weapons Scripts ===============] >>
;	<<<<---------------------------------------------------------------------------------------->>>>			 

; ============================================================================================================================================ ;
; // Weapon Definitions
; ============================================================================================================================================ ;

(define "SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	{"stuff weapon SC_weapon SC_fire_loop %tag"
		{on spawn		{Call "sc_stuff_call_add_loop_fire_sound_right_hand"}}
		{on "fire"		{call "sc_stuff_call_fire_Play_loop_sound_right_hand"}}
		
		("SC_Misc_Define_Add_Weapon_Loop_Sound"
			gun_name(right_hand)
			tag(%tag)
			snd(%snd)
			stop_delay(%stop_delay)
		)
	}
)

; --------------------------------------------------------------------------------------------------- ;

(define "SC_Stuff_Define_Weapon_Interaction"
	{"stuff weapon SC_weapon %tag"
		{on spawn
			{link_sound	"holster"	"%holster_sound"}
		;	{link_sound "mid"		"weapon/shot/%snd/d3"}
		;	{link_sound "far"		"weapon/shot/%snd/d4"}
		
			{Call "sc_stuff_call_add_weapon_fx_%tag"}
		}
		{on "fire"	{call "sc_stuff_call_fire_weapon_fx_%tag"}}
		
		("SC_Misc_Define_Add_Weapon_Muzzle" 
			gun_name(%tag)
			d1(%stop_delay)	fx1(%flash_fx)	b1(foresight%foresight)
			d2(%stop_delay)	fx2(%shell_fx)	b2(fxshell)
		)
	}
)

; ============================================================================================================================================ ;
; // SC Weapons General Configurations
; ============================================================================================================================================ ;

{"stuff weapon SC_weapon" 
	{On spawn
		{Delay 0.1 {view start "sc_fx_all_time"}}
	}
	{on "link_human"
		{view start	"sc_fx_link_human"}
	}
	{on "unlink_human"
		{view pause	"sc_fx_link_human"}
	}
	{on "fire" 
		{call "case_eject"}
		{if prop "SC_pump_shotgun"
			{start_sound "weapon/shot/SC_PLATAFORM_SHARED/smallarms/c_shotgun_v2/d1/pump" use_position}
		}
	}
}

{"stuff weapon SC_weapon SC_laser_small" 
	{On spawn
		{add_view "fx_ls_red_small" "sc_fx_link_human" "fx_laser"}
	}
}

{"stuff weapon SC_weapon SC_rev_animation" 
	{on "fire" 
		("SC_Misc_Define_Gun_Rev_Animation" args weapon)
	}
}
; ============================================================================================================================================ ;
; // SC Object Spawner Weapon Define
; ============================================================================================================================================ ;

; // Rework with new defines in SC_misc...

(define "SC_Stuff_Define_Weapon_Flamer"
	{"stuff weapon SC_weapon %tag"
		{on spawn
			{add_view "fx_flamer_barrel_drops"	"fire"	"foresight%foresight"} 
			{add_view "flamer_fire_barrel"		"fire"	"fx_flame"} 
		}
		{on "link_human"
			{view show	"fire"}
			{view start	"fire"}
		}
		{on "unlink_human"
			{view pause	"fire"}
		}
		{on "fire" 
			{if prop "SC_Heavy_Flamer"
				("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight%foresight) distance_m(%range) gravity(1.0) spread(0.5)) 
				("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight%foresight) distance_m(%range) gravity(1.0) spread(3.0)) 
			else
				("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer) where(foresight%foresight) distance_m(%range) gravity(1.0) spread(2.5)) 
			}
		}
	}
)

("SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	tag(SC_Heavy_Flamer)
	snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1)  
	stop_delay(0.2)
)
("SC_Stuff_Define_Weapon_Loop_Fire_Sound"
	tag(SC_flamer_generic)
	snd(SC_DLC_LV40k/smallarms/lp_flamer_v1)  
	stop_delay(0.2)
)
("SC_Stuff_Define_Weapon_Interaction" 
	tag(SC_flamer_generic)
	shell_fx()
	flash_fx(flamer_fire)
	foresight(3)
	stop_delay(0.2)
)
("SC_Stuff_Define_Weapon_Flamer" 
	tag(SC_flamer_generic)		
	range(30)
	foresight(3)
)

; ============================================================================================================================================ ;
; // SC Weapon Details
; ============================================================================================================================================ ;

; Bone name: Detail0_0
; Prop name: Details0_x3

(Define "SC_S_Weapons_Define_Details_x1"
	{"details%0_x1"
		{on spawn
			{bone hide "detail%0_0"}
			
			{if rand 0.5	{bone show "detail%0_0"}
			}
		}
	}
)

(Define "SC_S_Weapons_Define_Details_x2"
	{"details%0_x2"
		{on spawn
			{bone hide "detail%0_0"}
			{bone hide "detail%0_1"}
			
			{if rand 0.5	{bone show "detail%0_0"}
			else			{bone show "detail%0_1"}
			}
		}
	}
)

(Define "SC_S_Weapons_Define_Details_x3"
	{"details%0_x3"
		{on spawn
			{bone hide "detail%0_0"}
			{bone hide "detail%0_1"}
			{bone hide "detail%0_2"}
			
			{if rand 0.33		{bone show "detail%0_0"}
			else rand 0.33		{bone show "detail%0_1"}
			else				{bone show "detail%0_2"}
			}
		}
	}
)

(Define "SC_S_Weapons_Define_Details_x4"
	{"details%0_x4"
		{on spawn
			{bone hide "detail%0_0"}
			{bone hide "detail%0_1"}
			{bone hide "detail%0_2"}
			{bone hide "detail%0_3"}
			
			{if rand 0.25		{bone show "detail%0_0"}
			else rand 0.25		{bone show "detail%0_1"}
			else rand 0.25		{bone show "detail%0_2"}
			else				{bone show "detail%0_3"}
			}
		}
	}
)

(Define "SC_S_Weapons_Define_Details_x5"
	{"details%0_x5"
		{on spawn
			{bone hide "detail%0_0"}
			{bone hide "detail%0_1"}
			{bone hide "detail%0_2"}
			{bone hide "detail%0_3"}
			{bone hide "detail%0_4"}
			
			{if rand 0.2			{bone show "detail%0_0"}
			else rand 0.2			{bone show "detail%0_1"}
			else rand 0.2			{bone show "detail%0_2"}
			else rand 0.2			{bone show "detail%0_3"}
			else 					{bone show "detail%0_4"}
			}
		}
	}
)

(Define "SC_S_Weapons_Define_Details_x6"

	{"details%0_x6"
		{on spawn
			{bone hide "detail%0_0"}
			{bone hide "detail%0_1"}
			{bone hide "detail%0_2"}
			{bone hide "detail%0_3"}
			{bone hide "detail%0_4"}
			{bone hide "detail%0_5"}
			
			{if rand 0.15			{bone show "detail%0_0"}
			else rand 0.15			{bone show "detail%0_1"}
			else rand 0.15			{bone show "detail%0_2"}
			else rand 0.15			{bone show "detail%0_3"}
			else rand 0.15			{bone show "detail%0_4"}
			else 					{bone show "detail%0_5"}
			}
		}
	}
)

("SC_S_Weapons_Define_Details_x1" args 0)
("SC_S_Weapons_Define_Details_x1" args 1)
("SC_S_Weapons_Define_Details_x1" args 2)
("SC_S_Weapons_Define_Details_x1" args 3)
("SC_S_Weapons_Define_Details_x1" args 4)

("SC_S_Weapons_Define_Details_x2" args 0)
("SC_S_Weapons_Define_Details_x2" args 1)
("SC_S_Weapons_Define_Details_x2" args 2)
("SC_S_Weapons_Define_Details_x2" args 3)
("SC_S_Weapons_Define_Details_x2" args 4)

("SC_S_Weapons_Define_Details_x3" args 0)
("SC_S_Weapons_Define_Details_x3" args 1)
("SC_S_Weapons_Define_Details_x3" args 2)
("SC_S_Weapons_Define_Details_x3" args 3)
("SC_S_Weapons_Define_Details_x3" args 4)

("SC_S_Weapons_Define_Details_x4" args 0)
("SC_S_Weapons_Define_Details_x4" args 1)
("SC_S_Weapons_Define_Details_x4" args 2)
("SC_S_Weapons_Define_Details_x4" args 3)
("SC_S_Weapons_Define_Details_x4" args 4)

("SC_S_Weapons_Define_Details_x5" args 0)
("SC_S_Weapons_Define_Details_x5" args 1)
("SC_S_Weapons_Define_Details_x5" args 2)
("SC_S_Weapons_Define_Details_x5" args 3)
("SC_S_Weapons_Define_Details_x5" args 4)