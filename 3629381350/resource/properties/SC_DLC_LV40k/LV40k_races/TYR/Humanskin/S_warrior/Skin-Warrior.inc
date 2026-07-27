

(Include "MDL_Skeleton.inc")
	

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Tyr_Warrior_1"			("Skeleton" color(%color) skin(+models_warrior)))
(define "Pattern_Tyr_Warrior_Prime_1"	("Skeleton" color(%color) skin(+models_prime)))

; ============================================================================================================== ;
; // SKIN DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***
(define "Skin_Kraken_Warrior_1"				("Pattern_Tyr_Warrior_1"		color(kraken)))
(define "Skin_Kraken_Warrior_2"				("Pattern_Tyr_Warrior_1"		color(kraken_2)))
(define "Skin_Kraken_Warrior_Prime_1"		("Pattern_Tyr_Warrior_Prime_1"	color(kraken_2)))

; // *** LEVIATHAN ***
(define "Skin_Leviathan_Warrior_1"			("Pattern_Tyr_Warrior_1"		color(leviathan)))
(define "Skin_Leviathan_Warrior_2"			("Pattern_Tyr_Warrior_1"		color(leviathan_2)))
(define "Skin_Leviathan_Warrior_Prime_1"	("Pattern_Tyr_Warrior_Prime_1"	color(leviathan_2)))

