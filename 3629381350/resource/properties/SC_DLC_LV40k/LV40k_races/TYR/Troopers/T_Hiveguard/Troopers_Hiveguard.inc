
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(1.0))

{props "LV40k_DLC_prop_troopers_Tyr_Hiveguard"}
{props "vehicle"}

("SC_Creatures_Size_1" 
	v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_irregular) v_vision_around(human_peripheral)
)	

{Obstacle 	{Circle2 {radius 32}}}		; // <- Obstacle, From SC Creatures
{targetSelector "SC_troopers_ap"}		; // <- AI prioritize vehicles.

{Weaponry
	{place "melee"}
	
	{place "weapon1"
		{RestoreIKAfterAim}	
		{AimBone "aim_ref"}
		{Rotate}
		
;//		{foresight "foresight_impaler"}
;//		{foresight "foresight_shockcannon"}
	}
}

{Volume "foot2l"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t1")("SC_volume_common_limbs")}
{Volume "foot2r"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t1")("SC_volume_common_limbs")}
{Volume "hand1l"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t4")("SC_volume_common_limbs")}
{Volume "hand1r"	{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t4")("SC_volume_common_limbs")}
{Volume "body"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t4")("SC_volume_common_body")}	
{Volume "head"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t2")("SC_volume_common_head")}
{Volume "tail"		{tags "LV40k_tyranid_armor"}	("SC_volume_armored_heavy_t1")("SC_volume_common_body")}

(Define "SC_Troopers_Hiveguard_Breed"
	{tag "%Tag"}

	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2l"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 10 %Speed %Speed_Modifier)	(* 10 %Speed %Speed_Modifier)	180}
			{Normal	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	180}
			{Spot	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	180}
			{Fast	(* 32 %Speed %Speed_Modifier)	(* 32 %Speed %Speed_Modifier)	180}
			{Bow	(* 32 %Speed %Speed_Modifier)	(* 32 %Speed %Speed_Modifier)	180}
		}
	}
)

)
