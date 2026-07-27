
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.65))

{props "LV40k_DLC_prop_troopers_Ork_Meganobs"}
{props "vehicle"}

("SC_Troopers_Size_3"
	RadiusCollider(26) v_bone_eyes(visor_eyes) v_bone(visor_around) v_perk()	
	v_vision_eyes(human_elite) v_vision_around(human_peripheral_v2)
)	

{Weaponry
	{place "melee"
	}
	{place "weapon"
		{RestoreIKAfterAim}	
		{foresight "foresight3"}
		{AimBone "aim_ref"}
		("abm_mgun")
	}
	{place "weapon1"	
		{foresight "foresight6"}
		("abm_dymamic" zeroing(2.5) dispersion(0.80))
	}
}

{Volume "body1"		("SC_volume_armored_heavy_t3") ("SC_volume_common_body")}
{Volume "body2"		("SC_volume_armored_heavy_t3") ("SC_volume_armored_heavy_t3")}	; <- heavy plate on chest
{Volume "body3"		("SC_volume_armored_heavy_t3") ("SC_volume_common_body")}
{Volume "body4"		("SC_volume_armored_heavy_t3") ("SC_volume_common_body")}

{Volume "hand1l"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_hand1l")} ; <- arms are medium due to exposed bits
{Volume "hand1r"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_hand1r")}	; <- arms are medium due to exposed bits

{Volume "foot1r"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_foot1r")}
{Volume "foot2r"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_foot2r")}
{Volume "foot1l"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_foot1l")}
{Volume "foot2l"  	("SC_volume_armored_heavy_t1") ("SC_volume_common_limbs_foot2l")}

{Volume "head1"  	("SC_volume_armored_heavy_t1")	("SC_volume_common_head")}
{Volume "head2"  	("SC_volume_armored_shield_no_damage_t1")}	; <- helmet protection

(Define "SC_Troopers_Meganobs_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body1"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body4"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"head1"		("SC_damage_vol_head_medium" multiplier(1.0))}
			{"head2"		0}
			
			{"hand1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body1"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body4"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"head1"		("SC_damage_vol_head_medium" multiplier(1.0))}
			{"head2"		0}
			
			{"hand1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	360}
			{Normal	(* 14 %Speed %Speed_Modifier)	(* 14 %Speed %Speed_Modifier)	360}
			{Spot	(* 14 %Speed %Speed_Modifier)	(* 14 %Speed %Speed_Modifier)	360}
			{Fast	(* 14 %Speed %Speed_Modifier)	(* 14 %Speed %Speed_Modifier)	360}
			{Bow	(* 14 %Speed %Speed_Modifier)	(* 14 %Speed %Speed_Modifier)	360}
		}
	}
)
