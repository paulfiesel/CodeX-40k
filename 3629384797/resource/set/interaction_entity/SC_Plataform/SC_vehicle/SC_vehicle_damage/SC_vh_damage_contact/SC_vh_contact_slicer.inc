
(define "SC_VH_Slicer_Damage_Define_Spawn_Event"
	{tags remove "SC_contact_grenade_cooldown"}
	{tags remove "SC_contact_LV40k_orbital"}
)

; <<<<	===================	SC Vehicle Generic: Slicer Damage Settings	===================	>>>>

(define "SC_VH_Slicer_Damage_Define_Contact"

	; {} // SLICER DAMAGE TO SHIELDS
	{if "SC_SH_Main_Flag_Is_Online"	
		
		; {} // CONTACT/GLASS GRENADES - COPYPASTE FROM "SC_inf_damage_contact.inc"
		{If effector "grenade contact"
			{if not tagged "SC_contact_grenade_cooldown"	{tags add "SC_contact_grenade_cooldown"} {delay 0.05 {tags remove "SC_contact_grenade_cooldown"}}

				{if effector "SC_big_grenade"
					; [...]
				else effector "at"
					{if effector "size3"
						{if effector "SC_grenade_plasma"
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x75"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x30"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						}
					else effector "size2"
						{if effector "SC_grenade_plasma"
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x15"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						}
					}
				else effector "ap"
					{if effector "size3"
						{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
						{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x05"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					else effector "size2"
						{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x05"} {Call "SC_SH_Main_Hits_Fx_S1"}}
						{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x02"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					}
				}
				{with_effector {stuff_detonate}}
			}
		}
		{if effector "lv40k_effects_SM_orbital_gravity"
			{if not tagged "SC_contact_LV40k_orbital"	{tags add "SC_contact_LV40k_orbital"} {delay 0.05 {tags remove "SC_contact_LV40k_orbital"}}
				{call "crew_shot_chance"} 
				{delay 2.0 "crew_shock_time"	{call "driver_revive"} {call "crew_revive"}}
			}
		}
	}
)
