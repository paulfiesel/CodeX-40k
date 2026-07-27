
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.4))

{props "LV40k_DLC_prop_troopers_Ork_Boy"}
{props "vehicle"}

("SC_Troopers_Size_1"
	v_perk()
	RadiusCollider(16) v_bone_eyes(visor)
	v_vision_eyes(human_irregular)
)

{Weaponry
	{place "melee"
		{LinkBone "attach_melee"}
	}
	{place "weapon"
		{RestoreIKAfterAim}	
		{LinkBone "attach_ranged"}
		{AimBone "aim_ref"}
		("abm_mgun")
	}
}

{Volume "body"			("SC_volume_unarmored") ("SC_volume_common_body")}
{Volume "head"  		("SC_volume_unarmored") ("SC_volume_common_head")}
	
{Volume "foot1l"  		("SC_volume_unarmored") ("SC_volume_common_limbs_foot1l")}
{Volume "foot2l"  		("SC_volume_unarmored") ("SC_volume_common_limbs_foot2r")}
{Volume "foot1r"  		("SC_volume_unarmored") ("SC_volume_common_limbs_foot1r")}
{Volume "foot2l"  		("SC_volume_unarmored") ("SC_volume_common_limbs_foot2l")}

{Volume "Pauldron_L"	("SC_volume_armored_shield_no_damage_t1")}
{Volume "Pauldron_R"	("SC_volume_armored_shield_no_damage_t1")}

; ----------------------------------------------------------------------- ;

{Volume "body_ard"		("SC_volume_armored_medium_t1") ("SC_volume_common_body")}
{Volume "head_ard"  	("SC_volume_armored_medium_t1") ("SC_volume_common_head")}

{Volume "ardboy1"		("SC_volume_armored_shield_no_damage_t2")}
{Volume "ardboy2"		("SC_volume_armored_shield_no_damage_t2")}
{Volume "ardboy3"		("SC_volume_armored_shield_no_damage_t2")}
{Volume "ardboy4" 	 	("SC_volume_armored_shield_no_damage_t2")}


(Define "SC_Troopers_orkboy_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_light" multiplier(1.0))}
			{"body_ard"		("SC_damage_vol_body_heavy" multiplier(0.8))}
			
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
			{"head_ard"		("SC_damage_vol_head_heavy" multiplier(0.8))}
			
			{"foot1r"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			
			{"ardboy1" 0}
			{"ardboy2" 0}
			{"ardboy3" 0}
			{"ardboy4" 0}
			
			{"Pauldron_L" 0}
			{"Pauldron_R" 0}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_light" multiplier(1.0))}
			{"body_ard"		("SC_damage_vol_body_heavy" multiplier(0.8))}
			
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
			{"head_ard"		("SC_damage_vol_head_heavy" multiplier(0.8))}
			
			{"foot1r"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot1l"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_light" multiplier(1.0))}
			
			{"ardboy1" 0}
			{"ardboy2" 0}
			{"ardboy3" 0}
			{"ardboy4" 0}
			
			{"Pauldron_L" 0}
			{"Pauldron_R" 0}
		}
		{DamageBlast	1.0}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 16 %Speed %Speed_Modifier)	(* 16 %Speed %Speed_Modifier)	360}
			{Normal	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Spot	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Fast	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Bow	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
		}
	}
)
