

(Define "SC_FSM_FIGHT_LV40k_Termagaunt_Stop_All"
	{Ani_Stop "lv40k_term_melee_1"}
	{Ani_Stop "lv40k_term_melee_2"}
)

(Define "SC_FSM_FIGHT_LV40k_Termagaunt_Events"

	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "lv40k_term_melee_1"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_term_melee_2"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_FIGHT_LV40k_Termagaunt_Play_Anims"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"
		{Delay 0.2 {start_sound "weapon/shot/SC_DLC_LV40k/melee/Claws/d1" use_position}}
		
		{if rand 0.5	{ani_play "lv40k_term_melee_1" 1.2 callback}
		else			{ani_play "lv40k_term_melee_2" 1.2 callback}
		}
	}
)

