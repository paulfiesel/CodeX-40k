
{props "LV40k_DLC_prop_human"}
{props "LV40k_DLC_prop_infantry_generic"}

; -------------------------------------------------------------------------;

(Include "LV40k_human/LV40k_human_vol_eldar.inc")
(Include "LV40k_human/LV40k_human_vol_imperial_guard.inc")
(Include "LV40k_human/LV40k_human_vol_orks.inc")
(Include "LV40k_human/LV40k_human_vol_space_marines.inc")
(Include "LV40k_human/LV40k_human_vol_tyranids.inc")

; -------------------------------------------------------------------------;

(define "LV40k_DLC_Human_Define_Damage_Modifiers"
	("LV40k_Human_Damage_Eldar" multiplier(%multiplier))
	("LV40k_Human_Damage_Orks" multiplier(%multiplier))
	("LV40k_Human_Damage_Space_Marines" multiplier(%multiplier))
	("LV40k_Human_Damage_Imperial_Guard" multiplier(%multiplier))
	("LV40k_Human_Damage_Tyranids" multiplier(%multiplier))
)

(define "LV40k_DLC_Human_Define_Custom_Volumes"
	("LV40k_Human_Vol_Eldar")
	("LV40k_Human_Vol_Orks")
	("LV40k_Human_Vol_Space_Marines")
	("LV40k_Human_Vol_Imperial_Guard")
	("LV40k_Human_Vol_Tyranids")
)
