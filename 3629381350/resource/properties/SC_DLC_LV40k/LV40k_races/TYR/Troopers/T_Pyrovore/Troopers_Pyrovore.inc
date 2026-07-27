
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(0.9))

{props "SC_plataform_prop_troopers_no_recoil_anm"}
{props "LV40k_DLC_prop_troopers_Tyr_Pyrovore_Biovore"}
{props "vehicle"}

("SC_Troopers_Size_3" 
	RadiusCollider(48) v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human) v_vision_around(human_peripheral_v2)
)	

{Weaponry
	{place "melee"}
	
	{place "weapon"
		{RestoreIKAfterAim}	
		{foresight "foresight3"}
		{AimBone "aim_ref"}
		{Rotate}
		;//{ai_in_manual}
	}
}

{Volume "body1"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_medium_t1")	("SC_volume_common_body")}
{Volume "body3"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_medium_t1")	("SC_volume_common_body")}
{Volume "body4"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_light_t1")		("SC_volume_common_body")}

{Volume "body2"		("SC_volume_unarmored")("SC_volume_common_body")}
{Volume "body5"		("SC_volume_unarmored")("SC_volume_common_body")}
{Volume "head"		("SC_volume_unarmored")("SC_volume_common_head")}

(Define "SC_Troopers_Pyrovore_Breed"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body1"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body4"		("SC_damage_vol_body_medium" multiplier(1.0))}
			{"body5"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body1"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body2"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"body3"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"body4"		("SC_damage_vol_body_medium" multiplier(1.0))}
			{"body5"		("SC_damage_vol_body_light" multiplier(1.0))}
			{"head"			("SC_damage_vol_head_light" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	360}
			{Normal	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
			{Spot	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
			{Fast	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
			{Bow	(* 18 %Speed %Speed_Modifier)	(* 18 %Speed %Speed_Modifier)	360}
		}
	}
)
