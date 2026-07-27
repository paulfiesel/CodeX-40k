
;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Weapon Logic ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

; // BUZZ: move the LV40k DLC props in here to its mod folder later...

(Define "SC_H_Skin_Weapon_Define_Spawn_Event"

	{Tags remove "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

	; // ADDMECH
	{add_view "fx_ls_red_small"							"LV40k_human_fx_weapon_servitor_HB_FX"			"#svt_rig-fxlight_hb"}
	{add_view "flash_hb" 								"LV40k_human_fx_weapon_servitor_HB_Fire"		"#svt_rig-foresight_hb"}
	{add_view "shell_shoota_big"						"LV40k_human_fx_weapon_servitor_HB_Fire"		"#svt_rig-fxshell_hb"}
	
	{add_view "flash_gun_melta_x2"						"LV40k_human_fx_weapon_servitor_multimelta_Fire"	"#svt_rig-foresight_melta"}
	{add_view "fx_glow_red_small"						"LV40k_human_fx_weapon_servitor_multimelta_FX"		"#svt_rig-fxlight1_melta"}
	{add_view "fx_glow_green_med"						"LV40k_human_fx_weapon_servitor_multimelta_FX"		"#svt_rig-fxlight2_melta"}
	
	{add_view "plasma_overheat_halo_blue"				"LV40k_human_fx_weapon_servitor_Plasmacannon_Reload"	"#svt_rig-fxlight1_plasma"}
	{add_view "spark_light_b"							"LV40k_human_fx_weapon_servitor_Plasmacannon_FX"		"#svt_rig-fxlight1_plasma"}
	{add_view "plasma_radiator_blue_big"				"LV40k_human_fx_weapon_servitor_Plasmacannon_FX"		"#svt_rig-fxlight1_plasma"}
	{add_view "fx_glow_red_small"						"LV40k_human_fx_weapon_servitor_Plasmacannon_FX"		"#svt_rig-fxlight2_plasma"}
	{add_view "fx_glow_red_small"						"LV40k_human_fx_weapon_servitor_Plasmacannon_FX"		"#svt_rig-fxlight3_plasma"}
	
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx3"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx4"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx5"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx6"}
	{add_view "fx_glow_gold_med"						"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx7"}
	{add_view "orchatina"								"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx8"}
	
	; // ORKZ
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx1"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx2"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx3"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx4"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx5"}
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx6"}
	{add_view "fx_glow_gold_med"						"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx7"}
	{add_view "orchatina"								"LV40k_human_fx_weapon_deffgun_Megablasta_FX"	"#ork_rig-foresight_deffgun_megablasta_fx8"}
	
	{add_view "flash_ork" 								"LV40k_human_fx_weapon_deffgun_Dakka_Fire"		"#ork_rig-foresight_deffgun_dakka_Mz2"}
	{add_view "flash_ork" 								"LV40k_human_fx_weapon_deffgun_Dakka_Fire"		"#ork_rig-foresight_deffgun_dakka_Mz1"}
	{add_view "shell_shoota_big"						"LV40k_human_fx_weapon_deffgun_Dakka_Fire"		"#ork_rig-shell_deffgun_dakka"}
	
	{add_view "fx_glow_red_med"							"LV40k_human_fx_weapon_deffgun_Beamy_FX"		"#ork_rig-foresight_deffgun_beamy_fx1"}
	{add_view "fx_glow_gold_med"						"LV40k_human_fx_weapon_deffgun_Beamy_FX"		"#ork_rig-foresight_deffgun_beamy_fx2"}
	
	{add_view "plasma_smoke_red"						"LV40k_human_fx_weapon_deffgun_Beamy_Reload"	"#ork_rig-foresight_deffgun_beamy"}
	{add_view "fx_ork_weirdboy_brain_waves"				"LV40k_human_fx_weapon_deffgun_Beamy_Reload"	"#ork_rig-foresight_deffgun_beamy_fx3"} 
	{add_view "fx_ork_weirdboy_brain_waves"				"LV40k_human_fx_weapon_deffgun_Beamy_Reload"	"#ork_rig-foresight_deffgun_beamy_fx4"} 
	{add_view "orchatina"								"LV40k_human_fx_weapon_deffgun_Beamy_Reload"	"#ork_rig-foresight_deffgun_beamy_fx5"}
	
	; // SPACE MARINES
	{Link_sound "LV40k_human_sfx_chainsword_rev"		"SC_Plataform/SC_fx/sc_misc_s1/chainswordrev/idle_1"} 
	{Link_sound "LV40k_human_sfx_thunderhammer"			"SC_Plataform/SC_fx/sc_misc_s1/electro"} 
	{Link_sound "LV40k_human_sfx_powersword"			"SC_Plataform/SC_fx/sc_misc_s1/electro"} 
	
	{add_view "fx_sm_powersword"						"LV40k_human_fx_weapon_melee_powersword_FX"			"#sm_rig-fx_powersword"}
	{add_view "fx_sm_thunderhammer"						"LV40k_human_fx_weapon_melee_thunderhammer_FX"		"#sm_rig-fx_thunderhammer"}
	{add_view "fx_sm_librarian"							"LV40k_human_fx_weapon_melee_librarian_FX"			"#sm_rig-fx_librarian_staff"}
	
	; // NIDS
	{add_view "flash_devourer" 							"LV40k_human_fx_weapon_tyranid_ravener_devourer_Fire"		"#rvn_rig-fx_deathspitter_1"}
	{add_view "flash_devourer" 							"LV40k_human_fx_weapon_tyranid_ravener_devourer_Fire"		"#rvn_rig-fx_deathspitter_2"}
	
	{add_view "flash_fleshborer" 						"LV40k_human_fx_weapon_tyranid_ravener_deathspitter_Fire"	"#rvn_rig-fx_deathspitter_1"}
	{add_view "flash_fleshborer" 						"LV40k_human_fx_weapon_tyranid_ravener_deathspitter_Fire"	"#rvn_rig-fx_deathspitter_2"}
	
	{add_view "flash_devourer" 							"LV40k_human_fx_weapon_tyranid_spinefists_Fire"			"foresight_tyr_sft_l"}
	{add_view "flash_devourer" 							"LV40k_human_fx_weapon_tyranid_spinefists_Fire"			"foresight_tyr_sft_r"}
		
	{add_view "flash_fleshborer" 						"LV40k_human_fx_weapon_tyranid_deathspitter_Fire"		"foresight_tyr_deathspitter"}
	{add_view "flash_fleshborer" 						"LV40k_human_fx_weapon_tyranid_fleshborer_Fire"			"foresight_tyr_fleshborer"}
	{add_view "flash_devourer" 							"LV40k_human_fx_weapon_tyranid_devourer_Fire"			"foresight_tyr_devourer"}
	{add_view "flash_venom_duwitel" 					"LV40k_human_fx_weapon_tyranid_venom_cannon_Fire"		"foresight_tyr_venom_cannon"}
	{add_view "flash_tyr_cannon_big" 					"LV40k_human_fx_weapon_tyranid_barbed_strangler_Fire"	"foresight_tyr_barbed_strangler"}
	{add_view "flash_scatter" 							"LV40k_human_fx_weapon_tyranid_zoanthrope_Fire"			"foresight_tyr_zoanthrope_brain"}
)

