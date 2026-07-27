
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.29))

{props "LV40k_DLC_prop_troopers_Ork_Squig"}
{props "vehicle"}

("SC_Troopers_Size_0" 
	RadiusCollider(8) v_perk()
)

{TargetClass "SC_Target_Infantry_Suicide"}	; // <- Overwrite, Makes enemy AI ignore melee.
{targetSelector "SC_troopers_ap"}			; // <- Overwrite, AI prioritize vehicles.

{Weaponry
	{place "melee"}
}

{Volume "body"		("SC_volume_unarmored")}

(Define "SC_Troopers_Squigs_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"		("SC_damage_vol_body_light" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"		("SC_damage_vol_body_light" multiplier(1.0))}
		}
		{DamageBlast	2.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 40 %Speed %Speed_Modifier)	(* 40 %Speed %Speed_Modifier)	360}
			{Normal	(* 45 %Speed %Speed_Modifier)	(* 45 %Speed %Speed_Modifier)	360}
			{Spot	(* 45 %Speed %Speed_Modifier)	(* 45 %Speed %Speed_Modifier)	360}
			{Fast	(* 45 %Speed %Speed_Modifier)	(* 45 %Speed %Speed_Modifier)	360}
			{Bow	(* 45 %Speed %Speed_Modifier)	(* 45 %Speed %Speed_Modifier)	360}
		}
	}
)
