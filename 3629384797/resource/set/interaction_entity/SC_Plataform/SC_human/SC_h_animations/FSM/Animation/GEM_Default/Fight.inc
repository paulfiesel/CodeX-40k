
(Define "SC_FSM_FIGHT_GEM_Default_Stop_All"
	{Ani_Stop "fight_hit_left_hand_mask"}
	{Ani_Stop "fight_hit_right_hand_mask"}
)

(Define "SC_FSM_FIGHT_GEM_Default_Events"

	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "fight_hit_left_hand_mask"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))
		}
	}
	{on animation_end "fight_hit_right_hand_mask"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(FIGHT))
		}
	}
)

; =============================================================================================================
; // STANCE 
; =============================================================================================================

(Define "SC_FSM_FIGHT_GEM_Default_Play_Anims"
	{if tagged "sc_h_skin_tag_skeleton_gem_default"
		{if rand 0.5	{ani_play "fight_hit_left_hand_mask" callback}
		else			{ani_play "fight_hit_right_hand_mask" callback}
		}
	}
)

