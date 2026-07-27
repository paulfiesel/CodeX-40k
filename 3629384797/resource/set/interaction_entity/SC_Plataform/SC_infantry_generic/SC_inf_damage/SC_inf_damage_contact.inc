
(Include "DLC/LV40k_inf_damage_contact.inc")
; // (Include "DLC/HALO_inf_damage_contact.inc")

(Define "SC_INF_Contact_Define_Spawn_Event"
	{tags remove "SC_contact_flamer_t1_cooldown"}	
	{tags remove "SC_contact_flamer_t2_cooldown"}	
	{tags remove "SC_contact_flamer_t3_cooldown"}
	{tags remove "SC_contact_flamer_t4_cooldown"}		
	
	{tags remove "SC_contact_gas_t1_cooldown"}	
	{tags remove "SC_contact_gas_t2_cooldown"}	
	{tags remove "SC_contact_gas_t3_cooldown"}	
	
	{tags remove "SC_contact_melee_t0_cooldown"}	
	{tags remove "SC_contact_melee_t1_cooldown"}	
	{tags remove "SC_contact_melee_t2_cooldown"}	
	{tags remove "SC_contact_melee_t3_cooldown"}	
	{tags remove "SC_contact_melee_t4_cooldown"}	
	{tags remove "SC_contact_melee_t5_cooldown"}
	{tags remove "SC_contact_melee_t6_cooldown"}	
	{tags remove "SC_contact_melee_t7_cooldown"}	
	{tags remove "SC_contact_melee_t8_cooldown"}	
	{tags remove "SC_contact_melee_t9_cooldown"}	
	{tags remove "SC_contact_melee_t10_cooldown"}	
	
	{tags remove "SC_contact_grenade_cooldown"}
	
	("SC_DLC_LV40k_INF_Contact_Define_Spawn_Event")
)

; <<<<	===================	SC Infantry Generic: Contact Defines	===================	>>>>

(Define "SC_INF_Contact_Damage"
	{Delay 0.01 
		{if volume "SC_volume_armored_shield_no_damage" 
			; [...]
		else
			{if prop "human"
				{if volume "SC_volume_armored"	("human_health_x" c(%d_normal) x(0.15))	else	("human_health_x" c(%d_normal) x(0.3))}
				
			else prop "SC_plataform_prop_troopers_size1"
				{if volume "SC_volume_armored"	("human_health_x" c(%d_normal) x(0.15))	else	("human_health_x" c(%d_normal) x(0.3))}
				
			else prop "SC_plataform_prop_troopers_size2"
				{if volume "SC_volume_armored"	("human_health_x" c(%d_normal) x(0.3))	else	("human_health_x" c(%d_normal) x(0.5))}
				
			else prop "SC_plataform_prop_troopers_size3"
				{if volume "SC_volume_armored"	("human_health_x" c(%d_normal) x(0.3))	else	("human_health_x" c(%d_normal) x(0.5))}
				
			else
				{if volume "SC_volume_armored"	("human_health_x" c(%d_normal) x(1.0))	else	("human_health_x" c(%d_normal) x(1.25))}
			}
		}
	}
)

