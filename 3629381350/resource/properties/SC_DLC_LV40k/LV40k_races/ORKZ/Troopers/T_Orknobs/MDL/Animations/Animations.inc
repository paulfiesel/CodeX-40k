
{animation
	{Smooth 0.08}
	
	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}
	{sequence "death3" {speed 0.6}}
	
	{sequence "Sprint1" {speed 0.6} {events {13 "leg_right"} {26 "leg_left"}}}
	
	; // {sequence "Run_Aiming1" {speed 0.6} {File "Run1"} {events {12 "leg_right"} {26 "leg_left"}}}
	
	{sequence "Run_Aiming1" {speed 0.725} {File "Sprint1"} {events {12 "leg_right"} {26 "leg_left"}}}
	
	{sequence "Melee1" {speed 0.75} {events {33 "sc_spawn_melee_ctc"} {34 "ork_nob_mace_hit"} {35 "sc_spawn_melee_ctc"} {36 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {speed 0.9} {events {40 "sc_spawn_melee_ctc"} {41 "ork_nob_mace_hit"} {42 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {speed 0.8} {events {38 "sc_spawn_melee_ctc"} {39 "ork_nob_mace_hit"} {40 "sc_spawn_melee_ctc"}}}
	{sequence "Melee4" {speed 0.7} {events {39 "sc_spawn_melee_ctc"} {40 "ork_nob_mace_hit"}  {41 "sc_spawn_melee_ctc"}}}
	
	{sequence "Idle_Aiming1" {speed 0.5} {File "Idle_Lowready1"}}
	
	{sequence "Idle_Lowready1" {speed 0.5}}
	{sequence "Idle_Lowready2" {speed 0.5}}
	{sequence "Idle_Lowready3" {speed 0.5}}
	{sequence "Idle_Lowready4" {speed 0.5}}
	{sequence "Idle_Lowready5" {speed 0.5}}
	
	{sequence "Sync_Die_01" {speed 0.6}}
	{sequence "Sync_Die_02" {speed 0.6}}
	{sequence "Sync_Kill_01" {speed 0.6}}
	{sequence "Sync_Kill_02" {speed 0.6}}
}