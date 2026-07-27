
{animation
	{smooth 0.088}
	
	{sequence "death1" {speed 0.6}}
	{sequence "death2" {speed 0.6}}

	{sequence "idle_aiming1" {speed 0.5}}
	{sequence "idle_lowready1" {speed 0.3}}
	{sequence "idle_lowready2" {speed 0.3}}
	{sequence "idle_lowready3" {speed 0.3}}
	{sequence "idle_lowready4" {speed 0.3}}
	
	{sequence "lictor_ability" {speed 0.6}}
	
	{sequence "run_lowready1" {speed 0.8}
		{events 
			{19 "talon_right"} {28 "talon_left"} {43 "talon_left"} {55 "talon_right"}
			{13 "leg_right"} {27 "leg_left"} {42 "leg_right"} {56 "leg_left"}
		}
	}
	
	{sequence "run_lowready2" {speed 0.76}
		{events {13 "leg_right"} {24 "leg_left"}}
		{file "sprint"}
	}
	
	{sequence "sprint" {speed 0.6} {events {13 "leg_right"} {24 "leg_left"}}}
	
	{sequence "thrown_getup" {speed 0.6}}
	
	{sequence "melee1" {speed 0.85} {events {11 "sc_spawn_melee_ctc"} {13 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.85} {events {11 "sc_spawn_melee_ctc"} {13 "sc_spawn_melee_ctc"}}}
	{sequence "melee3" {speed 0.85} {events {12 "sc_spawn_melee_ctc"} {14 "sc_spawn_melee_ctc"}}}
	{sequence "melee4" {speed 0.85} {events {12 "sc_spawn_melee_ctc"} {14 "sc_spawn_melee_ctc"}}}
	{sequence "melee5" {speed 0.85} {events {22 "sc_spawn_melee_ctc"} {25 "sc_spawn_melee_ctc"}}}
}