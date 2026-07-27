
(Define "SC_INF_Contact_Define_Spawn_Event"
	{Tags remove "SC_INF_Tag_Buff_Melee_tier1"}
	{Tags remove "SC_INF_Tag_Buff_Melee_tier2"}
	{Tags remove "SC_INF_Tag_Buff_Melee_tier3"}
	
	{tags remove "SC_melee_anti_infantry_tier0_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier1_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier2_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier3_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier4_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier5_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier6_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier7_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier8_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier9_cooldown"}	
	{tags remove "SC_melee_anti_infantry_tier10_cooldown"}	
	
	{tags remove "fx_piece_flame_cooldown"}
	{tags remove "SC_Plataform_Prop_Heavy_Flamer_cooldown"}
	{tags remove "lv40k_bullet_meltagun_cooldown"}
)

; <<<<	===================	SC Infantry Generic: Contact Defines	===================	>>>>

(Define "none")

(Define "SC_INF_Contact_Damage"
	{if effector "%ef"
		{if not dead
			{if not tagged "%ef_cooldown"
				{tags add "%ef_cooldown"}	{delay %cd	{tags remove "%ef_cooldown"}}
				
				{if not "SC_SH_Main_Flag_Is_Online"	;}
				
					; // FOR SOME REASON IT DOES NOT WORK PROPERLY WITHOUT THE DELAY!
					
					{Delay 0.01 
					
				;		("SC_INF_Define_Armored_Chart"	c_heavy(%dh) c_medium(%dm) c_light(%dl) c_unarmored(%du))		; <- cannot use volume checker because of "with_effector" interaction
					
						{if prop "human"							
							{if tagged "sc_skin_tag_trait_heavy_infantry" 
								("human_health_x"	c(%dh) x(0.475))
							else
								("human_health"		c(%du))
							}
						else prop "SC_plataform_prop_troopers_size1"	("human_health"		c(%dm))
						else prop "SC_plataform_prop_troopers_size2"	("human_health"		c(%dh))
						else prop "SC_plataform_prop_troopers_size3"	("human_health"		c(%dl))
						else prop "SC_plataform_prop_troopers_size4"	("human_health"		c(%dh))
						else prop "SC_plataform_prop_troopers_size5"	("human_health"		c(%dl))
						else prop "SC_plataform_prop_troopers_size6"	("human_health"		c(%dm))
						}
					}
					
					%args
					("%def" %c1(%c1a) %c2(%c2a) %c3(%c3a))
				}
			}
		}
	}
)

(Define "SC_INF_Contact_Define_Contact"

	; // MELEE DAMAGE
	("SC_Allegiance_Define_Check_Effector_Different_Tag" effector(SC_prop_contactor_melee) 	do({Call_synced "SC_INF_Call_Melee_Hit"}))	; // BUZZ: <- call melee checker.
	
	; // SUPER HEAVY FLAMERS
	("SC_INF_Contact_Damage" ef(SC_Plataform_Prop_SH_Flamer) cd(0.1) dh(500) dm(650) dl(800) du(1000)	def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args( 
			{spawn "isparenie"}
	))

	; // DLC LV40k - Meltagun
	("SC_INF_Contact_Damage" ef(lv40k_bullet_meltagun) cd(0.1) dh(350) dm(400) dl(500) du(600)	def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args( 
			{spawn "melta_hit_air"}
	))
	
	; // HEAVY FLAMERS	
	("SC_INF_Contact_Damage" ef(SC_Plataform_Prop_Heavy_Flamer) cd(0.1) dh(150) dm(250) dl(300) du(400)	def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args( 
			{spawn "melta_hit_air"}
	))

	; // COMMON FLAMERS
	("SC_INF_Contact_Damage" ef(fx_piece_flame)	cd(0.1)	dh(50) dm(75) dl(125) du(200)	def(SC_INF_Define_Spawn_Blood_Hit_Big) c1(c) c1a()
		args(
			{spawn "flame_fire_hit"}
	))
	
	; // DLC LV40k - TYRANID POISON (NOT CODED!)
;//	("SC_INF_Contact_Damage" ef(lv40k_effects_tyr_poison_cloud)	cd(0.1)	dh(50) dm(75) dl(125) du(200)	def(SC_INF_Define_Spawn_Blood_Hit_Big) c1(c) c1a()
;//		args(
;//	))
)

