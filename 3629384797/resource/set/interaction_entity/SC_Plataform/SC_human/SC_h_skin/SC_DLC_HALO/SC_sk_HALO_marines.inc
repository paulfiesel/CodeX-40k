
;	<<<< -------------------------------------------------------->>>>			 
;	<< [=============== Humanskin: HALO MARINES ===============] >>
;	<<<<--------------------------------------------------------->>>>			 

{On "SC_H_Skin_Call_Set_HALO_Marine_Skin"			
	{Tags add "sc_h_skin_tag_fsm_anim_default"}
	
	("SC_H_Skin_Define_Custom_Skeletons_Listed" args 
		not	; 0 GEM_DEFAULT_SKIN
		not	; 1 HALO_BRUTE 
		not	; 2 HALO_ELITE
		not	; 3 HALO_GRUNT 
		not	; 4 HALO_JACKAL 
		is	; 5 HALO_MARINE
		not	; 6 HALO_SPARTAN
		not	; 7 W40k_SPACEMARINE 
		not ; 8 W40k_ORKBOY
		not ; 9 W40k_ORKNOB
		not ; 10 W40k_TYRANIDGAUNT
		not ; 11 W40k_TYRANIDWARRIOR
		not ; 12 LV40k_ORKGROT
		not ; 13 LV40k_TYRANIDZOANTHROPE
		not ; 14 LV40k_TYRANIDRAVENER
		not	; 15 LV40k_SPACEMARINE_PRIMARIS
		not	; 16 LV40k_SCOUTMARINE
		not	; 17 LV40k_SERVITOR
		not ; 18 LV40k_TYRANIDVENOMTHROPE
		not ; 19 LV40k_OGRYN
		not ; 20 LV40k_ELDARFEMALE
	)
	("SC_H_Skin_Define_Link_Views" 
		foot_left("#hr_marine-b_l_foot") 	
		foot_right("#hr_marine-b_r_foot") 
		head("#hr_marine-b_head")
		gun_back("gun_back")
		body("#hr_marine-b_spine1")
	)
}