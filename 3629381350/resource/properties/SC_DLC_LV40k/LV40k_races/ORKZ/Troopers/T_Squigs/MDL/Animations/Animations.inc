
{animation
	{sequence "Idle_Lowready1" {speed 0.5}}
	{sequence "Idle_Lowready2" {speed 0.5}}
	{sequence "Death" {speed 1.2}}
	
	{sequence "Idle_Aiming1" {speed 0.5} {File "Idle_Lowready1"}}
	
	{sequence "Run_Lowready1" {File "Run"} {speed 1.05} {events {8 "leg_right"} {14 "leg_left"}}}
	
;	{sequence "Walk" {speed 0.6}}
}