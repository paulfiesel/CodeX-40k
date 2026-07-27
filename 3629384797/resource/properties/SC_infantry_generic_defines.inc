
;--------------------------------------------------------------------;
;SDL Infantry Generic / Shared between Fauna troopers and humanskins
;--------------------------------------------------------------------;

{props "SC_prop_abilities_generic"}
{props "SC_prop_infantry_generic"}	
{props "SC_prop_Shields"}

{props "SC_Plataform_prop_FSM_common"}	

; ======================================================/
; // Volumes defines.
; ======================================================/

; // BUZZ: these tags are important to play hit-reaction animations and display gore on humanoids.

(Define "SC_volume_common_head"		{tags "head"}	 	{tags "fire"})
(Define "SC_volume_common_body"		{tags "body"}	 	{tags "fire"})
(Define "SC_volume_common_limbs"	{tags "limbs"}		{tags "no_target" "fire"}	{able {nolook 1}})

(Define "SC_volume_common_limbs_hand1r"	("SC_volume_common_limbs")	{tags "hand1r"})
(Define "SC_volume_common_limbs_hand2r"	("SC_volume_common_limbs")	{tags "hand2r"})
(Define "SC_volume_common_limbs_hand1l"	("SC_volume_common_limbs")	{tags "hand1l"})
(Define "SC_volume_common_limbs_hand2l"	("SC_volume_common_limbs")	{tags "hand2l"})

(Define "SC_volume_common_limbs_foot1r"	("SC_volume_common_limbs")	{tags "foot1r"})
(Define "SC_volume_common_limbs_foot2r"	("SC_volume_common_limbs")	{tags "foot2r"})
(Define "SC_volume_common_limbs_foot1l"	("SC_volume_common_limbs")	{tags "foot1l"})
(Define "SC_volume_common_limbs_foot2l"	("SC_volume_common_limbs")	{tags "foot2l"})

; ======================================================/
; // Armored volumes Defines.
; ======================================================/

; // BUZZ: these stats are all utilized in "/set/interaction_entity"

; # thickness: 					// piercing threshold.
; # tag "SC_volume_armored":	// general armor volume flag. Avoids redundancy.
; # tag "unarmored": 			// general flesh parts, used in most skins. See mods interaction_entity for balance info.
; # tag "light":				// See mods interaction_entity for balance info.
; # tag "medium":				// See mods interaction_entity for balance info.
; # tag "heavy":				// See mods interaction_entity for balance info.

; // (Define "SC_volume_armored_shield_no_damage"	{tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 20})
; // (Define "SC_volume_armored_light"				{tags "SC_volume_armored"}	{tags "SC_volume_armored_light"}	{thickness 8})	; <- delete later
; // (Define "SC_volume_armored_medium"				{tags "SC_volume_armored"}	{tags "SC_volume_armored_medium"}	{thickness 15})	; <- delete later
; // (Define "SC_volume_armored_heavy"				{tags "SC_volume_armored"}	{tags "SC_volume_armored_heavy"}	{thickness 24})	; <- delete later

(Define "SC_volume_unarmored"					{thickness 2})

(Define "SC_volume_armored_light_t1"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_light"}	{thickness 6})
(Define "SC_volume_armored_light_t2"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_light"}	{thickness 8})
(Define "SC_volume_armored_light_t3"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_light"}	{thickness 10})

(Define "SC_volume_armored_medium_t1"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_medium"}	{thickness 12})
(Define "SC_volume_armored_medium_t2"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_medium"}	{thickness 16})
(Define "SC_volume_armored_medium_t3"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_medium"}	{thickness 20})

(Define "SC_volume_armored_heavy_t1"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_heavy"}	{thickness 24})
(Define "SC_volume_armored_heavy_t2"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_heavy"}	{thickness 30})
(Define "SC_volume_armored_heavy_t3"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_heavy"}	{thickness 35})
(Define "SC_volume_armored_heavy_t4"			{material "steel"} {tags "SC_volume_armored"}	{tags "SC_volume_armored_heavy"}	{thickness 40})

(Define "SC_volume_armored_shield_no_damage_t1"	{material "steel"} {tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 30})
(Define "SC_volume_armored_shield_no_damage_t2"	{material "steel"} {tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 40})
(Define "SC_volume_armored_shield_no_damage_t3"	{material "steel"} {tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 50})
(Define "SC_volume_armored_shield_no_damage_t4"	{material "steel"} {tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 60})
(Define "SC_volume_armored_shield_no_damage_t5"	{material "steel"} {tags "SC_volume_armored_shield_no_damage"}	{able {nolook 1}}	{tags "no_target"}	{thickness 70})

; ======================================================/
; // Volumes Damage Multiplier
; ======================================================/	

; Damp ~~ -15% damage damping per armor level.

; // -------> HEAD
(Define "SC_damage_vol_head_unarmored"	(* 1.5		%multiplier))	;*)	
(Define "SC_damage_vol_head_light"		(* 1.3		%multiplier))	;*)
(Define "SC_damage_vol_head_medium"		(* 1.2		%multiplier))	;*)
(Define "SC_damage_vol_head_heavy"		(* 1.0		%multiplier))	;*)

; // -------> BODY MASS
(Define "SC_damage_vol_body_unarmored"	(* 1.0		%multiplier))	;*)
(Define "SC_damage_vol_body_light"		(* 0.85		%multiplier))	;*)
(Define "SC_damage_vol_body_medium"		(* 0.70		%multiplier))	;*)
(Define "SC_damage_vol_body_heavy"		(* 0.55		%multiplier))	;*)

; // -------> LIMBS
(Define "SC_damage_vol_limbs_unarmored"	(* 0.8		%multiplier))	;*)
(Define "SC_damage_vol_limbs_light"		(* 0.7		%multiplier))	;*)
(Define "SC_damage_vol_limbs_medium"	(* 0.6		%multiplier))	;*)
(Define "SC_damage_vol_limbs_heavy"		(* 0.45		%multiplier))	;*)


(Define "SC_damage_vol_shield_part"		(* 0		%multiplier))	;*)

; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~Delete Later
; // -------> SHIELD
(Define "SC_damage_vol_shield_light"	(* 0.08		%multiplier))	;*)
(Define "SC_damage_vol_shield_heavy"	(* 0.02		%multiplier))	;*)