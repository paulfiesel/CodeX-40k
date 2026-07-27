
(Define "SC_FSM_COVER_GEM_Default_Stop_All"
	{Ani_Stop "cover_from_snipe_gun_mask"}
	{Ani_Stop "cover_from_stand_empty_mask"}
	
	{Ani_Stop "squat_hide_Mask"}
	{Ani_Stop "squat_uncover_Mask"}
)

(Define "SC_FSM_COVER_GEM_Default_Events"
	; // WILL CRASH WITHOUT THE DELAY!
		
	{on animation_end "cover_from_snipe_gun_mask"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
	{on animation_end "cover_from_stand_empty_mask"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
	{on animation_end "squat_hide_Mask"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_GEM_Default_Snipe_Peek"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(-1.0 callback)	
		pstol_anm(cover_from_stand_empty_mask)			pstol_anm1()
		rifle_anm(cover_from_snipe_gun_mask)			rifle_anm1()
		mgun_anm(cover_from_snipe_gun_mask)				mgun_anm1()
		bazooka_anm(cover_from_snipe_gun_mask)			bazooka_anm1()
		unrmd_anm(cover_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_GEM_Default_Snipe_Close"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0 callback)	
		pstol_anm(cover_from_stand_empty_mask)			pstol_anm1()
		rifle_anm(cover_from_snipe_gun_mask)			rifle_anm1()
		mgun_anm(cover_from_snipe_gun_mask)				mgun_anm1()
		bazooka_anm(cover_from_snipe_gun_mask)			bazooka_anm1()
		unrmd_anm(cover_from_stand_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_GEM_Default_Squat_Hide_Peek"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(-1.0 callback)	
		pstol_anm()										pstol_anm1()
		rifle_anm()										rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm()										unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_GEM_Default_Squat_Hide_Close"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_default")		anm_args(1.0 callback)	
		pstol_anm(squat_hide_Mask)						pstol_anm1()
		rifle_anm(squat_hide_Mask)						rifle_anm1()
		mgun_anm(squat_hide_Mask)						mgun_anm1()
		bazooka_anm(squat_hide_Mask)					bazooka_anm1()
		unrmd_anm(squat_hide_Mask)						unrmd_anm1()
	)
)