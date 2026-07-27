
;	<<<< --------------------------------------------------------->>>>			 
;	<< [=============== Humanskin: LV40k TYRANID ZOANTHROPES ===============] >>
;	<<<<---------------------------------------------------------->>>>			 

{On "SC_H_Skin_Call_Set_LV40k_Tyranidzoanthrope_Skin"		
	("SC_H_Skin_Define_Custom_Skeletons_Listed" args 
		not	; 0 GEM_DEFAULT_SKIN
		not	; 1 HALO_BRUTE 
		not	; 2 HALO_ELITE
		not	; 3 HALO_GRUNT 
		not	; 4 HALO_JACKAL 
		not	; 5 HALO_MARINE
		not	; 6 HALO_SPARTAN
		not	; 7 LV40k_SPACEMARINE 
		not  ; 8 LV40k_ORKBOY
		not  ; 9 LV40k_ORKNOB
		not ; 10 LV40k_TYRANIDGAUNT
		not ; 11 LV40k_TYRANIDWARRIOR
		not ; 12 LV40k_ORKGROT
		is ; 13 LV40k_TYRANIDZOANTHROPE
		not ; 14 LV40k_TYRANIDRAVENER
		not	; 15 LV40k_SPACEMARINE_PRIMARIS
		not	; 16 LV40k_SCOUTMARINE
		not	; 17 LV40k_SERVITOR
		not ; 18 LV40k_TYRANIDVENOMTHROPE
		not ; 19 LV40k_OGRYN
		not ; 20 LV40k_ELDARFEMALE
	)
	
	; // Has no legs...
	("SC_H_Skin_Define_Link_Views" 
		foot_left("") 	
		foot_right("") 
		head("#zth_rig-bip01_head")
		gun_back("gun_back")
		body("#zth_rig-bip01_pelvis")
	)
}