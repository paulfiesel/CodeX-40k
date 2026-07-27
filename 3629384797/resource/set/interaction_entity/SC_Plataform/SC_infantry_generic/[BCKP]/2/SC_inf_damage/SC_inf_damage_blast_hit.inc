
; <<<<	===================	SC Infantry Generic: Blast 	===================	>>>>

(Define "SC_INF_Damage_Define_Blast_Hit"
	{kill_flags reset}
	
	{if hit_side front	{kill_flags front}
	else hit_side back	{kill_flags back}
	else				{kill_flags front back}}
	{kill_flags blast}

	{if not dead {Call "Flinch"}}	; // BUZZ: <- Call GOH human flinch animations.
	
	; --------------------------------------------------------------------------------------------------------------------;
	
	("SC_INF_Define_Blast_Hit_Interaction")	; // <- SC Plataform DLC Unique Interactions.

	; // GOH Vanilla Blast Interactions
	{if stuff "grenade"
		{if min_energy 0.80
			("SC_INF_Define_Armored_Chart"	c_heavy(15)	c_medium(30)	c_light(50)		c_unarmored(85))
		}
	}
	{if stuff "rifle"		;{}// Rifle grenades. Tag from weapon not ammo.
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
	
	; // SC Blast Energy Calculation
	{if min_energy 50																									;{}
		("SC_INF_Define_Armored_Chart" c_heavy(150000)	c_medium(175000) c_light(200000) c_unarmored(256000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "unhealable"}
		
	else min_energy 40																								
		("SC_INF_Define_Armored_Chart" c_heavy(70000)	c_medium(85000)	c_light(100000)	c_unarmored(128000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "unhealable"}
		
	else min_energy 30																								
		("SC_INF_Define_Armored_Chart" c_heavy(35000)	c_medium(40000)	c_light(48000)	c_unarmored(64000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "unhealable"}
		
	else min_energy 20																								
		("SC_INF_Define_Armored_Chart" c_heavy(18000)	c_medium(24000)	c_light(28000)	c_unarmored(32000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "unhealable"}
			
	else min_energy 15
		("SC_INF_Define_Armored_Chart"	c_heavy(9000)	c_medium(12000)	c_light(14000)	c_unarmored(16000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{call "unhealable"}
		
	else min_energy 10
		("SC_INF_Define_Armored_Chart"	c_heavy(4800)	c_medium(6000)	c_light(7200)	c_unarmored(8000))
		("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
		{if not volume "sc_volume_armored"		{call "unhealable"}}
		
	else min_energy 5
		("SC_INF_Define_Armored_Chart"	c_heavy(1200)	c_medium(1500)	c_light(1800)	c_unarmored(2000))
		("SC_INF_Define_Explode_Death" human(0.5) tsz1(0.5) tsz2(0) tsz3(0))
		{if not volume "sc_volume_armored"		{call "unhealable"}}
	
	else min_energy 2.6
		("SC_INF_Define_Armored_Chart"	c_heavy(250)	c_medium(300)	c_light(400)	c_unarmored(500))
	;//	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
		{if not volume "sc_volume_armored"		{call "unhealable"}}
		
	else min_energy 2
		("SC_INF_Define_Armored_Chart"	c_heavy(100)	c_medium(175)	c_light(250)	c_unarmored(300))
	;//	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
		{if not volume "sc_volume_armored"		{call "unhealable"}}
			
	else min_energy 1.25
		("SC_INF_Define_Armored_Chart"	c_heavy(50)	c_medium(100)	c_light(125)	c_unarmored(150))
	;//	("SC_INF_Define_Explode_Death" human(0) tsz1(0) tsz2(0) tsz3(0))
		(mod "mp" 
			{if not volume "sc_volume_armored"	{call "unhealable"}}
		)
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
	{if tagged "sc_skin_tag_trait_heavy_infantry"		("SC_INF_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
	else
		{if volume "SC_volume_armored_heavy"			("SC_INF_Define_Blast_Table" r1(9) r2(8) r3(7.5) r4(5) r5(1.8))
		else volume "SC_volume_armored_shield_heavy"	("SC_INF_Define_Blast_Table" r1(9) r2(8) r3(7.5) r4(5) r5(1.8))
		else volume "SC_volume_armored_medium"			("SC_INF_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
		else volume "SC_volume_armored_shield_light"	("SC_INF_Define_Blast_Table" r1(6) r2(6) r3(5) r4(3.5) r5(1.5))
		else volume "SC_volume_armored_light"			("SC_INF_Define_Blast_Table" r1(3) r2(4) r3(3) r4(2) r5(1.2))
		else											("SC_INF_Define_Blast_Table" r1(1) r2(1) r3(1) r4(1) r5(1))
		}
	}
)