
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

; // Ignore armor for blast, As for the momement...

(Define "SC_TP_Exp_Define_Blast"
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
		{if min_energy 50		{Call "SC_M_Acc_Define_Deal_bullet_debug_x300"}
		else min_energy 40		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
		else min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
		else min_energy 20		{Call "SC_M_Acc_Define_Deal_bullet_debug_x25"}
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
		{if min_energy 70		{Call "SC_M_Acc_Define_Deal_bullet_debug_x400"}
		else min_energy 60		{Call "SC_M_Acc_Define_Deal_bullet_debug_x200"}
		else min_energy 50		{Call "SC_M_Acc_Define_Deal_bullet_debug_x100"}
		else min_energy 40		{Call "SC_M_Acc_Define_Deal_bullet_debug_x25"}
		else min_energy 30		{Call "SC_M_Acc_Define_Deal_bullet_debug_x15"}
		else min_energy 15		{Call "SC_M_Acc_Define_Deal_bullet_debug_x10"}
		else min_energy 5		{Call "SC_M_Acc_Define_Deal_bullet_debug_x05"}
		else					{Call "SC_M_Acc_Define_Deal_bullet_debug_x00"}
		}
	}
)

; ================================================================================================== ;
; // Bullet
; ================================================================================================== ;

(define "SC_TP_Exp_Define_Bullet_IGNORE_ARMOR"	; // BUZZ: <- Specific Bullet hits 
	{if stuff "shell auto"				{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_aut1"}
	else stuff "shell zenite"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_aut1"}
	
	else stuff "grenade size1"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_aut1"}
	else stuff "grenade size2"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_aut1"}
	else stuff "grenade size3"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh1"}
		
	else stuff "rocketlauncher size1"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh1"}
	else stuff "rocketlauncher size2"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh2"}
		
	else stuff "shell size1"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh1"}
	else stuff "shell size2"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh2"}
	else stuff "shell size3"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh3"}
	else stuff "shell size4"			{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_exp_sh4"}
	}
)

(define "SC_TP_Exp_Define_Bullet"	; // BUZZ: <- Specific Bullet hits 
	{if stuff "SC_veryhigh_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_vhp"}
	else stuff "SC_high_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_hp"}
	else stuff "SC_medium_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_mp"}
	else stuff "SC_low_human_armor_piercing"		{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_lp"}
	else stuff "SC_verylow_human_armor_piercing"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_vlp"}
	else											{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_np"}
	}
	
	{if stuff "SC_bullet_anti_tank" {Call "SC_M_Acc_Define_Deal_bullet_debug_%x_hp"}}	; <- additional damage for this tag...
)

(Define "SC_TP_Exp_Define_Process_Bullet"
	{if prop "SC_plataform_prop_troopers_size1"	;{}	// IGNORE ARMOR FOR SIZE1 (AS FOR THE MOMENT)
		{if stuff "bullet"
			("SC_TP_Exp_Define_Bullet"	x_vhp(x30) x_hp(x20) x_mp(x15) x_lp(x05) x_vlp(x04) x_np(x03))
		}
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x40) x_exp_sh1(x90) x_exp_sh2(x100) x_exp_sh3(x100) x_exp_sh4(x100))
		
	else prop "SC_plataform_prop_troopers_size2" ;{}
		{if stuff "bullet"
			{if  volume "SC_volume_armored_heavy"			("SC_TP_Exp_Define_Bullet"	x_vhp(x03) x_hp(x02) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_heavy"	("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x02) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_medium"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x02) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_light"	("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x02) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_light"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x02) x_mp(x01) x_lp(x01) x_vlp(x00) x_np(x00))	
			else											("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x01) x_mp(x01) x_lp(x01) x_vlp(x00) x_np(x00))
			}
		}
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x04) x_exp_sh1(x25) x_exp_sh2(x40) x_exp_sh3(x60) x_exp_sh4(x80))
		
	else prop "SC_plataform_prop_troopers_size3" ;{}
		{if stuff "bullet"
			{if  volume "SC_volume_armored_heavy"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_heavy"	("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_medium"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_light"	("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_light"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))	
			else											("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))
			}
		}	
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x03) x_exp_sh1(x25) x_exp_sh2(x40) x_exp_sh3(x60) x_exp_sh4(x80))
	
	else prop "SC_plataform_prop_troopers_size4" ;{}
		{if stuff "bullet"
			{if  volume "SC_volume_armored_heavy"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_heavy"	("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_medium"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_light"	("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_light"			("SC_TP_Exp_Define_Bullet"	x_vhp(x03) x_hp(x01) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))	
			else											("SC_TP_Exp_Define_Bullet"	x_vhp(x03) x_hp(x01) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))
			}
		}	
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x02) x_exp_sh1(x15) x_exp_sh2(x20) x_exp_sh3(x25) x_exp_sh4(x30))
		
	else prop "SC_plataform_prop_troopers_size5" ;{}
		{if stuff "bullet"
			{if  volume "SC_volume_armored_heavy"			("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_heavy"	("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_medium"			("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_light"	("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_light"			("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))	
			else											("SC_TP_Exp_Define_Bullet"	x_vhp(x03) x_hp(x01) x_mp(x01) x_lp(x00) x_vlp(x00) x_np(x00))
			}
		}	
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x02) x_exp_sh1(x10) x_exp_sh2(x15) x_exp_sh3(x30) x_exp_sh4(x35))
		
	else prop "SC_plataform_prop_troopers_size6" ;{}
		{if stuff "bullet"
			{if  volume "SC_volume_armored_heavy"			("SC_TP_Exp_Define_Bullet"	x_vhp(x00) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_heavy"	("SC_TP_Exp_Define_Bullet"	x_vhp(x00) x_hp(x00) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_medium"			("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_shield_light"	("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			else volume "SC_volume_armored_light"			("SC_TP_Exp_Define_Bullet"	x_vhp(x01) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))	
			else											("SC_TP_Exp_Define_Bullet"	x_vhp(x02) x_hp(x01) x_mp(x00) x_lp(x00) x_vlp(x00) x_np(x00))
			}	
		}
		("SC_TP_Exp_Define_Bullet_IGNORE_ARMOR" x_exp_aut1(x01) x_exp_sh1(x05) x_exp_sh2(x10) x_exp_sh3(x25) x_exp_sh4(x40))
	}
)

; ================================================================================================== ;
; // Contact
; ================================================================================================== ;

(define "SC_TP_Exp_Define_Contact"		; // BUZZ: <- Melee/Contact Damage
	{if volume "sc_volume_armored"	{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_armor"}
	else							{Call "SC_M_Acc_Define_Deal_bullet_debug_%x_unarmored"}
	}
)

(Define "SC_TP_Exp_Define_Process_Contact"
	{kill_delay "chek_ctca"}
	
	{delay 0.1 "chek_ctca"
		{if prop "SC_plataform_prop_troopers_size1"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x15) x_unarmored(x25))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x25) x_unarmored(x50))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x50) x_unarmored(x75))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x75) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x100))}
			
		else prop "SC_plataform_prop_troopers_size2"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x05) x_unarmored(x10))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x10) x_unarmored(x25))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x25) x_unarmored(x40))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x50) x_unarmored(x75))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x125))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x150) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x200))}
			
		else prop "SC_plataform_prop_troopers_size3"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x03) x_unarmored(x05))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x05) x_unarmored(x10))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x15) x_unarmored(x30))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x30) x_unarmored(x60))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x50) x_unarmored(x75))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x125))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x150) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x300))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x300) x_unarmored(x300))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x300) x_unarmored(x300))}

		else prop "SC_plataform_prop_troopers_size4"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x01) x_unarmored(x03))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x04) x_unarmored(x10))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x08) x_unarmored(x15))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x10) x_unarmored(x20))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x15) x_unarmored(x25))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x50) x_unarmored(x75))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x100) x_unarmored(x125))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x150) x_unarmored(x175))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x250))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x300) x_unarmored(x300))}

		else prop "SC_plataform_prop_troopers_size5"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x01) x_unarmored(x03))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x04) x_unarmored(x10))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x08) x_unarmored(x15))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x10) x_unarmored(x20))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x15) x_unarmored(x25))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x40) x_unarmored(x50))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x75) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x125) x_unarmored(x150))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x175) x_unarmored(x200))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x250) x_unarmored(x300))}

		else prop "SC_plataform_prop_troopers_size6"	
			{if tagged "SC_melee_anti_infantry_tier1_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x01) x_unarmored(x01))}
			{if tagged "SC_melee_anti_infantry_tier2_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x02) x_unarmored(x05))}
			{if tagged "SC_melee_anti_infantry_tier3_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x04) x_unarmored(x10))}
			{if tagged "SC_melee_anti_infantry_tier4_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x08) x_unarmored(x15))}
			{if tagged "SC_melee_anti_infantry_tier5_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x10) x_unarmored(x20))}
			{if tagged "SC_melee_anti_infantry_tier6_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x40) x_unarmored(x60))}
			{if tagged "SC_melee_anti_infantry_tier7_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x75) x_unarmored(x100))}
			{if tagged "SC_melee_anti_infantry_tier8_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x125) x_unarmored(x150))}
			{if tagged "SC_melee_anti_infantry_tier9_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x150) x_unarmored(x175))}
			{if tagged "SC_melee_anti_infantry_tier10_cooldown"		("SC_TP_Exp_Define_Contact" x_armor(x200) x_unarmored(x225))}
		}
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

{On blast sync
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Blast")
		}
	}
}

{On contact		
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"		
			("SC_TP_Exp_Define_Process_Contact")
		}
	}
}

{On bullet_hit
	{if not dead
		{if not volume "SC_volume_armored_shield_no_damage"	
			("SC_TP_Exp_Define_Process_Bullet")
		}
	}
}