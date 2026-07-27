

; LV40k ORK BOYS

; ===============================================================================================;
; // DAMAGE MODIFIERS
; ===============================================================================================;

(Define "LV40k_Human_Damage_Orks"

	; // Orks.
	{"ork_boy_body"		("SC_damage_vol_body_light" multiplier(%multiplier))}
	{"ork_boy_head"		("SC_damage_vol_head_light" multiplier(%multiplier))}
	
	{"ork_boy_foot1r"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_foot2r"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_foot1l"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_foot2l"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	
	{"ork_boy_hand1l"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_hand2l"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_hand1r"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"ork_boy_hand2r"	("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	
	; // Nobs.
	{"ork_nob_body"		("SC_damage_vol_body_medium" multiplier(%multiplier))}
	{"ork_nob_head"		("SC_damage_vol_body_medium" multiplier(%multiplier))}
	
	{"ork_nob_foot1r"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_foot2r"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_foot1l"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_foot2l"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	
	{"ork_nob_hand1l"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_hand2l"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_hand1r"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"ork_nob_hand2r"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	
	; // Grots.
	{"ork_grots_body"	("SC_damage_vol_body_unarmored" multiplier(%multiplier))}
	{"ork_grots_head"	("SC_damage_vol_head_unarmored" multiplier(%multiplier))}
	
	{"ork_grots_foot1r"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_foot2r"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_foot1l"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_foot2l"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	
	{"ork_grots_hand1l"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_hand2l"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_hand1r"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
	{"ork_grots_hand2r"	("SC_damage_vol_limbs_unarmored" multiplier(%multiplier))}
)

; ===============================================================================================;
; // VOLUMES
; ===============================================================================================;

(Define "LV40k_Human_Vol_Orks"

; # --------- Grots 

{Volume "Ork_Grots_body"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}
{Volume "Ork_Grots_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "ork_grots_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_unarmored")
}
{Volume "ork_grots_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_unarmored")
}
{Volume "ork_grots_foot1r"	
	("SC_volume_common_limbs_foot1r")
	("SC_volume_unarmored")
}
{Volume "ork_grots_foot2r"	
	("SC_volume_common_limbs_foot2r")
	("SC_volume_unarmored")
}
{Volume "ork_grots_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_unarmored")
}
{Volume "ork_grots_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_unarmored")
}
{Volume "ork_grots_foot1l"	
	("SC_volume_common_limbs_foot1l")
	("SC_volume_unarmored")
}
{Volume "ork_grots_foot2l"	
	("SC_volume_common_limbs_foot2l")
	("SC_volume_unarmored")
}

; # --------- Boys 

{Volume "Ork_boy_body"	
	("SC_volume_common_body")
	("SC_volume_unarmored")
}
{Volume "ork_boy_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "ork_boy_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_unarmored")
}
{Volume "ork_boy_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_unarmored")
}
{Volume "ork_boy_foot1r"	
	("SC_volume_common_limbs_foot1r")
	("SC_volume_unarmored")
}
{Volume "ork_boy_foot2r"	
	("SC_volume_common_limbs_foot2r")
	("SC_volume_unarmored")
}
{Volume "ork_boy_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_unarmored")
}
{Volume "ork_boy_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_unarmored")
}
{Volume "ork_boy_foot1l"	
	("SC_volume_common_limbs_foot1l")
	("SC_volume_unarmored")
}
{Volume "ork_boy_foot2l"	
	("SC_volume_common_limbs_foot2l")
	("SC_volume_unarmored")
}

; # --------- Nobs 

{Volume "Ork_nob_body"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t3")	
}
{Volume "ork_nob_head"	
	("SC_volume_common_head")
	("SC_volume_armored_light_t2")	
}
{Volume "ork_nob_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_foot1r"	
	("SC_volume_common_limbs_foot1r")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_foot2r"	
	("SC_volume_common_limbs_foot2r")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_foot1l"	
	("SC_volume_common_limbs_foot1l")
	("SC_volume_armored_medium_t1")	
}
{Volume "ork_nob_foot2l"	
	("SC_volume_common_limbs_foot2l")
	("SC_volume_armored_medium_t1")	
}


)