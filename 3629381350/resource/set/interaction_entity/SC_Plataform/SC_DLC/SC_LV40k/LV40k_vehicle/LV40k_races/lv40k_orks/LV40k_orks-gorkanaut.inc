
;	<<<< --------------------------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Vehicle - Ork Gorkanaut ===============] >>
;	<<<<---------------------------------------------------------------------------------------->>>>			 

{"Ork_Gorkanaut"
	{on spawn 
		{tags add "SC_INF_Tag_Unit_Faction_Orks"}
		{tags add "SC_INF_Tag_Unit_Faction_Xenos"}
		
		("SC_M_Talk_Define_Link_Vocalizations" voice(talk/tank/lv40k_ork_gorkanaut) v(v1))
		
		{delay 0.5 {if not tagged "_bot" ("SC_M_Talk_Define_V_selection")}}
		
		{add_view "fx_glow_gold_big" "SC_vh_lights" "Headlight1"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "Headlight2"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "fxlightbody1"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "fxlightbody2"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "fxlightbody3"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "fxlightbody4"}
		{add_view "fx_glow_gold_big" "SC_vh_lights" "fxlightbody5"}
		
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke1"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke2"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke3"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke4"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke5"}
		{add_view "ch_vehicle_start" "exhaust2" "fxsmoke6"}
		
		{if tagged "gorkanaut"						; {}
		
			; ===================== DEFFSTORM MEGA-SHOOTA
			{Call "sc_stuff_call_add_weapon_fx_ddshoota1"}
			{Call "sc_stuff_call_add_weapon_fx_ddshoota2"}
			{Call "sc_stuff_call_add_weapon_fx_ddshoota3"}
			{Call "sc_stuff_call_add_weapon_fx_ddshoota4"}
			{Call "sc_stuff_call_add_weapon_fx_ddshoota5"}
			{Call "sc_stuff_call_add_weapon_fx_ddshoota6"}
			
			; ===================== DICK SKORCHA
			{Call "sc_stuff_call_add_loop_fire_sound_flamer"}
			{Call "sc_stuff_call_add_weapon_fx_flamer"}
			
			{add_view "fx_flamer_barrel_drops"	"SC_vh_lights"	"Foresight2"} 
			{add_view "flamer_fire_barrel_fall"	"SC_vh_lights"	"Foresight2"} 
			
			; ===================== DICK SHOOTA/AUTOCANNON
			{Call "sc_stuff_call_add_weapon_fx_dickshoota"}
			
		else tagged "morkanaut"
			{add_view "fx_ork_gorkanaut_eye_2" "SC_vh_lights" "fx_eye_mork_L"}
			{add_view "fx_ork_gorkanaut_eye_1" "SC_vh_lights" "fx_eye_mork_R"}
		
			{add_view "fx_glow_red_big" "SC_vh_lights" "fxlightmork1"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork2"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork3"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork4"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork5"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork6"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork7"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork8"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmork9"}
			
			{add_view "fx_glow_orange_big" "SC_vh_lights" "fxlightmegablasta1"}
			{add_view "fx_glow_blue_big" "SC_vh_lights" "fxlightmegablasta2"}
			{add_view "fx_glow_orange_big" "SC_vh_lights" "fxlightmegablasta3"}
			{add_view "plasma_smoke_orn" "SC_vh_lights" "fxlightmegablasta3"}
			
			; ===================== DICK MEGA-BLASTA
			{Call "sc_stuff_call_add_weapon_fx_kustom_megablasta"}
			
			; ===================== DEFFSTORM MEGA-BLASTA
			{Call "sc_stuff_call_add_weapon_fx_dickblasta"}
		}
		
		; ===================== ROKKITS 
		; [...]
	}
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/start"}
		{link_sound "engine_stop"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/stop"}
		{link_sound "engine_idle"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/idle"}
		{link_sound "engine_full"		"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/full"}
		{link_sound "exhaust"			"SC_DLC_LV40k/W40k_vehicles/engine/ork_Deff_Dread/exhaust"}
		{link_sound "move"				""}
		{link_sound "brake"				""}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Weapons Sounds and FX 	===================	>>>>
	
	; // DEFFSTORM SHOOTA
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota1)
		d1(0.2) fx1(flash_hb)				b1(barrel00)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS00)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel00)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota2)
		d1(0.2) fx1(flash_hb)				b1(barrel01)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS01)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel01)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota3)
		d1(0.2) fx1(flash_hb)				b1(barrel02)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS02)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel02)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota4)
		d1(0.2) fx1(flash_hb)				b1(barrel03)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS00)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel03)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota5)
		d1(0.2) fx1(flash_hb)				b1(barrel04)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS01)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel04)
	)
	("SC_Misc_Define_Add_Weapon_Muzzle" 	gun_name(ddshoota6)
		d1(0.2) fx1(flash_hb)				b1(barrel05)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_DFS02)
		d3(3.5) fx3(armor_overheat_smoke)	b3(barrel05)
	)
	{on fire "gun1"
		{if tagged "morkanaut"
			{spawn "flash_mega_blast" "foresight5" x}
			
		else tagged "gorkanaut"
			{if name "00"	{call "sc_stuff_call_fire_weapon_fx_ddshoota1"}
			else name "01" 	{call "sc_stuff_call_fire_weapon_fx_ddshoota2"}
			else name "02" 	{call "sc_stuff_call_fire_weapon_fx_ddshoota3"}
			else name "03" 	{call "sc_stuff_call_fire_weapon_fx_ddshoota4"}
			else name "04" 	{call "sc_stuff_call_fire_weapon_fx_ddshoota5"}
			else name "05" 	{call "sc_stuff_call_fire_weapon_fx_ddshoota6"}
			}
			
			("SC_Misc_Define_Gun_Rev_Animation" args deff_shoota)
		}
	}
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(dickshoota)
		d1(0.2) fx1(flash_hb)				b1(Foresight1)
		d2(0.1) fx2(shell_ac_40)			b2(Fxshell_Torso)
	)
	{on fire "mgun1"
		{if tagged "morkanaut"
			{spawn "flash_mega_blast" "foresight6" x}
		else tagged "gorkanaut"
			{call "sc_stuff_call_fire_weapon_fx_dickshoota"}
		}
	}
	
	; // BURNAS
	("SC_Misc_Define_Add_Weapon_Muzzle" 
		gun_name(flamer)
		d1(0.2) fx1(ch_vehicle_start)			b1(Foresight2)
		d2(0.2) fx2(flamer_fire)				b2(Foresight2)
	)
	("SC_Misc_Define_Add_Weapon_Loop_Sound"
		gun_name(flamer)
		tag(flamer)
		snd(SC_DLC_LV40k/smallarms/lp_flamer_heavy_v1)  
		stop_delay(0.2)
	)

	{on fire "mgun2"
		{call "sc_stuff_call_fire_Play_loop_sound_flamer"}
		{call "sc_stuff_call_fire_weapon_fx_flamer"}
	
		("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight2) distance_m(40) gravity(1.0) spread(1.0)) 
		("SC_Misc_Define_Spawn_Slicer" object(lv40k_bullet_flamer_heavy) where(foresight2) distance_m(40) gravity(1.0) spread(3.0)) 
	}
	{on "reload"
		{if name "mgun3"	{Delay 16.0 	{bone show "Ammo1"}	{bone show "Ammo2"}	{bone show "Ammo3"} {bone show "Ammo4"}}}
	}
	{on fire "mgun3"	
		{if tagged "fire_rokkit3"	{tags remove "fire_rokkit3"} 	{bone hide "Ammo4"}	
		else tagged "fire_rokkit2"	{tags remove "fire_rokkit2"}	{bone hide "Ammo3"}	{tags add "fire_rokkit3"}	
		else tagged "fire_rokkit1"	{tags remove "fire_rokkit1"}	{bone hide "Ammo2"}	{tags add "fire_rokkit2"}	
		else						{tags add "fire_rokkit1"}		{bone hide "Ammo1"}	
		}
		{Spawn "tank_canon_fire_75_76" "Foresight4" x}
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Footstep Stomp Sounds and FX 	===================	>>>>
	
	{on animation_event "leg_left_stomp"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(foot_l) sound(SC_fx/sc_stomp_s4/IH_tur))}
	{on animation_event "leg_right_stomp"	("SC_M_Stomp_Define_Add_Stomp_S2" leg(foot_r) sound(SC_fx/sc_stomp_s4/IH_tur))}
	{on animation_event "leg_mech"			{Start_sound "SC_Plataform/SC_fx/sc_bodymove_s4/scarab_walk_move" use_position}}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Idle 	===================	>>>>
	
	{on "SC_FSM_IDLE_Call_Play_Animations" overload
		{ani_play "Idle_Aiming1" loop}  
	}
	{on "SC_FSM_POSING_Call_Play_Animations" overload
		{if rand 0.2	{ani_play "Idle_Lowready1" callback}       		           
		else 			{ani_play "Idle_Lowready2" callback}      		           
		}
	}
	{on "SC_FSM_TURN_Call_Play_Animations" overload
		{if turn_right
			{ani_play "Turn_Right1" loop}	
		else
			{ani_play "Turn_Left1" -1 loop}	
		}
	}
	{on "SC_FSM_MOVE_Call_Play_Animations" overload
		{ani_play "Run_Aiming1" loop}	
		
		("SC_M_Talk_Define_V_move_cmbt_100")	
	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Die 	===================	>>>>

	{On "explosion"
		{spawn "ex_nuke" "basis" x}
	
		{Delay 0.5 {Start_Sound "SC_Plataform/hit/-bullet/size4/titan" 1 use_position}}	; <- huge ass boom sound
		
		{blastwave c4 60 r0 10 r1 25 offset 0 0 0}
		{blastwave c4 30 r0 25 r1 50 offset 0 0 0}
		{blastwave c4 15 r0 50 r1 75 offset 0 0 0}
		{blastwave c4 7.5 r0 50 r1 100 offset 0 0 0}
		{blastwave c4 5 r0 50 r1 125 offset 0 0 0}
		{blastwave c4 2.0 r0 50 r1 150 offset 0 0 0}
	
		{Delay 0.5
			{add_view	"fire_dead_tank"	"fx_deff_gork_post_burn"	"FXfire3"} 
			{add_view	"fire_dead_tank"	"fx_deff_gork_post_burn"	"FXfire5"} 
			{view start "fx_deff_gork_post_burn"}	{Delay 120 {View stop "fx_deff_dread_post_burn"}}
		}
	}
	{On "SC_FSM_DEATH_Call_Post_Death_Animation"
		{if not tagged "SC_WK_Request_Tag_Pilot_Dead" {Components "body" destroy}}
	}
 	{on "SC_FSM_DEATH_Call_Play_Animations" overload	  
		{add_view	"anomaly_radiashon_1"		"SC_WK_fx_death_animation"	"basis"}
		{add_view	"cooking_high_open_2"		"SC_WK_fx_death_animation"	"FXfire3"}
		{add_view	"cooking_turret_smoke"		"SC_WK_fx_death_animation"	"FXfire5"}
		{add_view	"cooking_turret_ring"		"SC_WK_fx_death_animation"	"FXfire6"} 
		{add_view	"cooking_turret_smoke"		"SC_WK_fx_death_animation"	"FXfire6"}
		
    	{Delay 1.0 {ani_play "Death1" 0.5 callback} {Start_Sound "SC_Plataform/detonation/explosion_mechs_wof_shared/rus_mech_scythe_death" 1 use_position}}
  	}
	
	; <<<<	===================	LV40k Vehicle Behaviour: Melee Attack 	===================	>>>>

	{on animation_event "melee_woosh"	{start_sound "weapon/shot/SC_DLC_LV40k/melee/woosh_big/d1"}}
	{on animation_event "klaw"			{start_sound "SC_plataform/SC_fx/sc_ability_s1/orks_dread/claw" use_position}}
	
	{on "SC_FSM_MELEE_Call_Play_Animations"  
		{start_sound "SC_Plataform/SC_FX/sc_ability_s3/Orks_laugh" use_position}
		
		{if rand 0.33	{Call_Synced "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_1"}
		else rand 0.33	{Call_Synced "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_2"}
		else 			{Call_Synced "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_3"}
		}	
	}
	{On "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_1"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee1" callback}}
	{On "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_2"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee2" callback}}
	{On "Lv40k_Orks_Gorkanaut_Call_Melee_Anm_3"	{Tags add "sc_tp_Request_tag_mp_melee_sync_anm_is_playing"} {ani_play "melee3" callback}}
	
	{on animation_event "sc_spawn_melee_stompin_gud" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_gorkanaut) where(foot_l))
	}
	{on animation_event "sc_spawn_melee_propa_smack" sync
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_gorkanaut) where(Melee_CTC))
	}
	{on animation_event "sc_spawn_melee_krump_stomp" sync 
		{volumes disable blast}
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_ork_gorkanaut) where(melee_propa_stompin))

		{Spawn "fx_ork_digga_emerge_blast_dirt" "melee_propa_stompin" x}
		{Delay 0.1	{Spawn "sc_empty_helper" "melee_propa_stompin" x {blastwave c4 30 r0 8 r1 16 offset 0 0 0} {Delay 1.0 {Delete}}}}
		
		{Delay 0.5	{volumes enable blast}}
	}
}
