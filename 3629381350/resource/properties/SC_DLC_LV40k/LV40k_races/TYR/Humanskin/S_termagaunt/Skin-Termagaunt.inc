

(Include "MDL_Skeleton.inc")
	

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_Tyr_Termagaunt_1"	("Skeleton" color(%color) skin(+models_devourer)))
(define "Pattern_Tyr_Termagaunt_2"	("Skeleton" color(%color) skin(+models_devourer_adapted)))

; ============================================================================================================== ;
; // SKIN DEFINES
; ============================================================================================================== ;

; // *** KRAKEN ***
(define "Skin_Kraken_Termagaunt_1"		("Pattern_Tyr_Termagaunt_1"	color(kraken)))
(define "Skin_Kraken_Termagaunt_2"		("Pattern_Tyr_Termagaunt_2"	color(kraken)))

; // *** LEVIATHAN ***
(define "Skin_Leviathan_Termagaunt_1"	("Pattern_Tyr_Termagaunt_1"	color(Leviathan)))
(define "Skin_Leviathan_Termagaunt_2"	("Pattern_Tyr_Termagaunt_2"	color(Leviathan)))
