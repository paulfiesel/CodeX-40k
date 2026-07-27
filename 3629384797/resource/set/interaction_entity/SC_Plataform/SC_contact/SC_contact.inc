
;	<<<< --------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Contacts Script ===============] >>
;	<<<<---------------------------------------------------------------------------------->>>>			 

{"SC_prop_contactor"
	{on "SC_ctc_call_activate" 
		{volumes enable contact}
		
		{gravity 1}
		{Physics_work 1}
		{impulse up 0.0001}	

		(mod "mp"
			{delay 0.5
				{gravity 0}
				{Physics_work 0}
			}
		)
		(mod not "mp"
			{delay 0.05 
				{gravity 0}
				{Physics_work 0}
			}
		)
		{delay 1.0	{delete}}
	}
}

{"SC_prop_contactor_melee"
	{on spawn sync
		{call "SC_ctc_call_activate"}
		{delay 0.5	{delete}}
	}
}

{"SC_prop_contactor_infantry" 	{on spawn sync {call "SC_ctc_call_activate"}}}
{"SC_prop_contactor_vehicle" 	{on spawn sync {call "SC_ctc_call_activate"}}}
{"SC_prop_contactor_obstacle" 	{on spawn sync {call "SC_ctc_call_activate"}}}

(Include "SC_slicer.inc")