; <<<<	===================	SC Infantry Generic: Melee Hit	===================	>>>>

; // Rules: Damage Scaling per volume Armor Level: Unarmored 100% -> Light 80% -> Medium 60% -> 40% Heavy (Volumes marked with "Shield" tag take only 50% of its given damage level. Ex: Light -> 80%, Shield Light -> 40%)
; // Rules: Damage Scales -> ~~ 1.5x or 2x per level

{on "SC_INF_Call_Melee_Hit" sync		;}
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier0)	cd(0.5)	dh(150) dm(200) dl(250) du(300) def(SC_INF_Define_Spawn_Blood_Hit_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier1)	cd(0.5)	dh(300) dm(400) dl(500) du(600) def(SC_INF_Define_Spawn_Blood_Hit_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier2)	cd(0.5)	dh(500) dm(800) dl(1000) du(1200) def(SC_INF_Define_Spawn_Blood_Hit_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
			{If prop "Human"	{If not tagged "sc_skin_tag_trait_heavy_infantry" {throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier3)	cd(0.5)	dh(1100) dm(1600) dl(1800) du(2400) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{If not tagged "sc_skin_tag_trait_heavy_infantry" {throw_off up 2.0 0.5 dir 6.0 2 forward 5 turn 0 360 force}}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier4)	cd(0.5)	dh(2400) dm(3200) dl(3600) du(4800) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 4.0 1.0 dir 6.0 3 forward 5 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier5)	cd(0.5)	dh(4800) dm(6400) dl(7200) du(9600) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 5.0 1.0 dir 6.0 3 forward 5 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier6)	cd(0.5)	dh(9600) dm(12800) dl(14400) du(19200) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 6.0 1.0 dir 6.0 3 forward 5 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier7)	cd(0.5)	dh(19200) dm(25600) dl(28800) du(38400) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 7.0 1.5 dir 7.0 3 forward 6 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier8)	cd(0.5)	dh(38400) dm(51200) dl(57600) du(76800) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 10.0 2.5 dir 8.0 3 forward 8 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier9)	cd(0.5)	dh(76800) dm(102400) dl(115200) du(153600) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 10.0 2.5 dir 8.0 3 forward 8 turn 0 360 force}}
	))
	
	("SC_INF_Contact_Damage" ef(SC_melee_anti_infantry_tier10)	cd(0.5)	dh(153600) dm(204800) dl(230400) du(307200) def(SC_INF_Define_Spawn_Blood_Hit_Very_Big) c1(c) c1a()
		args(
			{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}
			{If prop "Human"	{throw_off up 10.0 2.5 dir 8.0 3 forward 8 turn 0 360 force}}
	))
}

; <<<<	===================	SC Infantry Generic: Burning/Heating	===================	>>>>

{on "burn_volume"
	{if not "SC_SH_Main_Flag_Is_Online"	; // <- BUZZ: <- Check if shields aren't ON
		{Call "SC_Burn_Damage"}
		
		{if prop "human"
			{if not tagged "sc_skin_tag_trait_heavy_infantry"	{Call "_burn"}}	; // BUZZ: <- Call Effects
		else
			{Call "_burn"}	; // BUZZ: <- Call Effects
		}
	}
}

{On "SC_Burn_Damage"
	{if prop "human"
		{if not tagged "sc_skin_tag_trait_heavy_infantry"	
			("SC_INF_Define_Armored_Chart"	c_heavy(125) c_medium(150) c_light(175) c_unarmored(200))	
		else
			("SC_INF_Define_Armored_Chart"	c_heavy(35) c_medium(50) c_light(75) c_unarmored(125))	
		}	
	else
		("SC_INF_Define_Armored_Chart"	c_heavy(150) c_medium(200) c_light(250) c_unarmored(300))	
	}
}