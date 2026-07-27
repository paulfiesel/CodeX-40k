
(Define "SC_FSM_COVER_LV40k_Orkboy_Stop_All"
	
	; [...] // Shared with GEM_Default
	
	{Ani_Stop "lv40k_ork-cover_from_snipe_loota"}
	{Ani_Stop "lv40k_ork-cover_from_snipe_rifle"}
)

(Define "SC_FSM_COVER_LV40k_Orkboy_Events"
	
	; [...] // Shared with GEM_Default
	
	{on animation_end "lv40k_ork-cover_from_snipe_rifle"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
	{on animation_end "lv40k_ork-cover_from_snipe_loota"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_LV40k_Orkboy_Snipe_Peek"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(callback)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-cover_from_snipe_loota) 
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(-1.0 callback)	
			pstol_anm(cover_from_stand_empty_mask)				pstol_anm1()
			rifle_anm(lv40k_ork-cover_from_snipe_rifle)			rifle_anm1()
			mgun_anm(lv40k_ork-cover_from_snipe_rifle)			mgun_anm1()
			bazooka_anm(cover_from_snipe_gun_mask)				bazooka_anm1()
			unrmd_anm(cover_from_stand_empty_mask)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_COVER_LV40k_Orkboy_Snipe_Close"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_orkz")		
			anm(lv40k_ork-cover_from_snipe_loota) 
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0 callback)	
			pstol_anm(cover_from_stand_empty_mask)				pstol_anm1()
			rifle_anm(lv40k_ork-cover_from_snipe_rifle)			rifle_anm1()
			mgun_anm(lv40k_ork-cover_from_snipe_rifle)			mgun_anm1()
			bazooka_anm(cover_from_snipe_gun_mask)				bazooka_anm1()
			unrmd_anm(cover_from_stand_empty_mask)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_COVER_LV40k_Orkboy_Squat_Hide_Peek"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(-1.0 callback)	
		pstol_anm(squat_hide_Mask)				pstol_anm1()
		rifle_anm(squat_hide_Mask)				rifle_anm1()
		mgun_anm(squat_hide_Mask)				mgun_anm1()
		bazooka_anm(squat_hide_Mask)			bazooka_anm1()
		unrmd_anm(squat_hide_Mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_LV40k_Orkboy_Squat_Hide_Close"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.0 callback)	
		pstol_anm(squat_hide_Mask)				pstol_anm1()
		rifle_anm(squat_hide_Mask)				rifle_anm1()
		mgun_anm(squat_hide_Mask)				mgun_anm1()
		bazooka_anm(squat_hide_Mask)			bazooka_anm1()
		unrmd_anm(squat_hide_Mask)				unrmd_anm1()
	)
)