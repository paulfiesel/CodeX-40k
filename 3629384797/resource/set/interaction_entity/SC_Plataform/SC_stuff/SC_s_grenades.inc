
;	<<<<---------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Stuff Grenades Scripts ===============] >>
;	<<<<---------------------------------------------------------------------------------------->>>>			 

{"SC_plataform_prop_grenade"
	{on "onThrowActivate" overload
		{volumes "body" enable contact}
		{Delay 1.5 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 2.5 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 3.0 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 4.0 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 5.0 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 6.0 {spawn "SC_aura_grenade" "handle" x}}
		{Delay 7.5 {spawn "SC_aura_grenade" "handle" x}}
	}
}