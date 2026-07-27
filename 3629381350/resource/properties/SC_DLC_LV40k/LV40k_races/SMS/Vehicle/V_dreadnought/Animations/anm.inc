
{animation
	{Smooth 0.0}
 
	{Sequence "rev_loop_as2" {file "fire_assaultcannon"} {Speed 0.4}}
	{Sequence "rev_stop_as2" {file "fire_assaultcannon"} {Speed 0.3}}
	
	{Smooth 0.09}

	{blend "death_pose" {pose "death1" end}}
	
	{sequence "death1" {speed 0.425}}
	{sequence "death2" {speed 0.425}}
	
	{sequence "knocked" {file "idle_disabled.anm"} {Speed 0.45}}
	
	{sequence "Idle_Aiming1" {file "Idle_Aiming0.anm"} {speed 0.3}}
	
	{sequence "Idle_Lowready1" {file "Idle_Aiming1.anm"} {speed 0.4}}
	{sequence "Idle_Lowready2" {file "Idle_Aiming2.anm"} {speed 0.4}}
	{sequence "Idle_Lowready3" {file "Idle_Aiming3.anm"} {speed 0.4}}

	{sequence "Turn_Left1" {file "Turn_L.anm"} {speed 0.6} {events {12 "leg_left"} {28 "leg_right"}}}
	{sequence "Turn_Right1" {File "Turn_R.anm"} {speed 0.6} {events {10 "leg_left"} {26 "leg_right"}}}
	
	{Smooth 0.2}

	{sequence "melee1" {speed 0.9} {events {25 "sc_spawn_melee_ctc_arm_R"}}}
	{sequence "melee2" {speed 0.9} {events {20 "sc_spawn_melee_ctc_spin"} {28 "sc_spawn_melee_ctc_spin"}}}
	{sequence "melee3" {speed 0.9} {events {21 "sc_spawn_melee_ctc_arm_L"}}}
	{sequence "melee4" {speed 0.9} {events {31 "sc_spawn_melee_ctc_arm_L"}}}
	
	{Smooth 0.15}

	{Sequence "Run_Aiming1" {speed 0.8}{events {12 "leg_left"} {27 "leg_right"}}}
	{sequence "Run_Lowready1" {File "Run1.anm"} {speed 0.8}{events {12 "leg_left"} {27 "leg_right"}}}
	{sequence "Run_Lowready2" {file "Run_B.anm"}	{speed 0.7}  {events {5 "leg_left"} {18 "leg_right"}}}
	{sequence "Run_Lowready3" {file "Run_Damaged.anm"}	{speed 0.7} {events {5 "leg_left"} {18 "leg_right"}}}
}