; <<<<	===================	SC Weapon Logic: Fire Effects	===================	>>>>	

(Define "SC_H_Skin_Weapon_Define_Fire_Hand_Right"
	{if tagged "lv40k_deffgun_Beamy"
		{spawn "flash_lascannon_red_short" "#ork_rig-foresight_deffgun_beamy" x}
		{view start "LV40k_human_fx_weapon_deffgun_Beamy_Reload"}
		{Delay 8.0 "SC_H_Skin_Delay_Reload" {view pause "LV40k_human_fx_weapon_deffgun_Beamy_Reload"}}
		
	else tagged "LV40k_human_tag_weapon_servitor_plasmacannon"
		{spawn "flash_plasmacannon" "#svt_rig-foresight_plasmacannon" x}
		{view start "LV40k_human_fx_weapon_servitor_Plasmacannon_Reload"}
		{Delay 3.0 "SC_H_Skin_Delay_Reload" {view pause "LV40k_human_fx_weapon_servitor_Plasmacannon_Reload"}}
		
	else tagged "LV40k_human_tag_weapon_servitor_multimelta"
		{view start "LV40k_human_fx_weapon_servitor_multimelta_Fire"}
		{delay 0.3 {view pause "LV40k_human_fx_weapon_servitor_multimelta_Fire"}}
		
	else tagged "LV40k_human_tag_weapon_servitor_heavy_bolter"
		{view start "LV40k_human_fx_weapon_servitor_HB_Fire"}
		{delay 0.05 {view pause "LV40k_human_fx_weapon_servitor_HB_Fire"}}
		
	else tagged "Lv40k_deffgun_megablasta"
		{spawn "flash_mega_blast" "#ork_rig-foresight_deffgun_Megablasta" x}
		
	else tagged "Lv40k_deffgun_dakka"
		{view start "LV40k_human_fx_weapon_deffgun_Dakka_Fire"}
		{delay 0.2 {view pause "LV40k_human_fx_weapon_deffgun_Dakka_Fire"}}
		
	else tagged "lv40k_tyr_barbed_strangler"
		{view start "LV40k_human_fx_weapon_tyranid_barbed_strangler_Fire"}
		{delay 0.4 {view pause "LV40k_human_fx_weapon_tyranid_barbed_strangler_Fire"}}
		
	else tagged "lv40k_tyr_venom_cannon"
		{view start "LV40k_human_fx_weapon_tyranid_venom_cannon_Fire"}
		{delay 0.3 {view pause "LV40k_human_fx_weapon_tyranid_venom_cannon_Fire"}}
		
	else tagged "lv40k_tyr_deathspitter"
		{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
			{view start "LV40k_human_fx_weapon_tyranid_ravener_deathspitter_Fire"}
			{delay 0.3 {view pause "LV40k_human_fx_weapon_tyranid_ravener_deathspitter_Fire"}}
		else
			{view start "LV40k_human_fx_weapon_tyranid_deathspitter_Fire"}
			{delay 0.3 {view pause "LV40k_human_fx_weapon_tyranid_deathspitter_Fire"}}
		}
		
	else tagged "lv40k_tyr_devourer_ravener"
		{view start "LV40k_human_fx_weapon_tyranid_ravener_devourer_Fire"}
		{delay 0.3 {view pause "LV40k_human_fx_weapon_tyranid_ravener_devourer_Fire"}}
		
	else tagged "lv40k_tyr_spinefists"
		{view start "LV40k_human_fx_weapon_tyranid_spinefists_Fire"}
		{delay 0.2 {view pause "LV40k_human_fx_weapon_tyranid_spinefists_Fire"}}
		
	else tagged "lv40k_tyr_devourer"
		{view start "LV40k_human_fx_weapon_tyranid_devourer_Fire"}
		{delay 0.2 {view pause "LV40k_human_fx_weapon_tyranid_devourer_Fire"}}
		
	else tagged "lv40k_tyr_fleshborer"
		{view start "LV40k_human_fx_weapon_tyranid_fleshborer_Fire"}
		{delay 0.2 {view pause "LV40k_human_fx_weapon_tyranid_fleshborer_Fire"}}
		
	else tagged "lv40k_tyr_zoanthrope_brain"
		{view start "LV40k_human_fx_weapon_tyranid_zoanthrope_Fire"}
		{delay 0.3 {view pause "LV40k_human_fx_weapon_tyranid_zoanthrope_Fire"}}
		
	else tagged "lv40k_tyr_venomthrope_w"
		("SC_Misc_Melee_Define_Spawn_1_CTC" c(lv40k_bullet_venomthrope) where(foresight_tyr_Toxic_Launcher) 
			args()
		)
	}
)

