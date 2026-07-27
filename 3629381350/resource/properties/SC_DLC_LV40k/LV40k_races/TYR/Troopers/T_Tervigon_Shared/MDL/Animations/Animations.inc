
{animation
	{smooth 0.088}
	
	{sequence "Death1" {speed 0.6}
		{events 
			{27 "leg_left"} {86 "talon_right"} {43 "terv_body_falls"} 
		}
	}
	
	{sequence "Run_aiming1" {File "Run_Lowready1"} {speed 0.66} {Smooth 0.12}
		{events 
			{20 "carn_body_move"} 
			{60 "carn_body_move"}
			
			{5 "back_leg_right"} 
			{40 "frontal_leg_right"} 
			
			{45 "back_leg_left"}
			{80 "frontal_leg_left"}
		}
	}
	
	{sequence "Melee1" {File "Melee"} {speed 0.32}
		{events
			{14 "melee_woosh"} {24 "sc_spawn_melee_ctc"} {26 "sc_spawn_melee_ctc"}
			
			{6 "back_leg_left"}
			{16 "back_leg_right"}
			
			{7 "frontal_leg_right"}
			{15 "frontal_leg_left"}
		}
	}
	
	{sequence "Tervigon_Spawn" {speed 0.5}  {Smooth 0.1}}
	
	{sequence "Idle_Aiming1" {File "Idle_Lowready1"} {speed 0.2}}
	
	{sequence "Idle_Lowready1" {File "Idle_Lowready1"} {speed 0.2}}
	{sequence "Idle_Lowready2" {File "Idle_Lowready2"} {speed 0.2}}
}