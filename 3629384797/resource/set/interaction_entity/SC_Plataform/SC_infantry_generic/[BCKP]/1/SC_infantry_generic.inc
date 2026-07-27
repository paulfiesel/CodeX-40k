
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Infantry Generic ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 


; // BUZZ: this file contains shared scripts between Faunas and Humans.

{"SC_prop_infantry_generic"
	(Include "SC_inf_damage_system.inc")
	
	{On "link_weapon"
		{If effector "mgun"	
			{Tags add "mgay"}
		}
	}
}