
(include "Troopers_Warboss.Inc")
(include "MDL/Skeleton.inc")

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Orks_Warboss"
	("Skeleton" color(%color) model(Warboss_1))
	
	("SC_Troopers_Warboss_Breed" 
		Tag()
		Health(75000) Health_Modifier(%health_modifier) Health_Regen(0)		
		Speed(1.0) Speed_Modifier(%speed_modifier)
	)
	{Props "SC_plataform_prop_misc_melee"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t2"}	; // <- melee trait
	
	; ------------------------------------------------- ;
	
	{extender "inventory"
		{box
			{item "lv40k_ork_warboss_item"}
			{item "ork_choppa_boss_%choppa"		filled	{user "melee"}}
		}
	}
	{Weaponry
		{place "weapon1"
			{weapon "ork_super_kustom_shoota"}
		}
		{place "weapon2"
			{weapon "rokkit_launcha_warboss"}
		}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** EVILSUNZ ***	-	Evilsunz Boss is 15% faster

(define "Perk_Evilsunz_Warboss_1"	("Pattern_Orks_Warboss"	color(evilsunz) speed_modifier(1.1) health_modifier(1.0) choppa(evz)))

; // *** GOFFS ***		-	Goffs Boss has 25% more health at cost of 15% speed

(define "Perk_Goffs_Warboss_1"		("Pattern_Orks_Warboss"	color(goffs) speed_modifier(1.00) health_modifier(1.25)  choppa(goff)))

; // *** BADMOONS ***	- 	Badmoons Boss is default

(define "Perk_Badmoons_Warboss_1"	("Pattern_Orks_Warboss"	color(badmoons) speed_modifier(1.00) health_modifier(1.0)  choppa(evz)))
