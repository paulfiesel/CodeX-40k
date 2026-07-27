
(define "secondary_damage"

				{if  stuff "autocannon_small"
					;{blastwave c4 1.5 r0 1.0 r1 1.1 position}
					{spawn "w81_post_penetration_effect_autocannon" inv_normal {impulse forward -60  2.5 com}}
					{spawn "metal_pierce_small"}
				else stuff "ptr"
					{blastwave c4 3 r0 1.0 r1 1.9 position}
					{blastwave c4 0.5 r0 2.0 r1 2.1 position}
					{spawn "metal_pierce"}
				else stuff "cumulative_charge"
					{if tagged "atgm_bullet"
						;{blastwave c4 3 r0 1.0 r1 1.6 position}
						;{blastwave c4 0.5 r0 1.6 r1 1.7 position}
						{spawn "w81_post_penetration_effect_atgm" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
						{spawn "metal_pierce"}
						{tags remove "atgm_bullet"}
					else tagged "tandem_atgm_bullet"
						{spawn "w81_post_penetration_effect_atgm_tandem" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
						{spawn "metal_pierce"}
						{tags remove "tandem_atgm_bullet"}
					else tagged "tandem_cm_bullet"
						{spawn "w81_post_penetration_effect_atgm_tandem" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
						{spawn "metal_pierce"}
						{tags remove "tandem_cm_bullet"}
					else tagged "small_heat"
						{spawn "metal_pierce_small"}
						{tags remove "small_heat"}
					else tagged "hesh_bullet"
						{bullet_detonate}
						{blastwave c4 999 r0 1.2 r1 1.2 position}
						{blastwave c4 0.5 r0 1.3 r1 1.4 position}
						{spawn "metal_pierce_small"}
						{tags remove "hesh_bullet"}
					else tagged "cm_bullet"
						;{blastwave c4 3 r0 1.0 r1 1.9 position}
						;{blastwave c4 0.5 r0 1.8 r1 2.0 position}
						{spawn "w81_post_penetration_effect_heat" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
						{spawn "metal_pierce_small"}
						{tags remove "cm_bullet"}
					}
				else stuff "fg"
					{blastwave c4 5 r0 1.8 r1 3.9 position}
					{blastwave c4 2.5 r0 2.0 r1 4.1 position}
				{spawn "w81_post_penetration_effect_full-caliber_aphe" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
				else stuff "aphebc"
					;{blastwave c4 3.5 r0 1.4 r1 1.5 position}
					;{blastwave c4 0.5 r0 1.5 r1 1.6 position}
				{spawn "w81_post_penetration_effect_full-caliber_aphe" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce_small"}
				else stuff "aphe"
					;{blastwave c4 3.5 r0 1.4 r1 1.5 position}
					;{blastwave c4 0.5 r0 1.5 r1 1.6 position}
				{spawn "w81_post_penetration_effect_full-caliber_aphe" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce_small"}
				else stuff "apcbche"
					;{blastwave c4 3.5 r0 1.4 r1 1.5 position}
					;{blastwave c4 0.5 r0 1.5 r1 1.6 position}
				{spawn "w81_post_penetration_effect_full-caliber_aphe" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce_small"}
				else stuff "ap"
					;{blastwave c4 3 r0 1.2 r1 1.2 position}
					;{blastwave c4 0.5 r0 1.3 r1 1.4 position}
				{spawn "w81_post_penetration_effect_full-caliber_ap" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce_small"}
				else stuff "hesh"
					{bullet_detonate}
					{blastwave c4 999 r0 1.2 r1 1.2 position}
					{blastwave c4 0.5 r0 1.3 r1 1.4 position}
					{spawn "metal_pierce_small"}
				else stuff "apfsds"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_short" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apfsdsa"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_long" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apfsdsb"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_short" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apfsdsl"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_long" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apfsdsla"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_long" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apfsdslb"

					;{blastwave c4 4.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 4 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_apfsds_long" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apcr"
					;{blastwave c4 2 r0 1.1 r1 1.2 position}
					;{blastwave c4 0.5 r0 1.3 r1 1.3 position}
				{spawn "w81_post_penetration_effect_sub-caliber_apcr" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else stuff "apds"

					;{blastwave c4 3.3 r0 1.1 r1 1.2 position}
					;{blastwave c4 3 r0 1.3 r1 1.3 position}
					;{spawn "w81_post_penetration_effect_medium" {impulse forward -60  2.5 com}}
				{spawn "w81_post_penetration_effect_sub-caliber_apds" inv_normal {tags add "big_veh"} {impulse forward -60  2.5 com}}
					{spawn "metal_pierce"}
				else  stuff "bullet"
					{blastwave c4 3 r0 1.0 r1 1.0 position}
					{blastwave c4 0.5 r0 1.2 r1 1.2 position}
				else
					{if "efp_core"
						{blastwave c4 3 r0 1.2 r1 1.2 position}
						{blastwave c4 0.5 r0 1.3 r1 1.4 position}
						{spawn "metal_pierce_small"}
						{set "efp_core" 0}
					else
						{blastwave c4 3 r0 1.7 r1 1.9 position}
						{blastwave c4 0.5 r0 1.8 r1 2.0 position}
						{spawn "metal_pierce_small"}

					}
				}



			{if stuff "ic hmgun"
				{fire radius 0.5 time 0.3 heating 30}
			else stuff "ic autocannon_small"
				{fire radius 0.5 time 0.3 heating 60}
			}
)
;/*=========== Piercing Probability Begin ===========*/

{on pierce sync
	("damage_process_pierce_M" staff(ptr)					;// Anti-Tank Rifles (Must be first because ptr also have bullet tag)
		tag_test(0)
		crew_shock_chance(0.1)
		crew_shock_time(1)
		kill_crew(0.1)
		pen_fx(auto)
		pen_sound(bullet)
	)

	("damage_process_pierce_M" staff(bullet)				;// hmgun/mgun/rifle/smg/pistol
		tag_test(0)
		crew_shock_chance(0)
		crew_shock_time(1)
		kill_crew(0.1)
		pen_fx(bullet)
		pen_sound(none)
	)

	("damage_process_pierce_M" staff(20to25)				;// 20-25mm Auto-Cannons
		tag_test(0)
		crew_shock_chance(0)
		crew_shock_time(2)
		kill_crew(0.1)
		pen_fx(auto)
		pen_sound(bullet)
	)

	("damage_process_pierce_M" staff(37to40)				;// 37-40mm Auto-Cannons
		tag_test(0)
		crew_shock_chance(0)
		crew_shock_time(3)
		kill_crew(0.2)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce_M" staff(37to47_he_filler)	;// 37-47mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(0.1)
		crew_shock_time(6)
		kill_crew(0.4)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce_M" staff(37to47)				;// 37-47mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(0.1)
		crew_shock_time(2)
		kill_crew(0.3)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce_M" staff(50to57_he_filler)	;// 50-57mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(0.2)
		crew_shock_time(3)
		kill_crew(0.5)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce_M" staff(50to57)				;// 50-57mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(0.2)
		crew_shock_time(3)
		kill_crew(0.4)
		pen_fx(37_57)
		pen_sound(small)
	)

	("damage_process_pierce_M" staff(size2_heat_shell)	;// 75to76 HEAT Shells
		tag_test(0)
		crew_shock_chance(0.3)
		crew_shock_time(4)
		kill_crew(0.3)
		pen_fx(75_105_heat)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(75to76_he_filler)	;// 75to76 Shells with HE filler
		tag_test(0)
		crew_shock_chance(0.3)
		crew_shock_time(4)
		kill_crew(0.6)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(75to76)				;// 75-76mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(0.3)
		crew_shock_time(3)
		kill_crew(0.5)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(size3_heat_shell)	;// 85-105mm HEAT Shells
		tag_test(0)
		crew_shock_chance(0.4)
		crew_shock_time(4)
		kill_crew(0.5)
		pen_fx(75_105_heat)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(88to105_he_filler)	;// 85-105mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(0.4)
		crew_shock_time(4)
		kill_crew(0.7)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(88to105)				;// 85-105mm Shells NO HE filler
		tag_test(0)
		crew_shock_chance(0.5)
		crew_shock_time(3)
		kill_crew(0.6)
		pen_fx(75_105)
		pen_sound(medium)
	)

	("damage_process_pierce_M" staff(122to128)			;// 122-128mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(0.6)
		crew_shock_time(5)
		kill_crew(1.0)
		pen_fx(120_152)
		pen_sound(large)

	)

	("damage_process_pierce_M" staff(size4_heat_shell)	;// 150-152mm HEAT Shells
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(5)
		kill_crew(0.5)
		pen_fx(120_152_heat)
		pen_sound(large)
	)

	("damage_process_pierce_M" staff(150to152)			;// 150-152mm Shells with HE filler
		tag_test(0)
		crew_shock_chance(1)
		crew_shock_time(5)
		kill_crew(1.0)
		pen_fx(120_152)
		pen_sound(large)
	)

	("damage_process_pierce_M" staff(cumulative_charge)	;// HEAT Grenades (RPG40, RPG43, PWM1)
		tag_test(0)
		crew_shock_chance(0.4)
		crew_shock_time(3)
		kill_crew(0.6)
		pen_fx(37_57)
		pen_sound(small)
	)

	;("at_grenade_pierce"								;// HEAT Grenades (RPG40, RPG43, PWM1)
	;	pierce_body_brake(0.3)
	;	pierce_body_destroy(0)
	;	pierce_engine_brake(1)
	;)

	("damage_process_pierce_M" staff(rocketlauncher)		;// Bazooka Class weapons (RPG's)
		tag_test(0)
		crew_shock_chance(0.4)
		crew_shock_time(4)
		kill_crew(0.6)
		pen_fx(75_105_heat)
		pen_sound(small)
	)

	{if component "body"

			("secondary_damage")

	else component "turret"

			("secondary_damage")

	}

	{set "pierced_processed" 0}							;// clears check that is set if one of the above ammo types penetrates


}

;/*=========== Piercing Probability End ===========*/

;/*=========== Blastwave Probability Begin ===========*/

{on blast sync 							;// higher energy must be first
	("damage_process_blast"
		blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
		crew_shock_chance(1)
		crew_shock_time(3)
		kill_crew(0.1)
	)
	("damage_process_blast"
		blast_energy(7)					;// -60mm HE - 130mm HE
		crew_shock_chance(0.5)
		crew_shock_time(2)
		kill_crew(0.05)
	)
	("damage_process_blast"
		blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
		crew_shock_chance(0.45)
		crew_shock_time(3)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(3.5)				;// 75mm HE - 77mm HE
		crew_shock_chance(0.3)
		crew_shock_time(2)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(2)					;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
		crew_shock_chance(0)
		crew_shock_time(2.5)
		kill_crew(0)
	)
	("damage_process_blast"
		blast_energy(0.9)				;// AP Mine, Most Grenades, 5cm Mortar
		crew_shock_chance(0)
		crew_shock_time(1.5)
		kill_crew(0)
	)
	{if stuff "antitrack"
		{if volume "track"
			{if min_energy 3
				{component break}
			}
		}
	}
}

{on break_armor
	("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
		pierce_body_brake(0)
		pierce_engine_brake(0)
	)
	("at_mine_blast"					;// Explosive AT Mines
		pierce_body_brake(0)
		pierce_engine_brake(0)
	)
}

{on break_armor_again
	("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
		pierce_body_brake(0)
		pierce_engine_brake(0)
	)
	("at_mine_blast"					;// Explosive AT Mines
		pierce_body_brake(0)
		pierce_engine_brake(0)
	)
}

;/*=========== Blastwave Probability End ===========*/


{on ik begin "turret"
			{if tagged "no_power"               ;ordos_add+++
				{if tagged "cw_turr_speed_reduced"
					{ik_enable "turret" 0}
				else
					{delay 0.3
						{ik_enable "turret" 0}
						{tags remove "cw_turr_speed_reduced"}
					}
				}
				{tags add "cw_turr_speed_reduced"}
			}

	}
	{on ik end "turret"
		{delay 0.5 "turret_no_power"     ;ordos_debug+++
			{call "update_turret"}
		}

	}
