
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_TP_Request_Call_Anm_LV40k_Hiveguard_Shieldwall" sync 
	{if not dead 
		{tags add "SC_TP_Request_Tag_SPECIAL_LV40k_Hiveguard_Shieldwall"}
		
		("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))
	}
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Hiveguard_Stop_Animations"
	{Ani_Stop "tyr_ability_enter"}
	{Ani_Stop "tyr_ability_idle"}

	{Tags remove "SC_AB_Tag_Ability_Chek_Shieldwall"}
	{Kill_Delay "SC_FSM_SPECIAL_Delay_Shieldwall_Heal"}
	
	{View pause "FX_Shieldwall"}
)

(Define "SC_FSM_SPECIAL_Define_LV40k_Hiveguard_Shieldwall"
	("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
	("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
	("SC_TP_Main_Define_IKs_Disable")
	("SC_TP_Main_Define_Chassis_Disable")
	
	{ani_play "tyr_ability_enter" callback}
)

{on animation_end "tyr_ability_enter" sync
	{ani_play "tyr_ability_idle" loop}
	{View start "FX_Shieldwall"}
	
	{Delay 20.0 "SC_FSM_SPECIAL_Delay_Shieldwall_Heal"
		{If not dead
			{If tagged "RANGED"
				("SC_INF_Define_Heal" c(20000))
			else
				("SC_INF_Define_Heal" c(40000))
			}
		}
		{View pause "FX_Shieldwall"}
		
		{Ani_Stop "tyr_ability_idle"}
		{ani_play "tyr_ability_exit" -1 callback}
	}
}

{on animation_end "tyr_ability_exit"
	{Damage_Report "basis"	"<f(impact)><c(00FFFF)>SHIELDWALL COMPLETE!"}
	
	; // TAG FROM SC ABILITY
	{Tags add "SC_AB_Tag_Ability_Shieldwall_Cooldown"}	{Delay 600 "SC_AB_Delay_Ability_Shieldwall_Cooldown" {Tags remove "SC_AB_Tag_Ability_Shieldwall_Cooldown"}}
	
	{Delay 0.1 
		("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
		("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
		("SC_TP_Main_Define_IKs_Disable")
		("SC_TP_Main_Define_Chassis_Disable")
		
		{Tags remove "SC_AB_Tag_Ability_Chek_Shieldwall"}
		{tags remove "SC_TP_Request_Tag_SPECIAL_LV40k_Hiveguard_Shieldwall"}
		
		("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
	}
}

