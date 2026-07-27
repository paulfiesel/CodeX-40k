
{animation
	{smooth 0.088}

	{sequence "Death1" {File "Ranged/death1"} {speed 0.6}
		{events 
			{20 "leg_left"} {44 "talon_left"} {100 "tyr_body_falls"} 
		}
	}
	
	{sequence "Run_Lowready1" {File "Ranged/run_lowready1"} {speed 0.5} 
		{events 
			{9 "tyr_body_move"} {41 "tyr_body_move"}
			{15 "leg_right"} {47 "leg_left"}
		}
	}
	
	{sequence "Sprint" {File "Ranged/sprint"} {speed 0.6}
		{events 
			{15 "tyr_body_move"} {44 "tyr_body_move"}
			{21 "leg_right"} {50 "leg_left"}
		}
	}
	
	{sequence "Run_Aiming1" {File "Ranged/run_aiming1"} {speed 0.5} 
		{events 
			{9 "carn_body_move"} {41 "carn_body_move"}
			{14 "leg_right"} {47 "leg_left"}
		}
	}

	{sequence "Melee1" {File "Ranged/melee1"} {speed 0.5} {events {20 "melee_woosh"} {36 "sc_spawn_melee_ctc"} {38 "sc_spawn_melee_ctc"} {42 "sc_spawn_melee_ctc"} {44 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {File "Ranged/melee2"} {speed 0.5} {events {19 "melee_woosh"} {35 "sc_spawn_melee_ctc"} {36 "sc_spawn_melee_ctc"} {38 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {File "Ranged/melee3"} {speed 0.5} {events {15 "melee_woosh"} {34 "sc_spawn_melee_ctc"} {36 "sc_spawn_melee_ctc"}}}
	
	{sequence "Idle_Aiming1" {File "Ranged/idle_aiming1"} {speed 0.4}}
	{sequence "Idle_Lowready1" {File "Ranged/idle_aiming1"} {speed 0.4}}
	{sequence "Idle_Lowready2" {File "Ranged/idle_lowready1"} {speed 0.4}}
	{sequence "Idle_Lowready3" {File "Ranged/idle_lowready2"} {speed 0.4}}
	
	{sequence "Recoil1" {File "Ranged/recoil1"} {speed 0.6}}
	{sequence "Getup" {File "Ranged/getup"} {speed 0.6}}
}