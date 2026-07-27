
(include "/properties/SC_troopers.inc")
(include "/properties/SC_Selection/SC_Trooper_S1/SC_Trooper_S1.inc"  scale(1.6))

{props "LV40k_DLC_prop_troopers_Tyr_Carnifex"}
{props "vehicle"}

("SC_Creatures_Size_3"
	v_perk()
	v_bone_eyes(visor_eyes) v_bone_around(visor_around)
	v_vision_eyes(human) v_vision_around(human_peripheral)
)	

{Obstacle 	{Circle2 {radius 56}}}			; // <- Obstacle, From SC Creatures

{targetSelector "SC_troopers_ap"}			; // <- AI prioritize vehicles.
{PatherID "SC_Pather_H_Creature_Med"}		; <- // Overwrite Pather Profile

{Weaponry
	{place "melee"
		{AimBone "aim_ref"}
	}
	{place "weapon"
		{RestoreIKAfterAim}	
		{AimBone "aim_ref"}
		
;//		{foresight "foresight_barbed_strangler"}
;//		{foresight "foresight_venom_cannon"}
;//		{foresight "foresight_spitter"}
	}
	
	; // BUZZ: disable rotate for upper devourers so that they dont mess with stranglers and venom cannons carnifex AI.
	{place "weapon3"
		{type "coaxial"}	{SequentialAim 1}
		{foresight "foresight_dev_l_up"}
		{AimBone "aim_ref"}
;//		{Rotate}
;//		{ai_in_manual}
		("abm_mgun")
	}
	{place "weapon4"
		{type "coaxial"}	{SequentialAim 1}
		{foresight "foresight_dev_l_down"}
		{AimBone "aim_ref"}
		{Rotate}
;//		{ai_in_manual}
		("abm_mgun")
	}
	{place "weapon5"
		{type "coaxial"}	{SequentialAim 1}
		{foresight "foresight_dev_r_up"}
		{AimBone "aim_ref"}
;//		{Rotate}
;//		{ai_in_manual}
		("abm_mgun")
	}
	{place "weapon6"
		{type "coaxial"}	{SequentialAim 1}
		{foresight "foresight_dev_r_down"}
		{AimBone "aim_ref"}
		{Rotate}
;//		{ai_in_manual}
		("abm_mgun")
	}
}

{Volume "foot1r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot2r"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs")}
{Volume "foot1l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t2")	("SC_volume_common_limbs")}
{Volume "foot2l"	{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_limbs")}
{Volume "chest"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t4")	("SC_volume_common_body")}
{Volume "body"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t3")	("SC_volume_common_body")}	
{Volume "head"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_light_t2")	("SC_volume_common_head")}
{Volume "tail"		{tags "LV40k_tyranid_armor"} ("SC_volume_armored_heavy_t1")	("SC_volume_common_body")}

{extender "vitality"
	{Damage	
		{"body"			("SC_damage_vol_body_heavy" multiplier(1.2))}
		{"chest"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		{"tail"			("SC_damage_vol_body_heavy" multiplier(0.8))}
		{"head"			("SC_damage_vol_head_heavy" multiplier(1.5))}
		{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
	}	
	{DamageTPC	
		{"body"			("SC_damage_vol_body_heavy" multiplier(1.2))}
		{"chest"		("SC_damage_vol_body_heavy" multiplier(1.0))}
		{"tail"			("SC_damage_vol_body_heavy" multiplier(0.8))}
		{"head"			("SC_damage_vol_head_heavy" multiplier(1.5))}
		{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot1r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
		{"foot2r"		("SC_damage_vol_body_heavy" multiplier(1.1))}
	}
	{DamageBlast	1.25}	
}

(Define "SC_Troopers_Carnifex_Breed_Melee"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
	}	
	{Chassis "foot"
		{Run
			{Slow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Normal	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Spot	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Fast	(* 32 %Speed %Speed_Modifier)	(* 32 %Speed %Speed_Modifier)	100}
			{Bow	(* 32 %Speed %Speed_Modifier)	(* 32 %Speed %Speed_Modifier)	100}
		}
	}
)

(Define "SC_Troopers_Carnifex_Breed_Ranged"
	{tag "%Tag"}
	{extender "vitality"
		{Health
			{max 		(* %Health %Health_Modifier)} 
			{current 	(* %Health %Health_Modifier)}
			{inc 		%Health_Regen}
		}	
	}
	{Chassis "foot"
		{Run
			{Slow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Normal	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Spot	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Fast	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
			{Bow	(* 15 %Speed %Speed_Modifier)	(* 15 %Speed %Speed_Modifier)	100}
		}
	}
)
