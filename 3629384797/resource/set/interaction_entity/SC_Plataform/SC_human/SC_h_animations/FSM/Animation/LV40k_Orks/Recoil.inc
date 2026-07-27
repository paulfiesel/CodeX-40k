
(Define "SC_FSM_RECOIL_LV40k_Orkboy_Stop_All"
	{Ani_Stop "lv40k_lootaboy_beamy_fire"}
	
)

(Define "SC_FSM_RECOIL_LV40k_Orkboy_Events"
	{on animation_end "lv40k_lootaboy_beamy_fire"	("SC_FSM_RECOIL_Define_Animation_End")}
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_RECOIL_LV40k_Orkboy_Play_Standing"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		{if tagged "lv40k_deffgun_beamy"
			{Ani_Play "lv40k_lootaboy_beamy_fire" 1.6 callback}
		else
			{Ani_Play "SC_no_recoil"}
		}
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.5 callback)	
			pstol_anm(stand_fire_pistol_down_mask)			pstol_anm1(stand_fire_pistol_up_mask)
			rifle_anm(stand_fire_mgun_down_mask) 			rifle_anm1(stand_fire_mgun_up_mask)
			mgun_anm(stand_fire_mgun_down_mask)				mgun_anm1(stand_fire_mgun_up_mask)
			bazooka_anm()									bazooka_anm1()
			unrmd_anm()										unrmd_anm1()
		)
	}
)

(Define "SC_FSM_RECOIL_LV40k_Orkboy_Play_Squatting"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		{Ani_Play "SC_no_recoil"}
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.5 callback)	
			pstol_anm(squat_fire_pistol_mask)				pstol_anm1()
			rifle_anm(squat_fire_mgun_mask)					rifle_anm1()
			mgun_anm(squat_fire_mgun_mask)					mgun_anm1()
			bazooka_anm()									bazooka_anm1()
			unrmd_anm()										unrmd_anm1()
		)
	}
)

(Define "SC_FSM_RECOIL_LV40k_Orkboy_Play_Lying"
	{if tagged "lv40k_human_tag_weapon_deffgun"
		{Ani_Play "SC_no_recoil"}
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_orkz")			anm_args(1.5 callback)	
			pstol_anm(lie_fire_pistol_mask)					pstol_anm1()
			rifle_anm(lie_fire_rifle_mask)					rifle_anm1()
			mgun_anm(lie_fire_gun_mask)						mgun_anm1()
			bazooka_anm(lie_fire_bazooka_mask)				bazooka_anm1()
			unrmd_anm()										unrmd_anm1()
		)
	}
)