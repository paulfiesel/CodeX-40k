
; <<<<	===================	SC Infantry Generic: Blast 	===================	>>>>

{on blast_hit overload sync
	{kill_flags reset}
	
	{if hit_side front	{kill_flags front}
	else hit_side back	{kill_flags back}
	else				{kill_flags front back}}
	{kill_flags blast}
	
	{if prop "human"
	
		{if rand 0.5 {call_synced "SC_INF_Call_Explode_Death"}}	; // BUZZ: <- TEST!
	else rand 0.
	}
	{if not dead
		{if min_energy 20
			{call "unhealable"}
			
		else min_energy 2
			{if not volume "sc_volume_armored"
				{call "unhealable"}
			}
		else min_energy 1.25
			(mod "mp" 
				{if not volume "sc_volume_armored"
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
	
	("SC_INF_Define_Blast_Hit_Interaction")	; // <- SC Plataform DLC Unique Interactions.

	{if stuff "grenade"
		{if min_energy 0.80
			("SC_INF_Define_Armored_Chart"	c_heavy(15)	c_medium(30)	c_light(50)		c_unarmored(85))
		}
	}
	{if stuff "rifle"		;// Rifle grenades. Tag from weapon not ammo.
		{if min_energy 0.95
			("SC_INF_Define_Armored_Chart"	c_heavy(15)	c_medium(30)	c_light(50)		c_unarmored(85))
		}
	}
	{if stuff "mine"
		{if min_energy 0.75
			("SC_INF_Define_Armored_Chart"	c_heavy(40)	c_medium(75)	c_light(120)	c_unarmored(200))
		else min_energy 0.45
			("SC_INF_Define_Armored_Chart"	c_heavy(5)	c_medium(10)	c_light(35)		c_unarmored(60))
		}
	}
	{if min_energy 20
		("SC_INF_Define_Armored_Chart"	c_heavy(5000)	c_medium(6500)	c_light(8000)	c_unarmored(9000))
	else min_energy 15
		("SC_INF_Define_Armored_Chart"	c_heavy(1600)	c_medium(2500)	c_light(3900)	c_unarmored(5000))
	else min_energy 10
		("SC_INF_Define_Armored_Chart"	c_heavy(800)	c_medium(1000)	c_light(1500)	c_unarmored(2000))
	else min_energy 5
		("SC_INF_Define_Armored_Chart"	c_heavy(200)	c_medium(400)	c_light(600)	c_unarmored(900))
		
	; ---- VANILLA BLAST MAX: 2.6
	else min_energy 2.6
		("SC_INF_Define_Armored_Chart"	c_heavy(100)	c_medium(200)	c_light(260)	c_unarmored(350))
	else min_energy 1.9
		("SC_INF_Define_Armored_Chart"	c_heavy(50)		c_medium(90)	c_light(150)	c_unarmored(225))
	else min_energy 1.25
		("SC_INF_Define_Armored_Chart"	c_heavy(15)		c_medium(30)	c_light(50)		c_unarmored(85))
	}
	
	(Define "SC_INF_Define_Blast_Table"
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
	{if volume "SC_volume_armored_heavy"			("SC_INF_Define_Blast_Table" r1(9) r2(8) r3(7.5) r4(5) r5(1.8))
	else volume "SC_volume_armored_shield_heavy"	("SC_INF_Define_Blast_Table" r1(9) r2(8) r3(7.5) r4(5) r5(1.8))
	else volume "SC_volume_armored_medium"			("SC_INF_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
	else volume "SC_volume_armored_shield_light"	("SC_INF_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
	else volume "SC_volume_armored_light"			("SC_INF_Define_Blast_Table" r1(3) r2(4) r3(3) r4(2) r5(1.2))
	else											("SC_INF_Define_Blast_Table" r1(1) r2(1) r3(1) r4(1) r5(1))
	}
}