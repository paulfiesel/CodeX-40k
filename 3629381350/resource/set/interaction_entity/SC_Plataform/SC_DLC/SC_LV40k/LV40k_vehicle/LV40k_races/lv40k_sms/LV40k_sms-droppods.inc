
;	<<<< ------------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Space Marines Drop-Pods ===============] >>
;	<<<<------------------------------------------------------------------------------------------------->>>>			 

{"SM_Droppods"
	{on spawn
		{physics_work 0}
		
		{add_view "fire_dead_tank"				"dropping_fx"	"fx_droppod"}
		{add_view "exhaust_dark_big_diesel" 	"door_fx"		"fx_steam1"}
		{add_view "exhaust_dark_big_diesel" 	"door_fx"		"fx_steam2"}
		{add_view "exhaust_dark_big_diesel" 	"door_fx"		"fx_steam3"}
		{add_view "exhaust_dark_big_diesel" 	"door_fx"		"fx_steam4"}
		{add_view "exhaust_dark_big_diesel" 	"door_fx"		"fx_steam5"}
		
		{if work "body"
			{volumes disable bullet blast contact visible touch obstacle}
			{land off} {update_visibility_patch}
			
			{start_sound "SC_Plataform/SC_fx/sc_ability_s3/marine_orbital/land_incoming" use_position}
			{view start "dropping_fx"}
			{Ani_play "activated" callback}
			
			{if tagged "droppod_marines"
				{Call "sc_stuff_call_add_loop_fire_sound_HB"}
				{Call "sc_stuff_call_add_weapon_fx_HB00"}
				{Call "sc_stuff_call_add_weapon_fx_HB01"}	
				{delay 0.1 
					{able select 0}
					{able repair 0}
					{auto_operatable 0}
				}
			}
		}
	}
	{on break
		{if component "body" 
			{components "body" destroy}		; // BUZZ: <- ensures it can't be repaired
		}
	}
	{on destroy
		{if component "body" 	
			{physics_work 1}
			{land off} {update_visibility_patch}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Activation FX	===================	>>>>
	
	{on animation_event "doors_pre_open"	
		{start_sound "SC_Plataform/SC_fx/sc_ability_s3/marine_orbital/pre_beeps" use_position}
	}
	{on animation_event "doors_hit_ground"	
		{start_sound "SC_Plataform/SC_fx/sc_ability_s3/marine_orbital/door" use_position}
	}
	{on animation_event "pod_hit_ground"
		{start_sound "SC_Plataform/SC_fx/sc_ability_s3/marine_orbital/land_hit" use_position}
		{delay 3.0 {view stop "dropping_fx"}}
		
		{if terrain_fx "shallow_water"
			{spawn "ex_size4_water" "basis" x}
		else				
			{Spawn "fx_ork_digga_emerge_blast_dirt" "basis" x}
		}
		{if tagged "droppod_dreadnought"
			{blastwave c4 100 r0 2.5 r1 5.0 position}
			{blastwave c4 5.0 r0 4.0 r1 12.0 position}
		else tagged "droppod_marines"
			{blastwave c4 75 r0 2.5 r1 5.0 position}
			{blastwave c4 2.5 r0 4.0 r1 12.0 position}
			{volumes enable bullet blast contact touch obstacle}
		else tagged "droppod_ammo"
			{blastwave c4 40 r0 0.5 r1 2.0 position}
			{blastwave c4 2.0 r0 2.0 r1 5.0 position}
			{volumes enable bullet blast contact touch obstacle}
		}
		{land on}	{update_visibility_patch}
	}
	{on animation_end "Activated"
		{delay 2.0 
			{if not tagged "Droppod_Ammo" {view start "door_fx"} {ani_play "doors" 0.6 callback}}
		}
	}
	{on animation_end "doors"
		{view stop "door_fx"}
		{if tagged "droppod_marines"
			{delay 0.1 
				{able repair 0}
				{auto_operatable 1}
			}
		else tagged "droppod_ammo"
	;		{delay 0.1 
	;			{able repair 0}
	;			{auto_operatable 1}
	;		}
		}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Main Weapon 	===================	>>>>
	
	("SC_Misc_Define_Add_Weapon_Loop_Sound"	gun_name(HB) tag(HB) snd(SC_DLC_LV40k/smallarms/lp_heavy_bolter_v1) stop_delay(0.2))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(HB00)d1(0.2) fx1(flash_hb) b1(barrels00) d2(0.2) fx2(shell_heavybolter) b2(shell00))
	("SC_Misc_Define_Add_Weapon_Muzzle"		gun_name(HB01)d1(0.2) fx1(flash_hb) b1(barrels01) d2(0.2) fx2(shell_heavybolter) b2(shell01))
	
	{on fire "gun"
		{call "sc_stuff_call_fire_Play_loop_sound_HB"}
		{If name "00"	{call "sc_stuff_call_fire_weapon_fx_HB00"}
		else			{call "sc_stuff_call_fire_weapon_fx_HB01"}
		}
	}
}