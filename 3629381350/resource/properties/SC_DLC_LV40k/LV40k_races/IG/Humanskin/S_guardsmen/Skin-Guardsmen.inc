

(Include "MDL_Skeleton.inc")
	

; ============================================================================================================== ;
; // PATTERNS
; ============================================================================================================== ;

(define "Pattern_IG_Commander_1"			("Skeleton" color(%color) skin(+models_commander)))
(define "Pattern_IG_Officer_1"				("Skeleton" color(%color) skin(+models_officer)))
(define "Pattern_IG_Lieutenant_1"			("Skeleton" color(%color) skin(+models_lieutenant)))

(define "Pattern_IG_Guardsmen_1"			("Skeleton" color(%color) skin(+models_guardsmen)))
(define "Pattern_IG_Guardsmen_F_1"			("Skeleton" color(%color) skin(+models_guardsmen_F)))
(define "Pattern_IG_Guardsmen_SGT_1"		("Skeleton" color(%color) skin(+models_guardsmen_sgt)))

(define "Pattern_IG_Veteran_1"				("Skeleton" color(%color) skin(+models_veteran)))
(define "Pattern_IG_Veteran_SGT_1"			("Skeleton" color(%color) skin(+models_veteran_sgt)))

(define "Pattern_IG_Stormtrooper_1"			("Skeleton" color(%color) skin(+models_stormtrooper)))
(define "Pattern_IG_Stormtrooper_SGT_1"		("Skeleton" color(%color) skin(+models_stormtrooper_sgt)))

(define "Pattern_IG_Medicae_1"				("Skeleton" color(%color) skin(+models_medicae)))
(define "Pattern_IG_Medicae_F_1"			("Skeleton" color(%color) skin(+models_medicae_F)))

(define "Pattern_IG_Tankman_1"				("Skeleton" color(%color) skin(+models_tankman)))
(define "Pattern_IG_Voxcaster_1"			("Skeleton" color(%color) skin(+models_voxcaster)))
(define "Pattern_IG_Gunner_1"				("Skeleton" color(%color) skin(+models_gunner)))
(define "Pattern_IG_Sniper_1"				("Skeleton" color(%color) skin(+models_sniper)))

; ============================================================================================================== ;
; // SKIN DEFINES
; ============================================================================================================== ;

; // *** TEMPESTUS SCIONS ***

(define "Skin_Scions_Stormtrooper_1"		("Pattern_IG_Stormtrooper_1"		color(scn_stormtrooper)))
(define "Skin_Scions_Stormtrooper_SGT_1"	("Pattern_IG_Stormtrooper_SGT_1"	color(scn_stormtrooper)))

; // *** CADIANS ***

(define "Skin_Cadian_Whiteshield_1"			("Pattern_IG_Guardsmen_1"			color(cdn_whiteshield)))
(define "Skin_Cadian_Whiteshield_F_1"		("Pattern_IG_Guardsmen_F_1"			color(cdn_whiteshield)))

(define "Skin_Cadian_Medicae_1"				("Pattern_IG_Medicae_1"				color(cdn_medicae)))
(define "Skin_Cadian_Medicae_F_1"			("Pattern_IG_Medicae_F_1"			color(cdn_medicae)))

(define "Skin_Cadian_Lieutenant_1"			("Pattern_IG_Lieutenant_1"			color(cdn_guardsmen)))
(define "Skin_Cadian_Commander_1"			("Pattern_IG_Commander_1"			color(cdn_guardsmen)))
(define "Skin_Cadian_Castellan_1"			("Pattern_IG_Officer_1"				color(cdn_guardsmen)))
(define "Skin_Cadian_Sniper_1"				("Pattern_IG_Sniper_1"				color(cdn_guardsmen)))
(define "Skin_Cadian_Tankman_1"				("Pattern_IG_Tankman_1"				color(cdn_guardsmen)))
(define "Skin_Cadian_Gunner_1"				("Pattern_IG_Gunner_1"				color(cdn_guardsmen)))
(define "Skin_Cadian_Voxcaster_1"			("Pattern_IG_Voxcaster_1"			color(cdn_guardsmen)))

(define "Skin_Cadian_Guardsmen_F_1"			("Pattern_IG_Guardsmen_F_1"			color(cdn_guardsmen)))
(define "Skin_Cadian_Guardsmen_1"			("Pattern_IG_Guardsmen_1"			color(cdn_guardsmen)))
(define "Skin_Cadian_Guardsmen_SGT_1"		("Pattern_IG_Guardsmen_SGT_1"		color(cdn_guardsmen)))
(define "Skin_Cadian_Veteran_1"				("Pattern_IG_Veteran_1"				color(cdn_guardsmen)))
(define "Skin_Cadian_Veteran_SGT_1"			("Pattern_IG_Veteran_SGT_1"			color(cdn_guardsmen)))
(define "Skin_Cadian_Stormtrooper_1"		("Pattern_IG_Stormtrooper_1"		color(cdn_stormtrooper)))
(define "Skin_Cadian_Stormtrooper_SGT_1"	("Pattern_IG_Stormtrooper_SGT_1"	color(cdn_stormtrooper)))

; // *** Ultramar ***

(define "Skin_Ultra_Medicae_1"				("Pattern_IG_Medicae_1"				color(ult_medicae)))
(define "Skin_Ultra_Tankman_1"				("Pattern_IG_Tankman_1"				color(ult_guardsmen)))
(define "Skin_Ultra_Gunner_1"				("Pattern_IG_Gunner_1"				color(ult_guardsmen)))
(define "Skin_Ultra_Voxcaster_1"			("Pattern_IG_Voxcaster_1"			color(ult_guardsmen)))

(define "Skin_Ultra_Guardsmen_1"			("Pattern_IG_Guardsmen_1"			color(ult_guardsmen)))
(define "Skin_Ultra_Guardsmen_SGT_1"		("Pattern_IG_Guardsmen_SGT_1"		color(ult_guardsmen)))
(define "Skin_Ultra_Stormtrooper_1"			("Pattern_IG_Stormtrooper_1"		color(ult_stormtrooper)))
(define "Skin_Ultra_Stormtrooper_SGT_1"		("Pattern_IG_Stormtrooper_SGT_1"	color(ult_stormtrooper)))