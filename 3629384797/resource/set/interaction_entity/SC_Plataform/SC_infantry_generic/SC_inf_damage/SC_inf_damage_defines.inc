
; <<<<	===================	SC Infantry Generic: Damage Defines	===================	>>>>

(define "SC_INF_Define_Heal"
	{health_damage_count -%c	{effects "" "" "" "" ""}} 
	
	{kill_delay "SC_heal_fx"} 
	{view start "SC_healing"}
	
	{delay 3.0 "SC_heal_fx"
		{view pause "SC_healing"}
	}
)

(define "human_health_nk"		{health_damage_count %c		{effects "" "" "" "" ""}})
(define "human_health"			{health_damage_count %c		{effects "" "hit" "damage" "die" "die"}})
(define "human_health_x"		{health_damage_count (* %x %c)	{effects "" "hit" "damage" "die" "die"}})	; // BUZZ: <- same as "human health" define above, but has a multiplier)

; <<<<	===================	SC Infantry Generic: Infantry Armor System	===================	>>>>

(define "SC_INF_Define_Armored_Chart"
	{if volume "SC_volume_armored"	
		{if  volume "SC_volume_armored_heavy"			("human_health"		c(%c_heavy))
		else volume "SC_volume_armored_shield_heavy"	("human_health_x"	c(%c_heavy) x(5.0))
		else volume "SC_volume_armored_medium"			("human_health" 	c(%c_medium))
		else volume "SC_volume_armored_shield_light"	("human_health_x"	c(%c_light) x(3.0))
		else volume "SC_volume_armored_light"			("human_health"		c(%c_light))
		}
	else										
		("human_health"		c(%c_unarmored))
	}
)

(Define "SC_INF_Define_Armored_Piercing"
	{if  volume "SC_volume_armored_heavy"			{call "process_bullet_%h_v"}
	else volume "SC_volume_armored_shield_heavy"	{call "process_bullet_%sh_v"}
	else volume "SC_volume_armored_medium"			{call "process_bullet_%m_v"}
	else volume "SC_volume_armored_shield_light"	{call "process_bullet_%sl_v"}
	else volume "SC_volume_armored_light"			{call "process_bullet_%l_v"}
	else											{call "process_bullet_%u_v"}
	}
)

; <<<<	===================	SC Infantry Generic: Bloodsparks	===================	>>>>

; // BUZZ: use "%c" extender in case you wish to spawn blood on a certain bone.

