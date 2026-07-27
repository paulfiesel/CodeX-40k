
{animation
	{smooth 0.2}
	
	{sequence "Run_aiming1" {File "Melee/m_Run_aiming1"} {speed 0.6}
		{events 
			{10 "carn_body_move"} {35 "carn_body_move"}
			{20 "leg_left"} {45 "leg_right"}
		}
	}
	
	{sequence "Run_aiming2" {File "Melee/m_sprint"} {speed 0.6}  {events {17 "leg_left"} {35 "leg_right"}}}
	
	{smooth 0.1}
	
	{sequence "Death1" {File "Melee/m_death"} {speed 0.6}
		{events 
			{27 "leg_left"} {86 "talon_right"} {195 "carn_body_falls"} 
		}
	}
	
	{sequence "Melee1" {File "Melee/m_melee1"} {speed 0.6} {events {20 "melee_woosh"} {30 "leg_left"} {33 "sc_spawn_melee_ctc"} {35 "sc_spawn_melee_ctc"}}}
	{sequence "Melee2" {File "Melee/m_melee2"} {speed 0.6} {events {12 "melee_woosh"} {24 "sc_spawn_melee_ctc"} {26 "sc_spawn_melee_ctc"}}}
	{sequence "Melee3" {File "Melee/m_melee3"} {speed 0.6} {events {14 "melee_woosh"} {25 "sc_spawn_melee_ctc"} {27 "sc_spawn_melee_ctc"}}}
	{sequence "Melee4" {File "Melee/m_melee4"} {speed 0.6} {events {19 "melee_woosh"} {29 "sc_spawn_melee_ctc"} {31 "sc_spawn_melee_ctc"}}}
	
	{sequence "Revive" {File "Melee/m_revive"} {speed 0.5}  {Smooth 0}}
	
	{sequence "Idle_Aiming1" {File "Melee/m_idle_lowready4"} {speed 0.3}}
	
	{sequence "Idle_Lowready1" {File "Melee/m_idle_lowready1"} {speed 0.5}}
	{sequence "Idle_Lowready2" {File "Melee/m_idle_lowready2"} {speed 0.3}}
	{sequence "Idle_Lowready3" {File "Melee/m_idle_lowready3"} {speed 0.5} {events {71 "talon_left"} {73 "talon_right"}}}
	{sequence "Idle_Lowready4" {File "Melee/m_idle_lowready4"} {speed 0.5}}
}