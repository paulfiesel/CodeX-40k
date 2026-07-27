
; ================================================================================================================/
; // SC PLATAFORM NEW CODE
; ================================================================================================================/

(define "irregular_vision"
	{"vision" human_irregular}
)

;/* - Vision abilities for use with sniper rifles and binoculars - */

(define "standard_vision"
	{"vision" human}
)

(define "specialist_vision"
	{"vision" human_specialist}
)

(define "elite_vision"
	{"vision" human_elite}
)

(define "recon_vision"
	{"vision" human_recon}
)

(define "binocular_vision"
	{"field_glass"}
	{"vision" human_elite}
)

(define "sniper_perk"		
	{"telescope"}
	{"aimedshot"}
)

; ================================================================================================================/
; // GATES OF HELL 1.055 VANILLA CODE
; ================================================================================================================/

; Presets for all melee, small arm weapons and avoidance skills

(include "+Veterancy.inc")

;/* - Fortification Building Skills - */

(define "fortification"
	{barricade
	;	// ... copy define and here
	}
	{"resources" "10%"}
)

(define "engineer"
	{fortification}
	{barricade
		%fort
	}
	{"resources" "%rr%"}
	{"resources_regeneration" "%rg%"}
)

; ("engineer" rr(1000) rg(0) fort())
;/* - Repair Skills - */

(define "basic_repair"
	{mechanic factor 0.5}
)

(define "skilled_repair"
	{mechanic factor 1.0}
)

;/* - Tank and Cannon Main Gun Weapon Skills - */

(define "elite_gun"
	{"tank_gun" lvl_6}
)

(define "expert_gun"
	{"tank_gun" lvl_4}
)

(define "skilled_gun"
	{"tank_gun" lvl_3}
)

(define "basic_gun"
	{"tank_gun" lvl_1}
)

;/* - Temp defines for all tankguys 

(define "SC_Tankman_tier1"
	("skilled_gun")
	("skilled_repair")
)

(define "SC_Tankman_tier2"
	("expert_gun")
	("skilled_repair")
)

(define "SC_Tankman_tier3"
	("elite_gun")
	("skilled_repair")
)