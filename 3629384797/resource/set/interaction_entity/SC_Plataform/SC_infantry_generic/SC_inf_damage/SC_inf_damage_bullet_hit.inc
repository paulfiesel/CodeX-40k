
(Define "SC_INF_Bullet_Hit_Define_Spawn_Event"
	{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier3"}
)

; <<<<	===================	SC Infantry Generic: Bullet Hit	===================	>>>>

(Define "SC_INF_Damage_Define_Pierced"
	{if not volume "SC_volume_armored_shield_no_damage" 
		{if prop "human" 
			{kill_flags reset}
			{if stuff "bullet"
				{if volume_armored		
					{bullet_detonate}
					{spawn "helmet_hit_bul"}
				}
				{if tagged "start_personage"
					{if rand 0.5
						{call_synced "unhealable"}
					}
				}
			}
		}
		
		; ===================================================================================================================================== ;
		; // MAIN DAMAGE
		; ===================================================================================================================================== ;
		
		{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}
			("SC_INF_Define_Pierce_Hit_Interaction") ; // <- SC Plataform DLC Interactions (when pierced).
		}
		
		{call_synced "process_bullet_hit"}
		
		{if stuff "SC_bullet_anti_tank"		; <- hand cannons
			; [...]
		}
		
		{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;{}
		
		else stuff "he auto"
			{if volume "SC_volume_armored"	
				("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
				{if rand 0.2 {call_synced "unhealable"}}
			else					
				("SC_INF_Define_Explode_Death" human(0.8) tsz1(0.8) tsz2(0) tsz3(0))	
				{call "unhealable"}
			}
			{bullet_detonate}
			
		else stuff "zenite"
			{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
			else							("SC_INF_Define_Explode_Death" human(0.5) tsz1(0.5) tsz2(0) tsz3(0))}
			
			{call "unhealable"}
			
		else stuff "bomb"
			{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(1) tsz1(1) tsz2(0) tsz3(0))
			else							("SC_INF_Define_Explode_Death" human(1) tsz1(1) tsz2(0) tsz3(0))}
			
			{call "unhealable"}
			{bullet_detonate}
		
		else stuff "shell"
			{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
			else							("SC_INF_Define_Explode_Death" human(1) tsz1(1) tsz2(0) tsz3(0))}
			
			{call "unhealable"}
			{if stuff "aphe" {bullet_detonate}}
			
		else stuff "rocketlauncher"
			{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
			else							("SC_INF_Define_Explode_Death" human(1) tsz1(1) tsz2(0) tsz3(0))}
			
			{call "unhealable"}
			{bullet_detonate}

		else stuff "rifle_grenade_at"
			{bullet_detonate}
			
		; // ############################### Smallarms ###############################
		
		else
			{if stuff "SC_bullet_plasma"
				{if volume "SC_volume_armored"	
					("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
					{if rand 0.4 {call_synced "unhealable"}}
				else			
					("SC_INF_Define_Explode_Death" human(0.5) tsz1(0.5) tsz2(0) tsz3(0))
					{call "unhealable"}
				}
				{bullet_detonate}	; // <- prevent plasma bolts from piercing
				
			else stuff "SC_verylow_human_armor_piercing"
				; [...]
				
			else stuff "SC_low_human_armor_piercing"	
				; [...]
				
			else stuff "SC_medium_human_armor_piercing"		
				; [...]
				
			else stuff "SC_high_human_armor_piercing"		
				{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0.0) tsz1(0.0) tsz2(0) tsz3(0))
				else							("SC_INF_Define_Explode_Death" human(0.1) tsz1(0.1) tsz2(0) tsz3(0))}
				
			else stuff "SC_veryhigh_human_armor_piercing"	
				{if volume "SC_volume_armored"
					("SC_INF_Define_Explode_Death" human(0.0) tsz1(0.0) tsz2(0) tsz3(0))
					{if rand 0.2 {call_synced "unhealable"}}
				else						
					("SC_INF_Define_Explode_Death" human(0.3) tsz1(0.3) tsz2(0) tsz3(0))	
					{call "unhealable"}
				}
				
			else stuff "bullet ptr"							
				{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0.0) tsz1(0.0) tsz2(0) tsz3(0))
				else							
					("SC_INF_Define_Explode_Death" human(0.4) tsz1(0.4) tsz2(0) tsz3(0))
					{call "unhealable"}
				}
				
			else stuff "bullet ap"						
				{if volume "SC_volume_armored"	("SC_INF_Define_Explode_Death" human(0.0) tsz1(0.0) tsz2(0) tsz3(0))
				else							("SC_INF_Define_Explode_Death" human(0.3) tsz1(0.3) tsz2(0) tsz3(0))}

			else stuff "bullet small_arms"	
				; [...]
			}
		else
			; [...]
		}
		
		; ===================================================================================================================================== ;
		; // BULLET DAMAGE BUFFS
		; ===================================================================================================================================== ;
		
		{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}	[TIER1] // ~~~ % extra damage
		
		else stuff "grenade"	
			{with_effector
				{if tagged "SC_INF_Tag_Buff_Bul_tier3"	{with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(1000)		c_medium(900)	c_light(800)	c_unarmored(700))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(700)		c_medium(600)	c_light(500)	c_unarmored(400))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(500)		c_medium(400)	c_light(300)	c_unarmored(200))}}
			}	
			
		else stuff "rocketlauncher"	
			{with_effector
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(2000)		c_medium(1800)	c_light(1600)	c_unarmored(1400))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(1500)		c_medium(1300)	c_light(1100)	c_unarmored(900))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(1000)		c_medium(800)	c_light(600)	c_unarmored(400))}}
			}	
			
		else stuff "SC_verylow_human_armor_piercing"	
			{with_effector
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(500)		c_medium(450)	c_light(400)	c_unarmored(350))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(300)		c_medium(250)	c_light(200)	c_unarmored(150))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(100)		c_medium(75)	c_light(50)		c_unarmored(20))}}
			}	
			
		else stuff "SC_low_human_armor_piercing"		
			{with_effector 
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(550)		c_medium(500)	c_light(450)	c_unarmored(400))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(350)		c_medium(300)	c_light(250)	c_unarmored(200))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(150)		c_medium(100)	c_light(50)		c_unarmored(25))}}
			}
				
		else stuff "SC_medium_human_armor_piercing"		
			{with_effector 
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(600)		c_medium(550)	c_light(500)	c_unarmored(450))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(400)		c_medium(350)	c_light(300)	c_unarmored(250))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(200)		c_medium(150)	c_light(100)	c_unarmored(50))}}
			}
			
		else stuff "SC_high_human_armor_piercing"		
			{with_effector 
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(650)		c_medium(600)	c_light(550)	c_unarmored(500))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(450)		c_medium(400)	c_light(350)	c_unarmored(300))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(250)		c_medium(200)	c_light(150)	c_unarmored(100))}}
			}
			
		else stuff "SC_veryhigh_human_armor_piercing"	
			{with_effector
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(700)		c_medium(650)	c_light(600)	c_unarmored(550))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(500)		c_medium(450)	c_light(400)	c_unarmored(350))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(300)		c_medium(250)	c_light(200)	c_unarmored(150))}}
			}
			
		else
			{with_effector
				{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(500)		c_medium(450)	c_light(400)	c_unarmored(350))}
				else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(300)		c_medium(250)	c_light(200)	c_unarmored(150))}
				else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(100)		c_medium(75)	c_light(50)		c_unarmored(20))}}
			}
		}
	}
)

