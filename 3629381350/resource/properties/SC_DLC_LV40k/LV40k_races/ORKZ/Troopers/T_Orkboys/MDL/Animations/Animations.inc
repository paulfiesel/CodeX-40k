
{animation
	{Smooth 0.09}
	
	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}
	{sequence "death3" {speed 0.6}}
	{sequence "death4" {speed 0.6}}
	
	{sequence "Recoil1" {speed 0.6}	{Smooth 0.0625} {Speed 1.1}}
	
	{sequence "Knocked_Stand_Up" {speed 0.6}}
	
	{sequence "Melee1" {speed 0.6}{events {15 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {speed 0.6}{events {15 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {speed 0.6}{events {16 "sc_spawn_melee_ctc"}}}
	
	{sequence "Idle_Aiming1" {speed 0.6}}
	
	{sequence "Run_Aiming1" {speed 0.6} {events {9 "leg_right"} {21 "leg_left"}}}
	{sequence "Run_Lowready1" {speed 0.6} {events {9 "leg_right"} {22 "leg_left"}}}
	
	{sequence "Idle_Lowready1" {speed 0.6}}
	{sequence "Idle_Lowready2" {speed 0.6}}
	{sequence "Idle_Lowready3" {speed 0.6}}
	{sequence "Idle_Lowready4" {speed 0.6}}
	{sequence "Idle_Lowready5" {speed 0.6}}
}