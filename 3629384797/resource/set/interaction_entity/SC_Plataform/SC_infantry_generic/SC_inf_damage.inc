
;	<<<< -------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Infantry Generic: Shared Damage System ===============] >>
;	<<<<--------------------------------------------------------------------------->>>>			 

(include "SC_inf_damage/SC_inf_damage_defines.inc")
(Include "SC_inf_damage/SC_inf_damage_contact.inc")
(Include "SC_inf_damage/SC_inf_damage_blast_hit.inc")
(Include "SC_inf_damage/SC_inf_damage_bullet_hit.inc")
(Include "SC_inf_damage/SC_inf_damage_effects.inc")

(Define "SC_INF_Damage_Define_Spawn_Event"		
	("SC_INF_Bullet_Hit_Define_Spawn_Event")
	("SC_INF_Contact_Define_Spawn_Event")
	("SC_INF_Effects_Define_Spawn_Event")
	
	{if tagged "delete_process"		; // BUZZ: <- safe checker for editor & conquest
		{tags remove "delete_process"}
		{call "delete"}
	}
)

(Define "SC_INF_Damage_Define_Contact"		
	("SC_INF_Contact_Define_Contact")
)

; <<<<	===================	SC Infantry Generic: Burning/Heating	===================	>>>>

{on "burn_volume"
	{if not "SC_SH_Main_Flag_Is_Online"
		{Call "SC_burn_damage"}
		
		{if tagged "sc_skin_tag_trait_heavy_infantry"		; {} // BUZZ: <- SC Rules, humans with "heavy_infantry" tag cannot be set on fire.
			; [...]
		else tagged "SC_INF_Tag_Buff_Resistance_tier3"
			; [...]	
		else tagged "SC_INF_Tag_Buff_Resistance_tier2"	
			; [...]
		else tagged "SC_INF_Tag_Buff_Resistance_tier1"
			; [...]
		else
			{Call_synced "_burn"}	
		}
	}
}

{On "SC_burn_damage"
	{if tagged "sc_skin_tag_trait_heavy_infantry"	
		("human_health" c(50))		
	else
		("human_health" c(100))		
	}	
}

; <<<<	===================	SC Infantry Generic: [Other/Misc]	===================	>>>>

; // BUZZ: Overwritting vanilla

{on "hit-light"
	; [...]
}

{on "hit-heavy"
	; [...]
}

{on "hit"
	{call "hit-scream"}
}

{on "damage"
	{call "hit"}
}

{on "explosion"
	{spawn "blood_medium"}
	{call "die"}
}

{on "crush"
	{spawn "blood_medium"}
	{play_sound "crush"}
	{call "unhealable"}
}

{on "delete"
	{if not dead {die} {stat_notify die}}
	
	{Kill_delay "SC_H_Skin_Weapon_Delay_Weapon_Allow_Check"}
	{Kill_delay "SC_H_Skin_Weapon_Delay_Get_Effector"}

	{volumes disable bullet blast contact}	; // BUZZ: <- testing to see if this can solve the quant.bullet crash
	{bone hide "basis"}
	
	; // BUZZ: using delay on delete with linked humans will cause the game to crash.
	
	{if linked "vehicle"
		{delete}
	else
		{if not tagged "delete_process" 
			{tags add "delete_process"}
			{call "clear_inventory"}	
			
			{Delay 0.1	{delete}} ; // BUZZ: <- may crash
		}
	}
}

(define "knock_out"
	{if not water_level -0.1
		{if not dead
			{knockdown %t %r}
		}
	}
)

{on "die_throw_high" sync
	{set "die_after_throw" 1}
	{call "personage_check"}
	{spawn "blood_small"}
	{call "die_scream"}
	{call "throw_high"}
}

{on "throw-off" sync
	{set "die_after_throw" 0}
	{if not stuff "no_throw"
		{if not linked "airborne"
			{call "throw_high"}
		}
	}
}

{on "throw-off-and-die" sync
	{if not prop "human"	{Call "die"}}	; // <- SC TEST!
	
	;//{start_sound "human/talk/impulse"} ;//?
	{set "die_after_throw" 1}
	{call "die_scream"}
	{if not stuff "no_throw"
		{if not linked "airborne"
			{call "personage_check"}
			{call "throw_high"}
		}
	else
		{if stuff "shell"
			{call "unhealable"}
			{call "die"}
			{call "explosion"}
		else stuff "auto"
			{call "unhealable"}
			{call "die"}
		}
	}
}

{on "throw_high" sync
	{if senseless
		{if not dead
			{call "die"} ;// kills humans when knocked out then hit with large enough blast to throw them (even if they still have health left)
		}
	else
		{if not dead
			{if linked "vehicle"
				{if "die_after_throw"
					{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 die force}
				else
					{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}
				}
				{call "stop_vehicle_ani"}
			else
				{if "die_after_throw"
					{throw_off up 3 0.8 dir 3.5 0.5 forward 0 0 die}
				else
					{if not linked "windowed"
						{throw_off up 3 0.8 dir 3.5 0.5 forward 0 0}
					}
				}
			}
		else
			{call "explosion"}
		}
	}
}

{on "throw_off_end"				;// from {crew_throw_off} in vehicle.inc and cannon.inc
	{if "not_knocked"
		;// do nothing
	else
		("knock_out" t(4) r(1))	;// time unconscious. 12 ±3 seconds
	}
}

{on "throw_off_end_die"		;// from {crew_throw_off} in vehicle.inc and cannon.inc
	;//{start_sound "human/talk/impulse"} ;//?
	{call "die"}
}

{on "throw_off_from_tower"
	{throw_off up 1 forward 2 die force}
	;//{start_sound "human/talk/impulse"} ;//?
}

{on "throw_off_from_ladder"
	{throw_off up 1 forward -2 die force}
	;//{start_sound "human/talk/impulse"} ;//?
}

{on "throw_off_from_ship"
	{throw_off up 3 dir 3 1 die force}
	;//{start_sound "human/talk/impulse"} ;//?
}

{on "throw_off_from_vehicle"
	;//{start_sound "human/talk/impulse"} ;//?
	{throw_off up 1 0.5 dir 1 turn 0 360 force die}
}

{on "throw_off_from_moto"
	;//{start_sound "human/talk/impulse"} ;//?
	{throw_off up 1 0.5 dir 1 turn 0 360 force die}
}
