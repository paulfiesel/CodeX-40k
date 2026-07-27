

(Include "MDL_Skeleton.inc")
	

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Tyr_Ravener_1"	("Skeleton" color(%color) skin(+models_ravener)))
(define "Pattern_Tyr_Ravener_2"	("Skeleton" color(%color) skin(+models_ravener_alpha)))

; ============================================================================================================== ;
; // SKIN DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***
(define "Skin_Kraken_Ravener_1"		("Pattern_Tyr_Ravener_1"	color(kraken)))
(define "Skin_Kraken_Ravener_2"		("Pattern_Tyr_Ravener_2"	color(kraken)))

; // *** LEVIATHAN ***
(define "Skin_Leviathan_Ravener_1"	("Pattern_Tyr_Ravener_1"	color(Leviathan)))
(define "Skin_Leviathan_Ravener_2"	("Pattern_Tyr_Ravener_2"	color(Leviathan)))
