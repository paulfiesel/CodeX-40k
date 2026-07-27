
; Check instructions in: "/set/breed/SC_Plataform/[MP]/SC_Skin_Selector.inc"

(Include "[Randomizer]/LV40k_primaris.inc")
(Include "[Randomizer]/LV40k_scouts.inc")

(Include "[Randomizer]/LV40k_spacemarines.inc")
(Include "[Randomizer]/LV40k_spacemarines_assault.inc")
(Include "[Randomizer]/LV40k_spacemarines_Deathwatch.inc")
(Include "[Randomizer]/LV40k_spacemarines_devastator.inc")
(Include "[Randomizer]/LV40k_spacemarines_tactical.inc")
(Include "[Randomizer]/LV40k_spacemarines_heroes.inc")
(Include "[Randomizer]/LV40k_adm_servitor.inc")

(Define "LV40k_MP_Breeds_SMs"

;================================================================================================================================================;
; // Ultramarines
;================================================================================================================================================;

;//										skin_breed_name			skin_skeleton				randomizer_ID

; ------------------------------------------------------------------------------------ ; 
; // [T0] - Serfs
; ------------------------------------------------------------------------------------ ;

; // NOT AVAILABLE [...]

; ------------------------------------------------------------------------------------ ; 
; // [T1] - Scouts
; ------------------------------------------------------------------------------------ ;

; // SCOUT TACTICAL
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_01		LV40k_Scout				LV40k_Scouts_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_02		LV40k_Scout				LV40k_Scouts_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_03		LV40k_Scout				LV40k_Scouts_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_04		LV40k_Scout				LV40k_Scouts_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_05		LV40k_Scout				LV40k_Scouts_001)

; // SCOUT HEAVY WEAPONS
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_06		LV40k_Scout				LV40k_Scouts_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_07		LV40k_Scout				LV40k_Scouts_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_08		LV40k_Scout				LV40k_Scouts_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_09		LV40k_Scout				LV40k_Scouts_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_10		LV40k_Scout				LV40k_Scouts_003)	; // <- Sniper

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t1_sq_01	LV40k_Scout				LV40k_Scouts_004)

; ------------------------------------------------------------------------------------ ; 
; // [T2] - Space Marines Default 
; ------------------------------------------------------------------------------------ ;

; 0-8 = Tactical
; 9-14 = Assault
; 15-20 = Devastator

; // TACTICALS
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_01		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_02		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_03		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_04		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_05		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_06		LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_07		LV40k_SpaceMarine			LV40k_SMs_001)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_08		LV40k_SpaceMarine			LV40k_SMs_001)	

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_sq_01	LV40k_SpaceMarine			LV40k_SMs_001_sgt)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_sq_02	LV40k_SpaceMarine			LV40k_SMs_001_sgt)

; // ASSAULT MARINES
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_09		LV40k_SpaceMarine			LV40k_SMs_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_10		LV40k_SpaceMarine			LV40k_SMs_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_11		LV40k_SpaceMarine			LV40k_SMs_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_12		LV40k_SpaceMarine			LV40k_SMs_002)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_13		LV40k_SpaceMarine			LV40k_SMs_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_14		LV40k_SpaceMarine			LV40k_SMs_002)

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_sq_03	LV40k_SpaceMarine			LV40k_SMs_002_sgt)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_sq_04	LV40k_SpaceMarine			LV40k_SMs_002_sgt)

; // DEVASTATORS
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_15		LV40k_SpaceMarine			LV40k_SMs_003)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_16		LV40k_SpaceMarine			LV40k_SMs_003)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_17		LV40k_SpaceMarine			LV40k_SMs_003)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_18		LV40k_SpaceMarine			LV40k_SMs_003)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_19		LV40k_SpaceMarine			LV40k_SMs_003)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_20		LV40k_SpaceMarine			LV40k_SMs_003)

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t2_sq_05	LV40k_SpaceMarine			LV40k_SMs_003_sgt)

; ------------------------------------------------------------------------------------ ; 
; // [T3] - Veterans
; ------------------------------------------------------------------------------------ ;

; // VETERAN TACTICAL
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_01		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_02		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_03		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_04		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_05		LV40k_SpaceMarine			LV40k_SMs_001_vet)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_06		LV40k_SpaceMarine			LV40k_SMs_001_vet)	

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_sq_01	LV40k_SpaceMarine			LV40k_SMs_001_vet_sgt)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_sq_02	LV40k_SpaceMarine			LV40k_SMs_001_vet_sgt)

