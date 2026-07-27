
{animation
	{smooth 0.088}

	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}
	
	{sequence "thrown_getup" {speed 0.6}}
	
	{sequence "idle_aiming1" {speed 0.6}}
	
	{sequence "Idle_Lowready1" {File "idle_aiming1"} {speed 0.6}}
	{sequence "Idle_Lowready2" {File "idle_aiming2"} {speed 0.6}}
	{sequence "Idle_Lowready3" {File "idle_aiming3"} {speed 0.6}}
	
	{sequence "Run_Aiming1" {speed 0.9} {events {5 "leg_right"} {18 "leg_left"}}}
	{sequence "Run_lowready1" {speed 0.9} {events {7 "leg_right"} {19 "leg_left"}}}
	
	{sequence "melee1" {speed 0.6}	{events {11 "sc_spawn_melee_ctc"} {13 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.6}	{events {12 "sc_spawn_melee_ctc"} {14 "sc_spawn_melee_ctc"}}}
	{sequence "melee3" {speed 0.6}	{events {13 "sc_spawn_melee_ctc"} {15 "sc_spawn_melee_ctc"}}}
	{sequence "melee4" {speed 0.6}	{events {14 "sc_spawn_melee_ctc"} {16 "sc_spawn_melee_ctc"}}}
	{sequence "melee5" {speed 0.6}	{events {34 "sc_spawn_melee_ctc"} {40 "sc_spawn_melee_ctc"} {41 "leg_right"} {42 "leg_left"}}}
}