
;	<<<< -------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Infantry Generic: Shared Damage System ===============] >>
;	<<<<--------------------------------------------------------------------------->>>>			 

(include "SC_inf_damage/SC_inf_damage_defines.inc")
(Include "SC_inf_damage/SC_inf_damage_contact.inc")
(Include "SC_inf_damage/SC_inf_damage_blast_hit.inc")
(Include "SC_inf_damage/SC_inf_damage_bullet_hit.inc")

(Define "SC_INF_Damage_Define_Spawn_Event"		
	("SC_INF_Bullet_Hit_Define_Spawn_Event")
	("SC_INF_Contact_Define_Spawn_Event")
)

(Define "SC_INF_Damage_Define_Contact"		
	("SC_INF_Contact_Define_Contact")
)


; <<<<	===================	SC Infantry Generic: [Other/Misc]	===================	>>>>

; // BUZZ: FROM VANILLA HUMAN

{on "hit-light"
;	{if not dead
;		{spawn "blood_small"}
;	}
}

{on "hit-heavy"
;	{spawn "blood_medium"}
}

{on "hit"
	{call "hit-scream"}
}

{on "damage"
	{call "hit"}
}

{on "explosion"
	{spawn "blood_medium"}
	{call "die"}
}

{on "crush"
	{spawn "blood_medium"}
	{play_sound "crush"}
	{call "unhealable"}
}

{on "delete"
	{if not dead
		{stat_notify die}	
	}
	{delete}
}


{on "die_throw_high"
	{if not prop "human"	{Call "die"}}
}

{on "throw-off-and-die"
	{if not prop "human"	{Call "die"}}
}
