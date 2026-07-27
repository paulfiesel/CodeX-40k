
; ================================================================================================== ]
; // Fauna Troops
; ================================================================================================== ]

(Define "SC_Pather_Profile_H_Infantry"
;//	{Network}
	{Priority %p}
	{Radius %r}
	{Terrain
		"ground"		1
		"snow"			1
		"no_pass"		0
		"no_pass_human"	0
		"forest"		0.8
		"slope"			0.8
		"swamp"			0.75
		"shallow_water"	0.75
		"water"			0
		"deep_water"	0
	}
	{Height
		0  0  0  1  2 ;//  0...6..12..18..24..29
		3  4  5  6 900 ;// 30..36..42..48..54..59
	   900 900 900 900 900 ;// 60..66..72..78..84..90
	}
;	{Height
;		0  0  0  0  0 ;//  0...6..12..18..24..29
;		0  0  0  0 -1 ;// 30..36..42..48..54..59
;	   -1 -1 -1 -1 -1 ;// 60..66..72..78..84..90
;	}
)

{Profile "SC_Pather_H_Infantry_Small" 
	("SC_Pather_Profile_H_Infantry" p(0) r(0.475))	;} // BUZZ: Ref - Squigs, Orkboys, Tyranid Gaunts.
}	

{Profile "SC_Pather_H_Infantry_Med" 
	("SC_Pather_Profile_H_Infantry" p(2) r(0.825))	;} // BUZZ: Ref - Meganobs, Terminators, Tyranid Warriors.
	{BattleCrusher}
}	

{Profile "SC_Pather_H_Infantry_Big" 
	("SC_Pather_Profile_H_Infantry" p(2) r(1.0))	;} // BUZZ: Ref - Warboss, Ogryns.
	{BattleCrusher}
}	

{Profile "SC_Pather_H_Creature_Small" 
	("SC_Pather_Profile_H_Infantry" p(5) r(1.5))	;} // BUZZ: Ref - Tyrant Guard
}	

{Profile "SC_Pather_H_Creature_Med" 
	("SC_Pather_Profile_H_Infantry" p(7) r(2.0))	;} // BUZZ: Ref - Carnifex
	{BattleCrusher}
}	

{Profile "SC_Pather_H_Creature_Big" 
	("SC_Pather_Profile_H_Infantry" p(8) r(2.5))	;} // BUZZ: Ref - Greater Daemons.
	{BattleCrusher}
}	

{Profile "SC_Pather_H_Creature_Enormous" 
	("SC_Pather_Profile_H_Infantry" p(8) r(3.0))	;} // BUZZ: Ref - 4 Legs Big Creatures.
	{BattleCrusher}
}	

; ================================================================================================== ]
; // Mechs/Walkers
; ================================================================================================== ]

(Define "SC_Pather_Profile_V_Walker"
;//	{Network}
	{Radius %r}
	{Priority %p}
	{BattleCrusher}
	{Terrain
		"road"			(* 1 %s_mod)
		"ground"		(* 1 %s_mod)
		"snow"			(* 1 %s_mod)
		"no_pass"		(* 0 %s_mod)
		"forest"		(* 0.9 %s_mod)
		"slope"			(* 0.9 %s_mod)
		"swamp"			(* 0.8 %s_mod)
		"shallow_water"	(* 0.8 %s_mod)
		"water"			(* 0.60 %s_mod)	; // <- test water later, some big mechs may surpass "water_level"...
		"deep_water"	(* 0 %s_mod)
	}
	{Height
		0  0  0  0  0 ;//  0...6..12..18..24..29
		0  0  0  0 -1 ;// 30..36..42..48..54..59
	   -1 -1 -1 -1 -1 ;// 60..66..72..78..84..90
	   
	   ; older test values
		;0  0  0  1  2 ;//  0...6..12..18..24..29
		;3  4  5  6 900 ;// 30..36..42..48..54..59
		;900 900 900 900 900 ;// 60..66..72..78..84..90
	}
)

{Profile "SC_Pather_V_Walker_S1"		
	("SC_Pather_Profile_V_Walker" p(4) r(1.8) s_mod(1.0))	;} // BUZZ: Ref - Sentinel, Ork Deff Dread, Marines Dreadnought
}

