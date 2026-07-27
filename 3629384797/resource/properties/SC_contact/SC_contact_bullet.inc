
{props "SC_prop_contactor_bullet" } 

{simulation {able 1} {state 1}}
{constrain none}
{obstacleID "nothing"}
{collider "particle.fire"}
{mass 1}
{lodclass "decor_medium"}

{volume "body"
	{able clear {contact 1} {contact_ground 1}}
	{material "dummy"}
}
{body
	{proper body}
	{permit body}
}
{extender "stuff"
	{item "dummy"}
}