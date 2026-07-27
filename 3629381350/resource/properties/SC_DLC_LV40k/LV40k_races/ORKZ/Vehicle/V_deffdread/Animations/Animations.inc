
{animation
	{smooth 0.08}
	
	{sequence "death1" {file "death"} {speed 0.425}}
	{blend "death_pose" {pose "death" end}}
	
	{sequence "Idle_Aiming1" {file "idle1.anm"} {speed 0.6}}
	
	{sequence "Idle_Lowready1" {file "idle1.anm"} {speed 0.6}}
	{sequence "Idle_Lowready2" {file "idle2.anm"} {speed 0.6}}
	{sequence "Idle_Lowready3" {file "idle3.anm"} {speed 0.6}}
	{sequence "Idle_Lowready4" {file "idle4.anm"} {speed 0.6}}
	{sequence "special_melee" {speed 0.6}}
	
	{sequence "Turn_Left1" {file "turn_left.anm"} {speed 0.6} {events {12 "leg_left"} {28 "leg_right"}}}
	{sequence "Turn_Right1" {File "turn_right.anm"} {speed 0.6} {events {10 "leg_left"} {26 "leg_right"}}}
	
	{sequence "melee1" {speed 0.6} {events {35 "sc_spawn_melee_ctc_arm_r"} {25 "leg_right"}}}
	{sequence "melee2" {speed 0.6} {events {35 "sc_spawn_melee_ctc_arm_l"} {35 "sc_spawn_melee_ctc_arm_l"} {40 "sc_spawn_melee_ctc_arm_l"} {45 "sc_spawn_melee_ctc_arm_l"}}}
	{sequence "melee3" {speed 0.6} {events {35 "sc_spawn_melee_ctc_arm_l"} {36 "sc_spawn_melee_ctc_arm_r"}}}
	
	; // not being used
	{sequence "sync_kill_humanskin_1"
		{speed 0.6} 
		{events {24 "sync_kill_spawn_human"} {25 "leg_right"}}
		{events {40 "leg_left"} {52 "leg_right"} {60 "leg_left"}}
		{events {80 "sawww"}}
	}
	
	{sequence "sync_kill_humanskin_2" {speed 0.6}}
	{sequence "sync_kill_humanskin_3" {speed 0.6}}
	{sequence "sync_die_1" {speed 0.6}}
	{sequence "sync_die_2" {speed 0.6}}
	{sequence "sync_kill_vehicle_1" {speed 0.6}}
	{sequence "sync_kill_vehicle_2" {speed 0.6}}
	
	{smooth 0.165}
	
	{sequence "Run_Aiming3" {speed 0.9} {events {11 "leg_left"} {25 "leg_right"}} {file "run_speed1.anm"}}
	{sequence "Run_Aiming2" {file "run_back.anm"}	{speed 0.7} {events {5 "leg_left"} {18 "leg_right"}} {file "run_speed3.anm"}}
	{sequence "Run_Aiming1" {File "run_speed2.anm"} {speed 0.77}{events {12 "leg_left"} {27 "leg_right"}}}
	
	{sequence "run_speed1" {speed 0.765} {events {11 "leg_left"} {25 "leg_right"}}}
	{sequence "run_speed2" {speed 0.5}{events {12 "leg_left"} {27 "leg_right"}}}
	{sequence "run_speed3" {speed 0.5} {events {12 "leg_left"} {27 "leg_right"}}}
	
}