
{animation
	{smooth 0.088}
	
	{sequence "Melee1" {speed 0.9} {File "ripper1_melee"}}
	{sequence "Melee2" {speed 0.9} {File "ripper2_melee"}}
	{sequence "Melee3" {speed 0.9} {File "ripper3_melee"}}
	
	{sequence "Run_Aiming1" {Speed 0.75} {File "ripper1_run"} {events {0 "move_1"}}}
	{sequence "Run_Aiming2" {Speed 0.75} {File "ripper2_run"} {events {0 "move_2"}}}
	{sequence "Run_Aiming3" {Speed 0.75} {File "ripper3_run"} {events {0 "move_3"}}}

	{sequence "Idle_Aiming1" {File "ripper1_idle/ripper1_idle_idle1"} {speed 0.6}}
	{sequence "Idle_Aiming2" {File "ripper2_idle/ripper2_idle_idle1"} {speed 0.6}}
	{sequence "Idle_Aiming3" {File "ripper3_idle/ripper3_idle_idle1"} {speed 0.6}}
	
	{sequence "Idle_Lowready1" {File "ripper1_idle"} {speed 0.6}}
	{sequence "Idle_Lowready2" {File "ripper2_idle"} {speed 0.6}}
	{sequence "Idle_Lowready3" {File "ripper3_idle"} {speed 0.6}}
}