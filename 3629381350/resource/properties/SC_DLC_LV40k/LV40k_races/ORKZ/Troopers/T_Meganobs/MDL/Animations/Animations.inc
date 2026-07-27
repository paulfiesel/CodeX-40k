
{animation
	{smooth 0.088}
	
	{sequence "death1" {speed 0.6} {movement}}
	{sequence "Idle_Lowready1" {speed 0.4}}
	{sequence "Idle_Lowready2" {speed 0.4}}
	{sequence "Idle_Aiming1" {speed 0.6}}
	
	{sequence "Melee1" {speed 0.6} {events {22 "sc_spawn_melee_ctc_arm_r"} {44 "sc_spawn_melee_ctc_arm_l"}}}
	{sequence "Melee2" {speed 0.6} {events {16 "sc_spawn_melee_ctc_arm_l"} {40 "sc_spawn_melee_ctc_arm_l"}}}
	{sequence "Melee3" {speed 0.6} {events {20 "sc_spawn_melee_ctc_arm_l"} {45 "sc_spawn_melee_ctc_arm_l"}}}
	
	{sequence "Melee4" {speed 0.6} {events {19 "sc_lv40k_ork_mgnbfx"} {22 "sc_lv40k_ork_mgnbfx"} {25 "sc_lv40k_ork_mgnbfx"} {28 "sc_lv40k_ork_mgnbfx"}
	{31 "sc_lv40k_ork_mgnbfx"} {34 "sc_lv40k_ork_mgnbfx"} {37 "sc_lv40k_ork_mgnbfx"} {40 "sc_lv40k_ork_mgnbfx"} {43 "sc_lv40k_ork_mgnbfx"} {46 "sc_lv40k_ork_mgnbfx"}}}
	
	{sequence "Recoil1" {speed 0.5} {Smooth 0.125}}
	
	{sequence "Run_Aiming1" {speed 0.6} {events {11 "leg_right"} {27 "leg_left"}}}
	{sequence "Run_Lowready1" {speed 0.45} {events {8 "leg_right"} {17 "leg_left"}}}
	{sequence "Run_Lowready2" {speed 0.45}}
	
	{sequence "Sync_Death_Grabbed" {speed 0.6}}
	{sequence "Sync_Kill01" {speed 0.6}}
	{sequence "Sync_Kill02" {speed 0.6}}
	{sequence "Thrown_Fly" {speed 0.6}}
	{sequence "Thrown_Land_Getup" {speed 0.6}}
}