
{animation
	{smooth 0.088}

	{sequence "fidget" {speed 1} {smooth 0}}
	
	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}
	{sequence "death3" {speed 0.6}}
	{sequence "death4" {speed 0.6}}
	{sequence "Idle_Aiming1" {speed 0.6} {File "Idle_Aiming"}}
	{sequence "Idle_Lowready1" {speed 0.4}}
	{sequence "Idle_Lowready2" {speed 0.4}}
	{sequence "Idle_Lowready3" {speed 0.4}}
	{sequence "Idle_Lowready4" {speed 0.4}}
	{sequence "Idle_Lowready5" {speed 0.4}}
	
	{sequence "Recoil1" {speed 0.5} {Smooth 0.125} {File "Idle_Fire"}}
	
	{sequence "Melee1" {speed 0.95} {events {33 "sc_spawn_melee_ctc_arm"} {37 "sc_spawn_melee_ctc_arm"}}}
	{sequence "Melee2" {speed 0.95} {events {31 "sc_spawn_melee_ctc_arm"} {32 "sc_spawn_melee_ctc_arm"}}}
	{sequence "Melee3" {speed 0.95} {events {33 "sc_spawn_melee_ctc_arm"} {35 "sc_spawn_melee_ctc_arm"}}}
	
	{sequence "Run_Aiming1" {speed 0.6} {File "Run_Aiming"} {events {7 "leg_right"} {19 "leg_left"}}}
	{sequence "Run_Lowready1" {speed 0.6} {File "Run_Lowready"} {events {6 "leg_right"} {18 "leg_left"}}}
}