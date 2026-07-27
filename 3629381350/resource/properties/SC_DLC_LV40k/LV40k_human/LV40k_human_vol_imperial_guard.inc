

; LV40k IMPERIAL GUARD

; ===============================================================================================;
; // DAMAGE MODIFIERS
; ===============================================================================================;

(Define "LV40k_Human_Damage_Imperial_Guard"

	; // Guardsmen.
	{"guardsmen_armor_body"			("SC_damage_vol_body_medium" multiplier(%multiplier))}
	{"guardsmen_armor_head"			("SC_damage_vol_head_light" multiplier(%multiplier))}
	
	; // Veteran.
	{"veteran_armor_body"			("SC_damage_vol_body_medium" multiplier(%multiplier))}
	{"veteran_armor_head"			("SC_damage_vol_head_light" multiplier(%multiplier))}
	{"veteran_pauldron_l"			("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"veteran_pauldron_l"			("SC_damage_vol_limbs_medium" multiplier(%multiplier))}
	{"veteran_foot2l"				("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"veteran_foot2l"				("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	
	; // Kasrkin.
	{"stormtrooper_armor_body"		("SC_damage_vol_body_medium" multiplier(%multiplier))}
	{"stormtrooper_armor_head"		("SC_damage_vol_head_light" multiplier(%multiplier))}
	{"stormtrooper_pauldron_l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
	{"stormtrooper_pauldron_l"		("SC_damage_vol_limbs_heavy" multiplier(%multiplier))}
	{"stormtrooper_foot1l"			("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"stormtrooper_foot1r"			("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"stormtrooper_foot2l"			("SC_damage_vol_limbs_light" multiplier(%multiplier))}
	{"stormtrooper_foot2l"			("SC_damage_vol_limbs_light" multiplier(%multiplier))}
)

; ===============================================================================================;
; // VOLUMES
; ===============================================================================================;

(Define "LV40k_Human_Vol_Imperial_Guard"

; # --------- Guardsmen 

{Volume "Guardsmen_armor_body"			("SC_volume_common_body")			("SC_volume_armored_light_t1")}
{Volume "guardsmen_armor_head"			("SC_volume_common_head")			("SC_volume_armored_light_t1")}
	
; # --------- Veteran 

{Volume "veteran_armor_body"			("SC_volume_common_body")			("SC_volume_armored_light_t1")}
{Volume "veteran_armor_head"			("SC_volume_common_head")			("SC_volume_armored_light_t1")}
	
{Volume "veteran_pauldron_l"			("SC_volume_common_limbs_hand1l")	("SC_volume_armored_light_t1")}
{Volume "veteran_pauldron_r"			("SC_volume_common_limbs_hand1r")	("SC_volume_armored_light_t1")}

{Volume "veteran_armor_foot2l"			("SC_volume_common_limbs_foot1l")	("SC_volume_armored_light_t1")}
{Volume "veteran_armor_foot2r"			("SC_volume_common_limbs_foot1r")	("SC_volume_armored_light_t1")}


; # --------- Kasrkin 

{Volume "stormtrooper_armor_body"		("SC_volume_common_body")			("SC_volume_armored_light_t2")}
{Volume "stormtrooper_armor_head"		("SC_volume_common_head")			("SC_volume_armored_light_t1")}

{Volume "stormtrooper_pauldron_l"		("SC_volume_common_limbs_hand1l")	("SC_volume_armored_light_t2")}
{Volume "stormtrooper_pauldron_r"		("SC_volume_common_limbs_hand1r")	("SC_volume_armored_light_t2")}

{Volume "stormtrooper_foot1l"			("SC_volume_common_limbs_foot1l")	("SC_volume_armored_light_t1")}
{Volume "stormtrooper_foot1r"			("SC_volume_common_limbs_foot1r")	("SC_volume_armored_light_t1")}

{Volume "stormtrooper_foot2l"			("SC_volume_common_limbs_foot1l")	("SC_volume_armored_light_t1")}
{Volume "stormtrooper_foot2r"			("SC_volume_common_limbs_foot1r")	("SC_volume_armored_light_t1")}


)