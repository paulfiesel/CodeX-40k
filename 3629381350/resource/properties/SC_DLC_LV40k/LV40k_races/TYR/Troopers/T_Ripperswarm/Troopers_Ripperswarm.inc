
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.4))

{props "LV40k_DLC_prop_troopers_Tyr_Ripperswarm"}
{props "vehicle"}

("SC_Troopers_Size_0" 
	RadiusCollider(8) v_perk()
)

{Weaponry
	{place "melee"}
}

{Volume "body1"		("SC_volume_unarmored")	("SC_volume_common_body")}
{Volume "body2"		("SC_volume_unarmored")	("SC_volume_common_body")}
{Volume "body3"		("SC_volume_unarmored")	("SC_volume_common_body")}

(Define "SC_Troopers_Ripperswarm_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body1"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_light" multiplier(1.0))}
		}	
		{DamageTPC
			{"body1"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_light" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	360}
			{Normal	(* 20 %Speed %Speed_Modifier)	(* 20 %Speed %Speed_Modifier)	360}
			{Spot	(* 20 %Speed %Speed_Modifier)	(* 20 %Speed %Speed_Modifier)	360}
			{Fast	(* 20 %Speed %Speed_Modifier)	(* 20 %Speed %Speed_Modifier)	360}
			{Bow	(* 20 %Speed %Speed_Modifier)	(* 20 %Speed %Speed_Modifier)	360}
		}
	}
)
