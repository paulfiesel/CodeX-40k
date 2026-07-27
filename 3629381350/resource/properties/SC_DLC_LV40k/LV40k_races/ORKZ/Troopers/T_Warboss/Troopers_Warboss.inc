
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.7))

{props "LV40k_DLC_prop_troopers_Ork_Warboss"}
{props "vehicle"}

("SC_Troopers_Size_3" 
	RadiusCollider(25) v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_keeneyed) v_vision_around(human_peripheral_v2)
)

{Weaponry
	{place "melee"
		{LinkBone "left_hand_bone"}
	}
	{place "weapon1"
		{RestoreIKAfterAim}	
		{AimBone "aim_ref"}
		{foresight "foresight3"}
		{shooter "barrel"}
		{barrels 3}
		{Rotate}
		("abm_mgun")
	}
	{place "weapon2"
		{foresight "foresight_rokkit_test"}
		{AimBone "aim_ref"}
	;//	{ai_in_manual}		
		("abm_dymamic" zeroing(2.5) dispersion(0.80))
	}
}

{Volume "head"  			("SC_volume_armored_medium_t1")	("SC_volume_common_head")}
{Volume "body"				("SC_volume_armored_heavy_t1")	("SC_volume_common_body")}

{Volume "shield_hand1l"		("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs_hand1l")}	
{Volume "shield_hand1r"		("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs_hand1r")}	

{Volume "hand1l"  			("SC_volume_armored_medium_t1") ("SC_volume_common_limbs_hand1l")} 
{Volume "hand1r"  			("SC_volume_armored_medium_t1") ("SC_volume_common_limbs_hand1r")}

{Volume "hand2l"  			("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs_hand1l")}
{Volume "hand2r"  			("SC_volume_armored_heavy_t3")	("SC_volume_common_limbs_hand1r")}	; <- Ork warboss weapon volume

{Volume "foot1r"  			("SC_volume_armored_medium_t1") ("SC_volume_common_limbs_foot1r")}
{Volume "foot2r"  			("SC_volume_armored_heavy_t1") 	("SC_volume_common_limbs_foot2r")}
{Volume "foot1l"  			("SC_volume_armored_medium_t1") ("SC_volume_common_limbs_foot1l")}
{Volume "foot2l"  			("SC_volume_armored_heavy_t1") 	("SC_volume_common_limbs_foot2l")}

(Define "SC_Troopers_Warboss_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"				("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"head"				("SC_damage_vol_head_medium" multiplier(1.0))}
			
			{"shield_hand1r"	("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"shield_hand1l"	("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"hand1l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"hand2l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand2r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			
			{"foot1r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"				("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"head"				("SC_damage_vol_head_heavy" multiplier(1.0))}
			
			{"shield_hand1r"	("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"shield_hand1l"	("SC_damage_vol_body_heavy" multiplier(1.0))}
			
			{"hand1l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand1r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}	
			
			{"hand2l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"hand2r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			
			{"foot1r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2l"			("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	360}
			{Normal	(* 25 %Speed %Speed_Modifier)	(* 25 %Speed %Speed_Modifier)	360}
			{Spot	(* 25 %Speed %Speed_Modifier)	(* 25 %Speed %Speed_Modifier)	360}
			{Fast	(* 25 %Speed %Speed_Modifier)	(* 25 %Speed %Speed_Modifier)	360}
			{Bow	(* 25 %Speed %Speed_Modifier)	(* 25 %Speed %Speed_Modifier)	360}
		}
	}
)
