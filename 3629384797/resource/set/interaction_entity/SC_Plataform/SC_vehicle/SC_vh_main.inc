
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Vehicles Generic ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

(define "SC_smoke_shot"				;// spawns smoke grenade on vehicle and gives impulse instructions
	{delay %4
		{spawn %0 "%1" x
			{impulse forward %2 %3 rnd_dir %3 %3}
			{call "activate"}
		}
		{spawn "flash_grenade_launcher" "fx%1" x}	;// plays flash at grenade spawn/launch
	}
)	

{"vehicle SC_plataform_prop_vehicle"	;{}	

	(Include "SC_vehicle_damage/SC_vh_damage_blast.inc")
	(Include "SC_vehicle_damage/SC_vh_damage_bullet.inc")
	(Include "SC_vehicle_damage/SC_vh_damage_contact.inc")
	
	(Include "SC_vh_overwrite.inc")
	
	{on spawn	
		("SC_VH_Contact_Define_Spawn")
		("SC_VH_Blast_Define_Spawn")
		("SC_VH_Bullet_Hit_Define_Spawn")
		
		{Delay 0.1 
			{if tagged "exploded" 
				; [...]
			else
				{view start "SC_vh_lights"}
				{ani_play "veh_idle" loop}
			}
		}
	}
	
	; <<<<	=================== SC Plataform Vehicle: Crew Logic ===================	>>>>
	
	{on crew out	
		{if crew_in_place "driver"
		else crew_in_place "gunner"
		else crew_in_place "commander"
		else
			{view pause "SC_vh_lights_crew"}
			{ani_stop "veh_idle_crew"}
		}
	}
	{on crew in 	
		{view start "SC_vh_lights_crew"}
		{ani_play "veh_idle_crew" loop}
	}
	
	; <<<<	=================== SC Plataform Vehicle: Termination Logic ===================	>>>>
	
	{On repair
		{if component "body"
			{view start "SC_vh_lights_crew"}
			{view start "SC_vh_lights"}
			{ani_play "veh_idle" loop}
		}
	}
	{on break
		{if component "body"
			{view pause "SC_vh_lights_crew"}
			{view pause "SC_vh_lights"}
			{ani_stop "veh_idle_crew"}
			{ani_stop "veh_idle"}
		}
	}
	{on destroy		
		{view stop "SC_vh_lights_crew"}
		{view stop "SC_vh_lights"}
		{ani_stop "veh_idle_crew"}
		{ani_stop "veh_idle"}
	}
	
	; <<<<	=================== SC Plataform Vehicle: Contact ===================	>>>>
	
	(Define "SC_vh_main_obstacle_list"		; // <- may be causing EBF crashes with models that use set_skeleton for wreckages, revisit.
		{if effector "antitank_rock"
			{with_effector {call "break"}}
		else effector "antitank_hedgehog"
			{with_effector {call "break"}}
		else effector "construction concrete cornered"
			{with_effector {call "break"}}
		else effector "construction parts disable_area"		; // <- gotta figure out what are other props with similar params in future.
			{with_effector {call "break"}}
		else effector "fence wood"
			{with_effector {call "break"}}
		}
	)
	
	{on contact 
		("SC_VH_Contact_Define_Get")
		
		{if prop "SC_plataform_prop_vehicle_behemoth"	("SC_vh_main_obstacle_list")}
		{if prop "SC_plataform_prop_vehicle_dozer"		("SC_vh_main_obstacle_list")}
	}
	{on bullet_hit
		("SC_VH_Bullet_Hit_Define_Get")
		
		{if tagged "_bot"	{able emit_on_attack 1}	{able emit_passangers_on_enemy 1}}		; // BUZZ: <- TEMP!
	}
	{on blast
		("SC_VH_Blast_Define_Get")
		
		{if tagged "_bot"	{able emit_on_attack 1}	{able emit_passangers_on_enemy 1}}		; // BUZZ: <- TEMP!
	}
}

;	<<<< ---------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: NEW VEHICLE CLASS [BEHEMOTH] ===============] >>
;	<<<<----------------------------------------------------------------------------------------------->>>>			 

; // BUZZ: use behemoth prop for super heavy tanks.

