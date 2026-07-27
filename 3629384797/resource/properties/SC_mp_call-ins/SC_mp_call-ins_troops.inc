
(include "/properties/SC_MP_call-ins/SC_MP_call-ins.inc")

{props "sc_plataform_prop_mp_callin_spawn_troops"}

{able "any_crew" "ally_crew"}

{able "-emit_on_attack"}
{able "-emit_passangers_on_enemy"}

{boarder
	{anm "hide"
		{forward	{begin	""} {end "sc_hide_test"}}
		{reverse 	{end	""}}
	}	
}

(define "SC_Callin_Crew"
	{place "%c"
		{group "crew"}
		{linkbone "%c"}
		{turnoff {targetable}}
		
	;	{attach squat_lie}
		{turnoff {shadow}}
		{obstacle disable}
	}	
)