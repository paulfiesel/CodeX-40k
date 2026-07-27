
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.6))

{props "LV40k_DLC_prop_troopers_Tyr_Genestealer"}
{props "vehicle"}

("SC_Troopers_Size_2" 
	RadiusCollider(18) v_perk(_stealth)
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_elite) v_vision_around(human_peripheral_v2)
)	

{Weaponry
	{place "melee"}
}

{Volume "body"		("SC_volume_unarmored")("SC_volume_common_body")}
{Volume "head"		("SC_volume_unarmored")("SC_volume_common_head")}
{Volume "foot1l"	("SC_volume_unarmored")("SC_volume_common_limbs")}
{Volume "foot1r"	("SC_volume_unarmored")("SC_volume_common_limbs")}

(Define "SC_Troopers_Genestealer_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"		("SC_damage_vol_body_light" multiplier(0.8))}
			{"head"		("SC_damage_vol_head_light" multiplier(1.0))}
			{"foot1l"	("SC_damage_vol_limbs_light" multiplier(0.7))}
			{"foot1r"	("SC_damage_vol_limbs_light" multiplier(0.7))}
		}	
		{DamageTPC	
			{"body"		("SC_damage_vol_body_light" multiplier(0.8))}
			{"head"		("SC_damage_vol_head_light" multiplier(1.0))}
			{"foot1l"	("SC_damage_vol_limbs_light" multiplier(0.7))}
			{"foot1r"	("SC_damage_vol_limbs_light" multiplier(0.7))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	180}
			{Normal	(* 24 %Speed %Speed_Modifier)	(* 24 %Speed %Speed_Modifier)	180}
			{Spot	(* 24 %Speed %Speed_Modifier)	(* 24 %Speed %Speed_Modifier)	180}
			{Fast	(* 37 %Speed %Speed_Modifier)	(* 37 %Speed %Speed_Modifier)	180}
			{Bow	(* 37 %Speed %Speed_Modifier)	(* 37 %Speed %Speed_Modifier)	180}
		}
	}
)
