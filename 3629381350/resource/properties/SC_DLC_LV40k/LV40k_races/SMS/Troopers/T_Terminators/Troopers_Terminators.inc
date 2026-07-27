
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.625))

{props "LV40k_DLC_prop_troopers_SM_Terminators"}
{props "vehicle"}

("SC_Troopers_Size_3" 
	RadiusCollider(24) v_bone_eyes(visor_eyes) v_bone_around(visor_around) v_perk()
	v_vision_eyes(human_elite) v_vision_around(human_peripheral_v2)
)

{Weaponry
	{place "melee"
	}
	{place "weapon"
		{RestoreIKAfterAim}	
		{LinkBone "attach_assault_cannon"}
		{AimBone "aim_ref"}
	}
	{place "weapon1"
		{RestoreIKAfterAim}	
		{LinkBone "attach_heavy_flamer"}
		{AimBone "aim_ref"}
		{Rotate}
	}
	{place "weapon2"
		{RestoreIKAfterAim}	
		{LinkBone "Attach_Storm_Bolter"}
		{AimBone "aim_ref"}
		{Rotate}
		("abm_mgun")
	}
	{place "weapon3"	;}
		{foresight "foresight6"}
		{AimBone "aim_ref_missiles"}
		{Barrels 12}
		{Shooter "Barrel_M"}
		{Rotate}
		("abm_dymamic" zeroing(2.5) dispersion(0.80))
	}
}

{Volume "body"		("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}
{Volume "chest"		("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}

{Volume "hand1l"  	("SC_volume_armored_heavy_t4") ("SC_volume_common_limbs_hand1l")}	; <- shoulder pads
{Volume "hand1r"  	("SC_volume_armored_heavy_t4") ("SC_volume_common_limbs_hand1r")}	; <- shoulder pads
{Volume "hand2l"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_hand2l")} 
{Volume "hand2r"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_hand2r")}	

{Volume "foot1r"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_foot1r")}
{Volume "foot2r"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_foot2r")}
{Volume "foot1l"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_foot1l")}
{Volume "foot2l"  	("SC_volume_armored_heavy_t3") ("SC_volume_common_limbs_foot2l")}

{Volume "head"  	("SC_volume_armored_heavy_t1")	("SC_volume_common_head")}

{Volume "shield"  	("SC_volume_armored_shield_no_damage_t4")}

(Define "SC_Troopers_Terminators_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"head"			("SC_damage_vol_head_medium" multiplier(1.0))}
			
			{"hand1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			{"hand2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			
			{"shield" 0}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"head"			("SC_damage_vol_head_medium" multiplier(1.0))}
			
			{"hand1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			{"hand2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			
			{"shield" 0}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 8 %Speed %Speed_Modifier)	(* 8 %Speed %Speed_Modifier)	180}
			{Normal	(* 13 %Speed %Speed_Modifier)	(* 13 %Speed %Speed_Modifier)	180}
			{Spot	(* 13 %Speed %Speed_Modifier)	(* 13 %Speed %Speed_Modifier)	180}
			{Fast	(* 13 %Speed %Speed_Modifier)	(* 13 %Speed %Speed_Modifier)	180}
			{Bow	(* 13 %Speed %Speed_Modifier)	(* 13 %Speed %Speed_Modifier)	180}
		}
	}
)
