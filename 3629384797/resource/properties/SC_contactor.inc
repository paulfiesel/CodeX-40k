; THIS IS FULLY EXPERIMENTAL

actor
;	{props "SC_M_Trigger_Overlap_Prop"}
;	{collider "SC_Trigger_Volume"}
	
	{simulatorId "grenade"}
	{simulation {able 1} {state 1}}
	
	{Volume "body"		{Able clear}}
	
	(Define "Actor_Trigger"
		{able {select 0}}
		{autooperatable 0}	
		{placer{crew 0}}

		{brain "vehicle"
			{control 0}
			{state "vehicle"}
		}
	)



