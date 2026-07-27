
;=============================================================================================================================
; DEFINES 
;=============================================================================================================================

; [...]

;=============================================================================================================================
; FSM OVERLOAD
;=============================================================================================================================

(define "SC_FSM_DEATH_Define_Enter"
	{Call "SC_WK_Request_Call_Fix_Chassis"}

;//	{volumes disable contact overlap blast} 
	
	{Kill_delay "sc_fsm_melee_delay_animation"}	; // BUZZ: <- In the previous FSM state was Melee, prevents melee volumes from spawning;
	
	("SC_M_Talk_Define_Stop_All_Talk_Sounds")
	("SC_M_Talk_Define_V_death_scream")
)

(define "SC_FSM_DEATH_Define_Event"
	
	; // BUZZ: death event: 1. crew dies / 2. vehicle explodes / 3. crew knocked down (does not apply to "behemoth" classed vehicles);

	{if tagged "exploded"
		; [...]
		
	else prop "SC_plataform_prop_vehicle_auto"
		{If tagged "SC_WK_Request_Tag_Is_Knocked" 			; // BUZZ: <- editor scene restarts.
			{Call_Synced "SC_FSM_DEATH_Call_Play_Animations"}
			{Damage_Report "basis"	"<f(impact)><c(YELLOW)>PILOT INCAPACITATED!"}
			
		else tagged "SC_WK_Request_Tag_Pilot_Dead"			; // BUZZ: <- editor scene restarts.
			{Call_Synced "SC_FSM_DEATH_Call_Play_Animations"}
			{Damage_Report "basis"	"<f(impact)><c(RED)>PILOT KILLED!"}
			
		else
			{if prop "SC_prop_walker_tank_has_pilot_knockable"
				{if rand 0.33	{Call_synced "SC_FSM_DEATH_Rand_Death"}
				else rand 0.33	{Call_synced "SC_FSM_DEATH_Rand_Knocked"}
				else			{Call_synced "SC_FSM_DEATH_Rand_Pilot_Dies"}}
			else prop "SC_prop_walker_tank_has_pilot"
				{if rand 0.5	{Call_synced "SC_FSM_DEATH_Rand_Death"}
				else			{Call_synced "SC_FSM_DEATH_Rand_Pilot_Dies"}}
			else
				{Call "SC_FSM_DEATH_Rand_Death"}
			}
		}
	else
		{Call "SC_FSM_DEATH_Rand_Death"}
	}
)

(define "SC_FSM_DEATH_Define_Exit"
	{Ani_stop "death1"}
	{Ani_stop "death2"}
	{Ani_stop "death3"}
	{Ani_stop "knocked"}
)

;=============================================================================================================================
; TRANSITIONS/CALLS
;=============================================================================================================================

{On "SC_FSM_DEATH_Rand_Death"
	{Call_Synced "SC_FSM_DEATH_Call_Play_Animations"}
	{view start "SC_WK_fx_death_animation"}
}

{On "SC_FSM_DEATH_Rand_Pilot_Dies"
	{tags add "SC_WK_Request_Tag_Pilot_Dead"}
	{Call_Synced "SC_FSM_DEATH_Call_Play_Animations"}
	{Damage_Report "basis"	"<f(impact)><c(RED)>PILOT KILLED!"}
}

{On "SC_FSM_DEATH_Rand_Knocked"
	{tags add "SC_WK_Request_Tag_Is_Knocked"}
	{Call_Synced "SC_FSM_DEATH_Call_Play_Animations"}
	{Damage_Report "basis"	"<f(impact)><c(YELLOW)>PILOT INCAPACITATED!"}
}

(Define "SC_FSM_DEATH_Define_Death_Animation_End"
	{Call "SC_FSM_DEATH_Call_Post_Death_Animation"}	
	{view stop "SC_WK_fx_death_animation"}
	
	{If tagged "SC_WK_Request_Tag_Is_Knocked" 
		{ani_play "knocked" loop}
	else tagged "SC_WK_Request_Tag_Pilot_Dead"
		{able repair 0}
	}
)

{on animation_end "death"	("SC_FSM_DEATH_Define_Death_Animation_End")}
{on animation_end "death1"	("SC_FSM_DEATH_Define_Death_Animation_End")}
{on animation_end "death2"	("SC_FSM_DEATH_Define_Death_Animation_End")}
{on animation_end "death3"	("SC_FSM_DEATH_Define_Death_Animation_End")}
