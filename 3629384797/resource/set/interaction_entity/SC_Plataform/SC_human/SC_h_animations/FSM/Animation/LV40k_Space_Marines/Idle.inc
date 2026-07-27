
(Define "SC_FSM_IDLE_LV40k_Space_Marine_Stop_All"
	{Kill_delay "Space_Marine_Pose_fix"}
	
	{Ani_Stop "lv40k_sms-stand_idle_snipe_Plasmacannon"}
	{Ani_Stop "lv40k_sms-stand_idle_snipe_lascannon"}
	{Ani_Stop "lv40k_sms-stand_idle_snipe_H_bolter"}
	{Ani_Stop "lv40k_sms-stand_idle_snipe_bolter"}
	
	{Ani_Stop "lv40k_sms-stand_bolter_idle_up"}
	{Ani_Stop "lv40k_sms-stand_bolter_idle_down"}
	{Ani_Stop "lv40k_sms-stand_h_bolter_idle_up"}
	{Ani_Stop "lv40k_sms-stand_h_bolter_idle_down"}
	{Ani_Stop "lv40k_sms-stand_pistol_idle_up"}
	{Ani_Stop "lv40k_sms-stand_pistol_idle_down"}
	{Ani_Stop "lv40k_sms-stand_librarian_idle_up"}
	{Ani_Stop "lv40k_sms-stand_librarian_idle_down"}
	
	{Ani_Stop "lv40k_sms-stand_melee_idle"}
	{Ani_Stop "lv40k_sms-stand_hammer_idle"}
	
	{Ani_Stop "lv40k_sms-stand_lascannon_idle_up"}
	{Ani_Stop "lv40k_sms-stand_lascannon_idle_down"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_idle_up"}
	{Ani_Stop "lv40k_sms-stand_plasmacannon_idle_down"}
	{Ani_Stop "lv40k_sms-stand_missile_idle_up"}
	{Ani_Stop "lv40k_sms-stand_missile_idle_down"}
	
	{Ani_Stop "lv40k_sms-squat_melee_idle"}
	{Ani_Stop "lv40k_sms-squat_hammer_idle"}
	
	{Ani_Stop "lv40k_sms-squat_missile_idle"}
	{Ani_Stop "lv40k_sms-squat_lascannon_idle"}
	{Ani_Stop "lv40k_sms-squat_plasmacannon_idle"}
	{Ani_Stop "lv40k_sms-squat_bolter_idle"}
	{Ani_Stop "lv40k_sms-squat_h_bolter_idle"}
	{Ani_Stop "lv40k_sms-squat_pistol_idle"}
)

(Define "SC_FSM_IDLE_LV40k_Space_Marine_Events"
	; [...]
)

; =============================================================================================================
; // IDLE 
; =============================================================================================================

(Define "SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Lying"
	("SC_H_Request_Define_Animation_State"		chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		anm_args(1.0)	
		pstol_anm(pose_lie_pistol_mask)			pstol_anm1()
		rifle_anm(pose_lie_gun_mask)			rifle_anm1()
		mgun_anm(pose_lie_mgun_mask)			mgun_anm1()
		bazooka_anm(pose_lie_bazooka_mask)		bazooka_anm1()
		unrmd_anm(pose_lie_empty_mask)			unrmd_anm1()
	)
)

(Define "SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Standing"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_h_bolter_idle_up) 
			anm1(lv40k_sms-stand_h_bolter_idle_down)
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_lascannon_idle_up) 
			anm1(lv40k_sms-stand_lascannon_idle_down)
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_idle_up) 
			anm1(lv40k_sms-stand_plasmacannon_idle_down)
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_plasmacannon_idle_up) 
			anm1(lv40k_sms-stand_plasmacannon_idle_down)
		)
	else tagged "lv40k_human_tag_weapon_librarian"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_librarian_idle_up) 
			anm1(lv40k_sms-stand_librarian_idle_down)
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_hammer_idle) 
		)
	else tagged "sc_human_tag_has_melee_weapon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0 loop)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_melee_idle) 
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	anm_args(1.0)		
			pstol_anm(lv40k_sms-stand_pistol_idle_up)		pstol_anm1(lv40k_sms-stand_pistol_idle_down)
			rifle_anm(lv40k_sms-stand_bolter_idle_up)		rifle_anm1(lv40k_sms-stand_bolter_idle_down)
			mgun_anm(lv40k_sms-stand_bolter_idle_up)		mgun_anm1(lv40k_sms-stand_bolter_idle_down)
			bazooka_anm(lv40k_sms-stand_missile_idle_up)	bazooka_anm1(lv40k_sms-stand_missile_idle_down)
			unrmd_anm(lv40k_sms-stand_melee_idle)			unrmd_anm1()
		)
	}
)

(Define "SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Crouch"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-squat_h_bolter_idle) 
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-squat_lascannon_idle) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-squat_plasmacannon_idle) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-squat_plasmacannon_idle) 
		)
	else tagged "lv40k_human_tag_weapon_thunderhammer"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	
			anm(lv40k_sms-squat_hammer_idle) 
		)
	else tagged "sc_human_tag_has_melee_weapon"
		("SC_H_Request_Define_Animation_Single"	anm_args(1.0)	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-squat_melee_idle) 
		)
	else
		("SC_H_Request_Define_Animation_State"			chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		anm_args(1.0)	
			pstol_anm(lv40k_sms-squat_pistol_idle)		pstol_anm1()
			rifle_anm(lv40k_sms-squat_bolter_idle) 		rifle_anm1()
			mgun_anm(lv40k_sms-squat_bolter_idle)		mgun_anm1()
			bazooka_anm(lv40k_sms-squat_missile_idle)	bazooka_anm1()
			unrmd_anm(pose_squat_empty_mask)			unrmd_anm1()
		)
	}	
)

(Define "SC_FSM_IDLE_LV40k_Space_Marine_Play_Idle_Snipe"
	{if tagged "lv40k_human_tag_weapon_heavy_bolter"
		("SC_H_Request_Define_Animation_Single"	anm_args()	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_idle_snipe_H_Bolter) 
		)
	else tagged "lv40k_human_tag_weapon_lascannon"
		("SC_H_Request_Define_Animation_Single"	anm_args()	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")	
			anm(lv40k_sms-stand_idle_snipe_lascannon) 
		)
	else tagged "lv40k_human_tag_weapon_multi_melta"
		("SC_H_Request_Define_Animation_Single"	anm_args()	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_idle_snipe_plasmacannon) 
		)
	else tagged "lv40k_human_tag_weapon_plasmacannon"
		("SC_H_Request_Define_Animation_Single"	anm_args()	chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		
			anm(lv40k_sms-stand_idle_snipe_plasmacannon) 
		)
	else
		("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_fsm_anim_spacemarine")		anm_args(1.0)	
			pstol_anm(lv40k_sms-stand_pistol_idle_up)		pstol_anm1(lv40k_sms-stand_pistol_idle_down)
			rifle_anm(lv40k_sms-stand_idle_snipe_Bolter)	rifle_anm1()
			mgun_anm(lv40k_sms-stand_idle_snipe_Bolter)		mgun_anm1()
			bazooka_anm(lv40k_sms-stand_missile_idle_up)	bazooka_anm1(lv40k_sms-stand_missile_idle_down)
			unrmd_anm(lv40k_sms-stand_melee_idle)			unrmd_anm1()
		)
	}
)