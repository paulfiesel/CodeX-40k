
;	<<<< --------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Walker Vehicles ===============] >>
;	<<<<---------------------------------------------------------------------------------->>>>			 

{"SC_prop_walker_tank"	
	(Include "SC_wk_animations/SC_wk_animations.inc")
	(include "SC_wk_animations/SC_wk_request.inc")
	
	{on spawn 	
		{physics_work 0}
		
		("SC_WK_Request_Define_Clear_All_Variables")
		
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_L_B"		"fx_dmg_legL1"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_L_B"		"fx_dmg_legL2"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_L_B"		"fx_dmg_legL3"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_R_B"		"fx_dmg_legR1"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_R_B"		"fx_dmg_legR2"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Leg_R_B"		"fx_dmg_legR3"}
		
		{add_view "break_comp_smoke_01"			"SC_Walker_Engine_B"	"fx_dmg_Engine1"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Engine_B"	"fx_dmg_Engine2"}
		{add_view "break_comp_smoke_01"			"SC_Walker_Engine_B"	"fx_dmg_Engine3"}
		
		{add_view "baneblade_smoke"				"SC_Walker_Body_B"		"fx_dmg_Body1"}
		{add_view "baneblade_smoke"				"SC_Walker_Body_B"		"fx_dmg_Body2"}
		{add_view "baneblade_smoke"				"SC_Walker_Body_B"		"fx_dmg_Body3"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun_B"		"fx_dmg_Gun1"}
		{add_view "break_comp_01"				"SC_Walker_Gun_B"		"fx_dmg_Gun2"}
		{add_view "break_comp_01"				"SC_Walker_Gun_B"		"fx_dmg_Gun3"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun1_B"		"fx_dmg_Gun11"}
		{add_view "break_comp_01"				"SC_Walker_Gun1_B"		"fx_dmg_Gun12"}
		{add_view "break_comp_01"				"SC_Walker_Gun1_B"		"fx_dmg_Gun13"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun2_B"		"fx_dmg_Gun21"}
		{add_view "break_comp_01"				"SC_Walker_Gun2_B"		"fx_dmg_Gun22"}
		{add_view "break_comp_01"				"SC_Walker_Gun2_B"		"fx_dmg_Gun23"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun3_B"		"fx_dmg_Gun31"}
		{add_view "break_comp_01"				"SC_Walker_Gun3_B"		"fx_dmg_Gun32"}
		{add_view "break_comp_01"				"SC_Walker_Gun3_B"		"fx_dmg_Gun33"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun4_B"		"fx_dmg_Gun41"}
		{add_view "break_comp_01"				"SC_Walker_Gun4_B"		"fx_dmg_Gun42"}
		{add_view "break_comp_01"				"SC_Walker_Gun4_B"		"fx_dmg_Gun43"}
		
		{add_view "break_comp_01"				"SC_Walker_Gun5_B"		"fx_dmg_Gun51"}
		{add_view "break_comp_01"				"SC_Walker_Gun5_B"		"fx_dmg_Gun52"}
		{add_view "break_comp_01"				"SC_Walker_Gun5_B"		"fx_dmg_Gun53"}
		
		{add_view "break_comp_01"				"SC_Walker_Aux1_B"		"fx_dmg_Aux11"}
		{add_view "break_comp_01"				"SC_Walker_Aux2_B"		"fx_dmg_Aux21"}
		{add_view "break_comp_01"				"SC_Walker_Aux3_B"		"fx_dmg_Aux31"}
		{add_view "break_comp_01"				"SC_Walker_Aux4_B"		"fx_dmg_Aux41"}
		{add_view "break_comp_01"				"SC_Walker_Aux5_B"		"fx_dmg_Aux51"}
		
		{delay 0.1
			{if tagged "exploded"
				{Ani_play "death_pose"}
			else		
				{call "SC_FSM_Call_Start_FSM"}
				
				{if not work "aux_turret1"
					{view start "SC_Walker_Aux1_B"}
				}	
				{if not work "aux_turret2"
					{view start "SC_Walker_Aux2_B"}
				}	
				{if not work "gun"
					{view start "SC_Walker_Gun_B"}
				}	
				{if not work "gun1"
					{view start "SC_Walker_Gun1_B"}
				}	
				{if not work "gun2"
					{view start "SC_Walker_Gun2_B"}
				}	
				{if not work "gun3"
					{view start "SC_Walker_Gun3_B"}
				}	
				{if not work "gun4"
					{view start "SC_Walker_Gun4_B"}
				}	
				{if not work "gun5"
					{view start "SC_Walker_Gun5_B"}
				}	
				{if not work "trackleft"
					{view start "SC_Walker_Leg_L_B"}
				}
				{if not work "trackright"
					{view start "SC_Walker_Leg_R_B"}
				}
				{if not work "turret"
					; [...]
				}
				{if not work "engine"
					{view start "SC_Walker_Engine_B"}
				}
				{if not work "body"	
					{view start "SC_Walker_Body_B"}	
					("SC_FSM_Define_Update_FSM" do(add) state(DEATH))
				}
			}
		}
	}
	{on "add_overlay_sound" overload
		{link_sound "wheel_ground"		"/"}
		{link_sound "wheel_sand"		"/"}
		{link_sound "wheel_grass"		"/"}
		{link_sound "wheel_water"		"/"}
		{link_sound "wheel_puddle"		"/"}
		{link_sound "wheel_mud"			"/"}
		{link_sound "wheel_snow"		"/"}
		{link_sound "wheel_road"		"/"}
		{link_sound "wheel_rock"		"/"}
		{link_sound "wheel_wood"		"/"}
	}
	
	; <<<<	=================== SC Walker Vehicle: Overwrite from "Tank.inc" ===================	>>>>

	{on "crew_stunned"
		{tags add "SC_WK_Request_Tag_Stunned"}
	}
	{on "crew_revive" overload	
		{if not tagged "sc_fsm_tag_FSM_STATE_MELEE"	
			{tags remove "SC_WK_Request_Tag_Stunned"}
			{Call "SC_crew_revive"}
		}
	}
	{on "driver_revive" overload
		{if not tagged "sc_fsm_tag_FSM_STATE_MELEE"		
			{Call "SC_driver_revive"}
		}
	}

	; <<<<	=================== SC Walker Vehicle: Break/Repair ===================	>>>>
	
	{on repair
		{if component "body"
			{If tagged "SC_WK_Request_Tag_Is_Knocked" {view pause "SC_Walker_Body_B"} {tags remove "SC_WK_Request_Tag_Is_Knocked"} ("SC_FSM_Define_Update_FSM" do(Remove) state(DEATH))}
		else component "engine"
			{view pause "SC_Walker_Engine_B"}
		else component "turret"
			; [...]
		else component "aux_turret1"
			{view pause "SC_Walker_Aux1_B"}
		else component "aux_turret2"
			{view pause "SC_Walker_Aux2_B"}
		else component "gun"
			{view pause "SC_Walker_Gun_B"}
		else component "gun1"
			{view pause "SC_Walker_Gun1_B"}
		else component "gun2"
			{view pause "SC_Walker_Gun2_B"}
		else component "gun3"
			{view pause "SC_Walker_Gun3_B"}
		else component "gun4"
			{view pause "SC_Walker_Gun4_B"}
		else component "gun5"
			{view pause "SC_Walker_Gun5_B"}
		else component "trackleft"
			{view pause "SC_Walker_Leg_L_B"}
		else component "trackright"
			{view pause "SC_Walker_Leg_R_B"}
		}
	}
	{on break						
		{if not tagged "exploded"
			{call "SC_WK_Request_Call_Break"}
			
			{if component "body"
				{view start "SC_Walker_Body_B"}
				{spawn "metal_crush" "fx_dmg_Body1" x}
				{spawn "metal_crush" "fx_dmg_Body2" x}
				{spawn "metal_crush" "fx_dmg_Body3" x}
			else component "engine"
				{view start "SC_Walker_Engine_B"}
				{spawn "metal_crush" "fx_dmg_Engine1" x}
				{spawn "metal_crush" "fx_dmg_Engine2" x}
				{spawn "metal_crush" "fx_dmg_Engine3" x}
			else component "turret"
				; [...]
			else component "aux_turret1"
				{view start "SC_Walker_Aux1_B"}
				{spawn "metal_crush" "fx_dmg_Aux11" x}
				{spawn "metal_crush" "fx_dmg_Aux12" x}
				{spawn "metal_crush" "fx_dmg_Aux13" x}
			else component "aux_turret2"
				{view start "SC_Walker_Aux2_B"}
				{spawn "metal_crush" "fx_dmg_Aux21" x}
				{spawn "metal_crush" "fx_dmg_Aux22" x}
				{spawn "metal_crush" "fx_dmg_Aux23" x}
			else component "gun"
				{view start "SC_Walker_Gun_B"}
				{spawn "metal_crush" "fx_dmg_Gun1" x}
				{spawn "metal_crush" "fx_dmg_Gun2" x}
				{spawn "metal_crush" "fx_dmg_Gun3" x}
			else component "gun1"
				{view start "SC_Walker_Gun1_B"}
				{spawn "metal_crush" "fx_dmg_Gun21" x}
				{spawn "metal_crush" "fx_dmg_Gun22" x}
				{spawn "metal_crush" "fx_dmg_Gun23" x}
			else component "gun2"
				{view start "SC_Walker_Gun2_B"}
				{spawn "metal_crush" "fx_dmg_Gun31" x}
				{spawn "metal_crush" "fx_dmg_Gun32" x}
				{spawn "metal_crush" "fx_dmg_Gun33" x}
			else component "gun3"
				{view start "SC_Walker_Gun3_B"}
				{spawn "metal_crush" "fx_dmg_Gun41" x}
				{spawn "metal_crush" "fx_dmg_Gun42" x}
				{spawn "metal_crush" "fx_dmg_Gun43" x}
			else component "gun4"
				{view start "SC_Walker_Gun4_B"}
				{spawn "metal_crush" "fx_dmg_Gun51" x}
				{spawn "metal_crush" "fx_dmg_Gun52" x}
				{spawn "metal_crush" "fx_dmg_Gun53" x}
			else component "gun5"
				{view start "SC_Walker_Gun5_B"}
				{spawn "metal_crush" "fx_dmg_Gun51" x}
				{spawn "metal_crush" "fx_dmg_Gun52" x}
				{spawn "metal_crush" "fx_dmg_Gun53" x}
			else component "trackleft"
				{view start "SC_Walker_Leg_L_B"}
				{spawn "metal_crush" "fx_dmg_legL1" x}
				{spawn "metal_crush" "fx_dmg_legL2" x}
				{spawn "metal_crush" "fx_dmg_legL3" x}
			else component "trackright"
				{view start "SC_Walker_Leg_R_B"}
				{spawn "metal_crush" "fx_dmg_legR1" x}
				{spawn "metal_crush" "fx_dmg_legR2" x}
				{spawn "metal_crush" "fx_dmg_legR3" x}
			}
		}
	}
	
	; <<<<	=================== SC Walker Vehicle: Explosion ===================	>>>>
	
	{on destroy						
		{if not tagged "exploded"
			{call "SC_WK_Request_Call_Destroy"}
		}
	}
	{on "explosion"
		{tags add "sc_fsm_tag_FSM_STATE_DISABLED"}
		{Call "SC_FSM_Call_Exit_All_States"}
		
		{Delay 0.1	{Ani_play "death_pose"}}
		
		{view pause "SC_Walker_Body_B"}
		{view pause "SC_Walker_Engine_B"}
		{view pause "SC_Walker_Aux1_B"}
		{view pause "SC_Walker_Aux2_B"}
		{view pause "SC_Walker_Gun_B"}
		{view pause "SC_Walker_Gun1_B"}
		{view pause "SC_Walker_Gun2_B"}
		{view pause "SC_Walker_Gun3_B"}
		{view pause "SC_Walker_Gun4_B"}
		{view pause "SC_Walker_Gun5_B"}
		{view pause "SC_Walker_Leg_L_B"}
		{view pause "SC_Walker_Leg_R_B"}
	}
}	