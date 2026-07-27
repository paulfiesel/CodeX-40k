
(Include "Animation/GEM_Default/Fight.inc")
(Include "Animation/LV40k_Space_Marines/Fight.inc")
(Include "Animation/LV40k_Ravener/Fight.inc")
(Include "Animation/LV40k_Warrior/Fight.inc")
(Include "Animation/LV40k_Termagaunt/Fight.inc")

;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]
	
;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_FIGHT_Define_Enter"
	{Delay 0.1 "FSM_FIGHT_DELAY"
;		{Chassis_work 0}
		("SC_H_Request_Define_Animations_Block_IKs")
	}
)

(define "SC_FSM_FIGHT_Define_Event"
	{talk "melee_strike"}	
	
	("SC_FSM_FIGHT_GEM_Default_Play_Anims")
	("SC_FSM_FIGHT_LV40k_Space_Marine_Play_Anims")
	("SC_FSM_FIGHT_LV40k_Ravener_Play_Anims")
	("SC_FSM_FIGHT_LV40k_Warrior_Play_Anims")
	("SC_FSM_FIGHT_LV40k_Termagaunt_Play_Anims")
)

(define "SC_FSM_FIGHT_Define_Exit"
	{Kill_Delay "FSM_FIGHT_DELAY"}
	
;	{Chassis_work 1}
	
	("SC_H_Request_Define_Animations_Enable_IKs")

	("SC_FSM_FIGHT_GEM_Default_Stop_All")
	("SC_FSM_FIGHT_LV40k_Space_Marine_Stop_All")
	("SC_FSM_FIGHT_LV40k_Ravener_Stop_All")
	("SC_FSM_FIGHT_LV40k_Warrior_Stop_All")
	("SC_FSM_FIGHT_LV40k_Termagaunt_Stop_All")
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

("SC_FSM_FIGHT_GEM_Default_Events")
("SC_FSM_FIGHT_LV40k_Space_Marine_Events")
("SC_FSM_FIGHT_LV40k_Ravener_Events")
("SC_FSM_FIGHT_LV40k_Warrior_Events")
("SC_FSM_FIGHT_LV40k_Termagaunt_Events")

{on animation_event "sc_spawn_melee_ctc" sync	
	{if tagged "@@@@@@@@@@############"		; {}
	
	; // TYRANIDS
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
		{if tagged "LV40k_human_tag_weapon_tyr_bonesword"
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_bonesword) where(spawn_melee_ctc))
		else
			("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_talons) where(spawn_melee_ctc))
		}
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_gaunt) where(spawn_melee_ctc))
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_tyr_warrior_talons) where(spawn_melee_ctc))
		
	; // SPACE MARINES	
	else tagged "LV40k_human_tag_weapon_chainsword"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_Chainsword) where(spawn_melee_ctc))	{spawn "ex_autocan_air" "visor" x}
	else tagged "LV40k_human_tag_weapon_combatknife"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_Chainsword) where(spawn_melee_ctc))	
	else tagged "LV40k_human_tag_weapon_powersword"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_powersword) where(spawn_melee_ctc))	{spawn "moln_hit_sm" "visor" x}
	else tagged "LV40k_human_tag_weapon_thunderhammer"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_thunderhammer) where(spawn_melee_ctc))	{spawn "melee_hit_thunder_hammer" "visor" x}
	else tagged "LV40k_human_tag_weapon_powerfist"
		("SC_Misc_Melee_Define_Spawn_CTC" c(lv40k_melee_sm_powerfist) where(spawn_melee_ctc))	{spawn "moln_hit_sm" "visor" x}
	}
}