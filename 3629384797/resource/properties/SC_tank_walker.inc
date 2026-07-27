
actor

(include "abm.inc")
(include "mobility.inc")
(include "vehicle.ext")
(include "armor.ext")

; ===============================================================
; // Basic configurations
; ===============================================================

{props "with_gun"}	; // <- weapon systems for walkers are defined separatly from vanilla [...]
{props "tank"}
{props "engine"}
{props "SC_prop_walker_tank"}
{props "SC_plataform_prop_FSM_common"}	

("brain_vehicle")

{extender "talk" {talker "tank"}}	; // <- EXTENDER TALK DOES NOT WORK WITH "AUTO_OPERATABLE" VEHICLES!
{able "talk"}

{sensor
	{visor "main"
		{vision "tank_range_200"}
		{bone "visor1"}
	}
	{Visor "eyes"
		{vision "tank_driver"}
		{bone "visor_eyes"}
	}
	{visor "around"
		{vision "tank_around"}
		{bone "visor1"}
	}
	{visor "none"
		{vision "none"}
	}
	{visor "hearing"
		{vision "noise_detection"}
		{bone "hearing_bone"}
	}
}
{hearingBias 2.0} 	;// reduces units ability to hear sound signals. value = meters

; ===============================================================
; // Weapon defines
; ===============================================================

(define "restore_ik_time"
	{RestoreIKTime 4}
)

{extender "inventory"
	{box
		{Size 9 12}
		{Weight 15000}
		{item "can" 1}
		{item "repair_kit" 5}
	}
}

; ===============================================================
; // Vehicle Walker - Size Presets
; ===============================================================

(Define "SC_Tank_Walker_Size_1" ; // BUZZ: <- Ork Deff-dread / SM Dreadnought / Eldar Wraithlord / IG Sentinel
	{props "SC_plataform_prop_tank_walkers_size1"}
	{props "vision_lev02" "detect_tank_medium"}	
	{props "medium"}

	{Obstacle 	{Circle2 {radius %RadiusCollider}}}	
	{PatherID "SC_Pather_V_Walker_S1"}
	{obstacleID "SC_Pather_V_Walker_S1"}
	{collider "tank.medium"}
	
	{targetClass "tank_light" "ap fg bullet"}
	{targetSelector "tank_light"}
)

(Define "SC_Tank_Walker_Size_2" ; // BUZZ: <- Knights / Gorkanauts / Wraithknight
	{props "SC_plataform_prop_tank_walkers_size2"}
	{props "heavy" "vision_lev06" "detect_tank_heavy"}
	{props "SC_plataform_prop_vehicle_behemoth" "SC_plataform_prop_vehicle_behemoth_s2"}

	{Obstacle 	{Circle2 {radius %RadiusCollider}}}	
	{PatherID "SC_Pather_V_Walker_S3"}
	{obstacleID "SC_Pather_V_Walker_S3"}
	{collider "tank.behemoth"}
	
	{targetClass "tank_heavy" "ap fg bullet"}
	{targetSelector "tank_heavy"}
)

(Define "SC_Tank_Walker_Size_3" ; // BUZZ: <- Small Titans / Stompa / Warhound 
	; not yet coded...
)

; ===============================================================
; // Armor & Volumes Defines
; ===============================================================

("body" repair(60))
("basic_armor" args 20)

("engine" repair(30))
("tracks" repair(30) thickness(30))	; // BUZZ: <- tracks == legs.

("gun" repair(30) thickness(30))
("gun1" repair(30) thickness(30))
("gun2" repair(30) thickness(30))
("gun3" repair(30) thickness(30))

{perks {blastwave_modifier 2.0}}	; was 4

(Define "SC_Walker_Limbs_Lower"
	("make_component" args "%n" "track%s")
	
	{volume "%n"
		{thickness %t}
		{able {Visible 0} {Obstacle 0} {nolook 1}}	;//	{Contact 0}
		{tags "SC_walker_limbs_lower"}
	}
)

