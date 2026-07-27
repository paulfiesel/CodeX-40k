
{animation
	{smooth 0.088}
	
	{sequence "Death1" {speed 0.6}
		{events 
			{20 "leg_left"} {100 "tyr_body_falls"} 
		}
	}
	
	{sequence "Run_aiming1" {File "run_aiming1"} {speed 0.6}
	;	{events 
	;		{10 "carn_body_move"} {35 "carn_body_move"}
	;		{20 "leg_left"} {45 "leg_right"}
	;	}
	}
	{sequence "Run_Lowready1" {File "run_lowready1"} {speed 0.66} 
		{events 
			{9 "tyr_body_move"} {41 "tyr_body_move"}
			{15 "leg_right"} {47 "leg_left"}
		}
	}
	
	{sequence "Melee1" {File "melee1"} {speed 0.4} {events {4 "melee_woosh"} {15 "leg_left"} {16 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {File "melee2"} {speed 0.4} {events {5 "melee_woosh"} {14 "talon_right"} {16 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {File "melee3"} {speed 0.4} {events {4 "melee_woosh"} {14 "sc_spawn_melee_ctc"} {16 "sc_spawn_melee_ctc"}}}
	{sequence "Melee4" {File "melee4"} {speed 0.4} {events {5 "melee_woosh"} {16 "sc_spawn_melee_ctc"} {18 "sc_spawn_melee_ctc"}}}
	{sequence "Melee5" {File "melee5"} {speed 0.4} {events {20 "melee_woosh"} {38 "sc_spawn_melee_ctc"} {40 "sc_spawn_melee_ctc"} {42 "sc_spawn_melee_ctc"}}}
		
	{sequence "Idle_Aiming1" {File "idle_lowready1"} {speed 0.6}}
	
	{sequence "Idle_Lowready1" {File "idle_lowready1"} {speed 0.5}}
	{sequence "Idle_Lowready2" {File "idle_lowready2"} {speed 0.3}}
	{sequence "Idle_Lowready3" {File "idle_lowready3"} {speed 0.5}} 
	
	{sequence "Getup" {speed 0.5}} 
}