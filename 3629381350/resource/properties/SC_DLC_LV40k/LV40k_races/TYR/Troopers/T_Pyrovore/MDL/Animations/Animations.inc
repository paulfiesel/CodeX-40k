
{animation
	{smooth 0.088}

	{sequence "death1" {speed 0.5}}
	{sequence "death2" {speed 0.5}}
	{sequence "death3" {speed 0.5}
		{events
			{30 "frontal_leg_left"} {48 "frontal_leg_left"} {98 "frontal_leg_left"}
			{25 "frontal_leg_right"} {61 "frontal_leg_right"} {134 "frontal_leg_right"}
			
			{14 "mid_leg_left"} {76 "mid_leg_left"} {118 "mid_leg_left"}
			{16 "mid_leg_right"} {68 "mid_leg_right"} {124 "mid_leg_right"} 
			
			{8 "back_leg_left"} {86 "back_leg_left"} 
			{41 "back_leg_right"} {55 "back_leg_right"} {106 "back_leg_right"}
		}
	}
	
	{sequence "idle_aiming1" {speed 0.6}
		{events
			{13 "frontal_leg_left"} {30 "frontal_leg_left"} {43 "frontal_leg_left"} {56 "frontal_leg_left"} {66 "frontal_leg_left"}
			{7 "frontal_leg_right"} {20 "frontal_leg_right"} {36 "frontal_leg_right"} {51 "frontal_leg_right"} {73 "frontal_leg_right"}
			
			{8 "mid_leg_left"} {36 "mid_leg_left"} {49 "mid_leg_left"} {74 "mid_leg_left"}
			{14 "mid_leg_right"} 
			
			{18 "back_leg_left"} {29 "back_leg_left"} 
			{15 "back_leg_right"} {42 "back_leg_right"} {58 "back_leg_right"} {69 "back_leg_right"} 
		}
	}
	{sequence "Idle_Lowready2"	{speed 0.5}
		{events
			{87 "frontal_leg_left"}		{140 "frontal_leg_left"}
			{141 "frontal_leg_right"}	{110 "frontal_leg_right"}
		}
	}
	{sequence "Idle_Lowready1"	{speed 0.37}
		{events
			{8 "frontal_leg_left"} {36 "frontal_leg_left"} {69 "frontal_leg_left"} {81 "frontal_leg_left"} {92 "frontal_leg_left"} {150 "frontal_leg_left"} {162 "frontal_leg_left"} {174 "frontal_leg_left"}
			{17 "frontal_leg_right"} {43 "frontal_leg_right"} {78 "frontal_leg_right"} {90 "frontal_leg_right"} {102 "frontal_leg_right"} {142 "frontal_leg_right"} {154 "frontal_leg_right"} {165 "frontal_leg_right"}
			
			{14 "mid_leg_left"} {45 "mid_leg_left"} {80 "mid_leg_left"} {91 "mid_leg_left"} {104 "mid_leg_left"} {158 "mid_leg_left"}
			{11 "mid_leg_right"} {52 "mid_leg_right"} {71 "mid_leg_right"} {83 "mid_leg_right"} {97 "mid_leg_right"} {148 "mid_leg_right"} {160 "mid_leg_right"} 
			
			{10 "back_leg_left"} {39 "back_leg_left"} {64 "back_leg_left"} {76 "back_leg_left"} {87 "back_leg_left"} {145 "back_leg_left"} {158 "back_leg_left"} {170 "back_leg_left"}
			{6 "back_leg_right"} {55 "back_leg_right"} {72 "back_leg_right"} {84 "back_leg_right"} {95 "back_leg_right"} {143 "back_leg_right"} {155 "back_leg_right"} {167 "back_leg_right"}
		}
	}
	{sequence "Idle_Lowready3" {File "idle_aiming1"} {speed 0.2}
		{events
			{30 "frontal_leg_left"} {48 "frontal_leg_left"} {98 "frontal_leg_left"}
			{25 "frontal_leg_right"} {61 "frontal_leg_right"} {134 "frontal_leg_right"}
			
			{14 "mid_leg_left"} {76 "mid_leg_left"} {118 "mid_leg_left"}
			{16 "mid_leg_right"} {68 "mid_leg_right"} {124 "mid_leg_right"} 
			
			{8 "back_leg_left"} {86 "back_leg_left"} 
			{41 "back_leg_right"} {55 "back_leg_right"} {106 "back_leg_right"}
		}
	}
	
	{sequence "Run_Aiming1" {speed 1.5}
		{events
			{4 "frontal_leg_left"} {12 "back_leg_right"}
			{16 "mid_leg_left"} {18 "frontal_leg_right"}
			{20 "back_leg_left"} 	{30 "mid_leg_right"} 
			
			{34 "frontal_leg_left"} {42 "back_leg_right"}
			{56 "mid_leg_left"} {58 "frontal_leg_right"}
			{70 "back_leg_left"} 	{80 "mid_leg_right"} 
			
			{84 "frontal_leg_left"} {92 "back_leg_right"}
			{106 "mid_leg_left"} {108 "frontal_leg_right"}
			{115 "back_leg_left"} 	
		}
	}
	
	{sequence "melee1" {speed 0.6}	{events {11 "sc_spawn_melee_ctc"} {13 "sc_spawn_melee_ctc"}}}
	{sequence "melee2" {speed 0.6}	{events {12 "sc_spawn_melee_ctc"} {14 "sc_spawn_melee_ctc"}}}
}