; <<<<	===================	SC Weapon Logic: Weapon Defines	===================	>>>>	

; // BUZZ: use to restrain certain skins only to weapons with the given tags.

(Define "SC_H_Skin_Weapon_Define_Restrain_Weapons"
	{if not prop "%prop"
		{with_effector 	
			{delay 0.5 "SC_H_Skin_Weapon_Delay_Get_Effector"	; {} // BUZZ: <- kill delay when deleted.
			
				{if tagged "%check" {Tags add "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"}}
			}
		}
	}
)

; // BUZZ: use to add a weapon that can only be used by a specific skin.

(Define "SC_H_Skin_Weapon_Define_Add_Weapon"
	else prop "%prop"
		{with_effector
			{delay 0.5 "SC_H_Skin_Weapon_Delay_Get_Effector" ; {} // BUZZ: <- kill delay when deleted.
				{if tagged "%check"
					{tags add "%add_tag"}	
					{tags add "using_custom_gun"}
					{bone show "%model"}
					%do
				else
					{Tags add "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"}
				}
				{Call "SC_H_Request_Call_Animation_Fix"}
			}
		}
)

(Define "SC_H_Skin_Weapon_Define_Add_Weapon_x2_users"
	else prop "%prop"
		{with_effector 	
			{delay 0.5 "SC_H_Skin_Weapon_Delay_Get_Effector" ; {} // BUZZ: <- kill delay when deleted.
				{if tagged "%check_1"
					{tags add "%add_tag"}	
					{tags add "using_custom_gun"}		
					{bone show "%model_1"}
					%do
				else tagged "%check_2"
					{tags add "%add_tag"}		
					{tags add "using_custom_gun"}	
					{bone show "%model_2"}
					%do
				else
					{Tags add "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"}
				}
				{Call "SC_H_Request_Call_Animation_Fix"}
			}
		}
)

