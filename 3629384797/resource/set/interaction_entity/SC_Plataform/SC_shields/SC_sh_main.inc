
;	<<<< ------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Embed Shields ===============] >>
;	<<<<-------------------------------------------------------------------------------->>>>			 

; // BUZZ: shields FXs are set in "SC_skin.inc"
; // BUZZ: just a reminder, each level needs a recharge time and health depletion variable to be set!

; // BUZZ: Checking dead humans -> {if not dead
; // BUZZ: Checking destroyed/disabled vehicles -> {if not not work "body"

{"SC_prop_Shields"		;{}

	; ================================================================================================== ;
	; // Blast
	; ================================================================================================== ;

	(Define "SC_SH_Main_Define_Blast"
		{if dead
			; [...]
		else not work "body"
			; [...]
		else tagged "SC_SH_Main_Tag_Tier1"
			{if min_energy 30		{Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_shield_debug_x150"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S1"}
			else min_energy 4		{Call "SC_M_Acc_Define_Deal_shield_debug_x30"} {Call "SC_SH_Main_Hits_Fx_S1"}
			else min_energy 3		{Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S1"}
			else min_energy 2		{Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}
			}
			
			; // BUZZ: Plasma blasts
			
			{if stuff "@@"; {}
			else stuff "SC_shell_plasma size6"				{Call "SC_M_Acc_Define_Deal_shield_debug_x200"}		{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "SC_shell_plasma size5"				{Call "SC_M_Acc_Define_Deal_shield_debug_x150"}		{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "SC_shell_plasma size4"				{Call "SC_M_Acc_Define_Deal_shield_debug_x100"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size3"				{Call "SC_M_Acc_Define_Deal_shield_debug_x80"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size2"				{Call "SC_M_Acc_Define_Deal_shield_debug_x50"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size1"				{Call "SC_M_Acc_Define_Deal_shield_debug_x30"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size4"			{Call "SC_M_Acc_Define_Deal_shield_debug_x100"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size3"			{Call "SC_M_Acc_Define_Deal_shield_debug_x80"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size2"			{Call "SC_M_Acc_Define_Deal_shield_debug_x50"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			}
			
		else tagged "SC_SH_Main_Tag_Tier2"
			{if min_energy 75		{Call "SC_M_Acc_Define_Deal_shield_debug_x500"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 50		{Call "SC_M_Acc_Define_Deal_shield_debug_x400"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 40		{Call "SC_M_Acc_Define_Deal_shield_debug_x300"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 30		{Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}
			else min_energy 8		{Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S1"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}
			}
			
			; // BUZZ: Plasma blasts
			
			{if stuff "@@"; {}
			else stuff "SC_shell_plasma size6"				{Call "SC_M_Acc_Define_Deal_shield_debug_x100"}		{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "SC_shell_plasma size5"				{Call "SC_M_Acc_Define_Deal_shield_debug_x75"}		{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "SC_shell_plasma size4"				{Call "SC_M_Acc_Define_Deal_shield_debug_x50"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size3"				{Call "SC_M_Acc_Define_Deal_shield_debug_x40"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size2"				{Call "SC_M_Acc_Define_Deal_shield_debug_x25"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_shell_plasma size1"				{Call "SC_M_Acc_Define_Deal_shield_debug_x15"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size4"			{Call "SC_M_Acc_Define_Deal_shield_debug_x50"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size3"			{Call "SC_M_Acc_Define_Deal_shield_debug_x40"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_grenade_plasma size2"			{Call "SC_M_Acc_Define_Deal_shield_debug_x25"}		{Call "SC_SH_Main_Hits_Fx_S1"}
			}
		}
	)

	; ================================================================================================== ;
	; // Bullet
	; ================================================================================================== ;

	(define "SC_SH_Main_Define_Bullet"					; // BUZZ: <- Specific Bullet hits 
		{if dead
			; [...]
		else not work "body"
			; [...]
		else tagged "SC_SH_Main_Tag_Tier1"
			{if stuff "@@"; {}
			
			else stuff "bomb size3"							{Call "SC_M_Acc_Define_Deal_shield_debug_x400"}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "bomb size2"							{Call "SC_M_Acc_Define_Deal_shield_debug_x300"}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "bomb size1"							{Call "SC_M_Acc_Define_Deal_shield_debug_x200"}	{Call "SC_SH_Main_Hits_Fx_S2"}
				
			else stuff "shell size6"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x400"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x300"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size5"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x400"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x200"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size4"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x300"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x150"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size3"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x100"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size2"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x150"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x75"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size1"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x50"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
		
			else stuff "auto zenite"						{Call "SC_M_Acc_Define_Deal_shield_debug_x30"}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "he auto"							{Call "SC_M_Acc_Define_Deal_shield_debug_x20"}	{Call "SC_SH_Main_Hits_Fx_S1"}
			
			else stuff "rocketlauncher size2"				{if stuff "SC_bullet_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x100"}} {Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "rocketlauncher size1"				{if stuff "SC_bullet_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x50"}} {Call "SC_SH_Main_Hits_Fx_S2"}
			
			else stuff "SC_bullet_plasma"					{Call "SC_M_Acc_Define_Deal_shield_debug_x40"}{Call "SC_SH_Main_Hits_Fx_S1"}
			
			else stuff "SC_veryhigh_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_shield_debug_x30"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_high_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_shield_debug_x20"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_medium_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_shield_debug_x10"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_low_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_shield_debug_x05"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "SC_verylow_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_shield_debug_x02"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else											{Call "SC_M_Acc_Define_Deal_shield_debug_x01"}{Call "SC_SH_Main_Hits_Fx_S1"}
			}
		else tagged "SC_SH_Main_Tag_Tier2"
			{if stuff "@@"; {}
			
			else stuff "bomb size3"							{Call "SC_M_Acc_Define_Deal_shield_debug_x300"}{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "bomb size2"							{Call "SC_M_Acc_Define_Deal_shield_debug_x200"}{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "bomb size1"							{Call "SC_M_Acc_Define_Deal_shield_debug_x100"}{Call "SC_SH_Main_Hits_Fx_S2"}
			
			else stuff "shell size6"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x400"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x200"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size5"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x300"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x150"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size4"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x100"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size3"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x150"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x75"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size2"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x50"}}	{Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "shell size1"						{if stuff "SC_shell_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x25"}}		{Call "SC_SH_Main_Hits_Fx_S2"}
		
			else stuff "auto zenite"						{Call "SC_M_Acc_Define_Deal_shield_debug_x03"}{Call "SC_SH_Main_Hits_Fx_S1"}
			else stuff "he auto"							{Call "SC_M_Acc_Define_Deal_shield_debug_x02"}{Call "SC_SH_Main_Hits_Fx_S1"}
			
			else stuff "rocketlauncher size2"				{if stuff "SC_bullet_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x60"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x30"}} {Call "SC_SH_Main_Hits_Fx_S2"}
			else stuff "rocketlauncher size1"				{if stuff "SC_bullet_plasma" {Call "SC_M_Acc_Define_Deal_shield_debug_x30"} else {Call "SC_M_Acc_Define_Deal_shield_debug_x15"}} {Call "SC_SH_Main_Hits_Fx_S2"}
			
			else stuff "SC_bullet_plasma"					{Call "SC_M_Acc_Define_Deal_shield_debug_x05"}{Call "SC_SH_Main_Hits_Fx_S1"}
			
			else stuff "SC_veryhigh_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_shield_debug_x01"}
			else stuff "SC_high_human_armor_piercing"		{Call "SC_SH_Main_Hits_Fx_S1"} ; no damage [...]
			else stuff "SC_medium_human_armor_piercing"		{Call "SC_SH_Main_Hits_Fx_S1"} ; no damage [...]
			else stuff "SC_low_human_armor_piercing"		{Call "SC_SH_Main_Hits_Fx_S1"} ; no damage [...]
			else stuff "SC_verylow_human_armor_piercing"	{Call "SC_SH_Main_Hits_Fx_S1"} ; no damage [...]
			else											{Call "SC_SH_Main_Hits_Fx_S1"} ; no damage [...]
			}
		}
	)
	
	; ================================================================================================== ;
	; // Get EXP tags defines
	; ================================================================================================== ;

	("SC_M_Acc_Define_Add_Calls" 
		tag(shield_debug) 
	)
	{on "SC_M_Acc_Define_Deal_shield_debug_x01"
		{if tagged "SC_SH_Main_Tag_Level1"		("SC_M_Acc_Define_Counter_100" tag(shield_debug) do(SC_SH_Main_Depleted))
		else tagged "SC_SH_Main_Tag_Level2"		("SC_M_Acc_Define_Counter_200" tag(shield_debug) do(SC_SH_Main_Depleted))
		else tagged "SC_SH_Main_Tag_Level3"		("SC_M_Acc_Define_Counter_250" tag(shield_debug) do(SC_SH_Main_Depleted))
		else tagged "SC_SH_Main_Tag_Level4"		("SC_M_Acc_Define_Counter_300" tag(shield_debug) do(SC_SH_Main_Depleted))
		else tagged "SC_SH_Main_Tag_Level5"		("SC_M_Acc_Define_Counter_400" tag(shield_debug) do(SC_SH_Main_Depleted))
		else tagged "SC_SH_Main_Tag_Level6"		("SC_M_Acc_Define_Counter_500" tag(shield_debug) do(SC_SH_Main_Depleted))
		}
	}

	; ================================================================================================== ;

	{on Spawn		
		{set "SC_SH_Main_Flag_Is_Offline" 0}
		{set "SC_SH_Main_Flag_Is_Online" 0}
		{set "SC_SH_Main_Flag_Active" 0}
		
		; // Tier 1: Is meant for human/infantry shields.
		; // Tier 2: Is meant for Vehicles (some of those cannot be pierced by smallarms fire)
		; // Tier 3: Is meant for Titans.
		
		{tags remove "SC_SH_Main_Tag_Tier1"}
		{tags remove "SC_SH_Main_Tag_Tier2"}
		
		{tags remove "SC_SH_Main_Tag_Level1"}
		{tags remove "SC_SH_Main_Tag_Level2"}
		{tags remove "SC_SH_Main_Tag_Level3"}
		{tags remove "SC_SH_Main_Tag_Level4"}
		{tags remove "SC_SH_Main_Tag_Level5"}
		{tags remove "SC_SH_Main_Tag_Level6"}

		{view stop "SC_SH_Main_FX_Shields_Online"}
		{view stop "SC_SH_Main_FX_Shields_Depleted"}
		{view stop "SC_SH_Main_FX_Shields_Recharge"}
		
		{Call "SC_TP_EXP_Call_Clear_Tags_shield_debug"}

		(Define "SC_SH_Main_Define_Add_Shields"
			{set "SC_SH_Main_Flag_Active" 1}
			{tags add "SC_SH_Main_Tag_Tier%tier"}
			{tags add "SC_SH_Main_Tag_Level%lvl"}
			{Call "SC_SH_Main_Online_FX"}
		)
		
		(Define "SC_SH_Main_Define_Add_Shields_Attempt"
			{if "SC_SH_Main_Flag_Active"
				; [...]
			else not work "body"
				; [...]
			else dead	
				; [...]
			else
				{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"
					{add_view "fx_shields_online_zoanthrope" 		"SC_SH_Main_FX_Shields_Online" "#zth_rig-bip01_spine1"}
					{add_view "fx_shields_offline_zoanthrope" 		"SC_SH_Main_FX_Shields_Depleted" "#zth_rig-bip01_spine1"}
					{add_view "fx_shields_recharge_zoanthrope" 		"SC_SH_Main_FX_Shields_Recharge" "#zth_rig-bip01_spine1"}
					("SC_SH_Main_Define_Add_Shields" tier(1) lvl(3))
				}
				{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"
					{add_view "fx_shields_online_weirdboy" 			"SC_SH_Main_FX_Shields_Online" "#ork_rig-pelvis"}
					{add_view "fx_shields_offline_weirdboy" 		"SC_SH_Main_FX_Shields_Depleted" "#ork_rig-pelvis"}
					{add_view "fx_shields_recharge_weirdboy" 		"SC_SH_Main_FX_Shields_Recharge" "#ork_rig-pelvis"}
					("SC_SH_Main_Define_Add_Shields" tier(1) lvl(3))
				}
				{if tagged "sc_h_skin_Tag_lv40k_spacemarine_chaplain"
					{add_view "fx_shields_online_chaplain" 			"SC_SH_Main_FX_Shields_Online" 	"#SM_RIG-Pelvis"}
					{add_view "fx_shields_offline_terminator" 		"SC_SH_Main_FX_Shields_Depleted" "#SM_RIG-Pelvis"}
					{add_view "fx_shields_recharge_terminator" 		"SC_SH_Main_FX_Shields_Recharge" "#SM_RIG-Pelvis"}
					("SC_SH_Main_Define_Add_Shields" tier(1) lvl(3))
				}
				{if prop "LV40k_DLC_prop_troopers_SM_Terminators"
					{add_view "fx_shields_online_terminator" 		"SC_SH_Main_FX_Shields_Online" "fx_generic_body"}
					{add_view "fx_shields_offline_terminator" 		"SC_SH_Main_FX_Shields_Depleted" "fx_generic_body"}
					{add_view "fx_shields_recharge_terminator" 		"SC_SH_Main_FX_Shields_Recharge" "fx_generic_body"}
					("SC_SH_Main_Define_Add_Shields" tier(1) lvl(6))
				}
				{if prop "LV40k_DLC_prop_troopers_Tyr_Swarmlord"
					{add_view "fx_shields_online_swarmlord" 		"SC_SH_Main_FX_Shields_Online" "fx_generic_body"}
					{add_view "fx_shields_offline_swarmlord" 		"SC_SH_Main_FX_Shields_Depleted" "fx_generic_body"}
					{add_view "fx_shields_recharge_swarmlord" 		"SC_SH_Main_FX_Shields_Recharge" "fx_generic_body"}
					("SC_SH_Main_Define_Add_Shields" tier(2) lvl(6))
				}
				{if prop "LV40k_DLC_prop_troopers_Tyr_Hivetyrant"
					{add_view "fx_shields_online_tyrant" 			"SC_SH_Main_FX_Shields_Online" "fx_generic_body"}
					{add_view "fx_shields_offline_tyrant" 			"SC_SH_Main_FX_Shields_Depleted" "fx_generic_body"}
					{add_view "fx_shields_recharge_tyrant" 			"SC_SH_Main_FX_Shields_Recharge" "fx_generic_body"}
					("SC_SH_Main_Define_Add_Shields" tier(2) lvl(3))
				}
				{if tagged "morkanaut"
					{add_view "fx_shields_online_morkanaut"			"SC_SH_Main_FX_Shields_Online" "Kustom_Force_Field"}
					{add_view "plasma_smoke_gre" 					"SC_SH_Main_FX_Shields_Online" "fxlightKustomField1"}
					{add_view "plasma_smoke_gre" 					"SC_SH_Main_FX_Shields_Online" "fxlightKustomField2"}
					{add_view "plasma_smoke_gre" 					"SC_SH_Main_FX_Shields_Online" "fxlightKustomField3"}
					
					{add_view "fx_shields_offline_morkanaut" 		"SC_SH_Main_FX_Shields_Depleted" "Kustom_Force_Field"}
					{add_view "fx_shields_recharge_morkanaut" 		"SC_SH_Main_FX_Shields_Recharge" "Basis"}
					("SC_SH_Main_Define_Add_Shields" tier(2) lvl(3))
				}
				{if tagged "knight_questoris"
					{add_view "fx_shields_online_knight"			"SC_SH_Main_FX_Shields_Online"	 "DT_C_Hips"}
					{add_view "fx_shields_offline_knight" 			"SC_SH_Main_FX_Shields_Depleted" "DT_C_Hips"}
					{add_view "fx_shields_recharge_knight" 			"SC_SH_Main_FX_Shields_Recharge" "Basis"}
					{link_sound "SC_SH_Main_Sound_Shields_Depleted" "SC_Plataform/SC_fx/sc_misc_s4/scarab_alarm"}
					("SC_SH_Main_Define_Add_Shields" tier(2) lvl(6))
				}
			}
		)
		
		{Delay 0.1 ("SC_SH_Main_Define_Add_Shields_Attempt")}
		
		; // BUZZ: humanskins require additional calls because they receive their tag through an inventory item...
		{if prop "human"
			{Delay 0.5 ("SC_SH_Main_Define_Add_Shields_Attempt")}
			{Delay 1.0 ("SC_SH_Main_Define_Add_Shields_Attempt")}
			{Delay 3.0 ("SC_SH_Main_Define_Add_Shields_Attempt")}
			{Delay 5.0 ("SC_SH_Main_Define_Add_Shields_Attempt")}
			{Delay 10.0 ("SC_SH_Main_Define_Add_Shields_Attempt")}
		}
	}
	
	; <<<<	===================	SC Shields: FX ===================	>>>>
	
	{On "SC_SH_Main_Depletion_Fx"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"		{spawn "fx_shields_depletion_zoanthrope" "#zth_rig-bip01_spine1" x}}
		{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"				{spawn "fx_shields_depletion_weirdboy" "#ork_rig-pelvis" x}}
		{if tagged "sc_h_skin_Tag_lv40k_spacemarine_chaplain"			{spawn "fx_shields_depletion_terminator" "#SM_RIG-Pelvis"}}
		{if prop "LV40k_DLC_prop_troopers_SM_Terminators"				{spawn "fx_shields_depletion_terminator" "fx_generic_body"}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Hivetyrant"				{spawn "fx_shields_depletion_hivetyrant" "fx_generic_body" x}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Swarmlord"				{spawn "fx_shields_depletion_swarmlord" "fx_generic_body" x}}
		{if tagged "morkanaut"											{spawn "fx_shields_depletion_morkanaut" "Kustom_Force_Field" x}}
		{if tagged "knight_questoris"									{spawn "fx_shields_depletion_knight" "DT_C_Hips" x}}
		
		; // PART OF WEIRDBOY SPECIAL ABILITY, SEE IN "INFANTRY GENERIC -> SC_ABILITIES"
		{if tagged "SC_AB_Tag_Ability_Weirdboy_Shields"					
			{if prop "human"	{spawn "fx_shields_depletion_weirdboy" "body" x}
			else				{spawn "fx_shields_depletion_weirdboy" "fx_generic_body" x}}
		}
	}
	{On "SC_SH_Main_Hits_Fx_S1"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"		{spawn "fx_shields_hit_s1_zoanthrope"}}
		{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"				{spawn "fx_shields_hit_s1_weirdboy"}}
		{if tagged "sc_h_skin_Tag_lv40k_spacemarine_chaplain"			{spawn "fx_shields_hit_s1_terminator"}}
		{if prop "LV40k_DLC_prop_troopers_SM_Terminators"				{spawn "fx_shields_hit_s1_terminator"}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Hivetyrant"				{spawn "fx_shields_hit_s1_tyrant"}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Swarmlord"				{spawn "fx_shields_hit_s1_swarmlord"}}
		{if tagged "morkanaut"											{spawn "fx_shields_hit_s1_morkanaut"}}
		{if tagged "knight_questoris"									{spawn "fx_shields_hit_s1_knight"}}
		
		; // PART OF WEIRDBOY SPECIAL ABILITY, SEE IN "INFANTRY GENERIC -> SC_ABILITIES"
		{if tagged "SC_AB_Tag_Ability_Weirdboy_Shields"					
			{if prop "human"	{spawn "fx_shields_hit_s1_weirdboy"}
			else				{spawn "fx_shields_hit_s1_weirdboy"}}
		}
	}
	{On "SC_SH_Main_Hits_Fx_S2"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"		{spawn "fx_shields_hit_s2_zoanthrope"}}
		{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"				{spawn "fx_shields_hit_s2_weirdboy"}}
		{if tagged "sc_h_skin_Tag_lv40k_spacemarine_chaplain"			{spawn "fx_shields_hit_s2_terminator"}}
		{if prop "LV40k_DLC_prop_troopers_SM_Terminators"				{spawn "fx_shields_hit_s2_terminator"}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Hivetyrant"				{spawn "fx_shields_hit_s2_tyrant"}}
		{if prop "LV40k_DLC_prop_troopers_Tyr_Swarmlord"				{spawn "fx_shields_hit_s2_swarmlord"}}
		{if tagged "morkanaut"											{spawn "fx_shields_hit_s2_morkanaut"}}
		{if tagged "knight_questoris"									{spawn "fx_shields_hit_s2_knight"}}
		
		; // PART OF WEIRDBOY SPECIAL ABILITY, SEE IN "INFANTRY GENERIC -> SC_ABILITIES"
		{if tagged "SC_AB_Tag_Ability_Weirdboy_Shields"					
			{if prop "human"	{spawn "fx_shields_hit_s2_weirdboy"}
			else				{spawn "fx_shields_hit_s2_weirdboy"}}
		}
	}
	{On "SC_SH_Main_Online_FX"
		{Call "SC_TP_EXP_Call_Clear_Tags_shield_debug"}
		{set "SC_SH_Main_Flag_Is_Offline" 0}
		{set "SC_SH_Main_Flag_Is_Online" 1}		
		{view start "SC_SH_Main_FX_Shields_Online"}	
	}
	
	; <<<<	===================	SC Shields: Damage Settings ===================	>>>>
	
	(define "SC_SH_Main_Recharge_And_Reset"
		{if not "SC_SH_Main_Flag_No_Recharge"				;} // BUZZ: <- use this tag for shields that are one-time only and don't recharge.
			{view pause "SC_SH_Main_FX_Shields_Recharge"}	
			{kill_delay "sc_shields_delay_time_to_recharge"}	
			{kill_delay "sc_shields_delay_time_to_charge_up"}	
			{call "SC_SH_Main_Recharge_Up"}
		}
	)
	{On bullet_hit	
		{if "SC_SH_Main_Flag_Active" 
			{if not volume "SC_volume_armored_shield_no_damage"
				{if "SC_SH_Main_Flag_Is_Online" {bullet_detonate} ("SC_SH_Main_Define_Bullet")}
				("SC_SH_Main_Recharge_And_Reset")
			}
		}
	}
	{On "SC_SH_Main_Call_Blast"
		{if "SC_SH_Main_Flag_Active" 
			{if not volume "SC_volume_armored_shield_no_damage"
				{if "SC_SH_Main_Flag_Is_Online"	
					{if not tagged "SC_SH_Main_Tag_Blasted" ("SC_SH_Main_Define_Blast")}
				}
				("SC_SH_Main_Recharge_And_Reset")
			}
		}
	}
	{On contact		
		{if "SC_SH_Main_Flag_Active" 
			{if not volume "SC_volume_armored_shield_no_damage"			; {}
			
				; // contact damage to shields is handled within "infantry_generic" and "veh_contact_effects" contact settings.
				
				{if effector "SC_prop_contactor_bullet"		("SC_SH_Main_Recharge_And_Reset")
				else effector "SC_prop_contactor_melee"		("SC_SH_Main_Recharge_And_Reset")
				}
			}
		}
	}
	
	; <<<<	===================	SC Shields: Recharge Time ===================	>>>>
	
	; // Time to recharge - Time of Animation playing during recharge before the shield is back online again.
	; // time to start recharging - The delay before the shield starts recharging
	
    (define "SC_SH_Main_Set_Recharge"
		{delay %time_to_start_recharging "sc_shields_delay_time_to_recharge"	;} // BUZZ: <- Time before the shield can start recharging
			{if not dead 		
				{view start "SC_SH_Main_FX_Shields_Recharge"}		
				{delay %time_to_recharge "sc_shields_delay_time_to_charge_up"	;} // BUZZ: <- Animation Transition delay before the shield is fully charged (Can be canceled on damage!)
					{if not dead 	
						{Call "SC_SH_Main_Online_FX"}	
						{view pause "SC_SH_Main_FX_Shields_Recharge"}	
						{view pause "SC_SH_Main_FX_Shields_Depleted"}	
						{stop_sound "SC_SH_Main_Sound_Shields_Depleted"}	
					}
				}					
			}
		}
	)
    {on "SC_SH_Main_Recharge_Up"		
		{if not dead 
			{if "SC_SH_Main_Flag_Active"
				{if tagged "SC_SH_Main_Tag_Level1"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(10.0) time_to_recharge(2.0))		; // <- consider 2+ seconds
				else tagged "SC_SH_Main_Tag_Level2"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(14.0) time_to_recharge(2.5))
				else tagged "SC_SH_Main_Tag_Level3"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(18.0) time_to_recharge(3.0))
				else tagged "SC_SH_Main_Tag_Level4"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(24.0) time_to_recharge(3.5))
				else tagged "SC_SH_Main_Tag_Level5"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(30.0) time_to_recharge(4.0))
				else tagged "SC_SH_Main_Tag_Level6"		("SC_SH_Main_Set_Recharge" time_to_start_recharging(36.0) time_to_recharge(5.0))
				}
			}
		}
   	} 	
	
	; <<<<	===================	SC Shields: Death/Depletion ===================	>>>>
	
	{on "SC_SH_Main_Depleted"    	
		{if "SC_SH_Main_Flag_Is_Online"		
		
			{call "SC_SH_Main_Depletion_Fx"}	
			
			; // PART OF WEIRDBOY SPECIAL ABILITY, SEE IN "INFANTRY GENERIC -> SC_ABILITIES"
			{if tagged "SC_AB_Tag_Ability_Weirdboy_Shields"		
				{set "SC_SH_Main_Flag_Active" 0}
				{tags remove "SC_SH_Main_Tag_Tier1"}
				{tags remove "SC_SH_Main_Tag_Level1"}
				
				; // BUZZ: Force refresh shield checker once its downed.
				{kill_delay "SC_AB_Delay_Ability_Weirdboy_Cooldown"}
				{tags remove "SC_AB_Tag_Ability_Weirdboy_Shields"}
			}
			
			{call "SC_TP_EXP_Call_Clear_Tags_shield_debug"}
			{view pause "SC_SH_Main_FX_Shields_Online"}	
			{set "SC_SH_Main_Flag_Is_Online" 0}	
			
			{if "SC_SH_Main_Flag_Active"
				{set "SC_SH_Main_Flag_Is_Offline" 1}		
				
				{if dead 
					; [...]
				else not work "body"
					; [...]
				else
					{view start "SC_SH_Main_FX_Shields_Depleted"}			
					{Play_sound "SC_SH_Main_Sound_Shields_Depleted" 1}	
				}
				("SC_SH_Main_Recharge_And_Reset")
			}
		}
	}
	
	; <<<<	===================	SC Shields: Infantry Interaction ===================	>>>>
	
	{on "die"
		{if "SC_SH_Main_Flag_Active"
			{call "SC_SH_Main_Depleted"}	; // BUZZ: <- In case shields are still up.
	
			{kill_delay "sc_shields_delay_time_to_recharge"}	
			{kill_delay "sc_shields_delay_time_to_charge_up"}	
			
			{view pause "SC_SH_Main_FX_Shields_Depleted"}			
			{stop_sound "SC_SH_Main_Sound_Shields_Depleted" 1}	
		}		
	}
	
	; <<<<	===================	SC Shields: Vehicle Interaction ===================	>>>>
	
	{on destroy
		{if "SC_SH_Main_Flag_Active"
			{if component "body"
				{call "SC_SH_Main_Depleted"}	; // BUZZ: <- In case shields are still up.
		
				{kill_delay "sc_shields_delay_time_to_recharge"}	
				{kill_delay "sc_shields_delay_time_to_charge_up"}	
				
				{view pause "SC_SH_Main_FX_Shields_Depleted"}			
				{stop_sound "SC_SH_Main_Sound_Shields_Depleted" 1}	
			}
		}			
	}
	{on break
		{if "SC_SH_Main_Flag_Active"
			{if component "body"
				{call "SC_SH_Main_Depleted"}	; // BUZZ: <- In case shields are still up.
			
				{kill_delay "sc_shields_delay_time_to_recharge"}	
				{kill_delay "sc_shields_delay_time_to_charge_up"}	
				
				{view pause "SC_SH_Main_FX_Shields_Depleted"}			
				{stop_sound "SC_SH_Main_Sound_Shields_Depleted" 1}	
			}
		}		
	}
}