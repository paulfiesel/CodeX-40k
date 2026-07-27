
{animation
	{Smooth 0.24}
	
	{sequence "Turn_Left1" {File "Turn"} {speed 0.45} {events {8 "leg_left"} {15 "leg_right"}}}
	{sequence "Turn_Right1" {File "Turn"} {speed 0.45} {events {8 "leg_left"} {15 "leg_right"}}}
	
	{sequence "Run_Aiming1" {File "Run"} {speed 0.7} {events {8 "leg_left"} {22 "leg_right"}}}
	{sequence "Run_Aiming2" {File "Run"} {speed 0.5} {events {7 "leg_right"} {21 "leg_left"}}}
	
	{Smooth 0.06}
	{sequence "melee_stomp" {speed 0.6}}
	{sequence "Death" {speed 0.6}}
	{sequence "fire_ac" {speed 0.6}}
	
	{Smooth 0.1}
	{sequence "idle_lowready1" {speed 0.6}}
	{sequence "idle_lowready2" {speed 0.6}}
	{sequence "idle_lowready3" {speed 0.6}}
	
	{sequence "idle_aiming1" {speed 0.6}}
}