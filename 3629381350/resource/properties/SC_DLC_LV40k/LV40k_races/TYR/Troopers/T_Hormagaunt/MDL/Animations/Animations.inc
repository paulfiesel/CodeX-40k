
{animation
	{smooth 0.088}
	
	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}
	
	{sequence "melee1" {speed 0.6} {events {21 "leg_right"} {22 "leg_left"} {23 "sc_spawn_melee_ctc"} {24 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.6} {events {16 "leg_right"} {17 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"}}}
	{sequence "melee3" {speed 0.6} {events {10 "leg_right"} {9 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"} {30 "leg_right"}}}
	
	{sequence "Run_Aiming1" {speed 0.75} {events {8 "leg_right"} {20 "leg_left"}}}
	{sequence "Run_Aiming2" {speed 0.75} {events {8 "leg_right"} {20 "leg_left"}}}
	{sequence "Run_Aiming3" {speed 0.75} {events {8 "leg_right"} {20 "leg_left"}}}
	{sequence "Run_Aiming4" {speed 0.75} {events {8 "leg_right"} {20 "leg_left"}}}
	
	{sequence "Idle_Aiming1" {File "Idle_Lowready1"} {speed 0.6}}
	
	{sequence "Idle_Lowready1" {speed 0.6}}
	{sequence "Idle_Lowready2" {speed 0.6}}
	{sequence "Idle_Lowready3" {speed 0.6}}
	{sequence "Idle_Lowready4" {speed 0.6}}
	{sequence "Idle_Lowready5" {speed 0.6}}
	{sequence "Idle_Lowready6" {speed 0.6}}
}