; <<<<	===================	SC Weapon Logic: Link Weapon	===================	>>>>	

(Define "SC_H_Skin_Weapon_Define_Link_Weapon"

	{if  effector "anm_pistol"		{set "sc_human_flag_anm_instance_pistol" 1}			
	else effector "anm_mgun"		{set "sc_human_flag_anm_instance_mgun" 1}
	else effector "anm_rifle"		{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "anm_bazooka"		{set "sc_human_flag_anm_instance_bazooka" 1}

	else effector "rifle"			{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "smg"				{set "sc_human_flag_anm_instance_rifle" 1}
	else effector "pistol"			{set "sc_human_flag_anm_instance_pistol" 1}
	else effector "mgun"			{set "sc_human_flag_anm_instance_mgun" 1}
	else effector "rocketlauncher"	{set "sc_human_flag_anm_instance_bazooka" 1}
	}	
	
	{if effector "SC_no_reload_anim"	{tags add "SC_human_tag_no_reload_anim"}}
	
	{Kill_Delay "SC_H_Skin_Weapon_Delay_Weapon_Allow_Check"}

	{with_effector	 ;{}
		
		; // BUZZ: Auxiliary Props:
		{if prop "SC_hide_root"
			{bone hide "basis"}	{volumes disable bullet blast contact}
		}
		
		; // BUZZ: Checks if weapon is Allowed/Not Allowed to user:
		{with_effector 	
			{delay 1.0 "SC_H_Skin_Weapon_Delay_Weapon_Allow_Check"	; {} // BUZZ: <- kill delay when deleted & when swaping weapons.
			
				{if tagged "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"
					{Damage_Report "basis"	"<f(impact)><c(RED)>THIS SOLDIER CANNOT USE THIS WEAPON!"}
					{weapon_work "hand_right" 0}
					{tags add "cannot_use_gun"}
				}
			}
		}
		
		; // BUZZ: Restrained Weapons
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_tyr_gaunt_w) check(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt))
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_tyr_ravener_w) check(sc_h_skin_tag_skeleton_lv40k_tyranidravener))
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_tyr_venomthrope_ww) check(sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope))
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_tyr_warrior_w) check(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior))
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_tyr_zoanthrope_w) check(sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope))
		("SC_H_Skin_Weapon_Define_Restrain_Weapons" prop(LV40k_admech_servitor_w) check(sc_h_skin_tag_skeleton_lv40k_servitor))
		
		; // BUZZ: Weapon Specifics
		{if prop "@@@@@" ;{}

			; // ---------------------------------------------------------------------- ORKZ ----------------------------------------------------------------------
			
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_deffgun_Megablasta) 
				check(sc_h_skin_tag_lv40k_can_use_deffgun) add_tag(LV40k_human_tag_weapon_deffgun) model(orkboy_weapon_loota_Megablasta) 
				do({tags add "Lv40k_deffgun_Megablasta"} {view start "LV40k_human_fx_weapon_deffgun_Megablasta_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_deffgun_Beamy) 
				check(sc_h_skin_tag_lv40k_can_use_deffgun) add_tag(LV40k_human_tag_weapon_deffgun) model(orkboy_weapon_loota_beamy)
				do({tags add "Lv40k_deffgun_beamy"} {view start "LV40k_human_fx_weapon_deffgun_Beamy_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_deffgun_dakka) 
				check(sc_h_skin_tag_lv40k_can_use_deffgun) add_tag(LV40k_human_tag_weapon_deffgun) model(orkboy_weapon_loota_dakka) 
				do({tags add "Lv40k_deffgun_dakka"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_burna_common) 
				check(sc_h_skin_tag_lv40k_can_use_burna_pack) add_tag(LV40k_human_tag_weapon_burna) model(orkboy_weapon_pack_burna) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_weirdboy_staff) 
				check(sc_h_skin_tag_lv40k_orkboy_weirdboy) add_tag() model() 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_gitz_snazzgun) 
				check(sc_h_skin_tag_skeleton_lv40k_orknob) add_tag() model()
				do()
			)
		
			; // ---------------------------------------------------------------------- TYRANIDS ----------------------------------------------------------------------
			
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_zoanthrope_brain) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope) add_tag(lv40k_tyr_zoanthrope_brain) model()
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_spinefists) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt) add_tag(lv40k_tyr_spinefists) model(tyr_termagaunt_w_spinefists) 
				do({bone hide "tyr_termagaunt_arms"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_fleshborer)
				check(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt) add_tag(lv40k_tyr_fleshborer) model(tyr_termagaunt_w_fleshborer) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_tyr_devourer) add_tag(lv40k_tyr_devourer) 
				check_1(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt)		model_1(tyr_termagaunt_w_devourer)
				check_2(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior)	model_2(tyr_warrior_w_devourer)
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_devourer_ravener) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidravener) add_tag(lv40k_tyr_devourer_ravener) model()
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_tyr_deathspitter) add_tag(lv40k_tyr_deathspitter) 
				check_1(sc_h_skin_tag_skeleton_lv40k_tyranidravener)	model_1()
				check_2(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior)	model_2(tyr_warrior_w_deathspitter)
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_tyr_barbed_strangler) add_tag(lv40k_tyr_barbed_strangler)
				check_1(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt)		model_1()
				check_2(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior)	model_2(tyr_warrior_w_barbed_strangler)
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_tyr_venom_cannon) add_tag(lv40k_tyr_venom_cannon)
				check_1(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt)		model_1()
				check_2(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior)	model_2(tyr_warrior_w_venom_cannon)
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_venomthrope_w) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope) add_tag(lv40k_tyr_venomthrope_w) model() 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_venomthrope_s_w) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope) add_tag(lv40k_tyr_venomthrope_s_w) model() 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_tyr_melee_talons_h_ravener) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidravener) add_tag(LV40k_human_tag_weapon_tyr_talons) model()
				do({tags add "sc_human_tag_has_melee_weapon"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(tyr_melee_claws_h_termagaunt) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidgaunt) add_tag(LV40k_human_tag_weapon_tyr_claws) model() 
				do({tags add "sc_human_tag_has_melee_weapon"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(tyr_melee_bonesword_h_warrior) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior) add_tag(LV40k_human_tag_weapon_tyr_bonesword) model() 
				do({tags add "sc_human_tag_has_melee_weapon"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(tyr_melee_talons_h_warrior) 
				check(sc_h_skin_tag_skeleton_lv40k_tyranidwarrior) add_tag(LV40k_human_tag_weapon_tyr_talons) model() 
				do({tags add "sc_human_tag_has_melee_weapon"})
			)

			; // ---------------------------------------------------------------------- ADEPTUS MECHANICUS ----------------------------------------------------------------------
			
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_servitor_heavy_bolter) 
				check(sc_h_skin_tag_skeleton_lv40k_servitor) add_tag(LV40k_human_tag_weapon_servitor_heavy_bolter) model(servitor_w_heavybolter) 
				do({bone hide "servitor_l_servoarm"} {bone show "servitor_gunservitor"}  {view start "LV40k_human_fx_weapon_servitor_HB_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_servitor_multimelta) 
				check(sc_h_skin_tag_skeleton_lv40k_servitor) add_tag(LV40k_human_tag_weapon_servitor_multimelta) model(servitor_w_multimelta) 
				do({bone hide "servitor_l_servoarm"} {bone show "servitor_gunservitor"}  {view start "LV40k_human_fx_weapon_servitor_Multimelta_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_servitor_plasma_cannon) 
				check(sc_h_skin_tag_skeleton_lv40k_servitor) add_tag(LV40k_human_tag_weapon_servitor_plasmacannon) model(servitor_w_plasmacannon) 
				do({bone hide "servitor_l_servoarm"} {bone show "servitor_gunservitor"}  {view start "LV40k_human_fx_weapon_servitor_Plasmacannon_FX"})
			)
			
			; // ---------------------------------------------------------------------- SPACE MARINES ----------------------------------------------------------------------
			
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_heavy_bolter) 
				check(sc_h_skin_tag_lv40k_can_use_sm_hb) add_tag(LV40k_human_tag_weapon_heavy_bolter) model(sm_w_heavybolter) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_lascannon_shoulder) 
				check(sc_h_skin_tag_lv40k_can_use_sm_pc) add_tag(LV40k_human_tag_weapon_lascannon) model(sm_w_lascannon) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_plasmacannon) 
				check(sc_h_skin_tag_lv40k_can_use_sm_lc) add_tag(LV40k_human_tag_weapon_plasmacannon) model(sm_w_plasmacannon) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon" prop(lv40k_multi_melta) 
				check(sc_h_skin_tag_lv40k_can_use_sm_mm) add_tag(LV40k_human_tag_weapon_multi_melta) model(sm_w_multimelta) 
				do()
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_sm_thunderhammer) add_tag(LV40k_human_tag_weapon_thunderhammer)
				check_1(sc_h_skin_tag_skeleton_lv40k_spacemarine)		 model_1(sm_w_thunderhammer)
				check_2(sc_h_skin_tag_skeleton_lv40k_spacemarine_p)		 model_2(smp_w_thunderhammer)
				do({tags add "sc_human_tag_has_melee_weapon"} {play_sound "LV40k_human_sfx_thunderhammer" 1} {view start "LV40k_human_fx_weapon_melee_thunderhammer_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_sm_powersword) add_tag(LV40k_human_tag_weapon_powersword)
				check_1(sc_h_skin_tag_skeleton_lv40k_spacemarine)		 model_1(sm_w_powersword)
				check_2(sc_h_skin_tag_skeleton_lv40k_spacemarine_p)		 model_2(smp_w_powersword)
				 do({tags add "sc_human_tag_has_melee_weapon"} {play_sound "LV40k_human_sfx_powersword" 1} {view start "LV40k_human_fx_weapon_melee_powersword_FX"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_sm_chainsword) add_tag(LV40k_human_tag_weapon_chainsword) 
				check_1(sc_h_skin_tag_skeleton_lv40k_spacemarine)		 model_1(sm_w_chainsword)
				check_2(sc_h_skin_tag_skeleton_lv40k_spacemarine_p)		 model_2(smp_w_chainsword)
				do({tags add "sc_human_tag_has_melee_weapon"} {play_sound "LV40k_human_sfx_chainsword_rev" 1})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_sm_combatknife) add_tag(LV40k_human_tag_weapon_combatknife)
				check_1(sc_h_skin_tag_skeleton_lv40k_spacemarine)		 model_1(sm_w_combatknife)
				check_2(sc_h_skin_tag_skeleton_lv40k_spacemarine_p)		 model_2(smp_w_combatknife)
				do({tags add "sc_human_tag_has_melee_weapon"})
			)
			("SC_H_Skin_Weapon_Define_Add_Weapon_x2_users" prop(lv40k_librarian_staff) add_tag(LV40k_human_tag_weapon_librarian)
				check_1(sc_h_skin_tag_skeleton_lv40k_spacemarine)		 model_1(sm_w_librarian)
				check_2(sc_h_skin_tag_skeleton_lv40k_spacemarine_p)		 model_2(smp_wp_librarian)
				do({view start "LV40k_human_fx_weapon_melee_librarian_FX"})
			)
		}
	}
)

