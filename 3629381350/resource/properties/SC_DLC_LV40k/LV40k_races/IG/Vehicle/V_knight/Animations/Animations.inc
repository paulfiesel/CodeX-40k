
{animation
	{Smooth 0.0}
	
	{sequence "rev_stop_Gatling_R" {speed 0.2} {file "Gatling_R"}}
	{sequence "rev_loop_Gatling_R" {speed 0.3} {file "Gatling_R"}}
	
	{sequence "rev_stop_Gatling_L" {speed 0.2} {file "Gatling_L"}}
	{sequence "rev_loop_Gatling_L" {speed 0.3} {file "Gatling_L"}}
	
	{Smooth 0.06}

	{sequence "air" {speed 0.6}}
	{sequence "land" {speed 0.6}}
	
	{sequence "Knocked" {File "idle_stunned"} {Smooth 0.25} {speed 0.2}}
	
	{sequence "Death1" {speed 0.25} {events {58 "body_falls"}}} 
	{sequence "Death2" {speed 0.4} {File "idle_stunned"}}	; <- when knocked
	
	{blend "death_pose" {pose "death1" end}}
	
	{Smooth 0.3}
	
	{sequence "Melee1" 
		{speed 0.37}
		{events {2 "mech_attack_sound"} {12 "leg_mech"}  {19 "leg_left_stomp"} {20 "sc_spawn_melee_stomp"} {32 "leg_mech"} {45 "leg_left_stomp"}}
	}
	{sequence "Melee2"		
		{speed 0.45}
		{events {2 "leg_mech"} {5 "right_left_stomp"} {10 "mech_attack_sound"}  {16 "sc_chainsword_sparkles"} {18 "sc_spawn_melee_left_arm"}  {20 "sc_chainsword_sparkles"} {19 "left_left_stomp"}  {22 "leg_mech"}}
	}
	{sequence "Melee3" 
		{speed 0.45}
		{events {2 "mech_attack_sound"} {7 "leg_left_stomp"}  {10 "sc_chainsword_sparkles"} {12 "sc_spawn_melee_left_arm"} {14 "sc_chainsword_sparkles"} {20 "leg_mech"} {37 "leg_mech"} {49 "leg_right_stomp"}}
	}
	
	{Smooth 0.2}
	
	{sequence "idle_aiming1" {speed 1.0}}
	{sequence "Idle_Lowready1" {file "idle_aiming1"} {speed 1.0}}
	
	{Smooth 0.16}
	
	{sequence "run_aiming1" 
		{File "Run1"} {speed 0.56}
		{events {2 "leg_left_stomp"} {4 "leg_mech"} {20 "leg_right_stomp"} {30 "leg_mech"}}
	}
	{sequence "run_aiming2" 
		{File "Run1"} {speed 0.45}
		{events {3 "leg_mech"} {22 "leg_left_stomp"} {26 "leg_mech"} {45 "leg_right_stomp"}}
	}
	{sequence "run_aiming3" 
		{File "Run2"} {speed 0.395}	{smooth 0.3}
		{events {1 "leg_mech_fast"} {7 "leg_left_stomp"} {9 "leg_mech_fast"} {18 "leg_right_stomp"}}
	}
	
	{sequence "Turn_Right1"
		{File "Turn_L"} {speed 0.4}
		{events {3 "leg_mech"}  {18 "leg_right_stomp"}}
	}
	{sequence "Turn_Left1" 
		{File "Turn_R"} {speed 0.4}
		{events {3 "leg_mech"}  {23 "leg_left_stomp"}}
	}
}