; // VETERAN ASSAULT
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_07		LV40k_SpaceMarine			LV40k_SMs_002_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_08		LV40k_SpaceMarine			LV40k_SMs_002_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_09		LV40k_SpaceMarine			LV40k_SMs_002_vet)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_10		LV40k_SpaceMarine			LV40k_SMs_002_vet)			

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_sq_03	LV40k_SpaceMarine			LV40k_SMs_002_vet_sgt)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_sq_04	LV40k_SpaceMarine			LV40k_SMs_002_vet_sgt)

; // VETERAN DEVASTATOR
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_11		LV40k_SpaceMarine			LV40k_SMs_003_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_12		LV40k_SpaceMarine			LV40k_SMs_003_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_13		LV40k_SpaceMarine			LV40k_SMs_003_vet)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_14		LV40k_SpaceMarine			LV40k_SMs_003_vet)
			
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t3_sq_05	LV40k_SpaceMarine			LV40k_SMs_003_vet_sgt)

; ------------------------------------------------------------------------------------ ; 
; // [T4] - Intercessors
; ------------------------------------------------------------------------------------ ;

; // TACTICAL
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_01		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_02		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_03		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_04		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_sq_01	LV40k_SpaceMarine_P			LV40k_SMs_P_001_sgt)	

; // DEVASTATOR 
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_04		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_05		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_06		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_07		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	

; // REIVER
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_08		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_09		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_10		LV40k_SpaceMarine_P			LV40k_SMs_P_001)		

; // INCEPTOR
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_11		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_12		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	

; ------------------------------------------------------------------------------------ ; 
; // [T5] - 1st Company / Sternguard
; ------------------------------------------------------------------------------------ ;

; // STERNGUARD
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_01		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_02		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_03		LV40k_SpaceMarine			LV40k_SMs_001_vet)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_04		LV40k_SpaceMarine			LV40k_SMs_001_vet)	

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_sq_01	LV40k_SpaceMarine			LV40k_SMs_001_vet_sgt)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t5_sq_02	LV40k_SpaceMarine			LV40k_SMs_001_vet_sgt)

; // PRIMARIS STERNGUARD
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_05		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_06		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_07		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_08		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	

; // HONOR GUARD
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_09		LV40k_SpaceMarine			LV40k_SMs_006)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_10		LV40k_SpaceMarine			LV40k_SMs_006)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_11		LV40k_SpaceMarine			LV40k_SMs_006)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_12		LV40k_SpaceMarine			LV40k_SMs_006)	

; // PRIMARIS HONOR GUARD 
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_13		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_14		LV40k_SpaceMarine_P			LV40k_SMs_P_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_15		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_t4_16		LV40k_SpaceMarine_P			LV40k_SMs_P_001)	

; ------------------------------------------------------------------------------------ ; 
; // [TX] - Specialists
; ------------------------------------------------------------------------------------ ;

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_tankman_01			LV40k_Scout					LV40k_Scouts_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_tankman_02			LV40k_SpaceMarine			LV40k_SMs_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_techmarine_01		LV40k_SpaceMarine			LV40k_SMs_H_005)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_chaplain_01			LV40k_SpaceMarine			LV40k_SMs_H_002)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_commander_01			LV40k_SpaceMarine			LV40k_SMs_H_003)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_medic_01				LV40k_SpaceMarine			LV40k_SMs_H_001)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_psyker_01			LV40k_SpaceMarine			LV40k_SMs_H_004)

("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_servitor_01			LV40k_Servitor				LV40k_SMs_Servitor)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_servitor_02			LV40k_Servitor				LV40k_SMs_Servitor)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_servitor_03			LV40k_Servitor				LV40k_SMs_Servitor)
("SC_Skin_Tag_Selector"		args	%0	sm_ultramarines_tx_servitor_04			LV40k_Servitor				LV40k_SMs_Servitor)


;================================================================================================================================================;
; // DEATHWATCH
;================================================================================================================================================;

;//										skin_breed_name			skin_skeleton				randomizer_ID

; ------------------------------------------------------------------------------------ ; 
; // [T0] - Serfs
; ------------------------------------------------------------------------------------ ;

; // NOT AVAILABLE [...]

; ------------------------------------------------------------------------------------ ; 
; // [T1] - Scouts
; ------------------------------------------------------------------------------------ ;

; // SCOUT TACTICAL
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_01		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_02		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_03		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_04		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_05		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_06		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_07		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_08		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_09		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_10		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_11		LV40k_SpaceMarine				LV40k_SMs_025)
("SC_Skin_Tag_Selector"		args	%0	sm_deathwatch_t1_12		LV40k_SpaceMarine				LV40k_SMs_025)


)