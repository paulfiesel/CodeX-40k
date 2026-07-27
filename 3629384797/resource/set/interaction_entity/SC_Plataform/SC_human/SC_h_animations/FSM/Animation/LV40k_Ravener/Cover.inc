
(Define "SC_FSM_COVER_LV40k_Ravener_Stop_All"
	{Ani_stop "lv40k_rvn_aim_cover_snipe_go_low"}	
	{Ani_stop "lv40k_rvn_aim_cover_snipe_peek"}
)

(Define "SC_FSM_COVER_LV40k_Ravener_Events"
		
	{on animation_event "LV40k_Ravener_Dig_Sounds"			; // BUZZ: <- temp here, part of building anims
		{Start_sound "human/anims/dig/shovel/ground" use_position}
	}	
	{on animation_event "LV40k_Ravener_Dig"			; // BUZZ: <- temp here, part of building anims
		{Spawn "SC_empty_helper" "fx_body_front_30" x
			{Add_view "hit_tree_continuous" "ravener_burrow_fx" "basis"}
			{View start "ravener_burrow_fx"}
			{Delay 2.5 {View stop "ravener_burrow_fx"} {Delete}}
		}
	}	
	{on animation_event "LV40k_Ravener_Burrow"
		
		{Spawn "SC_empty_helper" "basis" x
			{Add_view "hit_tree_continuous" "ravener_burrow_fx" "basis"}
			{View start "ravener_burrow_fx"}
			{Delay 1.25 {View stop "ravener_burrow_fx"} {Delete}}
		}
	}	
	{on animation_event "LV40k_Ravener_Emerge"
	
		{Spawn "sand_hit_small" "Basis" x}	
		{start_sound "SC_Plataform/hit/-bullet/size2/codz_zombie_emerge"}
	}	
	
	; // WILL CRASH WITHOUT THE DELAY!
	{on animation_end "lv40k_rvn_aim_cover_snipe_go_low"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}	
	{on animation_end "lv40k_rvn_aim_cover_snipe_peek"
		{delay 0.01 ""				
			("SC_FSM_Define_Update_FSM" do(remove) state(COVER))
		}
	}
)

; =============================================================================================================
; // COVER 
; =============================================================================================================

(Define "SC_FSM_COVER_LV40k_Ravener_Snipe_Peek"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener")			anm_args(1.0 callback)	
		pstol_anm(lv40k_rvn_aim_cover_snipe_peek)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_rvn_aim_cover_snipe_peek)		unrmd_anm1()
	)
)

(Define "SC_FSM_COVER_LV40k_Ravener_Snipe_Close"
	("SC_H_Request_Define_Animation_State"				chk(tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener")			anm_args(1.0 callback)	
		pstol_anm(lv40k_rvn_aim_cover_snipe_go_low)		pstol_anm1()
		rifle_anm() 									rifle_anm1()
		mgun_anm()										mgun_anm1()
		bazooka_anm()									bazooka_anm1()
		unrmd_anm(lv40k_rvn_aim_cover_snipe_go_low)		unrmd_anm1()
	)
)