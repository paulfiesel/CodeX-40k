
(Define "SC_FSM_FIGHT_LV40k_Ravener_Stop_All"
	{Ani_Stop "lv40k_rvn_melee1"}
	{Ani_Stop "lv40k_rvn_melee2"}
	{Ani_Stop "lv40k_rvn_melee3"}
	{Ani_Stop "lv40k_rvn_melee4"}
)

(Define "SC_FSM_FIGHT_LV40k_Ravener_Events"

	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "lv40k_rvn_melee1"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_rvn_melee2"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_rvn_melee3"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_rvn_melee4"	{delay 0.01 ""	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_FIGHT_LV40k_Ravener_Play_Anims"
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
		{Delay 0.2 {start_sound "weapon/shot/SC_DLC_LV40k/melee/Claws/d1" use_position}}
		
		{if rand 0.3	{ani_play "lv40k_rvn_melee1" 1.4 callback}
		else rand 0.2	{ani_play "lv40k_rvn_melee2" 1.5 callback}
		else rand 0.2	{ani_play "lv40k_rvn_melee2" 1.7 callback}
		else			{ani_play "lv40k_rvn_melee2" 1.35 callback}
		}
	}
)

