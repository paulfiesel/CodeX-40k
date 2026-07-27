
;	<<<< -------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Infantry Generic: Shared Damage System ===============] >>
;	<<<<--------------------------------------------------------------------------->>>>			 


(include "SC_inf_damage_defines.inc")


; <<<<	===================	SC Infantry Generic: Infantry Armor System	===================	>>>>


(define "SC_Infantry_Generic_Define_Armored_Chart"
	{if  volume "SC_volume_armored_heavy"			("human_health"		c(%c_heavy))
	else volume "SC_volume_armored_shield_heavy"	("human_health_x"	c(%c_heavy) x(0.5))
	else volume "SC_volume_armored_medium"			("human_health" 	c(%c_medium))
	else volume "SC_volume_armored_shield_light"	("human_health_x"	c(%c_light) x(0.5))
	else volume "SC_volume_armored_light"			("human_health"		c(%c_light))
	else											("human_health"		c(%c_unarmored))
	}
)

(Define "SC_Infantry_Generic_Define_Armored_Piercing"
	{if  volume "SC_volume_armored_heavy"			{call "process_bullet_%h_v"}
	else volume "SC_volume_armored_shield_heavy"	{call "process_bullet_%sh_v"}
	else volume "SC_volume_armored_medium"			{call "process_bullet_%m_v"}
	else volume "SC_volume_armored_shield_light"	{call "process_bullet_%sl_v"}
	else volume "SC_volume_armored_light"			{call "process_bullet_%l_v"}
	else											{call "process_bullet_%u_v"}
	}
)

; <<<<	===================	SC Infantry Generic: Blast Hit	===================	>>>>

{on blast_hit overload sync
	{kill_flags reset}
	{if hit_side front
		{kill_flags front}
	else hit_side back
		{kill_flags back}
	else
		{kill_flags front back}
	}
	{kill_flags blast}
	
	{if not dead
		{if min_energy 20
			{call "unhealable"}
		else min_energy 2
			{if not "sc_volume_armored"
				{call "unhealable"}
			}
		else min_energy 1.25
			(mod "mp" 
				{if not "sc_volume_armored"
					{call "unhealable"}
				}
			)
		}
		{Call "Flinch"}	; // BUZZ: <- Call GOH human flinch animations.
	}

	; // BUZZ: BLAST CHART (FOR REFERENCE ~~)
	; UNARMORED	-	~100%
	; LIGHT		-	~65%
	; MEDIUM	-	~30%
	; HEAVY		-	~15%
	
	; --------------------------------------------------------------------------------------------------------------------;
	
	("SC_Infantry_Generic_Define_Blast_Hit_Interaction")	; // <- SC Plataform DLC weapons.

	{if stuff "grenade"
		{if min_energy 0.80
			("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(15)	c_medium(30)	c_light(50)		c_unarmored(85))
		}
	}
	{if stuff "rifle"		;// Rifle grenades. Tag from weapon not ammo.
		{if min_energy 0.95
			("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(15)	c_medium(30)	c_light(50)		c_unarmored(85))
		}
	}
	{if stuff "mine"
		{if min_energy 0.75
			("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(40)	c_medium(75)	c_light(120)	c_unarmored(200))
		else min_energy 0.45
			("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(5)	c_medium(10)	c_light(35)		c_unarmored(60))
		}
	}
	{if min_energy 2.6
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(100)	c_medium(200)	c_light(260)	c_unarmored(350))
	else min_energy 1.9
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(50)		c_medium(90)	c_light(150)	c_unarmored(225))
	else min_energy 1.25
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(15)		c_medium(30)	c_light(50)		c_unarmored(85))
	}
	
	(Define "SC_Infantry_Generic_Define_Blast_Table"
		{health_damage_blast
			{effects
				"hit-scream"
				"hit-light"
				"hit-heavy"
				"die"
				"hit-explosion"
				"throw-off"
				"throw-off-and-die"
			}
			
			;//table for "throw_off" impulse
			;//{blast energy, impulse}
			{table	
				{(* 0.95	%r1)	0.05}
				{(* 1.1		%r2)	0.15}
				{(* 2.0		%r3)	0.5 }
				{(* 10		%r4)	2	}
				{(* 50		%r5)	3	}
			}	
		}
	)
	{if volume "SC_volume_armored_heavy"	("SC_Infantry_Generic_Define_Blast_Table" r1(9) r2(8) r3(7.5) r4(5) r5(1.8))
	else volume "SC_volume_armored_medium"	("SC_Infantry_Generic_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
	else volume "SC_volume_armored_light"	("SC_Infantry_Generic_Define_Blast_Table" r1(3) r2(4) r3(3) r4(2) r5(1.2))
	else									("SC_Infantry_Generic_Define_Blast_Table" r1(1) r2(1) r3(1) r4(1) r5(1))
	}
}

; <<<<	===================	SC Infantry Generic: Bullet Hit	===================	>>>>

{on bullet_hit
	{kill_flags reset}
	{signal hit 5}
	
	
	; ===================================================================================================================================== ;
	; // HUMAN ARMOR LEVEL ADDITIVE DAMAGE
	; ===================================================================================================================================== ;
	
	
	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;{}
	
	; // ------------------------ VANILLA OR UNTAGGED WEAPONS.

	else stuff "shell fg"
	
	else stuff "rocketlauncher"
		
	else stuff "rifle_grenade_at"
		
	else stuff "shell"
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_zenite"}}
	
	else stuff "flare" 
	
		; // ------------------------ SC PLATAFORM HUMAN ARMOR DAMAGE.
	
	else stuff "SC_verylow_human_armor_piercing"
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(0)	c_medium(0)		c_light(10)		c_unarmored(15))
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v() sh_v() m_v() sl_v(hit) l_v(hit) u_v(hit))	
		{if volume "SC_volume_armored" {spawn "metal_hit_bul"}}
		
	else stuff "SC_low_human_armor_piercing"	
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(0)	c_medium(10)	c_light(20)		c_unarmored(35))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v() sh_v() m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul"}}
		
	else stuff "SC_medium_human_armor_piercing"		
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(15)	c_medium(25)	c_light(40)		c_unarmored(80))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_at"}}
		
	else stuff "SC_high_human_armor_piercing"		
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(40)	c_medium(55)	c_light(90)		c_unarmored(150))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_heavy"}}
		
	else stuff "SC_veryhigh_human_armor_piercing"	
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(75)	c_medium(95)	c_light(125)	c_unarmored(200))
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_zenite"}}
		
	; // Vanilla AT Rifles
	else stuff "bullet ptr"							
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(10)	c_medium(15)	c_light(30)		c_unarmored(0))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v(hit) sh_v(hit) m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_zenite"}}
		
	; // Vanilla HMGs 
	else stuff "bullet ap"						
		("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(3)	c_medium(7)		c_light(15)		c_unarmored(0))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v() sh_v() m_v(hit) sl_v(hit) l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul_at"}}

	; // BUZZ: Consider this as the "no-piercing" values.
	else stuff "bullet small_arms"	
	;	("SC_Infantry_Generic_Define_Armored_Chart"	c_heavy(0)	c_medium(0)		c_light(0)		c_unarmored(0))	
		("SC_Infantry_Generic_Define_Armored_Piercing" h_v() sh_v() m_v() sl_v() l_v(hit) u_v(hit))
		{if volume "SC_volume_armored" {spawn "metal_hit_bul"}}
	}
	
	
	; ===================================================================================================================================== ;
	; // HUMAN BULLET HIT EVENT DAMAGE
	; ===================================================================================================================================== ;
	
	
	{if stuff "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"	;{}
	
	("SC_Infantry_Generic_Define_Bullet_Hit_Interaction")
	
	else stuff "shell fg"
		{bullet_detonate}
		{call "process_bullet_hit"}
		{call "unhealable"}
	else stuff "rocketlauncher"
		{bullet_detonate}
		{call "process_bullet_hit"}
		{call "unhealable"}
	else stuff "rifle_grenade_at"
		{bullet_detonate}
		{call "process_bullet_hit"}
	else stuff "bullet"
		{if volume_armored
			{bullet_detonate}
			{spawn "helmet_hit_bul"}
		}
		
		;	{call "process_bullet_hit"}		// BUZZ:	<- Moved to armor calculation logic. 
		
		{if tagged "start_personage"
			{if rand 0.5
				{call_synced "unhealable"}
			}
		}
	else stuff "shell"
		{call "process_bullet_hit"}
		{call "unhealable"}
	else stuff "flare"
		{tags add "_flare_hit"}
		{call "_burn"}
	else
		{call "process_bullet_hit"}
	}
}

