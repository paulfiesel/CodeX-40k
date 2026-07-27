
; ========================================================================================================================================================================== ;
; // Overload from [TANK-DAMAGE.inc]
; ========================================================================================================================================================================== ;

{on "crew_stunned" overload		
	{Call "SC_crew_stunned"}
}

{on "crew_revive" overload	
	{Call "SC_crew_revive"}
}

{on "driver_revive" overload
	{Call "SC_driver_revive"}
}

{on "SC_crew_revive"						;// enables vehicle movement and weapons after being temporarily disabled
	{if not tagged "deactivated"			;// checks to make sure the hull is not broken or destroyed

		{if work "melee" {weapon_work "melee" 1}}
		{if work "melee1" {weapon_work "melee1" 1}}
		{if work "melee2" {weapon_work "melee2" 1}}
		
		{if work "gun" {weapon_work "gun" 1}}
		{if work "gun1" {weapon_work "gun1" 1}}
		{if work "gun2" {weapon_work "gun2" 1}}
		{if work "gun3" {weapon_work "gun3" 1}}
		
		{weapon_work "mgun" 1}
		{weapon_work "mgun1" 1}
		{weapon_work "mgun2" 1}
		{weapon_work "mgun3" 1}
		{weapon_work "mgun4" 1}
		{weapon_work "mgun5" 1}

		{weapon_work "melee" 0}
		{weapon_work "melee1" 0}
		{weapon_work "melee2" 0}

		{if tagged "turret_jammed"
			{tags remove "turret_jammed"}
			{if tagged "turret_brake"				;// checks if the turret is broken
				;//do nothing
			else tagged "turret_stopped_by_body"	;// checks if the body is broken
				;//do nothing
			else
				{ik_enable "turret" 1}
			}
		}
	else
		{tags remove "stopped"}
		{tags remove "turret_jammed"}
	}
}

{on "SC_crew_stunned"					;// disables vehicle movement and weapons
	{if work "mover"
		{chassis_work 0}
		{tags add "stopped"}
	}
	{if work "turret"
		{ik_enable "turret" 0}
		{tags add "turret_jammed"}
	}
	{weapon_work "gun" 0}
	{weapon_work "gun1" 0}
	{weapon_work "gun2" 0}
	{weapon_work "gun3" 0}
	{weapon_work "mgun" 0}
	{weapon_work "mgun1" 0}
	{weapon_work "mgun2" 0}
	{weapon_work "mgun3" 0}
	{weapon_work "mgun4" 0}
	{weapon_work "mgun5" 0}
	
	{weapon_work "melee" 0}
	{weapon_work "melee1" 0}
	{weapon_work "melee2" 0}
	
	{call "shock_check"}
}

{on "SC_driver_revive" 
	{if tagged "stopped"
		{tags remove "stopped"}
		{if work "mover"
			{if not tagged "engine_brake"
				{if "engine_on"
					{if not tagged "wheel_destroyed"
						{chassis_work 1}
					}
				}
			}
		}
	}
}

{on "activate_vehicle" overload
	{call "update_moveable"}
	
	{if work "turret" {ik_enable "turret" 1}}
	
	{if work "gun" {weapon_work "gun" 1}}
	{if work "gun1" {weapon_work "gun1" 1}}
	{if work "gun2 "{weapon_work "gun2" 1}}
	{if work "gun3 "{weapon_work "gun3" 1}}
	{if work "gun4 "{weapon_work "gun4" 1}}
	
	{if work "melee" {weapon_work "melee" 1}}
	{if work "melee1" {weapon_work "melee1" 1}}
	{if work "melee2 "{weapon_work "melee2" 1}}
	
	{weapon_work "mgun" 1}
	{weapon_work "mgun1" 1}
	{weapon_work "mgun2" 1}
	{weapon_work "mgun3" 1}
	{weapon_work "mgun4" 1}
	{weapon_work "mgun5" 1}
	{weapon_work "mgun6" 1}
	
	{tags remove "deactivated"}
}

{on "deactivate_vehicle" overload
	{if "engine_on"
		{set "toggle_delay" 0}
		{call "engine_toggle"}
	}
	{chassis_work 0}
	
	{ik_enable "turret" 0}
	
	{weapon_work "gun" 0}
	{weapon_work "gun1" 0}
	{weapon_work "gun2" 0}
	{weapon_work "gun3" 0}
	{weapon_work "gun4" 0}
	
	{weapon_work "mgun" 0}
	{weapon_work "mgun1" 0}
	{weapon_work "mgun2" 0}
	{weapon_work "mgun3" 0}
	{weapon_work "mgun4" 0}
	{weapon_work "mgun5" 0}
	{weapon_work "mgun6" 0}
	
	{weapon_work "melee" 0}
	{weapon_work "melee1" 0}
	{weapon_work "melee2" 0}
	
	{tags add "deactivated"}
}