{"vehicle SC_plataform_prop_vehicle SC_plataform_prop_vehicle_behemoth"
	; [...]
}

;	<<<< ------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: Auto Operatable Vehicles ===============] >>
;	<<<<------------------------------------------------------------------------------------------->>>>			 

{"vehicle SC_plataform_prop_vehicle SC_plataform_prop_vehicle_Auto"
	{On spawn
		{if work "body"	{auto_operatable 1}	{able select 1}	{able minimap 1}
		else			{auto_operatable 0}	{able select 0}	{able minimap 0}}
	}
	{on destroy
		{if component "body"
			{Auto_operatable 0}
			{able select 0}
			{able minimap 0}
		}
	}
	{On break
		{if component "body"
			{able select 0}
			;//{able minimap 0}
			;//{Auto_operatable 0}
		}
	}
	{On repair
		{if component "body"
			{able select 1}
			;//{able minimap 1}
			;//{Auto_operatable 1}
		}
	}
}

; // BUZZ: when i start coding bigger auto_operatable cannons, add new size checkers.

{"SC_Plataform_prop_cannon_auto_operatable"
	{inflammation_time 4.0}
	
	{On "burn_volume"
		{call "crush_destroy_sync"}
	}
	{On break
		{if component "body" 
			{components "body" destroy}
		}
	}
}

;	<<<< ---------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: "multi_board" prop Rewritten ===============] >>
;	<<<<----------------------------------------------------------------------------------------------->>>>			 

{"vehicle multi_board"
	{on spawn
		{if tagged "door_open"
			{ani_wind "open_back" end}
		}
	}
	{on animation_event "board"
		{if tagged "door_open"
			{kill_delay "boarding"}
			{delay 5 "boarding"
				{if operatable
					{tags remove "door_open"}
					{ani_play "close_back" 1}
					{call "close"}
				}
			}
		else
			{ani_play "open_back" 1}
			{tags add "door_open"}
			{call "open"}
			{delay 5 "boarding"
				{if operatable
					{tags remove "door_open"}
					{ani_play "close_back" 1}
					{call "close"}
				}
			}
		}
	}
}

{"vehicle SC_multi_board_R"	
	{on spawn
		{if tagged "door_open_R"
			{ani_wind "open_doorR" end}
		}
	}
	{on animation_event "board_R"
		{if tagged "door_open_R"
			{kill_delay "boarding_R"}
			{delay 5 "boarding_R"
				{if operatable
					{tags remove "door_open_R"}
					{ani_play "close_doorR" 1}
				;//	{call "close"}
				}
			}
		else
			{ani_play "open_doorR" 1}
			{tags add "door_open_R"}
		;//	{call "open"}
			{delay 5 "boarding_R"
				{if operatable
					{tags remove "door_open_R"}
					{ani_play "close_doorR" 1}
			;//		{call "close"}
				}
			}
		}
	}
}

{"vehicle SC_multi_board_L"	
	{on spawn
		{if tagged "door_open_L"
			{ani_wind "open_doorL" end}
		}
	}
	{on animation_event "board_L"
		{if tagged "door_open_L"
			{kill_delay "boarding_L"}
			{delay 5 "boarding_L"
				{if operatable
					{tags remove "door_open_L"}
					{ani_play "close_doorL" 1}
				;//	{call "close"}
				}
			}
		else
			{ani_play "open_doorL" 1}
			{tags add "door_open_L"}
		;//	{call "open"}
			{delay 5 "boarding_L"
				{if operatable
					{tags remove "door_open_L"}
					{ani_play "close_doorL" 1}
			;//		{call "close"}
				}
			}
		}
	}
}

;	<<<< -------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: "multi_turret" prop Update ===============] >>
;	<<<<--------------------------------------------------------------------------------------------->>>>			 

; // Replaced from "tank.inc"