(Define "SC_INF_Define_Spawn_Blood_Hit_Small"
	{spawn "bloodsparks01" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Medium"
	{spawn "bloodsparks_medium" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Big"
	{spawn "blood_hit_very_big" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Very_Big"
	{spawn "bloodsparks_big-medium" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Biggest"
	{spawn "bloodsparks_energo_death" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Explode"
	{spawn "bloodsparks_energo_death" %c}
)

; <<<<	===================	SC Infantry Generic: Explode Gore Death	===================	>>>>

; // BUZZ: Must be a call because it's usually called by a RAND operation and has FX. 
; // BUZZ: This disregards armor values, Should i consider it later?

(Define "SC_INF_Define_Explode_Death"
	{delay 0.05 	; {} // BUZZ: <- Delay is a must / gore is called after death.
		{if dead
			{if prop "human"							 {if rand %human {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size1" {if rand %tsz1 {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size2" {if rand %tsz2 {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size3" {if rand %tsz3 {Call_synced "SC_INF_Call_Explode_Death"}}
			}
		}
		{if "die_after_throw"
			{if prop "human"							 {if rand %human {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size1" {if rand %tsz1 {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size2" {if rand %tsz2 {Call_synced "SC_INF_Call_Explode_Death"}}
			else prop "SC_plataform_prop_troopers_size3" {if rand %tsz3 {Call_synced "SC_INF_Call_Explode_Death"}}
			}
		}
	}
)

; ("SC_INF_Define_Explode_Death" human() tsz1() tsz2() tsz3())		; <- usage
	
(Define "SC_INF_Define_Explode_Death_Delete"
	{volumes disable blast bullet contact visible overlap}
	{call "delete"}
)

{on "SC_INF_Call_Explode_Death" sync
	{if prop "human"
		("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
		{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"		;{} // BUZZ: <- temp DLC placed effects here.
			{spawn "fx_ork_weirdboy_psychic_dead" "basis" x}
			{blastwave c4 3 r0 3 r1 5 position}
		}
		{if tagged "sc_h_skin_tag_fsm_anim_spacemarine"		; <- temp tag
			{spawn "sc_gibs_meat01" "body" x}
			{spawn "scelet_head_jaw1" "head" x}
			{spawn "sc_gibs_meat02" "head" x}
			{spawn "sc_gibs_meat03" "ik_updown" x}
			{spawn "scelet_arm_r_1" "ik_updown" x}
			{spawn "sm_gibs_torso" "ik_updown" x}
			{spawn "sm_gibs_pauldron" "hand1l" x}
			{spawn "sm_gibs_pauldron" "hand1r" x}
			{spawn "sm_gibs_leg_thigh" "foot1r" x}
			{spawn "sm_gibs_calf" "foot2l" x}
			{spawn "sm_gibs_arm_r" "hand2r" x}
			{spawn "sm_gibs_arm_l" "hand3l" x}
			{spawn "sm_gibs_hand" "palm1r" x}
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_orkboy"
			{spawn "sc_gibs_meat01" "body" x}
			{spawn "scelet_head_jaw1" "head" x}
			{spawn "sc_gibs_meat02" "head" x}
			{spawn "sc_gibs_meat03" "ik_updown" x}
			{spawn "scelet_arm_r_1" "ik_updown" x}
			{spawn "ork_gibs_torso1" "ik_updown" x}
			{spawn "ork_gibs_pelvis1" "body" x}
			{spawn "ork_gibs_arm1" "hand2r" x}
			{spawn "ork_gibs_hand1" "hand3l" x}
			{if rand 0.5 {spawn "ork_gibs_head1" "head" x}}
			{if rand 0.5 {spawn "ork_gibs_leg1" "foot1r" x}}
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"
			{spawn "sc_gibs_meat01" "body" x}
			{spawn "scelet_head_jaw1" "head" x}
			{spawn "sc_gibs_meat02" "head" x}
			{spawn "sc_gibs_meat03" "ik_updown" x}
			{spawn "scelet_arm_r_1" "ik_updown" x}
			{spawn "ork_gibs_torso1" "ik_updown" x}
			{spawn "ork_gibs_pelvis1" "body" x}
			{spawn "ork_gibs_arm1" "hand2r" x}
			{spawn "ork_gibs_hand1" "hand3l" x}
			{if rand 0.5 {spawn "ork_gibs_head1" "head" x}}
			{if rand 0.5 {spawn "ork_gibs_leg1" "foot1r" x}}
			
		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"
			{spawn "sc_gibs_meat01" "#trm_rig-bip01" x}
			{spawn "scelet_head_jaw1" "#trm_rig-bip01_head" x}
			{spawn "sc_gibs_meat02" "#trm_rig-bip01_head" x}
			{spawn "sc_gibs_meat03" "#trm_rig-bip01_spine" x}
			{spawn "scelet_arm_r_1" "#trm_rig-bip01" x}
			{spawn "tyr_hormogaunt_body" "#trm_rig-bip01" x}
			{spawn "tyr_hormogaunt_head" "#trm_rig-bip01_head" x}
			{spawn "tyr_hormogaunt_tail" "#trm_rig-bip01_tail1" x}
			{if rand 0.25 {spawn "tyr_hormogaunt_hand1l" "#trm_rig-bip01_spine" x}}
			{if rand 0.25 {spawn "tyr_hormogaunt_hand1r" "#trm_rig-bip01_spine" x}}
			{if rand 0.25 {spawn "tyr_hormogaunt_hand2l" "#trm_rig-bip01_spine" x}}
			{if rand 0.25 {spawn "tyr_hormogaunt_hand2r" "#trm_rig-bip01_spine" x}}

		else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"
			{spawn "sc_gibs_meat01" "#wrr_rig-bip01" x}
			{spawn "scelet_head_jaw1" "#wrr_rig-bip01_head" x}
			{spawn "sc_gibs_meat02" "#wrr_rig-bip01_head" x}
			{spawn "sc_gibs_meat03" "#wrr_rig-bip01_spine" x}
			{spawn "scelet_arm_r_1" "#wrr_rig-bip01" x}
			{spawn "tyr_warrior_body" "#wrr_rig-bip01" x}
			{spawn "tyr_warrior_head" "#wrr_rig-bip01_head" x}
			{spawn "tyr_warrior_tail" "#wrr_rig-bip01_tail1" x}
			{if rand 0.25 {spawn "tyr_warrior_hand1l" "#wrr_rig-bip01_spine" x}}
			{if rand 0.25 {spawn "tyr_warrior_hand1r" "#wrr_rig-bip01_spine" x}}
			{if rand 0.25 {spawn "tyr_warrior_foot1l" "#wrr_rig-bip01_l_thigh" x}}
			{if rand 0.25 {spawn "tyr_warrior_foot1r" "#wrr_rig-bip01_r_thigh" x}}
			
		else tagged "sc_h_skin_tag_skeleton_gem_default"
			{spawn "sc_gibs_meat01" "foot1l" x}
			{spawn "scelet_head_jaw1" "head" x}
			{spawn "sc_gibs_meat02" "head" x}
			{spawn "sc_gibs_meat03" "ik_updown" x}
			{spawn "scelet_arm_r_1" "hand2r" x}
			{spawn "sc_gibs_torso_1" "ik_updown" x}
			{spawn "sc_gibs_pelvis_1" "body" x}
			{spawn "sc_gibs_foot_l" "foot1l" x}
			{if rand 0.25 {spawn "sc_gibs_foot_r" "foot1r" x}}
			{if rand 0.25 {spawn "sc_gibs_hand_r" "hand1r" x}}
			{if rand 0.25 {spawn "sc_gibs_hand_l" "hand1l" x}}
		}
		("SC_INF_Define_Explode_Death_Delete")
	
	; // LV40k Rippers are gibbed in their own .inc file. 
	
	else prop "LV40k_dlc_prop_troopers_Tyr_Warrior"
		("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
		{spawn "tyr_warrior_body" "#wrr_rig-bip01" x}
		{spawn "tyr_warrior_head" "#wrr_rig-bip01_head" x}
		{if rand 0.5 {spawn "tyr_warrior_tail" "#wrr_rig-bip01_tail1" x}}
		{if rand 0.25 {spawn "tyr_warrior_hand1l" "#wrr_rig-bip01_spine" x}}
		{if rand 0.25 {spawn "tyr_warrior_hand1r" "#wrr_rig-bip01_spine" x}}
		{if rand 0.25 {spawn "tyr_warrior_foot1l" "#wrr_rig-bip01_l_thigh" x}}
		{if rand 0.25 {spawn "tyr_warrior_foot1r" "#wrr_rig-bip01_r_thigh" x}}
		("SC_INF_Define_Explode_Death_Delete")
		
	else prop "LV40k_dlc_prop_troopers_Tyr_Hormagaunt"
		("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
		{spawn "tyr_hormogaunt_body" "#trm_rig-bip01" x}
		{spawn "tyr_hormogaunt_head" "#trm_rig-bip01_head" x}
		{if rand 0.5 {spawn "tyr_hormogaunt_tail" "#trm_rig-bip01_tail1" x}}
		{if rand 0.25 {spawn "tyr_hormogaunt_hand1l" "head" x}}
		{if rand 0.25 {spawn "tyr_hormogaunt_hand1r" "foot1r" x}}
		{if rand 0.25 {spawn "tyr_hormogaunt_hand2l" "head" x}}
		{if rand 0.25 {spawn "tyr_hormogaunt_hand2r" "foot1r" x}}
		("SC_INF_Define_Explode_Death_Delete")
		
	else prop "LV40k_dlc_prop_troopers_Ork_Boy"
		("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
		{spawn "ork_gibs_torso1" "ik_updown" x}
		{spawn "ork_gibs_pelvis1" "body" x}
		{spawn "ork_gibs_arm1" "hand2r" x}
		{spawn "ork_gibs_hand1" "hand3l" x}
		{if rand 0.5 {spawn "ork_gibs_head1" "head" x}}
		{if rand 0.5 {spawn "ork_gibs_leg1" "foot1r" x}}
		("SC_INF_Define_Explode_Death_Delete")
		
	else prop "LV40k_dlc_prop_troopers_Ork_Nob"
		("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
		{spawn "ork_gibs_torso1" "ik_updown" x}
		{spawn "ork_gibs_pelvis1" "body" x}
		{spawn "ork_gibs_arm1" "hand2r" x}
		{spawn "ork_gibs_hand1" "hand3l" x}
		{if rand 0.5 {spawn "ork_gibs_head1" "head" x}}
		{if rand 0.5 {spawn "ork_gibs_leg1" "foot1r" x}}
		("SC_INF_Define_Explode_Death_Delete")
	}
}

; <<<<	===================	SC Infantry Generic: Amputation Gore	===================	>>>>

; not yet coded

(Define "SC_INF_Define_Death_With_Gore"
	{if volume "SC_volume_armored"
		; [...]
	else
		; [...]
	}
)

; <<<<	===================	SC Infantry Generic: Spawn Blood	===================	>>>>

; // BUZZ: Logic for bullet hit (when pierced).

(Define "SC_INF_Define_Spawn_Blood_Hit_Bullet"
	{if volume "SC_volume_armored_shield_no_damage"
		; [...]
	else
		{if stuff "@@@@@@@@"
		else stuff "shell"								("SC_INF_Define_Spawn_Blood_Hit_Biggest" c())		("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))	
		else stuff "rocketlauncher"						("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())		("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))	
		else stuff "grenade"							("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())		("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))	
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Big" c())			("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))			
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Big" c())			("SC_INF_Define_Death_With_Gore" c_body(0) c_head(1) c_limb(1))			
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Big" c())			("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Big" c())			("SC_INF_Define_Death_With_Gore" c_body(0) c_head(1) c_limb(1))	
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())		("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.5) c_limb(0.8))	
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())		("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.25) c_limb(0.5))
		else stuff "SC_verylow_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Small" c())			("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.1) c_limb(0.4))
		else stuff "bullet"								("SC_INF_Define_Spawn_Blood_Hit_Small" c())			("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.1) c_limb(0.3))
		}
	}
)

; <<<<	===================	SC Infantry Generic: DLC Extensions	===================	>>>>

; // BUZZ: adds unique weapon damage FXs to be coded directly in DLC folders.

(Define "SC_INF_Define_Blast_Hit_Interaction"

	; // DLC Additional Interaction
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_LV40k/LV40k_infantry_generic/LV40k_inf_damage_blast_hit.inc")
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_Halo/HALO_infantry_generic/HALO_inf_damage_blast_hit.inc")
)

(Define "SC_INF_Define_Bullet_Hit_Interaction"

	; // DLC Additional Interaction
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_LV40k/LV40k_infantry_generic/LV40k_inf_damage_bullet_hit.inc")
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_Halo/HALO_infantry_generic/HALO_inf_damage_bullet_hit.inc")
)

(Define "SC_INF_Define_Pierce_Hit_Interaction"

	; // DLC Additional Interaction
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_LV40k/LV40k_infantry_generic/LV40k_inf_damage_pierce_hit.inc")
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_Halo/HALO_infantry_generic/HALO_inf_damage_pierce_hit.inc")
)
