
; // THIS IS A TOTALLY EXPERIMENTAL CODE DESIGNED TO FIX THE IMMORTALITY BUG THAT HAPPENS WITH FAUNA IN GEM.

(Define "SC_TP_EXP_Define_Spawn_Event"
)

; ---------------------------------------------------------------------------------------------------------------- ;

; Fauna Size1 Up to max 2000hp
; Fauna Size2 From 2001hp to 10.000hp
; Fauna Size3 From 10.001hp up to max 30.000hp

; Fauna Size4 From 40.000hp up to max 60.000hp
; Fauna Size5 From 80.000hp up to max 150.000hp
; Fauna Size6 From 200.000hp up to max 300.000hp

; ================================================================================================== ;
; // Blast
; ================================================================================================== ;

(Define "SC_TP_Exp_Define_Blast"
	{if not "SC_SH_Main_Flag_Is_Online"	
		{if prop "SC_plataform_prop_troopers_size1"	
			{if min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 4		{Call "SC_M_Acc_Define_Deal_bullet_debug_x80"}
			else min_energy 3		{Call "SC_M_Acc_Define_Deal_bullet_debug_x60"}
			else min_energy 1.25	{Call "SC_M_Acc_Define_Deal_bullet_debug_x30"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x10"}
			}
		else prop "SC_plataform_prop_troopers_size2"	
			{if min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
			else min_energy 25		{Call "SC_M_Acc_Define_Deal_bullet_debug_x150"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 15		{Call "SC_M_Acc_Define_Deal_bullet_debug_x50"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_bullet_debug_x30"}
			else min_energy 8		{Call "SC_M_Acc_Define_Deal_bullet_debug_x07"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x04"}
			else min_energy 3		{Call "SC_M_Acc_Define_Deal_bullet_debug_x03"}
			else min_energy 1.25	{Call "SC_M_Acc_Define_Deal_bullet_debug_x02"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x01"}
			}
		else prop "SC_plataform_prop_troopers_size3"	
			{if min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x300"}
			else min_energy 25		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_bullet_debug_x150"}
			else min_energy 15		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_bullet_debug_x50"}
			else min_energy 8		{Call "SC_M_Acc_Define_Deal_bullet_debug_x08"}	
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x03"}
			else min_energy 3		{Call "SC_M_Acc_Define_Deal_bullet_debug_x02"}
			else min_energy 1.25	{Call "SC_M_Acc_Define_Deal_bullet_debug_x01"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x01"}
			}
		else prop "SC_plataform_prop_troopers_size4"	
			{if min_energy 40		{Call "SC_M_Acc_Define_Deal_bullet_debug_x300"}
			else min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 15		{Call "SC_M_Acc_Define_Deal_bullet_debug_x25"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_bullet_debug_x15"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x05"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x01"}
			}
		else prop "SC_plataform_prop_troopers_size5"	
			{if min_energy 60		{Call "SC_M_Acc_Define_Deal_bullet_debug_x400"}
			else min_energy 50		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
			else min_energy 40		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x25"}
			else min_energy 20		{Call "SC_M_Acc_Define_Deal_bullet_debug_x15"}
			else min_energy 10		{Call "SC_M_Acc_Define_Deal_bullet_debug_x10"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x05"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x01"}
			}
		else prop "SC_plataform_prop_troopers_size6"	
			{if min_energy 75		{Call "SC_M_Acc_Define_Deal_bullet_debug_x400"}
			else min_energy 60		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
			else min_energy 50		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
			else min_energy 40		{Call "SC_M_Acc_Define_Deal_bullet_debug_x25"}
			else min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x15"}
			else min_energy 15		{Call "SC_M_Acc_Define_Deal_bullet_debug_x10"}
			else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x05"}
			else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x00"}
			}
		}
	}
)

; ================================================================================================== ;
; // Bullet
; ================================================================================================== ;

(define "SC_TP_Exp_Define_Bullet"					; // BUZZ: <- Specific Bullet hits 
	{if not "SC_SH_Main_Flag_Is_Online"	
		{if stuff "bomb"								{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh6"}

		else stuff "shell auto"							{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_aut1"}
		else stuff "shell zenite"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh1"}
		
		else stuff "grenade size1"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_aut1"}
		else stuff "grenade size2"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh2"}
		else stuff "grenade size3"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh3"}
			
		else stuff "rocketlauncher size1"				{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh2"}
		else stuff "rocketlauncher size2"				{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh3"}
			
		else stuff "shell size1"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh1"}
		else stuff "shell size2"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh2"}
		else stuff "shell size3"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh3"}
		else stuff "shell size4"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh4"}
		else stuff "shell size5"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh5"}
		else stuff "shell size6"						{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_sh6"}
		
		else stuff "SC_bullet_anti_tank"				{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_hp"}	; <- additional damage for this tag...
		
		else stuff "SC_veryhigh_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_vhp"}
		else stuff "SC_high_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_hp"}
		else stuff "SC_medium_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_mp"}
		else											{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_lp"}
		}
	}
)

(Define "SC_TP_Exp_Define_Process_Bullet"
	{if prop "SC_plataform_prop_troopers_size1"	
		{if  volume "SC_volume_armored"									
			("SC_TP_Exp_Define_Bullet"	
				x_sh1(x20)	x_sh2(x40)	x_sh3(x80)	x_sh4(x100)	x_sh5(x100)	x_sh6(x100)
				x_vhp(x15) x_hp(x10) x_mp(x05) x_lp(x02) 
			)
		else									
			("SC_TP_Exp_Define_Bullet"	
				x_sh1(x50)	x_sh2(x75)	x_sh3(x100)	x_sh4(x100)	x_sh5(x100)	x_sh6(x100)
				x_vhp(x20) x_hp(x15) x_mp(x08) x_lp(x03) 
			)
		}
		
	else prop "SC_plataform_prop_troopers_size2" 
		{if  volume "SC_volume_armored"									
			("SC_TP_Exp_Define_Bullet"	
				x_sh1(x05)	x_sh2(x10)	x_sh3(x20)	x_sh4(x50)	x_sh5(x100)	x_sh6(x200)
				x_vhp(x01) x_hp(x01) x_mp(x00) x_lp(x00) 
			)
		else									
			("SC_TP_Exp_Define_Bullet"	
				x_sh1(x10)	x_sh2(x20)	x_sh3(x30)	x_sh4(x50)	x_sh5(x100)	x_sh6(x200)
				x_vhp(x03) x_hp(x02) x_mp(x00) x_lp(x00) 
			)
		}
		
	else prop "SC_plataform_prop_troopers_size3" 
		
	else prop "SC_plataform_prop_troopers_size4" 
		
	else prop "SC_plataform_prop_troopers_size5"
		
	else prop "SC_plataform_prop_troopers_size6" 
		
	}
)

; ================================================================================================== ;
; // Get EXP tags defines
; ================================================================================================== ;

("SC_M_Acc_Define_Add_Calls" 
	tag(bullet_debug) 
)

{on "SC_M_Acc_Define_Deal_bullet_debug_x01"
	{if not dead 
		{if prop "SC_plataform_prop_troopers_size1"
			("SC_M_Acc_Define_Counter_100" tag(bullet_debug) do(die))
		else prop "SC_plataform_prop_troopers_size2"
			("SC_M_Acc_Define_Counter_200" tag(bullet_debug) do(die))
		else prop "SC_plataform_prop_troopers_size3"
			("SC_M_Acc_Define_Counter_300" tag(bullet_debug) do(die))
		
		; // ============ Creatures.
		
		else prop "SC_plataform_prop_troopers_size4"
			("SC_M_Acc_Define_Counter_250" tag(bullet_debug) do(die))
		else prop "SC_plataform_prop_troopers_size5"
			("SC_M_Acc_Define_Counter_300" tag(bullet_debug) do(die))
		else prop "SC_plataform_prop_troopers_size6"
			("SC_M_Acc_Define_Counter_400" tag(bullet_debug) do(die))
		}
	}
}

; ================================================================================================== ;

{On bullet_hit 
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Process_Bullet")
		}
	}
}

{On blast
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Blast")
		}
	}
}

{On "SC_TP_Main_Call_Exp_Chek_Blast"
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Blast")
		}
	}
}

{On "SC_TP_Main_Call_Exp_Chek_Bullet"
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Process_Bullet")
		}
	}
}