(Define "SC_INF_Contact_Define_Contact"
	{if not dead							; {}
		
		; // DLCs
		("SC_DLC_LV40k_INF_Contact_Define_Contact")
		
		; // SC Plataform - Melee
		("SC_Allegiance_Define_Check_Effector_Different_Tag" effector(SC_prop_contactor_melee) 	do({Call_synced "SC_INF_Call_Melee_Hit"})) ; <- // BUZZ: MELEE CHECKER
		
		; // FLAMER TIER 4
		{If effector "SC_plataform_prop_new_flamer flames_size4"
			{if not tagged "SC_contact_flamer_t4_cooldown"	{tags add "SC_contact_flamer_t4_cooldown"} {delay 0.1 {tags remove "SC_contact_flamer_t4_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Contact_Damage" d_normal(5000))
					("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())
					{spawn "isparenie"}
					{call "burn_volume"}
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x80"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}			
			}
		}
		
		; // FLAMER TIER 3
		{If effector "SC_plataform_prop_new_flamer flames_size3"
			{if not tagged "SC_contact_flamer_t3_cooldown"	{tags add "SC_contact_flamer_t3_cooldown"} {delay 0.15 {tags remove "SC_contact_flamer_t3_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Contact_Damage" d_normal(2500))
					("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())
					{spawn "isparenie"}
					{call "burn_volume"}
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x80"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}			
			}
		}
		
		; // FLAMER TIER 2
		{If effector "SC_plataform_prop_new_flamer flames_size2"
			{if not tagged "SC_contact_flamer_t1_cooldown"	{tags add "SC_contact_flamer_t2_cooldown"} {delay 0.2 {tags remove "SC_contact_flamer_t2_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Contact_Damage" d_normal(750))
					("SC_INF_Define_Spawn_Blood_Hit_Big" c())
					{spawn "thermal_hit"}
					{call "burn_volume"}
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x30"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}			
			}
		}
		
		; // FLAMER TIER 1
		{If effector "SC_plataform_prop_new_flamer flames_size1"
			{if not tagged "SC_contact_flamer_t1_cooldown"	{tags add "SC_contact_flamer_t1_cooldown"} {delay 0.25 {tags remove "SC_contact_flamer_t1_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Define_Spawn_Blood_Hit_Big" c())
					{spawn "thermal_hit"}
					{call "burn_volume"}
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}			
			}
		}
		{If effector "fx_piece_flame"
			{if not tagged "SC_contact_flamer_t1_cooldown"	{tags add "SC_contact_flamer_t1_cooldown"} {delay 0.25 {tags remove "SC_contact_flamer_t1_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Big" c())
					{spawn "thermal_hit"}
					{call "burn_volume"}
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}	
			}
		}
		
		; // CONTACT/GLASS GRENADES
		{If effector "grenade contact"
			{if not tagged "SC_contact_grenade_cooldown"	{tags add "SC_contact_grenade_cooldown"} {delay 0.05 {tags remove "SC_contact_grenade_cooldown"}}
				{if effector "SC_big_grenade"
					{if effector "size4"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(150000))
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x300"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						}
					else effector "size3"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(80000))
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}}
						}
					}
				else effector "at"
					{if effector "size3"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(48000))
						else
							{if effector "SC_grenade_plasma"
								{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x75"} {Call "SC_SH_Main_Hits_Fx_S2"}}
								{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							else
								{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x150"} {Call "SC_SH_Main_Hits_Fx_S2"}}
								{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x75"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							}
						}
					else effector "size2"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(24000))
						else
							{if effector "SC_grenade_plasma"
								{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
								{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							else
								{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}}
								{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S2"}}
							}
						}
					}
				else effector "ap"
					{if effector "size3"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(4000))
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S1"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
						}																							
					else effector "size2"
						{if not "SC_SH_Main_Flag_Is_Online"	
							("SC_INF_Contact_Damage" d_normal(2000))
						else
							{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S1"}}
							{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x08"} {Call "SC_SH_Main_Hits_Fx_S1"}}
						}																	
					}
				}
				{with_effector {stuff_detonate}}
			}
		}
	}
)

; <<<<	===================	SC Infantry Generic: Melee Hit	===================	>>>>

; // BUZZ: The delay is a MUST!

; // BUZZ: "Creatures" size6 & size5 must take more damage to make up for their massive health pools.

(Define "SC_INF_Contact_Melee"
	{Delay 0.01 
		{if tagged "sc_skin_tag_trait_melee_resistance_t6" 		("human_health_x" c(%d_normal) x(0.0150))
		else tagged "sc_skin_tag_trait_melee_resistance_t5"		("human_health_x" c(%d_normal) x(0.030))
		else tagged "sc_skin_tag_trait_melee_resistance_t4" 	("human_health_x" c(%d_normal) x(0.0625))
		else tagged "sc_skin_tag_trait_melee_resistance_t3" 	("human_health_x" c(%d_normal) x(0.125))
		else tagged "sc_skin_tag_trait_melee_resistance_t2" 	("human_health_x" c(%d_normal) x(0.25))
		else tagged "sc_skin_tag_trait_melee_resistance_t1" 	("human_health_x" c(%d_normal) x(0.5))
		else prop "SC_plataform_prop_troopers_size6"			("human_health_x" c(%d_normal) x(1.5))
		else prop "SC_plataform_prop_troopers_size5"			("human_health_x" c(%d_normal) x(1.25))
		else													("human_health_x" c(%d_normal) x(1.0))
		}
	}
)

{on "SC_INF_Call_Melee_Hit" sync		
	{if not dead
		{If effector "SC_melee_anti_infantry_tier0"
			{if not tagged "SC_contact_melee_t0_cooldown"	{tags add "SC_contact_melee_t0_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t0_cooldown"}}
				{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
					
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
					("SC_INF_Contact_Melee" ef(melee_t0) cd(0.5) d_normal(200))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier1"
			{if not tagged "SC_contact_melee_t1_cooldown"	{tags add "SC_contact_melee_t1_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t1_cooldown"}}
				{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
					
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Define_Spawn_Blood_Hit_Medium" c())	
					("SC_INF_Contact_Melee" ef(melee_t1) cd(0.5) d_normal(400))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x40"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x20"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier2"
			{if not tagged "SC_contact_melee_t2_cooldown"	{tags add "SC_contact_melee_t2_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t2_cooldown"}}
				{start_sound "SC_Plataform/hit/_melee/powersword_common" 1 use_position}
					
				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
					("SC_INF_Contact_Melee" ef(melee_t2) cd(0.5) d_normal(800))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x80"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x30"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier3"
			{if not tagged "SC_contact_melee_t3_cooldown"	{tags add "SC_contact_melee_t3_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t3_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	

				{if not "SC_SH_Main_Flag_Is_Online"		
					("SC_INF_Define_Spawn_Blood_Hit_Medium" c())
					("SC_INF_Contact_Melee" ef(melee_t3) cd(0.5) d_normal(1600))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x40"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}	
		}		
		
		{If effector "SC_melee_anti_infantry_tier4"
			{if not tagged "SC_contact_melee_t4_cooldown"	{tags add "SC_contact_melee_t4_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t4_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
					
				{if not "SC_SH_Main_Flag_Is_Online"
					("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())
					("SC_INF_Contact_Melee" ef(melee_t4) cd(0.5) d_normal(3200))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x150"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}	
		}	
		
		{If effector "SC_melee_anti_infantry_tier5"
			{if not tagged "SC_contact_melee_t5_cooldown"	{tags add "SC_contact_melee_t5_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t5_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
					
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c())
					("SC_INF_Contact_Melee" ef(melee_t5) cd(0.5) d_normal(6400))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S1"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x75"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier6"
			{if not tagged "SC_contact_melee_t6_cooldown"	{tags add "SC_contact_melee_t6_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t6_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
					
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Very_Big" c()) 
					("SC_INF_Contact_Melee" ef(melee_t6) cd(0.5) d_normal(12800))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x250"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x100"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier7"
			{if not tagged "SC_contact_melee_t7_cooldown"	{tags add "SC_contact_melee_t7_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t7_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
				
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Biggest" c()) 
					("SC_INF_Contact_Melee" ef(melee_t7) cd(0.5) d_normal(25600))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x300"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x150"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}
			}
		}	
		
		{If effector "SC_melee_anti_infantry_tier8"
			{if not tagged "SC_contact_melee_t8_cooldown"	{tags add "SC_contact_melee_t8_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t8_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
				
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Biggest" c()) 
					("SC_INF_Contact_Melee" ef(melee_t8) cd(0.5) d_normal(51200))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x350"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x200"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}
			}
		}
	
		{If effector "SC_melee_anti_infantry_tier9"
			{if not tagged "SC_contact_melee_t9_cooldown"	{tags add "SC_contact_melee_t9_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t9_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
				
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Biggest" c()) 
					("SC_INF_Contact_Melee" ef(melee_t9) cd(0.5) d_normal(102400))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x400"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x300"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}
			}
		}
		
		{If effector "SC_melee_anti_infantry_tier10"
			{if not tagged "SC_contact_melee_t10_cooldown"	{tags add "SC_contact_melee_t10_cooldown"} {delay 0.9 {tags remove "SC_contact_melee_t9_cooldown"}}
				{start_sound "SC_Plataform/hit/blood_splatters_rough" 1 use_position}	
				
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Define_Spawn_Blood_Hit_Biggest" c())
					("SC_INF_Contact_Melee" ef(melee_t10) cd(0.5) d_normal(204800))
				else
					{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x500"} {Call "SC_SH_Main_Hits_Fx_S2"}}
					{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x400"} {Call "SC_SH_Main_Hits_Fx_S2"}}
				}
			}
		}
	}
}