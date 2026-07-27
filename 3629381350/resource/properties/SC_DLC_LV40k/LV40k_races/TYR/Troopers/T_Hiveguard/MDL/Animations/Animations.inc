
{animation
	{smooth 0.09}
	
	{sequence "death1" {speed 0.6}}
	
	{sequence "melee1" {speed 0.56} {events {15 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.56} {events {15 "sc_spawn_melee_ctc"}}}
	{sequence "melee3" {speed 0.56} {events {20 "sc_spawn_melee_ctc"}}}
	
	{sequence "special_melee" {speed 0.6}}
	
	{sequence "turn_left1" {speed 0.6}}
	{sequence "turn_right1" {speed 0.6}}
	
	{sequence "Idle_Aiming1" {speed 0.1} {Smooth 0.1} {File "Idle_Lowready1"}}
	
	{sequence "Idle_Lowready1" {speed 0.6}}
	{sequence "Idle_Lowready2" {speed 0.6}}
	{sequence "Idle_Lowready3" {speed 0.6}}
	
	{sequence "tyr_ability_exit" {File "tyr_ability_enter"} {speed 0.6}}
	{sequence "tyr_ability_enter" {speed 0.6}}
	{sequence "tyr_ability_idle" {speed 0.6}}
	
	{smooth 0.2}
	
	{sequence "Run_Aiming1" {speed 0.5} {File "run"}
		{events {14 "frontal_leg_right"} {18 "back_leg_left"} {30 "frontal_leg_left"} {36 "back_leg_right"}}
	}
	{sequence "Run_Aiming2" {speed 0.5} {File "run_charge"}	
		{events 
			{12 "frontal_leg_left"} {40 "frontal_leg_left"} {66 "frontal_leg_left"} {88 "frontal_leg_left"} 
			{20 "frontal_leg_right"} {48 "frontal_leg_right"} {68 "frontal_leg_right"} 	{86 "frontal_leg_right"} 
			{18 "back_leg_left"} {43 "back_leg_left"} {65 "back_leg_left"} {89 "back_leg_left"}
			{21 "back_leg_right"} {42 "back_leg_right"} {67 "back_leg_right"} {90 "back_leg_right"}
		}
	}
}