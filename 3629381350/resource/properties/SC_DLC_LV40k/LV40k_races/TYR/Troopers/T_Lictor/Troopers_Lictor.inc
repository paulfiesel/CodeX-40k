
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.6))

{props "LV40k_DLC_prop_troopers_Tyr_Lictor"}
{props "vehicle"}

("SC_Troopers_Size_2"
	RadiusCollider(21) v_perk(_stealth)
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_irregular) v_vision_around(human_peripheral_v2)
)	


;{placer
;	{place "Cloaker"
;		{linkbone 	"basis"}
;		{entity 	"smoke_volume_cylinder"}
;		{handlebone "basis"}
;		{obstacle disable}
;	}
;}

{Weaponry
	{place "melee"}
}

{Volume "body"		("SC_volume_unarmored")	("SC_volume_common_body")}
{Volume "head"		("SC_volume_unarmored")	("SC_volume_common_head")}
{Volume "foot1l"	("SC_volume_unarmored")	("SC_volume_common_limbs")}
{Volume "foot1r"	("SC_volume_unarmored")	("SC_volume_common_limbs")}
{Volume "chest"		("SC_volume_unarmored")	("SC_volume_common_body")}

(Define "SC_Troopers_Lictor_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"	("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"head"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1l"	("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1r"	("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"	("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"head"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1l"	("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1r"	("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
			{Normal	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Spot	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Fast	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
			{Bow	(* 27 %Speed %Speed_Modifier)	(* 27 %Speed %Speed_Modifier)	360}
		}
	}
)
