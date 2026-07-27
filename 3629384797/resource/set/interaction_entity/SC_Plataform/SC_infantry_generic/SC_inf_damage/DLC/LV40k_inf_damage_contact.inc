

(Define "SC_DLC_LV40k_INF_Contact_Define_Spawn_Event"
	
	; // STUN MAY CAUSE PROBLEMS WITH HUMANS -> CHASSIS_WORK / WEAPON_WORK !
	
	{Tags remove "SC_inf_tag_is_stunned"}
	{tags remove "SC_contact_stun_t1_cooldown"}	
	{tags remove "SC_contact_stun_t2_cooldown"}	
	{add_view "fx_sc_plataform_effect_stunned" "SC_contact_stun_fx" "fx_generic_head"}
	{delay 1.0 {if prop "human" {add_view "fx_sc_plataform_effect_stunned" "SC_contact_stun_fx" "visor"}}} 	; // <- BUZZ: delay is a must
	
	{tags remove "SC_contact_radiation_t1_cooldown"}	
)

; <<<<	==========================================	DLC - LV40k: Contact Define	==========================================	>>>>

(Define "SC_DLC_LV40k_INF_Contact_Define_Stun"
	{tags add "SC_inf_tag_is_stunned"}
	
	{Damage_Report "basis" "<f(impact)><c(RED)>STUNNED!"}
	{view start "SC_contact_stun_fx"}
	
	{Reset_manual_control}
	{drop_orders}
	
	{weapon_work "hand_right" 0}
	{weapon_work "melee" 0 }
	{weapon_work "weapon" 0 }
	{weapon_work "weapon1" 0 }
	{weapon_work "weapon2" 0 }
	{weapon_work "weapon3" 0 }
	{weapon_work "weapon4" 0 }
	{weapon_work "weapon5" 0 }
	{weapon_work "weapon6" 0 }
	{weapon_work "weapon7" 0 }
	{weapon_work "weapon8" 0 }
	
	{ik_enable "aim_h" 0}
	{ik_enable "aim_v" 0}
	{ik_enable "ik_leftright" 0}
	{ik_enable "ik_updown" 0}
	{ik_enable "basis" 0}
	{chassis_work 0}
	{auto_operatable 0} {delay 0.1 {auto_operatable 1}}
	
	{Kill_delay "SC_contact_stun_delay"}
	{delay 8.0 "SC_contact_stun_delay"
		{weapon_work "hand_right" 1}
		{weapon_work "melee" 1}
		{weapon_work "weapon" 1}
		{weapon_work "weapon1" 1}
		{weapon_work "weapon2" 1}
		{weapon_work "weapon3" 1}
		{weapon_work "weapon4" 1}
		{weapon_work "weapon5" 1}
		{weapon_work "weapon6" 1}
		{weapon_work "weapon7" 1}
		{weapon_work "weapon8" 1}
		
		{ik_enable "aim_h" 1}
		{ik_enable "aim_v" 1}
		{ik_enable "ik_leftright" 1}
		{ik_enable "ik_updown" 1}
		{ik_enable "basis" 1}
		{chassis_work 1}
		
		{view pause "SC_contact_stun_fx"}
		{tags remove "SC_inf_tag_is_stunned"}
	}
)

(Define "SC_DLC_LV40k_INF_Contact_Define_Contact"
	{If effector "lv40k_effects_sm_radiation_grenade_s1"
		{if not tagged "SC_contact_radiation_t1_cooldown"	{tags add "SC_contact_radiation_t1_cooldown"} {delay 1.0 {tags remove "SC_contact_radiation_t1_cooldown"}}
			{if not "SC_SH_Main_Flag_Is_Online"	
				("SC_INF_Contact_Damage" d_normal(1000))
				{spawn "bloodsparks_big"}
				{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}
			else
				{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x50"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x25"} {Call "SC_SH_Main_Hits_Fx_S1"}}
			}	
		}
	}
	{If effector "lv40k_bullet_venomthrope"
		{if not tagged "SC_contact_gas_t1_cooldown"			{tags add "SC_contact_gas_t1_cooldown"} {delay 1.0 {tags remove "SC_contact_gas_t1_cooldown"}}
			{if not "SC_SH_Main_Flag_Is_Online"	
				("SC_INF_Contact_Damage" d_normal(1200))
				{spawn "bloodsparks_big-g"}
				{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}
			else
				{If tagged "SC_SH_Main_Tag_Tier1" {Call "SC_M_Acc_Define_Deal_shield_debug_x10"} {Call "SC_SH_Main_Hits_Fx_S1"}}
				{If tagged "SC_SH_Main_Tag_Tier2" {Call "SC_M_Acc_Define_Deal_shield_debug_x05"} {Call "SC_SH_Main_Hits_Fx_S1"}}
			}	
		}
	}
	{If effector "lv40k_aura_Tyr_Venomthrope"
		{if not tagged "SC_INF_Tag_Unit_Faction_Tyranids"
			{if not tagged "SC_contact_gas_t1_cooldown"		{tags add "SC_contact_gas_t1_cooldown"} {delay 0.5 {tags remove "SC_contact_gas_t1_cooldown"}}
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Contact_Damage" d_normal(125))
					{spawn "bloodsparks_big-g"}
					{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}
				else
					; [...] // no effect on shields
				}	
			}
		}
	}
	{If effector "lv40k_aura_tyr_captower"
		{if not tagged "SC_contact_gas_t1_cooldown"		{tags add "SC_contact_gas_t1_cooldown"} {delay 0.5 {tags remove "SC_contact_gas_t1_cooldown"}}
			{if not tagged "SC_INF_Tag_Unit_Faction_Tyranids"
				{if not "SC_SH_Main_Flag_Is_Online"	
					("SC_INF_Contact_Damage" d_normal(125))
					{spawn "bloodsparks_big-g"}
					{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}
				else
					; [...] // no effect on shields
				}	
			else
				{Delay 0.1 
					{if prop "human" 								("SC_INF_Define_Heal" c(5))
					else prop "SC_plataform_prop_troopers_size1"	("SC_INF_Define_Heal" c(10))
					else prop "SC_plataform_prop_troopers_size2"	("SC_INF_Define_Heal" c(20))
					else prop "SC_plataform_prop_troopers_size3"	("SC_INF_Define_Heal" c(30))		; // BUZZ: <- healing applied to tyranid units
					else prop "SC_plataform_prop_troopers_size4"	("SC_INF_Define_Heal" c(50))	
					else prop "SC_plataform_prop_troopers_size5"	("SC_INF_Define_Heal" c(75))
					else prop "SC_plataform_prop_troopers_size6"	("SC_INF_Define_Heal" c(100))
					}
				}
			}
		}
	}
	{If effector "lv40k_effects_SM_stun_grenade_s1"
		{if not tagged "SC_contact_stun_t1_cooldown"	{tags add "SC_contact_stun_t1_cooldown"} {delay 0.5 {tags remove "SC_contact_stun_t1_cooldown"}}
		
			{if prop "SC_plataform_prop_troopers_size7"		; <- does not work with big creatures
				; [...] 
			else prop "SC_plataform_prop_troopers_size6"
				; [...]
			else
				("SC_DLC_LV40k_INF_Contact_Define_Stun")
			}
		}
	}
	{If effector "lv40k_effects_SM_stun_grenade_s2"
		{if not tagged "SC_contact_stun_t2_cooldown"	{tags add "SC_contact_stun_t2_cooldown"} {delay 0.5 {tags remove "SC_contact_stun_t2_cooldown"}}
			("SC_DLC_LV40k_INF_Contact_Define_Stun")
		}
	}
)