{"SC_plataform_prop_vehicle tank multi_turret"
	{on spawn
		{call "update_multi_turret"}
	}
	{on "update_multi_turret"
		(define "SC_multi_turret_work"
			{if work "aux_turret%0"
				{if work "body"
					{ik_enable "aux_turret%0" 1}
					{if prop "SC_multi_turret%0_gun"		{weapon_work "gun%0" 1}}
					{if prop "SC_multi_turret%0_mgun"		{weapon_work "mgun%0" 1}}
				 else
					{ik_enable "aux_turret%0" 0}
					{if prop "SC_multi_turret%0_gun"		{weapon_work "gun%0" 0}}
					{if prop "SC_multi_turret%0_mgun"		{weapon_work "mgun%0" 0}}
				}
			else
				{ik_enable "aux_turret%0" 0}
				{if prop "SC_multi_turret%0_gun"		{weapon_work "gun%0" 0}}
				{if prop "SC_multi_turret%0_mgun"		{weapon_work "mgun%0" 0}}
			}
		)
		("SC_multi_turret_work" args 1)
		("SC_multi_turret_work" args 2)
		("SC_multi_turret_work" args 3)
		("SC_multi_turret_work" args 4)
		("SC_multi_turret_work" args 5)
		("SC_multi_turret_work" args 6)
	}
	{on break 
		{if not tagged "exploded"
			{if component "aux_turret1"		{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			else component "aux_turret2"	{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			else component "aux_turret3"	{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			else component "aux_turret4"	{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			else component "aux_turret5"	{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			else component "aux_turret6"	{call "update_multi_turret"}	{damage_report "turret" "component/turret_broken"}
			}
		}
	}
	{on repair
		{if component "aux_turret1"		{call "update_multi_turret"}
		else component "aux_turret2"	{call "update_multi_turret"}
		else component "aux_turret3"	{call "update_multi_turret"}
		else component "aux_turret4"	{call "update_multi_turret"}
		else component "aux_turret5"	{call "update_multi_turret"}
		else component "aux_turret6"	{call "update_multi_turret"}
		}
	}
	(define "multi_turret_rotate"
		{on ik begin "%0"
			{kill_delay "rotate_turret"}
			{if not "rotate_turret"
				{play_sound "rotate_turret" 1}
				{set "rotate_turret" 1}
			}
		}
		{on ik end "%0"
			{delay 0.25 "rotate_turret"
				{stop_sound "rotate_turret"}
				{set "rotate_turret" 0}
			}
		}
	)
	("multi_turret_rotate" args aux_turret1)
	("multi_turret_rotate" args aux_turret2)
	("multi_turret_rotate" args aux_turret3)
	("multi_turret_rotate" args aux_turret4)
	("multi_turret_rotate" args aux_turret5)
	("multi_turret_rotate" args aux_turret6)
}

;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: "with_gun" Prop Update ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

; // Overload from "tank.inc"

{"SC_plataform_prop_vehicle with_gun vehicle"
	{on break
		{if not tagged "exploded"
			{if component "gun"		{call "update_gun"}	{tags add "gun_brake"}	{talk "broken_gun"}}
			{if component "gun1"	{call "update_gun"}	{tags add "gun1_brake"}	{talk "broken_gun"}}
			{if component "gun2"	{call "update_gun"}	{tags add "gun2_brake"}	{talk "broken_gun"}}
			{if component "gun3"	{call "update_gun"}	{tags add "gun3_brake"}	{talk "broken_gun"}}
		}
	}
	{on repair
		{if component "gun"		{call "update_gun"}	{tags remove "gun_brake"}}
		{if component "gun1"	{call "update_gun"}	{tags remove "gun1_brake"}}
		{if component "gun2"	{call "update_gun"}	{tags remove "gun2_brake"}}
		{if component "gun3"	{call "update_gun"}	{tags remove "gun3_brake"}}
	}
	{on "update_gun" overload
		{if work "gun"	{weapon_work "gun" 1}{weapon_work "melee" 1}
		else			{weapon_work "gun" 0}{weapon_work "melee" 0}}

		{if work "gun1"	{weapon_work "gun1" 1}{weapon_work "melee1" 1}
		else			{weapon_work "gun1" 0}{weapon_work "melee1" 0}}
		
		{if work "gun2"	{weapon_work "gun2" 1}
		else			{weapon_work "gun2" 0}}
		
		{if work "gun3"	{weapon_work "gun3" 1}
		else			{weapon_work "gun3" 0}}
	}
}
