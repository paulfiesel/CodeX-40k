

; LV40k SPACE MARINES

; ===============================================================================================;
; // DAMAGE MODIFIERS
; ===============================================================================================;

(Define "LV40k_Human_Damage_Space_Marines"

; // SPACE MARINES 

{"SM_pauldronR"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}	
{"sm_hand1r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"sm_hand2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"SM_pauldronL"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}	
{"sm_hand1l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"sm_hand2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"sm_foot1r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"sm_foot2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"sm_foot1l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"sm_foot2l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"sm_chest"			("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"sm_belly"			("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"sm_head"			("SC_damage_vol_head_medium" multiplier(%multiplier))}

; // SPACE MARINES PRIMARIS

{"SMP_pauldronR"	("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}	
{"SMP_hand1r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"SMP_hand2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"SMP_pauldronL"	("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}	
{"SMP_hand1l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"SMP_hand2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"SMP_foot1r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"SMP_foot2r"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"SMP_foot1l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
{"SMP_foot2l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}

{"SMP_chest"		("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"SMP_belly"		("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"SMP_head"			("SC_damage_vol_head_medium" multiplier(%multiplier))}

; // SCOUTS

{"SCOUT_pauldronR"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}	
{"SCOUT_hand1r"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}
{"SCOUT_hand2r"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}

{"SCOUT_pauldronL"	("SC_damage_vol_limbs_medium" multiplier(%multiplier))}	
{"SCOUT_hand1l"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}
{"SCOUT_hand2r"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}

{"SCOUT_foot1r"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}
{"SCOUT_foot2r"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}

{"SCOUT_foot1l"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}
{"SCOUT_foot2l"		("SC_damage_vol_limbs_light" multiplier(%multiplier))}

{"SCOUT_chest"		("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"SCOUT_body"		("SC_damage_vol_body_medium" multiplier(%multiplier))}
{"SCOUT_head"		("SC_damage_vol_head_light" multiplier(%multiplier))}

{"SCOUT_helmet"		("SC_damage_vol_head_heavy" multiplier(%multiplier))}

; // SERVITOR

{"SERVITOR_hand1r"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
{"SERVITOR_hand1l"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}

{"SERVITOR_foot1r"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
{"SERVITOR_foot2r"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}

{"SERVITOR_foot1l"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
{"SERVITOR_foot2l"		("SC_damage_vol_limbs_medium" multiplier(%multiplier))}

{"SERVITOR_chest"		("SC_damage_vol_body_heavy" multiplier(%multiplier))}
{"SERVITOR_head"		("SC_damage_vol_head_light" multiplier(%multiplier))}

)

; ===============================================================================================;
; // VOLUMES
; ===============================================================================================;

(Define "LV40k_Human_Vol_Space_Marines"

; # --------- SPACE MARINES

{Volume "sm_belly"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t1")	
}
{Volume "sm_chest"	
	("SC_volume_common_body")
	("SC_volume_armored_heavy_t2")
}
{Volume "sm_head"	
	("SC_volume_common_head")
	("SC_volume_armored_medium_t1")
}
{Volume "SM_pauldronR"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_heavy_t3")
}
{Volume "SM_pauldronL"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_heavy_t3")
}
{Volume "sm_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_foot1r" 
	("SC_volume_common_limbs_foot1r")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_foot2r" 
	("SC_volume_common_limbs_foot2r")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_foot1l" 
	("SC_volume_common_limbs_foot1l")
	("SC_volume_armored_heavy_t1")
}
{Volume "sm_foot2l" 
	("SC_volume_common_limbs_foot2l")
	("SC_volume_armored_heavy_t1")
}

; # --------- SPACE MARINES PRIMARIS

{Volume "smp_belly"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t1")	
}
{Volume "smp_chest"	
	("SC_volume_common_body")
	("SC_volume_armored_heavy_t2")
}
{Volume "smp_head"	
	("SC_volume_common_head")
	("SC_volume_armored_medium_t1")
}
{Volume "smp_pauldronR"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_heavy_t3")
}
{Volume "smp_pauldronL"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_heavy_t3")
}
{Volume "smp_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_foot1r" 
	("SC_volume_common_limbs_foot1r")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_foot2r" 
	("SC_volume_common_limbs_foot2r")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_foot1l" 
	("SC_volume_common_limbs_foot1l")
	("SC_volume_armored_heavy_t1")
}
{Volume "smp_foot2l" 
	("SC_volume_common_limbs_foot2l")
	("SC_volume_armored_heavy_t1")
}

; # --------- SCOUTS 

{Volume "scout_chest"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t2")
}
{Volume "scout_body"	
	("SC_volume_common_body")
	("SC_volume_armored_light_t3")
}
{Volume "scout_helmet"	
	("SC_volume_common_head")
	("SC_volume_armored_light_t2")
}
{Volume "scout_head"	
	("SC_volume_common_head")
	("SC_volume_unarmored")
}
{Volume "scout_pauldronR"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_heavy_t1")
}
{Volume "scout_pauldronL"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_heavy_t1")
}
{Volume "scout_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_unarmored")
}
{Volume "scout_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_unarmored")
}
{Volume "scout_hand2r"	
	("SC_volume_common_limbs_hand2r")
	("SC_volume_unarmored")
}
{Volume "scout_hand2l"	
	("SC_volume_common_limbs_hand2l")
	("SC_volume_unarmored")
}
{Volume "scout_foot1r" 
	("SC_volume_common_limbs_foot1r")
	("SC_volume_unarmored")
}
{Volume "scout_foot2r" 
	("SC_volume_common_limbs_foot2r")
	("SC_volume_unarmored")
}
{Volume "scout_foot1l" 
	("SC_volume_common_limbs_foot1l")
	("SC_volume_unarmored")
}
{Volume "scout_foot2l" 
	("SC_volume_common_limbs_foot2l")
	("SC_volume_unarmored")
}

; # --------- SERVITOR

{Volume "servitor_chest"	
	("SC_volume_common_body")
	("SC_volume_armored_medium_t1")
}
{Volume "servitor_head"	
	("SC_volume_common_head")
	("SC_volume_armored_light_t1")
}
{Volume "servitor_hand1r"	
	("SC_volume_common_limbs_hand1r")
	("SC_volume_armored_light_t3")
}
{Volume "servitor_hand1l"	
	("SC_volume_common_limbs_hand1l")
	("SC_volume_armored_light_t3")
}
{Volume "servitor_foot1r" 
	("SC_volume_common_limbs_foot1r")
	("SC_volume_armored_light_t2")
}
{Volume "servitor_foot2r" 
	("SC_volume_common_limbs_foot2r")
	("SC_volume_armored_light_t1")
}
{Volume "servitor_foot1l" 
	("SC_volume_common_limbs_foot1l")
	("SC_volume_armored_light_t2")
}
{Volume "servitor_foot2l" 
	("SC_volume_common_limbs_foot2l")
	("SC_volume_armored_light_t1")
}

)