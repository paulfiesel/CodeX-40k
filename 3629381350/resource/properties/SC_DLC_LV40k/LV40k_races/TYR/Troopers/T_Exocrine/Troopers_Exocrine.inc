
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(1.4))

{props "SC_plataform_prop_troopers_no_recoil_anm"}
{props "LV40k_DLC_prop_troopers_Tyr_Exocrine"}
{props "vehicle"}

("SC_Creatures_Size_2" 
	v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_irregular) v_vision_around(human_peripheral)
)		

{Obstacle 	{Circle2 {radius 50}}}	; // <- Obstacle, From SC Creatures
{targetSelector "SC_troopers_spg"}		; // <- Overwrite, AI prioritize vehicles.

{Weaponry
	{place "melee"}
	
	{place "weapon"
		{RestoreIKAfterAim}	
		{foresight "foresight3"}
		{AimBone "aim_ref"}
		{Rotate}
		("abm_dymamic" dispersion(1.0) zeroing(8.0))
	}
}

{Volume "hand1l"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_limbs")}
{Volume "hand2l"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_limbs")}
{Volume "hand1r"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_limbs")}
{Volume "hand2r"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_limbs")}
{Volume "body"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_body")}	
{Volume "tail"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_body")}
{Volume "head"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_head")}
{Volume "gun"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_medium_t1")("SC_volume_common_limbs")}	

(Define "SC_Troopers_Exocrine_Breed"
	{tag "%Tag"}

	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_heavy" multiplier(2.25))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.5))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(1.75))}
			{"gun"			("SC_damage_vol_body_light" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_heavy" multiplier(2.25))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.5))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(1.75))}
			{"gun"			("SC_damage_vol_body_light" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 9 %Speed %Speed_Modifier)	(* 9 %Speed %Speed_Modifier)	80}
			{Normal	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	80}
			{Spot	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	80}
			{Fast	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	80}
			{Bow	(* 11 %Speed %Speed_Modifier)	(* 11 %Speed %Speed_Modifier)	80}
		}
	}
)

)