{Profile "SC_Pather_V_Walker_S2"		
	("SC_Pather_Profile_V_Walker" p(6) r(2.6) s_mod(0.96))	;} // BUZZ: Ref - Halo Locust.
}

{Profile "SC_Pather_V_Walker_S3"		
	("SC_Pather_Profile_V_Walker" p(7) r(4.0) s_mod(0.92))	;} // BUZZ: Ref - Lord of Skulls.
}

{Profile "SC_Pather_V_Walker_S4"		
	("SC_Pather_Profile_V_Walker" p(8) r(5.2) s_mod(0.9))	;} // BUZZ: Ref - Imperial Knight.
}

; ================================================================================================== ]
; // Tanks
; ================================================================================================== ]

(define "SC_Pather_Profile_Heavy_Tank"
	{Profile "%name"
		{Radius %r}
		{Priority 6}
		{BattleCrusher}
		{Terrain
			"road"			(* 1 %s_mod)
			"ground"		(* 0.875 %s_mod)
			"snow"			(* 0.7 %s_mod)
			"no_pass"		(* 0 %s_mod)
			"forest"		(* 0.1 %s_mod)
			"slope"			(* 0.3 %s_mod)
			"swamp"			(* 0.5 %s_mod)
			"shallow_water"	(* 0.5 %s_mod)
			"water"			(* 0 %s_mod)	
			"deep_water"	(* 0 %s_mod)
		}
		{Height
			0  0  0  1  2 ;//  0...6..12..18..24..29
		    3  4  5  6 900 ;// 30..36..42..48..54..59
		   900 900 900 900 900 ;// 60..66..72..78..84..90
		}
	}
)

("SC_Pather_Profile_Heavy_Tank" name(40k_big_tank_heavy_s1)	r(3.5)	s_mod(0.95))
("SC_Pather_Profile_Heavy_Tank" name(40k_big_tank_heavy_s2)	r(4.5)	s_mod(0.9))
("SC_Pather_Profile_Heavy_Tank" name(40k_big_tank_heavy_s3)	r(5.0)	s_mod(0.85))
("SC_Pather_Profile_Heavy_Tank" name(40k_big_tank_heavy_s4)	r(6.0)	s_mod(0.8))
	
("SC_Pather_Profile_Heavy_Tank" name(SC_Behemoth_Tank_S1)	r(4.0)	s_mod(0.9))
("SC_Pather_Profile_Heavy_Tank" name(SC_Behemoth_Tank_S2)	r(5.0)	s_mod(0.85))
("SC_Pather_Profile_Heavy_Tank" name(SC_Behemoth_Tank_S3)	r(6.5)	s_mod(0.85))

; // DLC Inclusion:
(Include "SC_DLC_LV40k_pather.inc")
(Include "SC_DLC_HALO_pather.inc")

; ================================================================================================== ]
; // Grav Vehicles
; ================================================================================================== ]

; // BUZZ: no terrain penalties.

(define "SC_Pather_Profile_Grav"
	{Profile "%name"
		{Radius %r}
		{Priority 5}
		{BattleCrusher}
		{Terrain
			"road"			1
			"ground"		1
			"snow"			1
			"no_pass"		1
			"forest"		1
			"slope"			1
			"swamp"			1
			"shallow_water"	1
			"water"			0
			"deep_water"	0
		}
		{Height
			0  0  0  0  0 ;//  0...6..12..18..24..29
			0  0  0  0 -1 ;// 30..36..42..48..54..59
		   -1 -1 -1 -1 -1 ;// 60..66..72..78..84..90
		}
	}
)

("SC_Pather_Profile_Grav" name(40k_grav_vehicle_s1)	r(2.8))
("SC_Pather_Profile_Grav" name(40k_grav_vehicle_s2)	r(3.2))
("SC_Pather_Profile_Grav" name(40k_grav_vehicle_s3)	r(4.0))
("SC_Pather_Profile_Grav" name(40k_grav_vehicle_s4)	r(5.0))
("SC_Pather_Profile_Grav" name(40k_grav_vehicle_s5)	r(6.4))
	