(Define "SC_Walker_Limbs_Upper"
	("make_component" args "%n" "%component")
	
	{volume "%n"		
		{thickness %t}
		{able {Contact 0} {Visible 0} {Obstacle 0} {nolook 1}}
		{tags "SC_walker_limbs_upper"}
		{tags "SC_walker_limbs_upper_%side"}
	}
)

; ===============================================================
; // Chassis/Movement 
; ===============================================================

(define "mobility_walker"
	{Chassis "track"
		{Locomotion
			{Slow				(* 0.5 %speed)}   
			{Normal				(* %s_multiplier %speed)}
			{Fast				(* %s_multiplier %speed)}			
			{maxspeed			(* %s_multiplier %speed)}
			{maxSpeedAtMaxTurn	(* %s_multiplier %traverse)}
			
			{StartTime			%start_time}	
			{TurnTime			%turn_time}
			{TurnStart			0.25} 
			{TurnRadius			5}
			{TurnStop			1.0}
			{BrakeTime			0.2} 
			{StopTime			0.1}				
			
			{RearGears 0.05 (/ %speed_reverse %speed)}		;// Reverse max speed.
			{GearSwitchDelay 0.25}							;// Time to switch between forward and reverse.	
			
			{MaxSlope 	75}																		
			{FallSlope 	75}					
		}
		{FuelBag
			{volume %fuel}						;// Fuel capacity in Liters.
			{rate (* 10 (/ %fuel %range))};/	;// Fuel consumption rate. Based on off-road range of vehicle.
			{remain %fuel}						;// Amount of fuel in vehicle when spawned.
			{fuel "%type"}						;// Fuel type.
		}
	}
)

(define "mobility_walker_sprint"
	{Chassis "track"
		{Locomotion
			{Slow				(* 0.5 %speed)}   
			{Normal				(* %s_multiplier %speed)}
			{Fast				(* %s_multiplier %speed)}			
			{maxspeed			(* %s_multiplier %sprint_speed)}
			{maxSpeedAtMaxTurn	(* %s_multiplier (* 0.9 %sprint_speed))}
			
			{StartTime			%start_time}	
			{TurnTime			%turn_time}
			{TurnStart			0.25} 
			{TurnRadius			5.0}
			{TurnStop			1.0}
			{BrakeTime			(* 0.06 %sprint_speed)} 
			{StopTime			(* 0.025 %sprint_speed)}				
			
			{RearGears 0.05 (/ %speed_reverse %speed)}		;// Reverse max speed.
			{GearSwitchDelay 0.25}							;// Time to switch between forward and reverse.	
			
			{MaxSlope 	75}																		
			{FallSlope 	75}					
		}
		{FuelBag
			{volume %fuel}						;// Fuel capacity in Liters.
			{rate (* 10 (/ %fuel %range))};/	;// Fuel consumption rate. Based on off-road range of vehicle.
			{remain %fuel}						;// Amount of fuel in vehicle when spawned.
			{fuel "%type"}						;// Fuel type.
		}
	}
)

(define "mobility_walker_NB"
	{Chassis "track"
		{Locomotion
			{Slow				(* 0.5 %speed)}   
			
			{Normal				(* %s_multiplier %speed)}
			{Fast				(* %s_multiplier %speed)}			
			{maxspeed			(* %s_multiplier %speed)}
			
			{maxSpeedAtMaxTurn	(* %s_multiplier %traverse)}
			
			{StartTime			%start_time}	
			{TurnTime			%turn_time}
			{TurnStart			0.25} 
			{TurnRadius			5}
			{TurnStop			0.5}
			{BrakeTime			0.1} 
			{StopTime			0.1}				
			{GearSwitchDelay 0.1}							;// Time to switch between forward and reverse.	
			
			{MaxSlope 	75}																		
			{FallSlope 	75}					
		}
		{disableBackward}
		{FuelBag
			{volume %fuel}						;// Fuel capacity in Liters.
			{rate (* 10 (/ %fuel %range))};/	;// Fuel consumption rate. Based on off-road range of vehicle.
			{remain %fuel}						;// Amount of fuel in vehicle when spawned.
			{fuel "%type"}						;// Fuel type.
		}
	}
)