(Define "SC_INF_Damage_Define_Bullet_Hit"
	{signal hit 5}

	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}
		("SC_INF_Define_Bullet_Hit_Interaction") ; // <- SC Plataform DLC Interactions.
	}
	
	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" 
		; {...} 
		
	else stuff "he auto"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}}
		
	else stuff "zenite"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}}
	
	else stuff "bomb"
		; [...]
	
	else stuff "shell"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_bc"} else {spawn "metal_hit_bul_zenite"}}}
		
	else stuff "rocketlauncher"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_bc"} else {spawn "metal_hit_bul_zenite"}}}

	else stuff "rifle_grenade_at"
		; [...]
		
	else stuff "flare"
		{tags add "_flare_hit"} 
		{call "_burn"}
	
	else stuff "SC_bullet_plasma"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}}
		
	else stuff "SC_verylow_human_armor_piercing"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}
		
	else stuff "SC_low_human_armor_piercing"	
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}
		
	else stuff "SC_medium_human_armor_piercing"		
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_at"}}}
		
	else stuff "SC_high_human_armor_piercing"		
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_heavy"}}}
		
	else stuff "SC_veryhigh_human_armor_piercing"	
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}}

	else stuff "bullet ptr"							
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_zenite"}}}
		
	else stuff "bullet ap"						
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_at"}}}

	else stuff "bullet small_arms"	
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}

	else
		; // if untagged, do nothing...
	}
)

{on "process_bullet_hit" sync
	{if hit_side front	{kill_flags front}
	else hit_side back	{kill_flags back}
	else				{kill_flags front back}}
	
	{if velocity 7		{kill_flags run}
	else velocity 0.1	{kill_flags go}}
	
	{kill_flags piercing}
	{if	stuff "rifle"	{kill_flags rifle}}
	{if	stuff "mgun"	{kill_flags mgun}}
	{if	stuff "smg"		{kill_flags smg}}
	{if	stuff "pistol"	{kill_flags pistol}}
	
	(Define "SC_INF_Define_Bullet_Thrown_Table"
		{health_damage_pierce
			{effects
				"hit-scream"
				"hit-light"
				"hit-heavy"
				"die"
				"hit-explosion"
				"throw-off"
				"throw-off-and-die"
			}
			{explosive_treshold (* 70 %explosive_d)} 	; // value = amount of damage done to human
			{table	;// table for "throw_off" impluse
			;//{ , impulse}
				{(* 30		%r1)	(* %e1 1)}
				{(* 200		%r2)	(* %e2 2.5)}
				{(* 500		%r3)	(* %e3 3)}
				{(* 5000	%r4)	(* %e4 5)}
			}	
		}
	)
	
	{If prop "human"	
		{Call "Flinch"}		; // BUZZ: <- calls GOH human flinch animations.
		
		{if tagged "sc_skin_tag_trait_heavy_infantry"	
			("SC_INF_Define_Bullet_Thrown_Table" 
				r1(6) r2(6) r3(5) r4(3.5)
				e1(1) e2(1) e3(1) e4(1)
				explosive_d(0.5)
			)
		else
			("SC_INF_Define_Bullet_Thrown_Table" 
				r1(1) r2(1) r3(1) r4(1)
				e1(1) e2(1) e3(1) e4(1)
				explosive_d(1.0)
			)
		}
	else
		{health_damage_pierce
			{effects
				"hit-scream"
				"hit-light"
				"hit-heavy"
				"die"
				"hit-explosion"
				"SC_TP_Main_Call_Exp_Chek_Bullet"
				"throw-off-and-die"
			}
			{explosive_treshold 70} ;// value = amount of damage done to human
			{table	;// table for "throw_off" impluse
			;//{ , impulse}
				{30		1}
				{200	2.5}
				{500	3}
				{5000	5}
			}	
		}
	}
	("SC_INF_Define_Spawn_Blood_Hit_Bullet")	; // BUZZ: <- use spawn blood here, because if the weapon can't pierce the armor values then it makes no sense to spawn blood.
}