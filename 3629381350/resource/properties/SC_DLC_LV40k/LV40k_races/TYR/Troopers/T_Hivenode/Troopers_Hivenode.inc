
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.4))

{props "LV40k_DLC_prop_troopers_Tyr_Hivenode"}
{props "vehicle"}

("SC_Troopers_Size_1" 
	RadiusCollider(20) v_perk()
	v_bone_eyes(visor_around) v_bone_around(visor_around)
	v_vision_eyes(human_irregular) v_vision_around(human_peripheral)
)	

{Weaponry
	{place "weapon"
		{weapon "Tyr_Sporemine_Mortar"}
		{AimBone "aim_ref"}
		("abm_dymamic_mortar" dispersion(1.0) zeroing(5.0))
	}
}

{Volume "body" ("SC_volume_unarmored")}

(Define "SC_Troopers_Hivenode_Breed"
	{tag "%Tag"}
	
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"	("SC_damage_vol_body_light" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"	("SC_damage_vol_body_light" multiplier(1.0))}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	0	0	0}
			{Normal	0	0	0}
			{Spot	0	0	0}
			{Fast	0	0	0}
			{Bow	0	0	0}
		}
	}
)
