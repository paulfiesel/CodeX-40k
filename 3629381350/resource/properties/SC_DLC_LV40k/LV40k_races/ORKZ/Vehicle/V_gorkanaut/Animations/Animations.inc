
{animation
	{sequence "rev_stop_deff_shoota" {speed 0.4} {Smooth 0.0} {file "Fire_deff_shoota"}}
	{sequence "rev_loop_deff_shoota" {speed 0.4} {Smooth 0.06} {file "Fire_deff_shoota"}}
	
	{Smooth 0.066}
	
	{sequence "death1" {speed 0.6}}
	{blend "death_pose" {pose "death1" end}}
	
	{sequence "Idle_Aiming1" {speed 0.5}}
	
	{sequence "Idle_Lowready2" {File "Idle_Aiming1"} {speed 0.5}}
	
	{sequence "Idle_Lowready1" {speed 0.5} 
		{events
			{50 "leg_mech"}	{67 "leg_right_stomp"}
			{98 "leg_mech"}	{113 "leg_left_stomp"} 
		}
	}
	{sequence "Run_Aiming1" {speed 0.6}
		{events
			{37 "leg_mech"}		{57 "leg_left_stomp"}
			{87 "leg_mech"}		{110 "leg_right_stomp"} 
			{137 "leg_mech"}	{169 "leg_left_stomp"}
			{197 "leg_mech"}	{224 "leg_right_stomp"} 
			{260 "leg_mech"}	{280 "leg_left_stomp"}
			{310 "leg_mech"}	{335 "leg_right_stomp"} 
		}
	}
	{sequence "Turn_Left1" {File "Turn"} {speed 0.6}
		{events
			{60 "leg_mech"}		{50 "leg_left_stomp"}
			{15 "leg_mech"}		{5 "leg_right_stomp"} 
		}
	}
	{sequence "Turn_Right1" {File "Turn"} {speed 0.6}
		{events
			{15 "leg_mech"}		{31 "leg_right_stomp"}
			{55 "leg_mech"}		{76 "leg_left_stomp"} 
		}
	}
	{sequence "melee1" {speed 0.5} {File "Melee_Attack_Low1"} {Smooth 0.07} 
		{events 
			{10 "leg_mech"}		{25 "leg_right_stomp"} 
			{38 "leg_mech"}		{55 "leg_left_stomp"}	
			{60 "melee_woosh"} 
			{68 "klaw"}
			{70 "leg_mech"}	
			{75 "sc_spawn_melee_propa_smack"}
			{80 "sc_spawn_melee_propa_smack"}
			{110 "leg_mech"}	{135 "leg_mech"}		{156 "leg_left_stomp"}	
			{170 "leg_mech"}	{186 "leg_right_stomp"}	
		}
	}
	{sequence "melee2" {speed 0.5} {File "Melee_Attack_Low2"} {Smooth 0.07}
		{events 
			{5 "leg_mech"}		{25 "leg_right_stomp"} 
			{26 "leg_mech"}		{45 "klaw"} {60 "leg_mech"}		{76 "leg_left_stomp"} 
			{80 "sc_spawn_melee_stompin_gud"}
			{82 "sc_spawn_melee_stompin_gud"}
			{120 "leg_mech"}	{141 "leg_left_stomp"}	
			{160 "leg_mech"}	{168 "leg_right_stomp"} 
		}
	}
	{sequence "melee3" {speed 0.5} {File "Special_Ability"} {Smooth 0.07}
		{events 
			{1 "leg_mech"}	{25 "leg_mech"} {30 "klaw"} {31 "melee_woosh"}
			{52 "sc_spawn_melee_krump_stomp"}
			{80 "leg_mech"}	{107 "leg_right_stomp"}	
			{100 "leg_mech"} {120 "leg_mech"}	{135 "leg_left_stomp"}
		}
	}
	
	; -------------------------------------------------------- ;
	
	{sequence "Melee_Attack_Low1" {speed 0.6}}
	{sequence "Melee_Attack_Low2" {speed 0.6}}
	{sequence "Melee_Attack_High1" {speed 0.6}}
	{sequence "Melee_Attack_High2" {speed 0.6}}
	{sequence "Special_Ability" {speed 0.6}}
	{sequence "Spawn" {speed 0.6}}
}