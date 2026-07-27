; strafe
{State "rush"
	{to "walk"}
	{from "walk"}
	{tag "rush"}
	{tag "up"}
	{tag "can-aim"}
	{tag "can-aim-bolt"}
}

; grenade alert
{State "stand_to_grenade_lie"
	{condition "grenade-lie"}
	{from "stand"}
	{to "lie_grenade"}
	{tag "up"}
}
{State "lie_grenade"
	{to "lie"}
	{tag "down"}
	{tag "grenade-lie"}
}
{State "stand_to_grenade_cover"
	{condition "grenade-cover"}
	{from "stand"}
	{to "squat_grenade"}
	{tag "up"}
}
{State "squat_grenade"
	{to "squat"}
	{tag "squat"}
	{tag "grenade-cover"}
}

; healing
(define "do_healing"
	{State "healing_%0_begin"
		{from "squat"}
		{to "healing_%0"}
		{tag "squat"}
		{tag "healing"}
	}
	{State "healing_%0"
		{to "healing_%0_end"}
		{tag "heal-%0"}
		{tag "squat"}
		{tag "healing"}
	}
	{State "healing_%0_end"
		{to "squat"}
		{tag "squat"}
		{tag "healing"}
	}
)
("do_healing" args head)
("do_healing" args leg)
("do_healing" args hand)


(define "do_healing_lie"
	{State "lie_healing_%0_begin"
		{from "lie"}
		{to "lie_healing_%0"}
		{tag "down"}
		{tag "healing"}
	}
	{State "lie_healing_%0"
		{to "lie_healing_%0_end"}
		{tag "heal-%0"}
		{tag "down"}
		{tag "healing"}
	}
	{State "lie_healing_%0_end"
		{to "lie"}
		{tag "down"}
		{tag "healing"}
	}
)
("do_healing_lie" args head)
("do_healing_lie" args leg)
("do_healing_lie" args hand)


{state "squat_stop_heal"
	{fromTagged "healing"}
	{condition "stop-heal-fast"}
	{to "squat"}
	{tag "squat"}
}

{state "lie_stop_heal"
	{fromTagged "healing"}
	{condition "stop-heal-fast"}
	{to "lie"}
	{tag "down"}
}