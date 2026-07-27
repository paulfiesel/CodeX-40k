
(Define "SC_INF_Bullet_Hit_Define_Spawn_Event"
	{Tags remove "SC_INF_Tag_Buff_Bul_tier1"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier2"}
	{Tags remove "SC_INF_Tag_Buff_Bul_tier3"}
)

; <<<<	===================	SC Infantry Generic: Bullet Hit	===================	>>>>

(Define "SC_INF_Damage_Define_Bullet_Hit"
	{kill_flags reset}
	{signal hit 5}
	
	; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SYNC KILL TEST - BEGIN 
	
	; // Leave as experimental for now, results were satisfying but will require lots of effort to implement.
	
	{if stuff "SC_ammo_melee"
		{if not dead
			{if not personage
				{if not linked 
					{if not tagged "sc_fsm_tag_FSM_STATE_SYNCKILL"	; }
					
						; // VICTIM // KILLER
						;// {if prop "hi_orkboy_slugga_evilsunz_1" ("SC_Allegiance_Define_Check_Sync_Kill" effector(hi_orkboy_slugga_evilsunz_1) do({tags add "sync_killin_an_ork"} {call "sync_kill_test"}))}
					}
				}
			}
		}
	}	
	
	
	; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ SYNC KILL TEST - END 
	
	
	; // BUZZ: this here bellow is vanilla bullet vests or infantry helmets, no use for SC plataform.
	{if prop "human" 
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
	; // HUMAN ARMOR LEVEL ADDITIVE DAMAGE
	; ===================================================================================================================================== ;
	
	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;{}
	
	; // ############################### GOH Vanilla Bullet - Autocannons ###############################
	
	else stuff "he auto"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}
		else	("SC_INF_Define_Explode_Death" human(0.8) tsz1(0.8) tsz2(0) tsz3(0))}

		{If stuff "size1"	("SC_INF_Define_Armored_Chart"	c_heavy(900)	c_medium(1100)	c_light(1300)	c_unarmored(1500))
		else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(1500)	c_medium(1900)	c_light(2200)	c_unarmored(2500))}
		
		{bullet_detonate}
		{call "process_bullet_hit"}
		{call "unhealable"}

	else stuff "zenite"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}
		else	("SC_INF_Define_Explode_Death" human(0.8) tsz1(0.8) tsz2(0) tsz3(0))}
		
		{If stuff "size1"	("SC_INF_Define_Armored_Chart"	c_heavy(1400)	c_medium(1600)	c_light(1800)	c_unarmored(2000))
		else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(2100)	c_medium(2400)	c_light(2700)	c_unarmored(3000))}
		
		{if volume "SC_volume_armored" {if not volume "SC_volume_armored_shield_no_damage" {bullet_detonate}}}
		{call "process_bullet_hit"}
		{call "unhealable"}
		
	; // ############################### GOH Vanilla Bullet - Higher Priority ###############################
	
	else stuff "shell"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_bc"} else {spawn "metal_hit_bul_zenite"}}}
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "process_bullet_hit"}
		{call "unhealable"}
		
		{if stuff "ap"
			{if volume "SC_volume_armored" {bullet_detonate} {if not volume "SC_volume_armored_shield_no_damage" {bullet_detonate}}}
			
			; // BUZZ: AP does more damage against heavy armor
			{if stuff "size4"	("SC_INF_Define_Armored_Chart"	c_heavy(32000)	c_medium(36000)	c_light(38000)	c_unarmored(40000))
			else stuff "size3"	("SC_INF_Define_Armored_Chart"	c_heavy(26000)	c_medium(30000)	c_light(32000)	c_unarmored(34000))
			else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(18000)	c_medium(22000)	c_light(24000)	c_unarmored(26000))
			else				("SC_INF_Define_Armored_Chart"	c_heavy(9000)	c_medium(13000)	c_light(15000)	c_unarmored(17000))
			}
		else stuff "aphe"
			{if not volume "SC_volume_armored_shield_no_damage" {bullet_detonate}}
			
			; // BUZZ: APHE has balanced damage between armor values
			{if stuff "size4"	("SC_INF_Define_Armored_Chart"	c_heavy(30000)	c_medium(33000)	c_light(36000)	c_unarmored(40000))
			else stuff "size3"	("SC_INF_Define_Armored_Chart"	c_heavy(24000)	c_medium(27000)	c_light(30000)	c_unarmored(34000))
			else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(16000)	c_medium(20000)	c_light(23000)	c_unarmored(26000))
			else				("SC_INF_Define_Armored_Chart"	c_heavy(8000)	c_medium(11000)	c_light(14000)	c_unarmored(17000))
			}
		else stuff "he"
			{bullet_detonate}
			
			; // BUZZ: HE does less damage against heavy armor, but more against light armor and unarmored bits
			{if stuff "size4"	("SC_INF_Define_Armored_Chart"	c_heavy(25000)	c_medium(27000)	c_light(44000)	c_unarmored(50000))
			else stuff "size3"	("SC_INF_Define_Armored_Chart"	c_heavy(19000)	c_medium(21000)	c_light(36000)	c_unarmored(40000))
			else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(12000)	c_medium(15000)	c_light(26000)	c_unarmored(30000))
			else				("SC_INF_Define_Armored_Chart"	c_heavy(5000)	c_medium(6000)	c_light(18000)	c_unarmored(21000))
			}
		else
			{bullet_detonate}
			
			; // BUZZ: generic shells
			{if stuff "size4"	("SC_INF_Define_Armored_Chart"	c_heavy(20000)	c_medium(24000)	c_light(27000)	c_unarmored(30000))
			else stuff "size3"	("SC_INF_Define_Armored_Chart"	c_heavy(12000)	c_medium(18000)	c_light(21000)	c_unarmored(25000))
			else stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(8000)	c_medium(10000)	c_light(13000)	c_unarmored(15000))
			else				("SC_INF_Define_Armored_Chart"	c_heavy(5000)	c_medium(7000)	c_light(8000)	c_unarmored(10000))
			}
		}
	
	else stuff "rocketlauncher"
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_bc"} else {spawn "metal_hit_bul_zenite"}}}
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "process_bullet_hit"}
		{call "unhealable"}
		{bullet_detonate}
		
		{if stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(12000)	c_medium(14000)	c_light(17000)	c_unarmored(20000))
		else				("SC_INF_Define_Armored_Chart"	c_heavy(9000)	c_medium(11000)	c_light(13000)	c_unarmored(15000))
		}		
		
	else stuff "rifle_grenade_at"
		{call "process_bullet_hit"}
		{bullet_detonate}
	
		{if stuff "size2"	("SC_INF_Define_Armored_Chart"	c_heavy(6800)	c_medium(7900)	c_light(9000)	c_unarmored(11000))		{call "unhealable"}
		else				("SC_INF_Define_Armored_Chart"	c_heavy(5000)	c_medium(6000)	c_light(7000)	c_unarmored(8000))
		}	
		
	else stuff "flare" 
		{tags add "_flare_hit"}
		{call "_burn"}
		
	; // ############################### SC Plataform Tags ###############################
	
	; // BUZZ: damage logic here is that it must increase against heavy armor.
	
	else stuff "SC_bullet_plasma"
		("SC_INF_Define_Armored_Chart"	c_heavy(4000)	c_medium(2500)	c_light(1000)	c_unarmored(500))	; // <- Plasma additional damage against armor and flesh.
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}}
		("SC_INF_Define_Explode_Death" human(0.6) tsz1(0.6) tsz2(0) tsz3(0))
		{bullet_detonate}	; // <- plasma bullets shouldn't pierce
		
	else stuff "SC_verylow_human_armor_piercing"
		("SC_INF_Define_Armored_Chart"	c_heavy(25)		c_medium(15)	c_light(10)		c_unarmored(0))
		("SC_INF_Define_Armored_Piercing" h_v() sh_v() m_v() sl_v(hit) l_v(hit) u_v(hit))	
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}
		
	else stuff "SC_low_human_armor_piercing"	
		("SC_INF_Define_Armored_Chart"	c_heavy(50)		c_medium(40)	c_light(30)		c_unarmored(25))	
		("SC_INF_Define_Armored_Piercing" h_v() sh_v() m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}
		
	else stuff "SC_medium_human_armor_piercing"		
		("SC_INF_Define_Armored_Chart"	c_heavy(100)	c_medium(75)	c_light(50)		c_unarmored(50))	
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_at"}}}
		
	else stuff "SC_high_human_armor_piercing"		
		("SC_INF_Define_Armored_Chart"	c_heavy(150)	c_medium(125)	c_light(100)	c_unarmored(75))	
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_heavy"}}
		else	("SC_INF_Define_Explode_Death" human(0.15) tsz1(0.15) tsz2(0) tsz3(0))}
		
	else stuff "SC_veryhigh_human_armor_piercing"	
		("SC_INF_Define_Armored_Chart"	c_heavy(250)	c_medium(200)	c_light(175)	c_unarmored(150))
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "hitin_auto"} else {spawn "metal_hit_bul_zenite"}}
		else	("SC_INF_Define_Explode_Death" human(0.3) tsz1(0.3) tsz2(0) tsz3(0))}
		
	; // ############################### GOH Vanilla Bullet - Lower Priority ###############################
	
	; // Vanilla AT Rifles	---- # [Copy "Medium" Piercing]
	else stuff "bullet ptr"							
		("SC_INF_Define_Armored_Chart"	c_heavy(100)	c_medium(75)	c_light(50)		c_unarmored(40))	
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_zenite"}}
		else	("SC_INF_Define_Explode_Death" human(0.45) tsz1(0.45) tsz2(0) tsz3(0))}
		
	; // Vanilla HMGs		---- # [Copy "Low" Piercing]
	else stuff "bullet ap"						
		("SC_INF_Define_Armored_Chart"	c_heavy(50)		c_medium(40)	c_light(30)		c_unarmored(25))
		("SC_INF_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul_at"}}}

	; // Vanilla Smallarms 30.06, 7.62, 7.92	---- # [No additional damage - cannot pierce heavy and medium volumes]
	else stuff "bullet small_arms"	
		("SC_INF_Define_Armored_Piercing" h_v() sh_v() m_v() sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {if volume "LV40k_tyranid_armor" {spawn "tyr_hitin_hit"} else {spawn "metal_hit_bul"}}}

	else
		; // if untagged, do nothing...
	}
	
	{if stuff "SC_bullet_anti_tank"
		{if not prop "human" ("SC_INF_Define_Armored_Chart"	c_heavy(14500)	c_medium(8000)	c_light(2500)	c_unarmored(0))}
		{if volume "SC_volume_armored" {if not volume "SC_volume_armored_shield_no_damage" {bullet_detonate}}}
	}
	
	; ===================================================================================================================================== ;
	; // HUMAN BULLET HIT DLC UNIQUE INTERACTIONS
	; ===================================================================================================================================== ;

	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}
		("SC_INF_Define_Bullet_Hit_Interaction") ; // <- SC Plataform DLC Unique Interactions.
	}
	
	; ===================================================================================================================================== ;
	; // SCRIPTED BULLET BUFFS
	; ===================================================================================================================================== ;
	
	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}	[TIER1] // ~~~ % extra damage
	
	else stuff "grenade"	
		{with_effector
			{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(1000)		c_medium(900)	c_light(800)	c_unarmored(700))}
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
			{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(600)	c_medium(550)	c_light(500)	c_unarmored(450))}
			else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(400)	c_medium(350)	c_light(300)	c_unarmored(250))}
			else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(200)	c_medium(150)	c_light(100)	c_unarmored(50))}}
		}
		
	else stuff "SC_high_human_armor_piercing"		
		{with_effector 
			{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(650)	c_medium(600)	c_light(550)	c_unarmored(500))}
			else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(450)	c_medium(400)	c_light(350)	c_unarmored(300))}
			else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(250)	c_medium(200)	c_light(150)	c_unarmored(100))}}
		}
		
	else stuff "SC_veryhigh_human_armor_piercing"	
		{with_effector
			{if tagged "SC_INF_Tag_Buff_Bul_tier3" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(700)	c_medium(650)	c_light(600)	c_unarmored(550))}
			else tagged "SC_INF_Tag_Buff_Bul_tier2" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(500)	c_medium(450)	c_light(400)	c_unarmored(350))}
			else tagged "SC_INF_Tag_Buff_Bul_tier1" {with_effector	("SC_INF_Define_Armored_Chart"	c_heavy(300)	c_medium(250)	c_light(200)	c_unarmored(150))}}
		}
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
			{explosive_treshold 70} ;// value = amount of damage done to human
			{table	;// table for "throw_off" impluse
			;//{ , impulse}
				{(* 30		%r1)	1}
				{(* 200		%r2)	2.5}
				{(* 500		%r3)	3}
				{(* 5000	%r4)	5}
			}	
		}
	)
	{if tagged "sc_skin_tag_trait_heavy_infantry"		("SC_INF_Define_Bullet_Thrown_Table" r1(6) r2(6) r3(5) r4(3.5))
	else
		{if volume "SC_volume_armored_heavy"			("SC_INF_Define_Bullet_Thrown_Table" r1(9) r2(8) r3(7.5) r4(5))
		else volume "SC_volume_armored_shield_heavy"	("SC_INF_Define_Bullet_Thrown_Table" r1(9) r2(8) r3(7.5) r4(5))
		else volume "SC_volume_armored_medium"			("SC_INF_Define_Bullet_Thrown_Table" r1(6) r2(6) r3(5) r4(3.5))
		else volume "SC_volume_armored_shield_light"	("SC_INF_Define_Bullet_Thrown_Table" r1(6) r2(6) r3(5) r4(3.5))
		else volume "SC_volume_armored_light"			("SC_INF_Define_Bullet_Thrown_Table" r1(3) r2(4) r3(3) r4(2))
		else											("SC_INF_Define_Bullet_Thrown_Table" r1(1) r2(1) r3(1) r4(1))
		}
	}
	
	{If prop "human"	{Call "Flinch"}}	; // BUZZ: <- calls GOH human flinch animations.
	
	("SC_INF_Define_Spawn_Blood_Hit_Bullet")	; // BUZZ: <- use spawn blood here, because if the weapon can't pierce the armor values then it makes no sense to spawn blood.
}