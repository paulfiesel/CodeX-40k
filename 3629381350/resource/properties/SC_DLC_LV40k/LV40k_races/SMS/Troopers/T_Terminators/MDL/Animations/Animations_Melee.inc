
{animation
	{smooth 0.088}
	
	("Terminator_Shared_Anms")
	
	{sequence "Idle_Lowready1" {File "M_Idle_Lowready1"} {speed 0.4}}
	{sequence "Idle_Lowready2" {File "M_Idle_Lowready2"} {speed 0.4}}
	{sequence "Idle_Lowready3" {File "M_idle_Lowready3"} {speed 0.4}  {events {60 "leg_right"} {150 "leg_right"}}}
	{sequence "Idle_Lowready4" {File "M_idle_Lowready4"} {speed 0.4} {events {55 "leg_left"} {78 "leg_right"} {223 "leg_right"} {246 "leg_left"}}}
	{sequence "Idle_Lowready5" {File "M_Idle_Lowready5"} {speed 0.4}}
	{sequence "Idle_Lowready6" {File "M_Idle_Lowready6"} {speed 0.4}}
	
	{sequence "Idle_Aiming1" {File "M_Idle_Lowready1"} {speed 0.6}}
	
	{sequence "Melee1" {File "Melee1_th"} {speed 0.9} {events {30 "sc_spawn_melee_ctc_arm_l"} {32 "sc_spawn_melee_ctc_arm_l"}}}
	{sequence "Melee2" {File "Melee2_th"} {speed 0.9} {events {30 "sc_spawn_melee_ctc_arm_r"} {32 "sc_spawn_melee_ctc_arm_r"}}}
	{sequence "Melee3" {File "Melee2_th"} {speed 0.9} {events {30 "sc_spawn_melee_ctc_arm_r"} {32 "sc_spawn_melee_ctc_arm_r"}}}
	
	{sequence "Run_Aiming1" {speed 0.525} {events {6 "leg_right"} {18 "leg_left"}}}
	{sequence "Run_Lowready1" {speed 0.525} {events {6 "leg_right"} {18 "leg_left"}}}
	
	;//{sequence "Turn_Left1" {speed 0.6}}
	;//{sequence "Turn_Right1" {speed 0.45}}
}