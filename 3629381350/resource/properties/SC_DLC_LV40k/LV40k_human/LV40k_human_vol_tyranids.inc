

; LV40k Tyranids

; // Tyranids have their thick carapaces, so all of them have some sort of armor.

; ===============================================================================================;
; // DAMAGE MODIFIERS
; ===============================================================================================;

(Define "LV40k_Human_Damage_Tyranids"

; // Termagaunt.
{"tyr_term_head"	("SC_damage_vol_head_light" multiplier(%multiplier))}
{"tyr_term_body"	("SC_damage_vol_body_light" multiplier(%multiplier))}

; // Zoanthrope.
{"tyr_zth_head"		("SC_damage_vol_head_light" multiplier(%multiplier))}
{"tyr_zth_body"		("SC_damage_vol_body_light" multiplier(%multiplier))}

; // Warrior.
{"tyr_wrr_head"		("SC_damage_vol_head_medium" multiplier(%multiplier))}
{"tyr_wrr_body"		("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"tyr_wrr_foot1l"	("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"tyr_wrr_foot1r"	("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

; // Ravener.
{"tyr_rvn_head"		("SC_damage_vol_head_medium" multiplier(%multiplier))}
{"tyr_rvn_lower"	("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"tyr_rvn_upper"	("SC_damage_vol_body_heavy" multiplier(%multiplier))}

; // Venomthrope.
{"tyr_vth_head"		("SC_damage_vol_head_medium" multiplier(%multiplier))}
{"tyr_vth_body"		("SC_damage_vol_body_medium" multiplier(%multiplier))}
{"tyr_vth_chest"	("SC_damage_vol_body_medium" multiplier(%multiplier))}

)

; ===============================================================================================;
; // VOLUMES
; ===============================================================================================;

(Define "LV40k_Human_Vol_Tyranids"

; # --------- Termagaunts 

{Volume "tyr_term_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "tyr_term_body"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}

; # --------- Ravener 

{Volume "tyr_rvn_head"	
	("SC_volume_common_head")
	("SC_volume_armored_light_t2")	{tags "LV40k_tyranid_armor"}
}
{Volume "tyr_rvn_lower"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t1")	{tags "LV40k_tyranid_armor"}
}
{Volume "tyr_rvn_upper"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t2")	{tags "LV40k_tyranid_armor"}
}

; # --------- Warrior 

{Volume "tyr_wrr_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "tyr_wrr_body"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t1")	{tags "LV40k_tyranid_armor"}
}
{Volume "tyr_wrr_foot1r" 
	("SC_volume_common_limbs_foot1r")
	("SC_volume_armored_light_t2")	{tags "LV40k_tyranid_armor"}
}
{Volume "tyr_wrr_foot1l" 
	("SC_volume_common_limbs_foot1l")
	("SC_volume_armored_light_t2")	{tags "LV40k_tyranid_armor"}
}

; # --------- Zoanthrope 

{Volume "tyr_zth_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "tyr_zth_body"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}

; # --------- Venomthrope 

{Volume "tyr_vth_chest"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}
{Volume "tyr_vth_body"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}
{Volume "tyr_vth_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}

)