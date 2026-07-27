
(Define "Model_Path"
	{bone "%a"
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c.ply"} 
		{visibility %b}	
	}
)

(Define "Model_Path_LOD1"
	{bone "%a"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c.ply"} 	
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD1.ply"}
		} 
		{visibility %b}	
	}
)

(Define "Model_Path_LOD2"
	{bone "%a"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD2.ply"} 
		}
		{visibility %b}	
	}
)

(Define "Model_Path_LOD3"
	{bone "%a"
		{LODView
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD1.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD2.ply"} 
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Heavy_Infantry/SM_Terminator_Trooper/%c_LOD3.ply"} 
		}
		{visibility %b}	
	}
)

(Define "Common_Parts_Tartaros"		
	("Model_Path_LOD3"	a(T_Torso1)				b(1) c(Tartaros/T_Torso))
	
	("Model_Path"		a(T_Chestplate1)		b(1) c(Tartaros/tr_chest1))
	("Model_Path"		a(T_Chestplate2)		b(0) c(Tartaros/tr_chest2))
	("Model_Path"		a(T_Chestplate3)		b(0) c(Tartaros/tr_chest3))
	("Model_Path"		a(T_Chestplate4)		b(0) c(Tartaros/tr_chest4))
	("Model_Path"		a(T_Chestplate5)		b(0) c(Tartaros/tr_chest5))
	("Model_Path"		a(T_Chestplate6)		b(0) c(Tartaros/tr_chest6))
	("Model_Path"		a(T_Chestplate7)		b(0) c(Tartaros/tr_chest7))
	
	("Model_Path"		a(TR_Artificer)			b(1) c(Tartaros/TR_Artificer))
	
	("Model_Path"		a(T_Gorget1)			b(1) c(Tartaros/TR_Gorget1))
	("Model_Path"		a(T_Gorget2)			b(0) c(Tartaros/TR_Gorget2))
	("Model_Path"		a(T_Gorget3)			b(0) c(Tartaros/TR_Gorget3))
	("Model_Path"		a(T_Gorget4)			b(0) c(Tartaros/TR_Gorget4))
	("Model_Path"		a(T_Gorget5)			b(0) c(Tartaros/TR_Gorget5))
	
	; ==================================================================================== ;
	
	("Model_Path"		a(T_Shoulder_Pads1) b(1) c(Tartaros/T_Shoulder_Pads))
	
	("Model_Path"		a(T_Shoulder_L_D1) b(1) c(Tartaros/SH_L_Crux_V1))
	("Model_Path"		a(T_Shoulder_L_D2) b(0) c(Tartaros/SH_L_Crux_V2))
	("Model_Path"		a(T_Shoulder_L_D3) b(0) c(Tartaros/SH_L_Studs))
	
	("Model_Path"		a(T_Shoulder_R_D1) b(1) c(Tartaros/SH_R_Studs))
	
	; ==================================================================================== ;
	
	("Model_Path"		a(T_helmet)			b(1) c(Tartaros/t_helmet3))
	
	("Model_Path_LOD1"	a(T_legs1)			b(1) c(Tartaros/T_legs1))
	("Model_Path_LOD1"	a(T_legs2)			b(0) c(Tartaros/T_legs2))
	("Model_Path_LOD1"	a(T_legs3)			b(0) c(Tartaros/T_legs3))
	
	; ==================================================================================== ;
		
	("Model_Path"	a(T_legs_L_D1)			b(1) c(Tartaros/t_legs_l_d1))
	("Model_Path"	a(T_legs_L_D2)			b(0) c(Tartaros/t_legs_l_d2))
	
	("Model_Path"	a(T_legs_R_D1)			b(1) c(Tartaros/t_legs_r_d1))
	("Model_Path"	a(T_legs_R_D2)			b(0) c(Tartaros/t_legs_r_d2))
)

