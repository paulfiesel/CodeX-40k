
{animation
	{smooth 0.088}

	{sequence "Death1" {File "Melee/death1"} {speed 0.6}
		{events 
			{20 "leg_left"} {44 "talon_left"} {100 "tyr_body_falls"} 
		}
	}
	
	{sequence "Run_Aiming1" {File "Melee/run_lowready1"} {speed 0.66} 
		{events 
			{9 "tyr_body_move"} {41 "tyr_body_move"}
			{15 "leg_right"} {47 "leg_left"}
		}
	}
	{sequence "Run_Lowready1" {File "Melee/run_lowready1"} {speed 0.66} 
		{events 
			{9 "tyr_body_move"} {41 "tyr_body_move"}
			{15 "leg_right"} {47 "leg_left"}
		}
	}
	{sequence "Sprint" {File "Melee/sprint"} {speed 0.66}
		{events 
			{15 "tyr_body_move"} {44 "tyr_body_move"}
			{21 "leg_right"} {50 "leg_left"}
		}
	}

	{sequence "Melee1" {File "Melee/melee1"} {speed 0.7} {events {4 "melee_woosh"} {15 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {File "Melee/melee2"} {speed 0.7} {events {2 "melee_woosh"} {13 "sc_spawn_melee_ctc"} {15 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {File "Melee/melee3"} {speed 0.7} {events {5 "melee_woosh"} {15 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"}}}
;//	{sequence "Melee3" {File "Melee/melee4"} {speed 0.9} {events {15 "melee_woosh"} {26 "sc_spawn_melee_ctc"} {27 "sc_spawn_melee_ctc"} {30 "sc_spawn_melee_ctc"}}}
	
	{sequence "Idle_Aiming1" {File "Melee/Idle_Lowready1"} {speed 0.4}}
	{sequence "Idle_Lowready1" {File "Melee/idle_lowready1"} {speed 0.4}}
	{sequence "Idle_Lowready2" {File "Melee/idle_lowready2"} {speed 0.4}}
	{sequence "Idle_Lowready3" {File "Melee/idle_lowready3"} {speed 0.4}}
	
	{sequence "Getup" {File "Melee/getup"} {speed 0.6}}
}