(Define "SC_H_Skin_Weapon_Define_Unlink_Weapon"
	{set "sc_human_flag_anm_instance_melee" 0}				
	{set "sc_human_flag_anm_instance_mgun" 0}
	{set "sc_human_flag_anm_instance_pistol" 0}
	{set "sc_human_flag_anm_instance_rifle" 0}
	{set "sc_human_flag_anm_instance_bazooka" 0}
	
	{tags remove "sc_human_tag_has_melee_weapon"}
	{tags remove "SC_human_tag_no_reload_anim"}
	
	{Kill_Delay "SC_H_Skin_Weapon_Delay_Get_Effector"}
	{Kill_Delay "SC_H_Skin_Weapon_Delay_Weapon_Allow_Check"}
	
	{Tags remove "SC_H_Skin_Weapon_Tag_Weapon_Not_Allowed"}

	; // BUZZ: this is probably causing quant.bullets crashes;
	
;	{if tagged "using_custom_gun"	{with_effector {bone show "basis"} {volumes disable bullet blast contact}} {tags remove "using_custom_gun"}}	
;	{if tagged "cannot_use_gun"		{with_effector {bone show "basis"} {volumes disable bullet blast contact}} {tags remove "cannot_use_gun"} {weapon_work "hand_right" 1}}
	
	; =========================================================================================================================================================================== ;
	
	; // Admech
	{tags remove "LV40k_human_tag_weapon_servitor_heavy_bolter"}	{bone hide "servitor_w_heavybolter"}	{view pause "LV40k_human_fx_weapon_servitor_heavybolter_FX"}
	{tags remove "LV40k_human_tag_weapon_servitor_multimelta"}		{bone hide "servitor_w_multimelta"}		{view pause "LV40k_human_fx_weapon_servitor_multimelta_fx"}
	{tags remove "LV40k_human_tag_weapon_servitor_plasmacannon"}	{bone hide "servitor_w_plasmacannon"}	{view pause "LV40k_human_fx_weapon_servitor_plasmacannon_fx"}
	{if tagged "sc_h_skin_tag_skeleton_lv40k_servitor"				{bone show "servitor_l_servoarm"}}
	{bone hide "servitor_gunservitor"}
			
	; // Tyranids
	{tags remove "lv40k_tyr_devourer_ravener"}		
	{tags remove "lv40k_tyr_devourer"}						{bone hide "tyr_termagaunt_w_devourer"}	{bone hide "tyr_warrior_w_devourer"}
	{tags remove "lv40k_tyr_venom_cannon"}					{bone hide "tyr_warrior_w_venom_cannon"}
	{tags remove "lv40k_tyr_barbed_strangler"}				{bone hide "tyr_warrior_w_barbed_strangler"}
	{tags remove "lv40k_tyr_zoanthrope_brain"}	
	{tags remove "lv40k_tyr_deathspitter"}					{bone hide "tyr_warrior_w_deathspitter"}
	{tags remove "lv40k_tyr_fleshborer"}					{bone hide "tyr_termagaunt_w_fleshborer"}	
	{tags remove "lv40k_tyr_spinefists"}					{bone hide "tyr_termagaunt_w_spinefists"} {bone show "tyr_termagaunt_arms"}
	
	{tags remove "LV40k_human_tag_weapon_tyr_talons"}
	{tags remove "LV40k_human_tag_weapon_tyr_claws"}
	{tags remove "LV40k_human_tag_weapon_tyr_bonesword"}
	{tags remove "lv40k_tyr_venomthrope_w"}
	{tags remove "lv40k_tyr_venomthrope_s_w"}
	
	; // Space Marines
	{tags remove "LV40k_human_tag_weapon_lascannon"}		{bone hide "sm_w_lascannon"}
	{tags remove "LV40k_human_tag_weapon_plasmacannon"}		{bone hide "sm_w_plasmacannon"}
	{tags remove "LV40k_human_tag_weapon_multi_melta"}		{bone hide "sm_w_multimelta"}
	{tags remove "LV40k_human_tag_weapon_heavy_bolter"}		{bone hide "sm_w_heavybolter"}
	{tags remove "LV40k_human_tag_weapon_combatknife"}		{bone hide "smp_w_combatknife"}		{bone hide "sm_w_combatknife"}
	{tags remove "LV40k_human_tag_weapon_powersword"}		{bone hide "smp_w_powersword"}		{bone hide "sm_w_powersword"}		{stop_sound "LV40k_human_sfx_chainsword_rev"}
	{tags remove "LV40k_human_tag_weapon_chainsword"}		{bone hide "smp_w_chainsword"}		{bone hide "sm_w_chainsword"}		{stop_sound "LV40k_human_sfx_powersword"}		{view pause "LV40k_human_fx_weapon_melee_powersword_FX"}
	{tags remove "LV40k_human_tag_weapon_thunderhammer"}	{bone hide "smp_w_thunderhammer"}	{bone hide "sm_w_thunderhammer"}	{stop_sound "LV40k_human_sfx_thunderhammer"}	{view pause "LV40k_human_fx_weapon_melee_thunderhammer_FX"}
	{tags remove "LV40k_human_tag_weapon_librarian"}		{bone hide "smp_w_librarian"}		{bone hide "sm_w_librarian"}		{view pause "LV40k_human_fx_weapon_melee_librarian_FX"}
	
	; // Orkz
	{tags remove "LV40k_human_tag_weapon_deffgun"}		
	{tags remove "LV40k_human_tag_weapon_burna"}			{bone hide "orkboy_weapon_pack_burna"}
	{tags remove "lv40k_deffgun_Beamy"}						{bone hide "orkboy_weapon_loota_beamy"}	
	{tags remove "lv40k_deffgun_Megablasta"}				{bone hide "orkboy_weapon_loota_Megablasta"}	
	{tags remove "lv40k_deffgun_dakka"}						{bone hide "orkboy_weapon_loota_dakka"}

	{view Pause "LV40k_human_fx_weapon_deffgun_Beamy_FX"}
	{view Pause "LV40k_human_fx_weapon_deffgun_Megablasta_FX"}
)
