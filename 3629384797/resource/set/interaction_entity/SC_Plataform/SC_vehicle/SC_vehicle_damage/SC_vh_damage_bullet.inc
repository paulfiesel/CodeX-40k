
; <<<<	=================== SC VH Bullet Hit: Spawn ===================	>>>>

(Define "SC_VH_Bullet_Hit_Define_Spawn"
	; [...]
	
	{tags remove "lifta_drop_attack"}
	{tags remove "lifted"}
	{tags remove "sc_fx_ork_lifta_drop"}
	{tags remove "lifting"}
)

; <<<<	=================== SC VH Bullet Hit: Effectors ===================	>>>>

(Define "SC_VH_Bullet_Hit_Define_Get"
	{if stuff "sc_fx_ork_lifta_drop"		; {}
	
		{bullet_detonate}
		
		; // BUZZ: time checker
		{tags add "lifta_drop_attack"}
		
		{kill_delay "lifta_drop_attack"}
		{delay 1.0 "lifta_drop_attack"
			{tags remove "lifta_drop_attack"}
			
			; // BUZZ: cancels when stop
			{kill_delay "time_to_destroy_Delay"}
			{kill_delay "time_to_lift_Delay"}
			{tags remove "lifted"}
			{tags remove "sc_fx_ork_lifta_drop"}
			{if not prop "SC_prop_walker_tank" {gravity 1} {physics_work 0}}
		}
		
		(Define "lifta_drop_effects"
			{if tagged "lifted" 
				{if not prop "SC_prop_walker_tank"
					{if not tagged "lifting"
						{tags add "lifting"}
						{delay 0.01 
							{impulse up (* %force 2)}
							{tags remove "lifting"}
						}
					}
				}
			}
			{if not tagged "sc_fx_ork_lifta_drop"
				{tags add "sc_fx_ork_lifta_drop"}
				
				{delay %time_to_lift "time_to_lift_Delay"
					{if tagged "lifta_drop_attack"
						{if not prop "SC_prop_walker_tank" {physics_work 1} {gravity -1}}	
						{tags add "lifted"}	

						{delay %time_to_destroy "time_to_destroy_Delay"
							{if tagged "lifta_drop_attack"
								{if not tagged "exploded" {components "body" destroy}}
							}
						}
					}
				}
			}
		)
		{if prop "SC_plataform_prop_vehicle_behemoth"	("lifta_drop_effects" time_to_lift(5.0) time_to_destroy(3.0) force(1.0))
		else prop "heavy"								("lifta_drop_effects" time_to_lift(2.8) time_to_destroy(1.75) force(1.0))
		else prop "medium" 								("lifta_drop_effects" time_to_lift(2.4) time_to_destroy(1.5) force(0.75))
		else prop "light"								("lifta_drop_effects" time_to_lift(2.0) time_to_destroy(1.25) force(0.5))
		else prop "armored_car"							("lifta_drop_effects" time_to_lift(1.5) time_to_destroy(0.5) force(0.5))
		else prop "airborne"							("lifta_drop_effects" time_to_lift(1.0) time_to_destroy(0.25) force(0.5))
		else prop "car"									("lifta_drop_effects" time_to_lift(0.5) time_to_destroy(0.1) force(0.5))
		else											("lifta_drop_effects" time_to_lift(0.5) time_to_destroy(0.1) force(0.25))
		}
	}
)
