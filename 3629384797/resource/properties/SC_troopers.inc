
actor

(include "SC_abm.inc")
(include "SC_infantry_generic_defines.inc")
	
; ===============================================================
; // Basic configurations
; ===============================================================

; // {props "vehicle"}	; <- add to caller, some units work better without the vehicle class.

{props "nocover" "flesh"}
{props "SC_plataform_prop_troopers_main"}

{able "minimap"}  
{NoGroupMesh 1}

{simulation {able 1} {disableLinked 1}}
{autooperatable 1}
{placer	{crew 0}}

{brain "vehicle"
	{control 0}
	{state "vehicle"}
	{const "crush/min_danger_zone_time" 	0.1}
	{const "crush/min_danger_zone_length"	0.1}
}	

{FSM "Animal"
	(include "/properties/SC_Troopers/FSM/request.inc")
	(include "/properties/SC_Troopers/FSM/stand.inc")
	(include "/properties/SC_Troopers/FSM/walk.inc")
	(include "/properties/SC_Troopers/FSM/squat.inc")
	(include "/properties/SC_Troopers/FSM/look.inc")
	(include "/properties/SC_Troopers/FSM/bazooka_stand.inc")
	(include "/properties/SC_Troopers/FSM/snipe.inc")
	(include "/properties/SC_Troopers/FSM/lie.inc")
	(include "/properties/SC_Troopers/FSM/swim.inc")
	(include "/properties/SC_Troopers/FSM/inventory.inc")
	(include "/properties/SC_Troopers/FSM/board.inc")
	(include "/properties/SC_Troopers/FSM/special.inc")
	(include "/properties/SC_Troopers/FSM/die.inc")
	(include "/properties/SC_Troopers/FSM/subset.inc")
	(include "/properties/SC_Troopers/FSM/switch.inc")
}	

; ===============================================================
; // Trooper Presets
; ===============================================================

{targetSelector "SC_troopers_bullet"}

(define "SC_Troopers_Creatures"
	{PatherID	"SC_Pather_H_Creature_%size"}
	{ObstacleId "SC_Pather_H_Creature_%size"}
	
	{targetClass "SC_Target_Creature"}
	{lodclass "vehicle"}
	
; // {Obstacle 	{Circle2 {radius %RadiusCollider}}}		<- Set obstacles and Colliders to caller.
; // {collider ""}

	{extender "inventory"
		{box
			{Size 9 12}
			{Weight 15000}
		}
	}
)

(Define "SC_Troopers_Infantry"
	{PatherID	"SC_Pather_H_Infantry_%size"}
	{ObstacleId "SC_Pather_H_Infantry_%size"}
	
	{targetClass "human"}
	{lodclass "human"}
	
	{Obstacle 	{Circle2 {radius %RadiusCollider}}}
	{collider "SC_Heavy_Infantry"}
	
	{extender "inventory"
		{box
			{Size 8 12}
			{Weight 100}
		}
	}
)

; // BUZZ: [Swarm Troops - no Vision - EX: Tyranid Rippers - Tyranid Sporemines, Ork Squigs] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Troopers_Size_0"			
	("SC_Troopers_Infantry" RadiusCollider(%RadiusCollider) size(Small))
	{props "SC_plataform_prop_troopers_size1"}
	
	{Sensor	
		{AttackZone 2.5}
		{MinRecognizeTime 0.01}
		{RecognizeTime 0.01}
		{InformRange 50 75}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size1%v_perk"} 
)

