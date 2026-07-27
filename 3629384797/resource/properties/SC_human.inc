
;--------------------------------------------------------------------------------------;
;SDL SC Plataform Human 
;--------------------------------------------------------------------------------------;

{props "human"}

; // Shared Defines
(Include "SC_Infantry_Generic_Defines.inc")

; // Includes DLC;
(Include "SC_DLC_CODZ/CODZ_human.inc")
(Include "SC_DLC_LV40k/LV40k_human.inc")
(Include "SC_DLC_HALO/HALO_human.inc")

; ==================================================================================== ;
; // DAMAGE MODIFIERS 
; ==================================================================================== ;

;	// BUZZ: NOTICE - as per GOH 1.055:
;	// BUZZ: check "set/ballistics.inc" for damage distance falloff reference

(define "SC_Plataform_Human_Define_Damage_Modifiers"
	("LV40k_DLC_Human_Define_Damage_Modifiers" multiplier(%multiplier))
	("HALO_DLC_Human_Define_Damage_Modifiers" multiplier(%multiplier))
)

; ==================================================================================== ;
; // CUSTOM VOLUMES 
; ==================================================================================== ;

;	// BUZZ: see defines and instructions in "SC_infantry_generic_defines.inc"

(define "SC_Plataform_Human_Define_Custom_Volumes"
	("LV40k_DLC_Human_Define_Custom_Volumes")
	("HALO_DLC_Human_Define_Custom_Volumes")
)
