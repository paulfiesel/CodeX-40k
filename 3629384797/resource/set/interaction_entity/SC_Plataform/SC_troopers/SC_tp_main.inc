
;	<<<< ------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Fauna Troopers ===============] >>
;	<<<<-------------------------------------------------------------------------------->>>>			 

(Define "SC_Plataform_Troopers_Burn_Settings"
	{inflammation_time %t}
	{on spawn 	
		{link_sound "burn"	"fire/loops/%s"}
		
		{add_view	"healing_bio"	"SC_healing"	"fx_generic_head"	not_manual not_scenario}
		
		{add_view 	"%fx"		"burn_fire"	 "fx_fire"}	
		{add_view 	"%fx"		"burn_fire"	 "fx_fire1"}	
		{add_view 	"%fx"		"burn_fire"	 "fx_fire2"}	
		{add_view 	"%fx"		"burn_fire"	 "fx_fire3"}
		{add_view 	"%fx"		"burn_fire"	 "fx_fire4"}	
		{add_view 	"%fx"		"burn_fire"	 "fx_fire5"}	
	}
)

{"SC_plataform_prop_troopers_size1"	("SC_Plataform_Troopers_Burn_Settings" t(1.0) s(medium) fx(fire_dead))}
{"SC_plataform_prop_troopers_size2"	("SC_Plataform_Troopers_Burn_Settings" t(2.0) s(medium) fx(fire_dead))}
{"SC_plataform_prop_troopers_size3"	("SC_Plataform_Troopers_Burn_Settings" t(3.0) s(medium) fx(fire_dead))}

{"SC_plataform_prop_troopers_size4"	("SC_Plataform_Troopers_Burn_Settings" t(4.0) s(big) fx(fire_big))}
{"SC_plataform_prop_troopers_size5"	("SC_Plataform_Troopers_Burn_Settings" t(5.5) s(big) fx(fire_big))}
{"SC_plataform_prop_troopers_size6"	("SC_Plataform_Troopers_Burn_Settings" t(7.0) s(big) fx(fire_big))}

{"SC_Plataform_prop_troopers_main";{}

	(include "SC_tp_animations/SC_tp_animations.inc")
	(include "SC_tp_animations/SC_tp_request.inc")
	
	(include "SC_tp_exp.inc")
		
	{on spawn	
		{physics_work 0}
		
		("SC_TP_EXP_Define_Spawn_Event")
		("SC_TP_Request_Define_Clear_All_Variables")

		{Call "SC_FSM_Call_Start_FSM"}
		
		{delay 0.1 {if dead	("SC_TP_Request_Define_Death_Event")}}	; // BUZZ: <- if unit is spawned/cloned dead.
		
		; // In editor when scene restarts, force stop burning.
		{if "burning" {set "burning" 0} {view pause "burn_fire"}}
	}
	
	{on "_burn"
		{kill_delay "burning_fx"}
		{delay 16.0 "burning_fx" {view pause "burn_fire"} {set "burning" 0} {play_sound "burn" 0}}
		{if not "burning"
			{set "burning" 1}
			{view start "burn_fire"}
			{play_sound "burn" 1}
			{if not dead ("SC_M_Talk_Define_V_death_scream")}
			{delay 1.0	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
			{delay 2.5	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
			{delay 5.0	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
			{delay 8.0	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
			{delay 12.0	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
			{delay 15.0	{Call "SC_Burn_Damage"} {fire radius 0.8 time 2 heating 1 follow}}
		}
	}
	
	{on "Die" sync
		("SC_TP_Request_Define_Death_Event")
	}
}

