
{animation
	{smooth 0.2}

	{sequence "Run_Aiming1" {File "Ranged/r_run_aiming1"} {speed 0.6} 
		{events 
			{10 "carn_body_move"} {35 "carn_body_move"}
			{20 "leg_left"} {45 "leg_right"}
		}
	}

	{smooth 0.1}

	{sequence "Death1" {File "Ranged/r_death"} {speed 0.6}
		{events 
			{27 "leg_left"} {86 "talon_right"} {195 "carn_body_falls"} 
		}
	}
	
	{sequence "Melee1" {File "Ranged/r_melee1"} {speed 0.6} {events {20 "melee_woosh"} {30 "leg_left"} {33 "sc_spawn_melee_ctc"} {35 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {File "Ranged/r_melee2"} {speed 0.6} {events {12 "melee_woosh"} {24 "sc_spawn_melee_ctc"} {26 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {File "Ranged/r_melee3"} {speed 0.6} {events {14 "melee_woosh"} {25 "sc_spawn_melee_ctc"} {27 "sc_spawn_melee_ctc"}}}
	{sequence "Melee4" {File "Ranged/r_melee4"} {speed 0.6} {events {19 "melee_woosh"} {29 "sc_spawn_melee_ctc"} {31 "sc_spawn_melee_ctc"}}}
	
	{sequence "Idle_Aiming1" {File "Ranged/r_idle_lowready3"} {speed 0.3}}
	
	{sequence "Idle_Lowready1" {File "Ranged/r_idle_lowready1"} {speed 0.5}}
	{sequence "Idle_Lowready2" {File "Ranged/r_idle_lowready2"} {speed 0.3} {events {71 "talon_left"} {73 "talon_right"}}}
	{sequence "Idle_Lowready3" {File "Ranged/r_idle_lowready3"} {speed 0.5}}
	{sequence "Idle_Lowready4" {File "Ranged/r_idle_lowready3"} {speed 0.5}}
	
	{sequence "Recoil1" {File "Ranged/r_fire"} {speed 0.6}}
	{sequence "Ability" {File "Ranged/r_ability"} {speed 0.6}}
}