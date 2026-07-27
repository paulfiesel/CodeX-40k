
{animation
	{smooth 0.088}
	
	{sequence "death1" {speed 0.6}}
	
	{sequence "melee1" {speed 0.5} {events {15 "sc_spawn_melee_ctc"} {20 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.5} {events {15 "sc_spawn_melee_ctc"}}}
	{sequence "melee3" {speed 0.5} {events {20 "sc_spawn_melee_ctc"}}}
	
	{sequence "special_melee" {speed 0.6}}
	
	;//{sequence "turn_left1" {speed 0.6}}
	;//{sequence "turn_right1" {speed 0.6}}
	
	{sequence "Idle_Aiming1" {speed 0.6} {File "Idle_Lowready1"}}
	
	{sequence "Idle_Lowready1" {speed 0.6}}
	{sequence "Idle_Lowready2" {speed 0.6}}
	{sequence "Idle_Lowready3" {speed 0.6}}
	
	{sequence "Run_Aiming1" {speed 0.345} {File "Run"}	 {events {14 "frontal_leg_right"} {18 "back_leg_left"} {30 "frontal_leg_left"} {36 "back_leg_right"}}}
	
	{sequence "fire_body_test" {speed 0.5}}
	{sequence "fire" {speed 0.5}}
}