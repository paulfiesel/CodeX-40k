
{animation
	{smooth 0.088}
	
	("Terminator_Shared_Anms")
	
	{sequence "Idle_Lowready1" {speed 0.4}}
	{sequence "Idle_Lowready2" {speed 0.4}	{events {50 "leg_left"} {192 "leg_left"}}}
	{sequence "Idle_Lowready3" {speed 0.4}  {events {56 "leg_right"} {178 "leg_left"}}}
	{sequence "Idle_Lowready4" {speed 0.4}}
	{sequence "Idle_Lowready5" {speed 0.4}}
	{sequence "Idle_Lowready6" {speed 0.4}}
	
	{sequence "Idle_Lowready7" {speed 0.4}}	; Not being used
	
	{sequence "Idle_Aiming1" {speed 0.6}}
	
	{sequence "Melee1" {File "Melee1_pf"} {speed 0.9} {events {30 "sc_spawn_melee_ctc_arm_r"} {33 "sc_spawn_melee_ctc_arm_r"}}}
	{sequence "Melee2" {File "Melee2_pf"} {speed 0.9} {events {27 "leg_right"} {30 "sc_spawn_melee_ctc_arm_r"} {35 "sc_spawn_melee_ctc_arm_r"} {58 "leg_right"}}}
	{sequence "Melee3" {File "Melee3_pf"} {speed 0.9} {events {27 "sc_spawn_melee_ctc_arm_r"} {31 "sc_spawn_melee_ctc_arm_r"}}}
	
	{sequence "Run_Aiming1" {speed 0.525} {events {6 "leg_right"} {18 "leg_left"}}}
	{sequence "Run_Lowready1" {speed 0.525} {events {6 "leg_right"} {18 "leg_left"}}}
	
	{sequence "Recoil1" {speed 0.6} {additive}}
	
	;//{sequence "Turn_Left1" {speed 0.6}}
	;//{sequence "Turn_Right1" {speed 0.45}}
}