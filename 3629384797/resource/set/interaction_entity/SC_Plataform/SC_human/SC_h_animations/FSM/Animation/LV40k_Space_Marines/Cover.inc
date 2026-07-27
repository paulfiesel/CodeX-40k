
(Define "SC_FSM_COVER_LV40k_Space_Marine_Stop_All"
	{Ani_Stop "lv40k_sms-snipe_cover_h_bolter"}
	{Ani_Stop "lv40k_sms-snipe_cover_bolter"}
	{Ani_Stop "lv40k_sms-snipe_cover_plasmacannon"}
	{Ani_Stop "lv40k_sms-snipe_cover_lascannon"}
)

(Define "SC_FSM_COVER_LV40k_Space_Marine_Events"

	; // WILL CRASH WITHOUT THE DELAY!		
	{on animation_end "lv40k_sms-snipe_cover_h_bolter"		{delay 0.01 ""("SC_FSM_Define_Update_FSM" do(remove) state(COVER))}}
	{on animation_end "lv40k_sms-snipe_cover_bolter"		{delay 0.01 ""("SC_FSM_Define_Update_FSM" do(remove) state(COVER))}}
	{on animation_end "lv40k_sms-snipe_cover_lascannon"		{delay 0.01 ""("SC_FSM_Define_Update_FSM" do(remove) state(COVER))}}
	{on animation_end "lv40k_sms-snipe_cover_plasmacannon"	{delay 0.01 ""("SC_FSM_Define_Update_FSM" do(remove) state(COVER))}}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_LV40k_Space_Marine_Snipe_Peek"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_h_bolter) 
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	
			anm(lv40k_sms-snipe_cover_lascannon) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_plasmacannon) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_plasmacannon) 
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(-1.0 callback)	
			pstol_anm(cover_from_stand_empty_mask)				pstol_anm1()
			rifle_anm(lv40k_sms-snipe_cover_bolter)				rifle_anm1()
			mgun_anm(lv40k_sms-snipe_cover_bolter)				mgun_anm1()
			bazooka_anm(cover_from_snipe_gun_mask)				bazooka_anm1()
			unrmd_anm(cover_from_stand_empty_mask)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_COVER_LV40k_Space_Marine_Snipe_Close"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_h_bolter) 
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	
			anm(lv40k_sms-snipe_cover_lascannon) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_plasmacannon) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(-1.0 callback)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-snipe_cover_plasmacannon) 
		)
	else
		("SC_H_Request_Define_Animation_State"					chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")			anm_args(1.0 callback)	
			pstol_anm(cover_from_stand_empty_mask)				pstol_anm1()
			rifle_anm(lv40k_sms-snipe_cover_bolter)				rifle_anm1()
			mgun_anm(lv40k_sms-snipe_cover_bolter)				mgun_anm1()
			bazooka_anm(cover_from_snipe_gun_mask)				bazooka_anm1()
			unrmd_anm(cover_from_stand_empty_mask)				unrmd_anm1()
		)
	}
)

(Define "SC_FSM_COVER_LV40k_Space_Marine_Squat_Hide_Peek"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(-1.0 callback)	
		pstol_anm(squat_hide_Mask)				pstol_anm1()
		rifle_anm(squat_hide_Mask)				rifle_anm1()
		mgun_anm(squat_hide_Mask)				mgun_anm1()
		bazooka_anm(squat_hide_Mask)			bazooka_anm1()
		unrmd_anm(squat_hide_Mask)				unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_LV40k_Space_Marine_Squat_Hide_Close"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.0 callback)	
		pstol_anm(squat_hide_Mask)				pstol_anm1()
		rifle_anm(squat_hide_Mask)				rifle_anm1()
		mgun_anm(squat_hide_Mask)				mgun_anm1()
		bazooka_anm(squat_hide_Mask)			bazooka_anm1()
		unrmd_anm(squat_hide_Mask)				unrmd_anm1()
	)
)