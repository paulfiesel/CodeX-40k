
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.525))

{props "LV40k_DLC_prop_troopers_Ork_Nob"}
{props "vehicle"}

("SC_Troopers_Size_2" 
	RadiusCollider(22) v_bone_eyes(visor) v_bone_around(visor) v_perk()
	v_vision_eyes(human) v_vision_around(human_peripheral_v2)
)	

{Weaponry
	{place "melee"
	}
;//	{place "weapon"
;//		{LinkBone "right_hand_bone"}
;//		{AimBone "aim_ref"}
;//	}
}

{Volume "body"			("SC_volume_armored_light_t3") ("SC_volume_common_body")}
{Volume "head"  		("SC_volume_armored_light_t1") ("SC_volume_common_head")}
	
{Volume "foot1l"  		("SC_volume_armored_light_t2") ("SC_volume_common_limbs_foot1l")}
{Volume "foot2l"  		("SC_volume_armored_light_t2") ("SC_volume_common_limbs_foot2r")}
{Volume "foot1r"  		("SC_volume_armored_light_t2") ("SC_volume_common_limbs_foot1r")}
{Volume "foot2l"  		("SC_volume_armored_light_t2") ("SC_volume_common_limbs_foot2l")}

{Volume "Pauldron_L"  	("SC_volume_armored_shield_no_damage_t1")}
{Volume "Pauldron_R"  	("SC_volume_armored_shield_no_damage_t1")}

(Define "SC_Troopers_orknob_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
			{"body"			("SC_damage_vol_body_medium" multiplier(1.0))}
			
			{"foot1r"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			
			{"Pauldron_L" 0}
			{"Pauldron_R" 0}
		}	
		{DamageTPC	
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
			{"body"			("SC_damage_vol_body_medium" multiplier(1.0))}
			
			{"foot1r"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_medium" multiplier(1.0))}
			
			{"Pauldron_L" 0}
			{"Pauldron_R" 0}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 23 %Speed %Speed_Modifier)	(* 23 %Speed %Speed_Modifier)	360}
			{Normal	(* 29 %Speed %Speed_Modifier)	(* 29 %Speed %Speed_Modifier)	360}
			{Spot	(* 29 %Speed %Speed_Modifier)	(* 29 %Speed %Speed_Modifier)	360}
			{Fast	(* 29 %Speed %Speed_Modifier)	(* 29 %Speed %Speed_Modifier)	360}
			{Bow	(* 29 %Speed %Speed_Modifier)	(* 29 %Speed %Speed_Modifier)	360}
		}
	}
)