{on "process_bullet_hit" sync
	{if hit_side front
		{kill_flags front}
	else hit_side back
		{kill_flags back}
	else
		{kill_flags front back}
	}
	{if velocity 7
		{kill_flags run}
	else velocity 0.1
		{kill_flags go}
	}
	{kill_flags piercing}
	{if	stuff "rifle"
		{kill_flags rifle}
	}
	{if	stuff "mgun"
		{kill_flags mgun}
	}
	{if	stuff "smg"
		{kill_flags smg}
	}
	{if	stuff "pistol"
		{kill_flags pistol}
	}
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
			{30 	1	}
			{200	2.5	}
			{500	3	}
			{5000	5	}
		}
	}
	
	; // BUZZ: Call GOH human flinch animations.
	
	{if volume "sc_volume_armored"
		{if stuff  "SC_verylow_human_armor_piercing"
			{if volume "SC_volume_armored_light"
				{Call "Flinch"}	
			}
		else stuff "SC_low_human_armor_piercing"	
			{if volume "SC_volume_armored_light"
				{Call "Flinch"}	
			}
		else stuff "SC_medium_human_armor_piercing"
			{Call "Flinch"}	
		else stuff "SC_high_human_armor_piercing"
			{Call "Flinch"}	
		else stuff "SC_veryhigh_human_armor_piercing"
			{Call "Flinch"}	
		else stuff "bullet ap"
			{if volume "SC_volume_armored_light"
				{Call "Flinch"}	
			}
		else stuff "bullet ptr"
			{Call "Flinch"}	
		else stuff "shell"
			{Call "Flinch"}	
		else stuff "rocketlauncher"
			{Call "Flinch"}	
		}
	else
		{Call "Flinch"}	
	}
}

{on "hit-light"
;	{if not dead
;		{spawn "blood_small"}
;	}
}

{on "hit-heavy"
;	{spawn "blood_medium"}
}