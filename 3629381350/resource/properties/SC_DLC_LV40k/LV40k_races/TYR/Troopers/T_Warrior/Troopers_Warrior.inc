
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.36))

{props "LV40k_DLC_prop_troopers_Tyr_Warrior"}
{props "vehicle"}

("SC_Troopers_Size_2"
	RadiusCollider(21) v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_elite) v_vision_around(human_peripheral)
)	

{Weaponry
	{place "melee"}
}

{Volume "tyr_wrr_foot1r"	("SC_volume_common_limbs")	("SC_volume_armored_light_t1")	{tags "LV40k_tyranid_armor"}}
{Volume "tyr_wrr_foot1l"	("SC_volume_common_limbs")	("SC_volume_armored_light_t1")	{tags "LV40k_tyranid_armor"}}
{Volume "tyr_wrr_body"		("SC_volume_common_head")	("SC_volume_armored_light_t2")	{tags "LV40k_tyranid_armor"}}
{Volume "tyr_wrr_head"		("SC_volume_common_body")}

(Define "SC_Troopers_Warriors_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"tyr_wrr_foot1r"	("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"tyr_wrr_foot1l"	("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"tyr_wrr_body"		("SC_damage_vol_body_medium" multiplier(1.0))}
			{"tyr_wrr_head"		("SC_damage_vol_head_light" multiplier(1.0))}
		}	
		{DamageTPC	
			{"tyr_wrr_foot1r"	("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"tyr_wrr_foot1l"	("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"tyr_wrr_body"		("SC_damage_vol_body_medium" multiplier(1.0))}
			{"tyr_wrr_head"		("SC_damage_vol_head_light" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
			{Normal	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Spot	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Fast	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Bow	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
		}
	}
)
