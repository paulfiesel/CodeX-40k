
(Define "SC_FSM_FIGHT_LV40k_Space_Marine_Stop_All"
	{ani_stop "lv40k_sms-melee_strike_one_hand1"}
	{ani_stop "lv40k_sms-melee_strike_one_hand2"}
	
	{ani_stop "lv40k_sms-melee_strike_two_hand1"}
	{ani_stop "lv40k_sms-melee_strike_two_hand2"}
)

(Define "SC_FSM_FIGHT_LV40k_Space_Marine_Events"
	{on animation_end "lv40k_sms-melee_strike_one_hand1"	{delay 0.01	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_sms-melee_strike_one_hand2"	{delay 0.01	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	
	{on animation_end "lv40k_sms-melee_strike_two_hand1"	{delay 0.01	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
	{on animation_end "lv40k_sms-melee_strike_two_hand2"	{delay 0.01	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}}
)

; =============================================================================================================
; // FIGHT 
; =============================================================================================================

(Define "SC_FSM_FIGHT_LV40k_Space_Marine_Play_Anims"
	{if tagged "sc_h_skin_tag_fsm_anim_spacemarine"
		{if tagged "LV40k_human_tag_weapon_chainsword"
			{Delay 0.06
				{start_sound "weapon/shot/SC_DLC_LV40k/melee/Chainsword/d1/swing" use_position}
				{start_sound "weapon/shot/SC_DLC_LV40k/melee/Chainsword/d1/buzz" use_position}
			}
			{if rand 0.5			
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand1) 
				)
			else
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand2) 
				)
			}
		else tagged "LV40k_human_tag_weapon_powersword"
			{if rand 0.5			
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand1) 
				)
			else
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand2) 
				)
			}
		else tagged "LV40k_human_tag_weapon_thunderhammer"
			{if rand 0.5			
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_two_hand1) 
				)
			else
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_two_hand2) 
				)
			}
		else tagged "LV40k_human_tag_weapon_combatknife"
			{if rand 0.5			
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand1) 
				)
			else
				("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
					anm(lv40k_sms-melee_strike_one_hand2) 
				)
			}
		else
			{delay 0.01	("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))}
		}
	}
)