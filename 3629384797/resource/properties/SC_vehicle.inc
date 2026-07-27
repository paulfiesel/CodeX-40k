
; // DLC

{props "vehicle"}
{props "SC_plataform_prop_vehicle"}
{props "SC_prop_Shields"}
{props "SC_prop_abilities_generic"}

(Define "SC_vehicle_auto_operatable"
	{props "SC_plataform_prop_vehicle_Auto"}
	{autooperatable 1}
	{placer	{crew 0}}
)

(Define "SC_cannon_auto_operatable"
	("SC_vehicle_auto_operatable")
	{props "SC_Plataform_prop_cannon_auto_operatable"}
)


(define "SC_mobility_grav_vehicle" 		
	{FSM "Animal"
		(include "/properties/SC_Troopers/FSM/request.inc")
		(include "/properties/SC_Troopers/FSM/stand.inc")
		(include "/properties/SC_Troopers/FSM/walk.inc")
		(include "/properties/SC_Troopers/FSM/squat.inc")
		(include "/properties/SC_Troopers/FSM/look.inc")
		(include "/properties/SC_Troopers/FSM/bazooka_stand.inc")
		(include "/properties/SC_Troopers/FSM/snipe.inc")
		(include "/properties/SC_Troopers/FSM/lie.inc")
		(include "/properties/SC_Troopers/FSM/swim.inc")
		(include "/properties/SC_Troopers/FSM/inventory.inc")
		(include "/properties/SC_Troopers/FSM/board.inc")
		(include "/properties/SC_Troopers/FSM/special.inc")
		(include "/properties/SC_Troopers/FSM/die.inc")
		(include "/properties/SC_Troopers/FSM/subset.inc")
		(include "/properties/SC_Troopers/FSM/switch.inc")
	}	
	{Chassis "foot"
		{Run
			{Slow	%slow %slow	360}
			{Normal	%normal %normal	360}
			{Fast	%fast %fast	360}
		}
	}
)