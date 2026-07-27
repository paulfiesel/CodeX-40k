
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(2.8))

{props "LV40k_DLC_prop_troopers_Tyr_Tervigon_Tyrannofex"}
{props "vehicle"}

{Obstacle 	{Circle2 {radius 80}}}		; // <- Obstacle, From SC Creatures
{targetSelector "SC_troopers_ap"}		; // <- AI prioritize vehicles.

{Weaponry
	{place "melee"
	}
	{place "weapon1"
		{RestoreIKAfterAim}	
		
		{SequentialAim 0}
		
		{Type "main"}
		{foresight "foresight3"}
	;//	{AimBone "aim_ref"}
		{Rotate}
	}
	{place "weapon2"
		{SequentialAim 1}
		
		{Type "coaxial"}
		{foresight "foresight_thorns"}
	;//	{AimBone "aim_ref"}
		
		{Ai_in_manual}
		
		{Barrels 16}
		{Shooter "Barrels"}
		
		("abm_mgun")
	}
}

{Volume "hand1r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_limbs")}
{Volume "hand2r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs")}
{Volume "hand1l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_limbs")}
{Volume "hand2l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs")}
{Volume "foot1r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot2r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot3r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot1l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot2l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot3l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "chest"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}
{Volume "body"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}	
{Volume "head"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_medium_t3")	("SC_volume_common_head")}
{Volume "tail"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_body")}

(Define "SC_Troopers_Tervigon_Tyrannofex_Breed"
	{tag "%Tag"}

	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_heavy" multiplier(0.6))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(0.6))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(0.5))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot3r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot3r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_heavy" multiplier(0.6))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(0.6))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(0.5))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(1.0))}
			{"hand1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand1l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"hand2l"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot3r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"foot3r"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 8 %Speed %Speed_Modifier)	(* 8 %Speed %Speed_Modifier)	45}
			{Normal	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	45}
			{Spot	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	45}
			{Fast	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	45}
			{Bow	(* 12 %Speed %Speed_Modifier)	(* 12 %Speed %Speed_Modifier)	45}
		}
	;//	{DisableBackward}
	}
)
