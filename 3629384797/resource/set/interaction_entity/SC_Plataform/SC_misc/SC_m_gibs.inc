
;	<<<< ------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Misc Organic/Metal Gore & Tear Parts  ===============] >>
;	<<<<-------------------------------------------------------------------------------------------------------->>>>			 

{"SC_prop_gore_bits"
	{on spawn
		{impulse up 1.2 0.5 dir 1.2 1 cx 2.2 1 cy 1 2 rnd_dir 2.4 no_position}
	}
	{on ground_hit
		{if not tagged "blood_spawn"
			{tags add "blood_spawn"}
			{if rand 0.25 {spawn "bloodsparks_mini"}}
		}
	}	
}

{"SC_prop_gibs_metal"
	{on spawn
		{gravity 1.5}
		
		{impulse up 6.0 2.5 dir 2 3 cx 2.5 1 cy 1 2 rnd_dir 3.2 no_position}
		
		{volumes disable contact} {Delay 2.0 {volumes enable contact}}
	}
	{on ground_hit
		{volumes enable contact}
	}	
}
