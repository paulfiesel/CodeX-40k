
; <<<<	===================	SC Infantry Generic: Blast 	===================	>>>>

(Define "SC_INF_Damage_Define_Blast_Hit"
	{if not dead
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
					{(* 0.95	%r1)	(* %e1 0.05)}
					{(* 1.1		%r2)	(* %e2 0.15)}
					{(* 2.0		%r3)	(* %e3 0.5)}
					{(* 10		%r4)	(* %e4 2)}
					{(* 50		%r5)	(* %e5 3)}
				}	
			}
		)
		
		{if prop "human"
			{kill_flags reset}
			
			{if hit_side front	{kill_flags front}
			else hit_side back	{kill_flags back}
			else				{kill_flags front back}}
			{kill_flags blast}

			{Call "Flinch"}	; // BUZZ: <- Call GOH human flinch animations.
			
			{if min_energy 8
				{call "unhealable"}
			else min_energy 2
				{if not tagged "sc_skin_tag_trait_heavy_infantry"	{call "unhealable"}}
			else min_energy 1.25
				(mod "mp" {if not tagged "sc_skin_tag_trait_heavy_infantry"	{call "unhealable"}})
			}
			
			{if tagged "sc_skin_tag_trait_heavy_infantry"	
				("SC_INF_Define_Blast_Table"
					r1(6) r2(5) r3(4) r4(1) r5(1)
					e1(1) e2(1) e3(1) e4(1) e5(1)
				)
			else								
				("SC_INF_Define_Blast_Table" 
					r1(1) r2(1) r3(1) r4(1) r5(1)
					e1(1) e2(1) e3(1) e4(1) e5(1)
				)
			}
		else				
			{health_damage_blast
				{effects
					"hit-scream"
					"hit-light"
					"hit-heavy"
					"die"
					"hit-explosion"
					"SC_TP_Main_Call_Exp_Chek_Blast"
					"throw-off-and-die"
				}
				;//table for "throw_off" impulse
				;//{blast energy, impulse}
				{table	
					{0.95	0.05}
					{1.1	0.15}
					{2.0	0.5}
					{10		2}
					{50		3}
				}	
			}
		}
	}
)

(Define "SC_INF_Damage_Define_Blast_Energy"

	{if not tagged "blasted" 
		{tags add "blasted"} {delay 0.1 {tags remove "blasted"}}
			
		; // SC Blast Energy Calculation
		{if  min_energy 60																;{}																			
			("human_health"	c(360000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 50																																										
			("human_health"	c(300000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 40
			("human_health"	c(250000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 30
			("human_health"	c(200000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 25
			("human_health"	c(150000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 20
			("human_health"	c(75000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
				
		else min_energy 15																																			
			("human_health"	c(25000))
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			
		else min_energy 10
			("SC_INF_Define_Explode_Death" human(1.0) tsz1(1.0) tsz2(0) tsz3(0))
			("human_health"	c(10000))
			
		else min_energy 8
			("SC_INF_Define_Explode_Death" human(0.5) tsz1(0.5) tsz2(0) tsz3(0))
			{if tagged "sc_skin_tag_trait_heavy_infantry" 	("human_health" c(500))		else ("human_health" c(1000))}
			
		else min_energy 5
			("SC_INF_Define_Explode_Death" human(0.25) tsz1(0.25) tsz2(0) tsz3(0))
			{if tagged "sc_skin_tag_trait_heavy_infantry" 	("human_health" c(100))		else ("human_health" c(500))}
		
		else min_energy 2.6
			{if tagged "sc_skin_tag_trait_heavy_infantry" 	("human_health" c(50))		else ("human_health" c(400))}
			
		else min_energy 1.9
			{if tagged "sc_skin_tag_trait_heavy_infantry"	("human_health" c(25))		else ("human_health" c(300))}
			
		else min_energy 1.25
			{if tagged "sc_skin_tag_trait_heavy_infantry" 	("human_health" c(12.5))	else ("human_health" c(200))}
		}
		
		; // BUZZ: additional damage for grenades for increased effectiveness
		{If stuff "grenade"
			{if min_energy 15	{if tagged "sc_skin_tag_trait_heavy_infantry" ("human_health" c(8000))	else ("human_health" c(32000))}
			else min_energy 10	{if tagged "sc_skin_tag_trait_heavy_infantry" ("human_health" c(4000))	else ("human_health" c(16000))}
			else min_energy 5.0	{if tagged "sc_skin_tag_trait_heavy_infantry" ("human_health" c(400))	else ("human_health" c(4000))}
			else min_energy 2.0	{if tagged "sc_skin_tag_trait_heavy_infantry" ("human_health" c(100))	else ("human_health" c(500))}
			}
		}
	}
)