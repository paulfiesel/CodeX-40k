
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(1.8))

{props "LV40k_DLC_prop_troopers_Tyr_Swarmlord"}
{props "vehicle"}

("SC_Creatures_Size_3"
	v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human_keeneyed) v_vision_around(human_peripheral_v3)
)	

{Obstacle 	{Circle2 {radius 75}}}		; // <- Obstacle, From SC Creatures
{targetSelector "SC_troopers_ap"}		; // <- AI prioritize vehicles.
{PatherID "SC_Pather_H_Creature_Med"}	; // <- Overwrite Pather Profile

{Weaponry
	{place "melee"
		; [...]
	}
}

{Volume "foot1r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t3")	("SC_volume_common_limbs")}
{Volume "foot2r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot1l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t3")	("SC_volume_common_limbs")}
{Volume "foot2l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "chest"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}
{Volume "body"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}	
{Volume "head"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_medium_t2")	("SC_volume_common_head")}
{Volume "tail"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_body")}

(Define "SC_Troopers_Swarmlord_Breed"
	{tag "%Tag"}

	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
		{Damage	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(2.0))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(0.8))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(4.0))}
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}	
		{DamageTPC	
			{"body"			("SC_damage_vol_body_heavy" multiplier(1.0))}
			{"chest"		("SC_damage_vol_body_heavy" multiplier(2.0))}
			{"tail"			("SC_damage_vol_body_heavy" multiplier(0.8))}
			{"head"			("SC_damage_vol_head_heavy" multiplier(4.0))}
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot1r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
			{"foot2r"		("SC_damage_vol_limbs_heavy" multiplier(1.0))}
		}
		{DamageBlast	1.5}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	360}
			{Normal	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Spot	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Fast	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
			{Bow	(* 22 %Speed %Speed_Modifier)	(* 22 %Speed %Speed_Modifier)	360}
		}
	}
)
