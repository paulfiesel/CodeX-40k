
actor

; ===============================================================
; // Basic configurations
; ===============================================================

; {NoGroupMesh 1}
; {lodclass "human"}

{props "vehicle"}
{props "nocover"}
{props "SC_Plataform_prop_mp_callin"}

{constrain ground}
{simulation {able 1} {disableLinked 1}}
{autooperatable 1}
{placer	{crew 0}}

{PatherID  "nothing"}
{obstacleID "nothing"}

{collider "SC_Call_In_Activator"}

;{targetClass "car"}
;{targetSelector "car_bullet"}

; ===============================================================
; // Sensors 
; ===============================================================

;{hearingBias 7.5}

{Sensor
;	{Visor "eyes"
;		{vision "human"}
;		{bone "visor1"}
;	}
;	{Visor "peripheral"
;		{vision "human_peripheral"}
;		{bone "visor1"}
;	}
;	{Visor "hearing"
;		{vision "noise_detection"}
;		{bone "visor1"}
;	}
;	{Visor "telescope"}
;	{AttackZone 2.5}
;	{MinRecognizeTime 0.01}
;	{RecognizeTime 0.01}
;	{InformRange 80 100}		;// first = AI , second = USER
}


; ===============================================================
; // Volumes 
; ===============================================================

{volume "Chek_Collision"
	{able clear {visible 0} {bullet 0} {select 0} {contact_ground 0} {touch 1} {contact 0} {blast 0}}
}

;{volume "Select"
;	{able clear {select 0} {touch 0}}
;	{density 0}
;}

{Obstacle 
	{Circle2 {radius 10}}
}

; ===============================================================
; // AI Stuff 
; ===============================================================

{brain "vehicle"
	{control 0}
	{state "vehicle"}
;	{const "crush/min_danger_zone_time" 	2}
;	{const "crush/min_danger_zone_length"	2}
}	

{extender "inventory"
	{box
		{Size 1 1}
		{weight 100}	
	}
}		

; ===============================================================
; // Chassis 
; ===============================================================

{mass 1}

{Chassis "human_carrier"
	{Locomotion
		{Slow 900} {Normal 900} {Fast 900}	
		{maxspeed 900} {maxSpeedAtMaxTurn 900}
		{StartTime 0.01}			
		{TurnTime 0.01}
		{TurnStart 0.01} 
		{TurnStop 0.01}
		{TurnRadius 0.01}
		{BrakeTime 0.01} 
		{StopTime 0.01} 
		{GearSwitchDelay 0.01}						;// Time to switch between forward and reverse.	
	}
	{dontUseSlope}
	{ignorePatherBounds}
;	{disableBackward}
}


