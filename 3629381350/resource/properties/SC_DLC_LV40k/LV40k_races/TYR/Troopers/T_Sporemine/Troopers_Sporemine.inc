
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.4))

{props "LV40k_DLC_prop_troopers_Tyr_Sporemine"}
{props "vehicle"}

("SC_Troopers_Size_0" 
	RadiusCollider(8) v_perk()
)

{TargetClass "SC_Target_Infantry_Suicide"}	; // <- Overwrite, Makes enemy AI ignore melee.
{targetSelector "SC_troopers_ap"}			; // <- Overwrite, AI prioritize vehicles.

{Weaponry
	{place "melee"}
}

{Volume "body"		("SC_volume_unarmored")	("SC_volume_common_body") {able {blast 0}}}

(Define "SC_Troopers_Sporemine_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"		("SC_damage_vol_body_unarmored" multiplier(1.0))}
		}	
		{DamageTPC
			{"body"		("SC_damage_vol_body_unarmored" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	360}
			{Normal	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
			{Spot	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
			{Fast	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
			{Bow	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
		}
	}
)
