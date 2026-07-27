
; <<<<	===================	SC Infantry Generic: Damage Defines	===================	>>>>

(define "SC_INF_Define_Heal"	{health_damage_count -%c	{effects "" "" "" "" ""}})
(define "human_health"			{health_damage_count %c		{effects "" "hit" "damage" "die" "die"}})
(define "human_health_x"		{health_damage_count (* %x %c)	{effects "" "hit" "damage" "die" "die"}})	; // BUZZ: <- same as "human health" define above, but has a multiplie)

; <<<<	===================	SC Infantry Generic: Infantry Armor System	===================	>>>>

; // REVISIT LATER, INCLUDE PLASMA INTERACTION AS ITS OWN INTERACTION. THE WAY IT IS HERE IS INCREASING RAM USAGE BY A LOT!!!!

(define "SC_INF_Define_Armored_Chart"
	{if volume "SC_volume_armored"	
		{if not stuff "SC_bullet_plasma"
			{if  volume "SC_volume_armored_heavy"			("human_health"		c(%c_heavy))
			else volume "SC_volume_armored_shield_heavy"	("human_health_x"	c(%c_heavy) x(0.5))
			else volume "SC_volume_armored_medium"			("human_health" 	c(%c_medium))
			else volume "SC_volume_armored_shield_light"	("human_health_x"	c(%c_light) x(0.5))
			else volume "SC_volume_armored_light"			("human_health"		c(%c_light))
			}
			
		; // BUZZ: (for certain mods) -> MAKES PLASMA DEAL MORE DAMAGE AGAINST ARMOR.
		else
			{if  volume "SC_volume_armored_heavy"			("human_health_x"	c(%c_heavy) x(9.5))
			else volume "SC_volume_armored_shield_heavy"	("human_health_x"	c(%c_heavy) x(12.5))
			else volume "SC_volume_armored_medium"			("human_health_x" 	c(%c_medium) x(8.5))
			else volume "SC_volume_armored_shield_light"	("human_health_x"	c(%c_light) x(8.5))
			else volume "SC_volume_armored_light"			("human_health_x"	c(%c_light) x(6.5))
			}	
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

; // BUZZ: use "args" extender in case you wish to spawn blood on a certain bone.

(Define "SC_INF_Define_Spawn_Blood_Hit_Small"
	{spawn "bloodsparks01" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Medium"
	{spawn "bloodsparks_big" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Big"
	{spawn "blood_hit_very_big" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Very_Big"
	{spawn "bloodsparks_big-medium" %c}
)

(Define "SC_INF_Define_Spawn_Blood_Hit_Explode"
	{spawn "bloodsparks_energo_death" %c}
)

; <<<<	===================	SC Infantry Generic: Explode Gore Death	===================	>>>>

; // BUZZ: Must be a call because it's usually called by a RAND operation and has FX. 

; // BUZZ: This disregards armor values, Should i consider it later?

(Define "SC_INF_Define_Explode_Death"	; ("SC_INF_Define_Explode_Death" human() tsz1() tsz2() tsz3())
	{if prop "human"							 {if rand %human {Call_synced "SC_INF_Call_Explode_Death"}}
	else prop "SC_plataform_prop_troopers_size1" {if rand %tsz1 {Call_synced "SC_INF_Call_Explode_Death"}}
	else prop "SC_plataform_prop_troopers_size2" {if rand %tsz2 {Call_synced "SC_INF_Call_Explode_Death"}}
	else prop "SC_plataform_prop_troopers_size3" {if rand %tsz3 {Call_synced "SC_INF_Call_Explode_Death"}}
	}
)

{on "SC_INF_Call_Explode_Death" sync
	
	{delay 0.05 	; {} // BUZZ: <- Delay is a must.
		{if dead
			{if prop "human"
				("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
				
				{if tagged "sc_skin_tag_lv40k_orkboy_weirdboy"		;{} // BUZZ: <- temp DLC placed effects here.
					{spawn "fx_ork_weirdboy_psychic_dead" "basis" x}
					{blastwave c4 3 r0 3 r1 5 position}
				}
				{if tagged "sc_h_skin_tag_skeleton_lv40k_orkboy"
					{if rand 0.5{spawn "ork_gibs_torso1" "#ork_rig-spine2" x}
					else {spawn "ork_gibs_pelvis1" "#ork_rig-pelvis" x}}
					{spawn "ork_gibs_arm1" "hand2r" x}
					{spawn "ork_gibs_hand1" "hand3l" x}
					{if rand 0.5 {spawn "ork_gibs_head1" "#ork_rig-head" x}}
					{if rand 0.65 {spawn "ork_gibs_leg1" "foot1r" x}}
				else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"
					{if rand 0.5{spawn "ork_gibs_torso1" "#ork_rig-spine2" x}
					else {spawn "ork_gibs_pelvis1" "#ork_rig-pelvis" x}}
					{spawn "ork_gibs_arm1" "hand2r" x}
					{spawn "ork_gibs_hand1" "hand3l" x}
					{if rand 0.5 {spawn "ork_gibs_head1" "#ork_rig-head" x}}
					{if rand 0.65 {spawn "ork_gibs_leg1" "foot1r" x}}
				}
				{delete}
				
			else prop "LV40k_dlc_prop_troopers_Ork_Boy"
				("SC_INF_Define_Spawn_Blood_Hit_Explode" c("basis" x))
			
				{if rand 0.5 {spawn "ork_gibs_torso1" "#ork_rig-spine2" x}
				else {spawn "ork_gibs_pelvis1" "#ork_rig-pelvis" x}}
				{spawn "ork_gibs_arm1" "hand2r" x}
				{spawn "ork_gibs_hand1" "hand3l" x}
				{if rand 0.5 {spawn "ork_gibs_head1" "#ork_rig-head" x}}
				{if rand 0.65 {spawn "ork_gibs_leg1" "foot1r" x}}
				
				{delete}
			}
		}
	}
}

; <<<<	===================	SC Infantry Generic: Amputation Gore	===================	>>>>

; // BUZZ: requires a major rework, revisit.

(Define "SC_INF_Define_Tear_Limbs"
	{if not tagged "SC_INF_Tag_Gore"
		{if rand %chance
			{Tags add "SC_INF_Tag_Gore"}
			{Tags add "SC_INF_Tag_Gore_Tear_%bone"}
			{Call_synced "SC_Human_Call_Gore_Skins_List"}
		}
	}
)

(Define "SC_INF_Define_Death_With_Gore"
	{if dead
		{if volume "foot1l" ("SC_INF_Define_Tear_Limbs" bone(foot_l)	chance(%c_limb))}
		{if volume "foot2l" ("SC_INF_Define_Tear_Limbs" bone(foot_l)	chance(%c_limb))}
		{if volume "foot1r" ("SC_INF_Define_Tear_Limbs" bone(foot_r)	chance(%c_limb))}
		{if volume "foot2r" ("SC_INF_Define_Tear_Limbs" bone(foot_r)	chance(%c_limb))}
		{if volume "hand1l" ("SC_INF_Define_Tear_Limbs" bone(hand_l)	chance(%c_limb))}
		{if volume "hand2l" ("SC_INF_Define_Tear_Limbs" bone(hand_l)	chance(%c_limb))}
		{if volume "hand1r" ("SC_INF_Define_Tear_Limbs" bone(hand_r)	chance(%c_limb))}
		{if volume "hand2r" ("SC_INF_Define_Tear_Limbs" bone(hand_r)	chance(%c_limb))}
		{if volume "head"	("SC_INF_Define_Tear_Limbs" bone(Head)		chance(%c_head))}
		{if volume "face"	("SC_INF_Define_Tear_Limbs" bone(Head)		chance(%c_head))}
		{if volume "body"	("SC_INF_Define_Tear_Limbs" bone(Body)		chance(%c_body))}
	}
)

; // BUZZ: Logic for bullet hit.
(Define "SC_INF_Define_Spawn_Blood_Hit_Bullet"
	{if  volume "SC_volume_armored_heavy"	
		{if stuff "SC_verylow_human_armor_piercing"		
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else 
		}	
	else volume "SC_volume_armored_shield_heavy"	
		{if stuff "SC_verylow_human_armor_piercing"		
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else 
		}	
	else volume "SC_volume_armored_medium"			
		{if stuff "SC_verylow_human_armor_piercing"		
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else 
		}	
	else volume "SC_volume_armored_shield_light"	
		{if stuff "SC_verylow_human_armor_piercing"		
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else 
		}	
	else volume "SC_volume_armored_light"			
		{if stuff "SC_verylow_human_armor_piercing"		
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Small" c())					
		else 
		}
	else
		{if stuff "SC_verylow_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Small" c())		("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.3) c_limb(0.5))
		else stuff "SC_low_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Medium" c())	("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.5) c_limb(0.7))
		else stuff "SC_medium_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Big" c())		("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.8) c_limb(1))
		else stuff "SC_high_human_armor_piercing"		("SC_INF_Define_Spawn_Blood_Hit_Big" c())		("SC_INF_Define_Death_With_Gore" c_body(0.8) c_head(1) c_limb(1))
		else stuff "SC_veryhigh_human_armor_piercing"	("SC_INF_Define_Spawn_Blood_Hit_Big" c())		("SC_INF_Define_Death_With_Gore" c_body(1) c_head(1) c_limb(1))
		else stuff "bullet ptr"							("SC_INF_Define_Spawn_Blood_Hit_Medium" c())	("SC_INF_Define_Death_With_Gore" c_body(0.5) c_head(1) c_limb(1))				
		else stuff "bullet ap"							("SC_INF_Define_Spawn_Blood_Hit_Medium" c())	("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.5) c_limb(0.5))					
		else 
			("SC_INF_Define_Spawn_Blood_Hit_Small" c())
			("SC_INF_Define_Death_With_Gore" c_body(0) c_head(0.2) c_limb(0.35))
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
