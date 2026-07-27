
(include "Troopers_Terminators.Inc")
(include "MDL/Skeleton.inc")

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Assault_Cannon_Powerfist_Cyclone"	
	("Skeleton" color(%color) rank(%rank) model(term_pf_cyc) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank ACC MLL) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "sm_assault_cannon"	filled	{user "weapon"}}
			{item "sm_rocket_cyclone_ammo krak"	12}
			{item "sm_rocket_cyclone_ammo frag"	12}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon"}
		{place "weapon3"	{weapon "sm_rocket_cyclone" filling "sm_rocket_cyclone_ammo frag" 12}}
	}
)

(define "Assault_Cannon_Powerclaw"	
	("Skeleton" color(%color) rank(%rank) model(term_claw) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank ACC) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "sm_assault_cannon"	filled	{user "weapon"}}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon"}
	}
)

(define "Heavy_Flamer_Powerfist"	
	("Skeleton" color(%color) rank(%rank) model(term_pf) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank HFF) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "sm_heavy_flamer"	filled	{user "weapon1"}}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon1"}
	}
)

(define "Assault_Cannon_Powerfist"	
	("Skeleton" color(%color) rank(%rank) model(term_pf) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank ACC) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "sm_assault_cannon"	filled	{user "weapon"}}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon"}
	}
)

(define "Stormbolter_Powerclaw"	
	("Skeleton" color(%color) rank(%rank) model(term_claw) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank SBB) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "sm_storm_bolter_term"	filled	{user "weapon2"}}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon2"}
	}
)

(define "Stormbolter_Powerfist"	
	("Skeleton" color(%color) rank(%rank) model(term_pf) anm(Ranged))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank SBB) Health(9000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.0) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}	{Props "SC_plataform_prop_misc_melee_prioritize_ranged"}
	
	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait

	{extender "inventory"
		{box
			{item "sm_storm_bolter_term"	filled	{user "weapon2"}}
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_powerfist"}}
		{place "weapon2"}
	}
)

(define "Thunder_Hammer_Shield"		
	("Skeleton" color(%color) rank(%rank) model(term_shth) anm(Melee))
	
	("SC_Troopers_Terminators_Breed" Tag(%rank SHTH) Health(15000) Health_Modifier(%health_modifier) Health_Regen(0) Speed(1.2) Speed_Modifier(%speed_modifier))
	{Props "SC_plataform_prop_misc_melee"}

	{tag "sc_skin_tag_trait_melee_resistance_t4"}	; // <- melee trait
	
	{extender "inventory"
		{box
			{item "lv40k_sm_terminator_item"}
		}
	}
	{Weaponry
		{place "melee"		{weapon "sm_terminator_thunderhammer"}}
		{place "weapon"}
	}
)

; ============================================================================================================== ;
; // PERK DEFINES
; ============================================================================================================== ;

; // *** Ultramarines *** - Traits: None. 

(define "Perk_Ultramarines_Term_PF_AC"			("Assault_Cannon_Powerfist"				color(ultramarines) rank(def)	speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Ultramarines_Term_PF_AC_SGT"		("Assault_Cannon_Powerfist_Cyclone"		color(ultramarines) rank(sgt)	speed_modifier(1.0) health_modifier(1.5)))
 
(define "Perk_Ultramarines_Term_PF_SB"			("Stormbolter_Powerfist"				color(ultramarines) rank(def)	speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Ultramarines_Term_PF_SB_SGT"		("Stormbolter_Powerclaw"				color(ultramarines) rank(sgt)	speed_modifier(1.0) health_modifier(1.5)))

(define "Perk_Ultramarines_Term_PF_HF"			("Heavy_Flamer_Powerfist"				color(ultramarines) rank(def)	speed_modifier(1.0) health_modifier(1.0)))
(define "Perk_Ultramarines_Term_PF_HF_SGT"		("Heavy_Flamer_Powerfist"				color(ultramarines) rank(sgt)	speed_modifier(1.0) health_modifier(1.5)))

(define "Perk_Ultramarines_Term_SH_TH"			("Thunder_Hammer_Shield"				color(ultramarines) rank(def)	speed_modifier(1.2) health_modifier(1.0)))
(define "Perk_Ultramarines_Term_SH_TH_SGT"		("Thunder_Hammer_Shield"				color(ultramarines) rank(sgt)	speed_modifier(1.2) health_modifier(1.5)))

; // Commander
(define "Perk_Ultramarines_Term_PF_AC_H_COM"	("Assault_Cannon_Powerfist_Cyclone"		color(ultramarines) rank(com)	speed_modifier(1.0) health_modifier(2.0)))
(define "Perk_Ultramarines_Term_PF_SB_H_COM"	("Stormbolter_Powerclaw"				color(ultramarines) rank(com)	speed_modifier(1.0) health_modifier(2.0)))
(define "Perk_Ultramarines_Term_PF_HF_H_COM"	("Heavy_Flamer_Powerfist"				color(ultramarines) rank(com)	speed_modifier(1.0) health_modifier(2.0)))
(define "Perk_Ultramarines_Term_SH_TH_H_COM"	("Thunder_Hammer_Shield"				color(ultramarines) rank(com)	speed_modifier(1.2) health_modifier(3.0)))