(Define "Common_Parts_Indomitus"		
	("Model_Path_LOD3"	a(T_Torso1)				b(1) c(indomitus/T_Torso1))
	
	("Model_Path"		a(T_Chestplate1)		b(1) c(indomitus/Chest_Ultima1))
	("Model_Path"		a(T_Chestplate2)		b(0) c(indomitus/Chest_Ultima2))
	("Model_Path"		a(T_Chestplate3)		b(0) c(indomitus/Chest_Ultima3))
	("Model_Path"		a(T_Chestplate4)		b(0) c(indomitus/Chest_Ultima4))
	("Model_Path"		a(T_Chestplate5)		b(0) c(indomitus/Chest_Ultima5))
	
	("Model_Path"		a(T_Artificer)			b(0) c(indomitus/TR_Artificer))
	("Model_Path"		a(T_Gorget)				b(0) c(indomitus/TR_Gorget))
	("Model_Path"		a(T_Chestropes)			b(0) c(indomitus/TR_Chestropes))
	("Model_Path"		a(T_Eagle)				b(0) c(indomitus/TR_Eagle))
	("Model_Path"		a(T_Iron_Halo)			b(0) c(indomitus/T_Iron_halo))
	("Model_Path"		a(T_Belt)				b(1) c(indomitus/Belt1))
	
	; ==================================================================================== ;
	
	("Model_Path"		a(T_Shoulder_Pads1) b(1) c(indomitus/T_Shoulder_Pads1))
	("Model_Path"		a(T_Shoulder_Pads2) b(0) c(indomitus/T_Shoulder_Pads2))
	("Model_Path"		a(T_Shoulder_Pads3) b(0) c(indomitus/T_Shoulder_Pads3))
	("Model_Path"		a(T_Shoulder_Pads4) b(0) c(indomitus/T_Shoulder_Pads4))
	("Model_Path"		a(T_Shoulder_Pads5) b(0) c(indomitus/T_Shoulder_Pads5))
	("Model_Path"		a(T_Shoulder_Pads6) b(0) c(indomitus/T_Shoulder_Pads6))
	
	("Model_Path"		a(T_Shoulder_L_D1) b(0) c(indomitus/SH_L_Crux_V1))
	("Model_Path"		a(T_Shoulder_L_D2) b(0) c(indomitus/SH_L_Crux_V2))
	("Model_Path"		a(T_Shoulder_L_D3) b(0) c(indomitus/SH_L_Shoulder_Shield1))
	("Model_Path"		a(T_Shoulder_L_D4) b(0) c(indomitus/SH_L_Shoulder_Shield2))
	("Model_Path"		a(T_Shoulder_L_D5) b(0) c(indomitus/SH_L_Shoulderwing))
	("Model_Path"		a(T_Shoulder_R_D1) b(0) c(indomitus/SH_R_Eagle))
	("Model_Path"		a(T_Shoulder_R_D2) b(0) c(indomitus/SH_R_Imperialis))
	
	; ==================================================================================== ;
	
	("Model_Path_LOD1"	a(T_helmet)			b(1) c(indomitus/T_Helmet))
	
	("Model_Path_LOD2"	a(T_legs1)			b(1) c(indomitus/T_legs1))
	("Model_Path_LOD2"	a(T_legs2)			b(0) c(indomitus/T_legs2))
	("Model_Path_LOD2"	a(T_legs3)			b(0) c(indomitus/T_legs3_MK3))
	("Model_Path_LOD2"	a(T_legs4)			b(0) c(indomitus/T_legs4))
	("Model_Path_LOD2"	a(T_legs5)			b(0) c(indomitus/T_legs5))
	
	; ==================================================================================== ;
		
	("Model_Path"	a(T_legs_L_D1)			b(0) c(indomitus/LG_L_Eagle))
	("Model_Path"	a(T_legs_L_D2)			b(0) c(indomitus/LG_L_Chains))
	("Model_Path"	a(T_legs_L_D3)			b(0) c(indomitus/LG_L_Studs))
	
	("Model_Path"	a(T_legs_R_D1)			b(0) c(indomitus/LG_R_Eagle))
	("Model_Path"	a(T_legs_R_D2)			b(0) c(indomitus/LG_R_Studs))
	("Model_Path"	a(T_legs_R_D3)			b(0) c(indomitus/LG_R_Chains))
)

(Define "models_terminator_ranged_powerfist"
	{bone "Models"
		("Common_Parts_Indomitus")
		("Model_Path_LOD2"		a(w_powerfist) b(1) c(w_powerfist))
	}
)

(Define "models_terminator_ranged_powerclaw"
	{bone "Models"
		("Common_Parts_Indomitus")
		("Model_Path_LOD2"		a(w_powerfist) b(1) c(w_powerfist))
		("Model_Path"			a(W_lightningclaw) b(1) c(W_lightningclaw))
	}
)

(Define "models_terminator_ranged_powerfist_cyclone"
	{bone "Models"
		("Common_Parts_Indomitus")
		("Model_Path_LOD2"		a(w_powerfist) b(1) c(w_powerfist))
		("Model_Path"			a(W_Cyclone_Launcher) b(1) c(W_Cyclone_Launcher))
	}
)

(Define "models_terminator_melee_shield_thunderhammer"
	{bone "Models"
		("Common_Parts_Indomitus")
		("Model_Path_LOD2"		a(T_Shoulder_Pads1) b(1) c(w_stormshield))
		("Model_Path"			a(w_thunderhammer) b(1) c(w_thunderhammer))
	}
)