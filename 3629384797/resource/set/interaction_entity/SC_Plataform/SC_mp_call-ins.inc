
;	<<<< ------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Call-in Spawner ===============] >>
;	<<<<-------------------------------------------------------------------------------->>>>			 

{"sc_plataform_prop_mp_callin_spawn_troops"}	; // <- BUZZ: just to register

{"sc_plataform_prop_mp_callin"
	{on spawn
		{Delay 0.1 {view start ally "marker_idle_ally_fx"}}		
		
		; // BUZZ: Stupid BOT AI in multiplayer will still try to emit its troops at least once, so consider that they may lose one or two soldiers before dropping in...
		(mod "mp"
			{able emit_passangers_on_enemy 0}
			{able crew 0}
			{volumes disable touch select}
		)
		(mod "gametype:campaign_capture_the_flag"	
			{able emit_passangers_on_enemy 0}
			{able crew 0}
			{volumes disable touch select}	
		)
		{delay 0 {volumes disable contact}}
		
		; // BUZZ: bot trigger.
		{if not user_control
			{tags add "_sc_call_in_bot_spawn_cooldown_timer"}
			{Delay 10.0 {tags remove "_sc_call_in_bot_spawn_cooldown_timer"}}
		}
	}
	
	; <<<<	===================	CLL: Check Collisions	===================	>>>>	

	{on overlap begin sync
		{If prop "sc_plataform_prop_mp_callin_spawn_troops"	
			{if not terrain_fx "water"	;{} // BUZZ: <- Prevents spawners from spawning in deep waters.
				{if effector "human"
			;	else effector "SC_plataform_prop_troopers_main"
			;	else effector "stuff"
				else effector "bush"
				else effector "cannon"
				else effector "car"
				else effector "fence"
				else effector "sandbag"
			;	else effector "tank"
			;	else effector "construction"
			;	else effector "tree"
				else
					{Call_Synced "SC_MP_CLL_Call_Failed"}
				}
			}
		}
	}
	{On "SC_MP_CLL_Call_Failed" sync
		{Delay 0 	{kill_delay "SC_MP_CLL_Delay_Activate"}}
		{Delay 0.5	{kill_delay "SC_MP_CLL_Delay_Activate"}}
		{Delay 1.0	{kill_delay "SC_MP_CLL_Delay_Activate"}}

		{kill_delay "SC_MP_CLL_Delay_Restore_Failsafe"}
		{Delay 2.5 "SC_MP_CLL_Delay_Restore_Failsafe"
			{auto_operatable 1}
			{weapon_work "AI_Activator" 1} {Chassis_Work 1} {Able select 1}
			{Damage_Report "basis"	"<f(impact)><c(RED)>CANNOT USE THIS HERE!"}
		}
	}
	
	; <<<<	===================	CLL: Activation	===================	>>>>	

	{on "SC_MP_CLL_Call_Activate" sync
		{if not tagged "SC_MP_CLL_Tag_Unit_Activated"
			{reset_manual_control}
			{Drop_Orders}
			{Able select 0}
			{auto_operatable 0} 
			
			; // BUZZ: Overload calls must be synced, otherwise they won't trigger in MP.
			{If prop "sc_plataform_prop_mp_callin_spawn_troops"	
				{delay 0
					{Gravity 0.01}			
					{physics_work 1} 
					{Volumes enable overlap}
					{chassis_work 0}
					{impulse up 0.1}
					{delay 0.1
						{Gravity 0} 
						{physics_work 0} 
						{Volumes disable overlap}
				
						; // BUZZ: SUCCESS, NO OBSTRUCTIONS DETECT:
						{delay 1.5 "SC_MP_CLL_Delay_Activate"
							{Call_Synced "SC_MP_CLL_Call_Activated_Use"} 
							
							{view start ally "marker_active_ally_fx"}
							{view start enemy "marker_active_enemy_fx"}
						
							{kill_delay "SC_MP_CLL_Delay_Restore_Failsafe"}	; <- EXP
							{tags add "SC_MP_CLL_Tag_Unit_Activated"}
							{play_sound "sfx"}	
							
							{player -1}		
						}
					}
				}
			}
		}
	}
;	{on "SC_MP_CLL_Call_Activated_Use"}	; <- use overload sync
}