; // BUZZ: [Human Sized Troops - EX: Ork Boyz, Tyranid Hormagaunts] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Troopers_Size_1"
	("SC_Troopers_Infantry" RadiusCollider(%RadiusCollider) size(Small))
	{props "SC_plataform_prop_troopers_size1"}
	
	{Sensor	
		{Visor "eyes" 
			{vision "%v_vision_eyes"} 
			{bone "%v_bone_eyes"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.5}
		{MinRecognizeTime 0.01}
		{RecognizeTime 0.01}
		{InformRange 50 75}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size1%v_perk"} 
)

; // BUZZ: [Human Sized Elite Troops - Better Vision - EX: Ork Nobz, Ogryns] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Troopers_Size_2"
	("SC_Troopers_Infantry" RadiusCollider(%RadiusCollider) size(Med))
	{props "SC_plataform_prop_troopers_size2"}
	
	{Sensor	
		{Visor "eyes"
			{vision "%v_vision_eyes"}
			{bone "%v_bone_eyes"}
		}
		{Visor "peripheral"	
			{vision "%v_vision_around"} 
			{bone "%v_bone_around"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 80 100}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size2%v_perk"} 
)

; // BUZZ: [Heavy Troopers - Best Vision - EX: SM Terminators, Ork Meganobz] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Troopers_Size_3"
	("SC_Troopers_Infantry" RadiusCollider(%RadiusCollider) size(Big))
	{props "SC_plataform_prop_troopers_size3"}
	
	; // ~~~~~~~~~~~~~~~~~~ Vision:
	{Sensor	
		{Visor "eyes" 
			{vision "%v_vision_eyes"} 
			{bone "%v_bone_eyes"}
		}
		{Visor "peripheral"	
			{vision "%v_vision_around"} 
			{bone "%v_bone_around"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 80 100}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size3%v_perk"} 
)

; // BUZZ: [Creatures 1 - Light Tanks - EX: Tyranid Biovore, Chaos Spawn] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Creatures_Size_1"
	("SC_Troopers_Creatures" size(Small))
	{props "SC_plataform_prop_troopers_size4"}
	
	{collider "tank.light"}
	
	{Sensor	
		{Visor "eyes"
			{vision "%v_vision_eyes"}
			{bone "%v_bone_eyes"}
		}
		{Visor "peripheral"	
			{vision "%v_vision_around"} 
			{bone "%v_bone_around"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 50 75}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size4"} 
)

; // BUZZ: [Creatures 2 - Medium Tanks - EX: Tyranid Exocrine, Soulgrinders] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Creatures_Size_2"
	("SC_Troopers_Creatures" size(Med))
	{props "SC_plataform_prop_troopers_size5"}
	
	{collider "tank.medium"}
	
	{Sensor	
		{Visor "eyes"
			{vision "%v_vision_eyes"} 
			{bone "%v_bone_eyes"}
		}
		{Visor "peripheral"	
			{vision "%v_vision_around"}
			{bone "%v_bone_around"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 50 75}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size5"} 
)

; // BUZZ: [Creatures 3 - Heavy Tanks - EX: Tyranid Carnifex] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Creatures_Size_3"
	("SC_Troopers_Creatures" size(Big))
	{props "SC_plataform_prop_troopers_size6"}
	
	{collider "tank.heavy"}
	
	{Sensor	
		{Visor "eyes" {vision "%v_vision_eyes"} {bone "%v_bone_eyes"}}
		{Visor "peripheral"	{vision "%v_vision_around"} {bone "%v_bone_around"}}
		
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 50 75}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size6"} 
)

; // BUZZ: [Creatures 4 - Colossal Monsters - EX: Tyranid Swarmlord, Greater Daemons, Ork Squiggoth] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;

(Define "SC_Creatures_Size_4" 
	("SC_Troopers_Creatures" size(Big))
	{props "SC_plataform_prop_troopers_size7"}
	
	{collider "tank.behemoth"}
	
	{Sensor	
		{Visor "eyes"
			{vision "%v_vision_eyes"} 
			{bone "%v_bone_eyes"}
		}
		{Visor "peripheral"	
			{vision "%v_vision_around"}
			{bone "%v_bone_around"}
		}
		{Visor "hearing"
			{vision "noise_detection"}
			{bone "%v_bone_eyes"}
		}
		{AttackZone 2.0}
		{RecognizeTime 0.01}
		{InformRange 80 100}		;// first = AI , second = USER
	}
	{props "sc_vision_troopers_size6"} 
)

; ===============================================================
; // Weapon defines
; ===============================================================

{extender "inventory"
	{weapon "weapon"	{mask "weapon weapon"}}	
	{weapon "weapon1"	{mask "weapon weapon1"}}	
	{weapon "weapon2"	{mask "weapon weapon2"}}	
	{weapon "weapon3"	{mask "weapon weapon3"}}	
	{weapon "weapon4"	{mask "weapon weapon4"}}	
	{weapon "weapon5"	{mask "weapon weapon5"}}	
	{weapon "weapon6"	{mask "weapon weapon6"}}	
	{weapon "weapon7"	{mask "weapon weapon7"}}	
	{weapon "weapon8"	{mask "weapon weapon8"}}	
	{weapon "melee"		{mask "melee melee"}}	
	{weapon "melee1"	{mask "melee melee1"}}	
	{weapon "melee2"	{mask "melee melee2"}}	
	{weapon "melee3"	{mask "melee melee3"}}	
	{weapon "melee4"	{mask "melee melee4"}}	
	{weapon "melee5"	{mask "melee melee5"}}	
}

(Define "Ranged_Sett_Main"
	{type "main"}
	{SequentialAim 1}
	{Rotate}
	{basic}
)

(Define "Ranged_Sett_Sec"
	{type "coaxial"}
	{SequentialAim 0}
	{basic}
)

(Define "Melee_Sett_Main"
	{type "main"}
	{foresight "foresight_melee"}
	{Rotate}
	{basic}		
)

(Define "Melee_Sett_Sec"
	{type "coaxial"}
	{basic}		
)

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [OPTIONAL EXTENDERS]
;// {SequentialAim 0}
;// {RestoreIKAfterAim}			
;// {Rotate}
;// {LinkBone "left_hand"}
;// {AimBone "aim_ref"}
;// {ai_in_manual}

{Weaponry
	{RestoreIKTime 2}
	
	{place "melee"		("Melee_Sett_Main")}
	{place "melee1"		("Melee_Sett_Sec")}
	{place "melee2"		("Melee_Sett_Sec")}
	{place "melee3"		("Melee_Sett_Sec")}
	{place "melee4"		("Melee_Sett_Sec")}
	{place "melee5"		("Melee_Sett_Sec")}
	
	{place "weapon"		("Ranged_Sett_Main")}
	{place "weapon1"	("Ranged_Sett_Sec")}
	{place "weapon2"	("Ranged_Sett_Sec")}
	{place "weapon3"	("Ranged_Sett_Sec")}
	{place "weapon4"	("Ranged_Sett_Sec")}
	{place "weapon5"	("Ranged_Sett_Sec")}
	{place "weapon6"	("Ranged_Sett_Sec")}
	{place "weapon7"	("Ranged_Sett_Sec")}
	{place "weapon8"	("Ranged_Sett_Sec")}
	
	{ManualAccuracy 1.0}
	{ManualAccuracyZoom 1.0}
	{TpcInstantAiming}
	{UseLookatAiming}
}

; ===============================================================
; // MDL configurations
; ===============================================================

(Define "SC_Troopers_Aim_Ref_MDL_Custom"
	{bone "aim_ref_master"
		{Position 0	0	%height}
		
		{bone revolute "aim_ref_h"
			{limits -50 40}
			{speed %speed}
			
			{bone revolute "aim_ref_v"
				{limits -70 70}
				{speed %speed}
				{Matrix34
					1	0	0
					0	0	1
					0	-1	0
					0	0	0
				}
				{bone "aim_ref"
					{Matrix34
						1	0	0
						0	0	-1
						0	1	0
						0	0	0
					}
				}
			}
		}
	}
)

(Define "SC_Troopers_Aim_Ref_MDL"
	("SC_Troopers_Aim_Ref_MDL_Custom" speed(0.03) height(20))
)
