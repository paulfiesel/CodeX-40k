
{props "SC_plataform_prop_grav_vehicle"}

(define "mobility_grav_vehicle"
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
			{BrakeTime			(* 0.6 %stop_time)}	
			{StopTime			%stop_time}					
			
			{RearGears 0.05 (/ %speed_reverse %speed)}		;// Reverse max speed.
			{GearSwitchDelay 0.5}							;// Time to switch between forward and reverse.	
			
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
