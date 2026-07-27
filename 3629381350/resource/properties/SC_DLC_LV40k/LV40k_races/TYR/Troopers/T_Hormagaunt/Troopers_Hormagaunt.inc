
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.36))

{props "LV40k_DLC_prop_troopers_Tyr_Hormagaunt"}
{props "vehicle"}

("SC_Troopers_Size_1" 
	RadiusCollider(10) v_perk()
	v_bone_eyes(visor_eyes)
	v_vision_eyes(human_irregular)
)	

{Weaponry
	{place "melee"}
}

{Volume "body"		("SC_volume_unarmored")	("SC_volume_common_body")}
{Volume "head"		("SC_volume_unarmored")	("SC_volume_common_head")}

(Define "SC_Troopers_Hormagaunts_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"head"		("SC_damage_vol_head_light" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"head"		("SC_damage_vol_head_light" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
			{Normal	(* 28 %Speed %Speed_Modifier)	(* 28 %Speed %Speed_Modifier)	360}
			{Spot	(* 28 %Speed %Speed_Modifier)	(* 28 %Speed %Speed_Modifier)	360}
			{Fast	(* 28 %Speed %Speed_Modifier)	(* 28 %Speed %Speed_Modifier)	360}
			{Bow	(* 28 %Speed %Speed_Modifier)	(* 28 %Speed %Speed_Modifier)	360}
		}
	}
)
