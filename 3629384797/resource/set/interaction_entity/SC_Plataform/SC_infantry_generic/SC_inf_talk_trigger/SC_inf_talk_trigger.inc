
;	<<<< ------------------------------------------------------------------------------------------------>>>>			 
;	<< [=============== SC Plataform Interaction Entity: Infantry Generic Talk Triggers ===============] >>
;	<<<<------------------------------------------------------------------------------------------------->>>>			 

(Include "SC_inf_talk_trigger_defines.inc")	

; // BUZZ: must have DLC related talks hard-coded in here.

(Define "SC_INF_Talk_Trigger_Define_Spawn_Event"
	{Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}
	{Tags remove "SC_INF_Talk_Trigger_Tag_Fighting_Orks"}
	{Tags remove "SC_INF_Talk_Trigger_Tag_Fighting_IGC"}
	{Tags remove "SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist"}
	{Tags remove "SC_INF_Talk_Trigger_Tag_Fighting_SM_Chaos"}
	{Tags remove "SC_INF_Talk_Trigger_Tag_Fighting_Tyranids"}
)

; <<<<	===================	SC Infantry Generic Talk: Contact Aura Talks	===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Contact"

	; // Call-out Grenades
	{if effector "SC_aura_grenade"	
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(4)
			talk(alert_enemy_grenade) freq(0.8) 
			tag_op()
		)
	}
)

; <<<<	===================	SC Infantry Generic Talk: Damage related Talks	===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Blast_Hit"
	; // [...] Does not work with blast
)

(define "SC_INF_Talk_Trigger_Define_Bullet_Hit"

	{if not dead 	;{}
		
		; // [Victim] Signalize is under enemy fire
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_x2_rand" d(4)
			talk1(in_combat_enemy_has_upper_hand) freq1(0.03) 
			talk2(panicking) freq2(0.01) 
			tag_op()
		)

		; // --------------- Aggressor has specific weapon.
		
		;{}// [Victim] Attacked by Space marines Heavy bolters
		{if stuff "heavy_bolter_ammo";{}
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Space_Marines") d(3)
				talk1(alert_wpn_sm_loyalist_mgun) freq1(0.5) 
				talk2(alert_enemy) freq2(0.06) 
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist)
			)

		;{}// [Victim] Attacked by Ork Deffgun Loota Boys
		else stuff "ork_deffgun_dakka_ammo"	
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Orks") d(3)
				talk1(alert_wpn_ork_mgun) freq1(0.5) 
				talk2(alert_enemy) freq2(0.06)
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Orks)
			)
		}
		
		; // --------------- Aggressor jubilation.
		
		; // [Aggressor] Attacking Imperial Guard
		{if tagged "SC_INF_Tag_Unit_Faction_Imperial_Guard" ;{}
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
				talk1(alert_enemy_igc) freq1(0.5)
				talk2(alert_enemy_humans) freq2(0.12)
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_IGC)
			)
	
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(vehicle) check(not "ignore") d(4)
				talk1(alert_enemy_igc) freq1(0.5)
				talk2(alert_enemy_humans) freq2(0.12)
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_IGC)
			)
		}
		
		; // [Aggressor] Attacking Space marines.
		{if tagged "SC_INF_Tag_Unit_Faction_Space_Marines" ;{}
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
				talk1(alert_enemy_sm_loyalist) freq1(0.5)
				talk2(alert_enemy_humans) freq2(0.12)
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist)
			)
	
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(vehicle) check(not "ignore") d(4)
				talk1(alert_enemy_sm_loyalist) freq1(0.5)
				talk2(alert_enemy_humans) freq2(0.12)
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist)
			)
		}
		
		; // [Aggressor] Attacking Orks.
		{if tagged "SC_INF_Tag_Unit_Faction_Orks" ;{}
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
				talk1(alert_enemy_orks) freq1(0.5) 
				talk2(alert_enemy_xenos) freq2(0.12) 
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Orks)
			)
			
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(vehicle) check(not "ignore") d(4)
				talk1(alert_enemy_orks) freq1(0.5) 
				talk2(alert_enemy_xenos) freq2(0.12) 
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Orks)
			)
		}
	
		; // [Aggressor] Attacking Tyranids.
		{if tagged "SC_INF_Tag_Unit_Faction_Tyranids" ;{}
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
				talk1(alert_enemy_tyr) freq1(0.5) 
				talk2(alert_enemy_xenos) freq2(0.12) 
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Tyranids)
			)
			
			("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(vehicle) check(not "ignore") d(4)
				talk1(alert_enemy_tyr) freq1(0.5) 
				talk2(alert_enemy_xenos) freq2(0.12) 
				tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Tyranids)
			)
		}
		
		; // --------------- Victim Under Attack By.

		; // [Victim] Under attack by Imperial Guard
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Imperial_Guard") d(4) 
			talk1(alert_enemy_igc) freq1(0.36)
			talk2(alert_enemy_humans) freq2(0.09) 
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_IGC)
		)
		
		; // [Victim] Under attack by Space marines.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Space_Marines") d(4) 
			talk1(alert_enemy_sm_loyalist) freq1(0.36)
			talk2(alert_enemy_humans) freq2(0.09) 
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist)
		)
		
		; // [Victim] Under attack by Orks.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Orks") d(4) 
			talk1(alert_enemy_orks) freq1(0.36)
			talk2(alert_enemy_xenos) freq2(0.06)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Orks)
		)
		
		; // [Victim] Under attack by Tyranids.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand" effector(SC_prop_infantry_generic) check(tagged "SC_INF_Tag_Unit_Faction_Tyranids") d(4)
			talk1(alert_enemy_tyr) freq1(0.36)
			talk2(alert_enemy_xenos) freq2(0.06)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Tyranids)
		)
	}
)

; <<<<	===================	SC Infantry Generic Talk: Combat comms, firing weapon trigger ===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Fire_Hand_Right"
	("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(3)
		talk(in_combat_comms) freq(0.01)
		tag_op()
	)
	{if tagged "SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(4)
			talk(alert_enemy_sm_loyalist) freq(0.18)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_Orks"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(5) 
			talk(alert_enemy_orks) freq(0.18)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_Tyranids"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(5) 
			talk(alert_enemy_tyr) freq(0.18)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_IGC"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(5) 
			talk(alert_enemy_igc) freq(0.18)
			tag_op()
		)
	}
)

; <<<<	===================	SC Human Talk: Combat comms, strafe trigger - Backwards [RETREAT] ===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Strafe_Back"
	("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(4) 
		talk(in_combat_enemy_has_upper_hand) freq(0.35)
		tag_op()
	)
)

; <<<<	===================	SC Human Talk: Combat comms, strafe trigger - Forward [Charging] ===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Strafe_Forward"
	{if tagged "SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(8)
			talk(alert_enemy_sm_loyalist) freq(0.05)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_Orks"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(8)
			talk(alert_enemy_orks) freq(0.05)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_Tyranids"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(8)
			talk(alert_enemy_tyr) freq(0.05)
			tag_op()
		)
	else tagged "SC_INF_Talk_Trigger_Tag_Fighting_IGC"
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me" d(8) 
			talk(alert_enemy_igc) freq(0.05)
			tag_op()
		)
	}
	("SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_x3_rand" d(10)
		talk1(angry_brsrk) freq1(0.04) 
		talk2(in_combat_group_has_upper_hand) freq2(0.03)
		talk3(in_combat_comms) freq3(0.02)
		tag_op()
	)
)

; <<<<	===================	SC Human Talk: Kill talk, taunt killed specific enemy ===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Die"
	{if effector "SC_prop_infantry_generic"	;}
	
		; // [Killer] Killed, is Imperial Guard
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
			talk1(enemy_is_destroyed_igc) freq1(0.5)
			talk2(enemy_is_destroyed_humans) freq2(0.2)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_IGC)
		)
		
		; // [Killer] Killed, is Space Marine.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
			talk1(enemy_is_destroyed_sm_loyalist) freq1(0.5)
			talk2(enemy_is_destroyed_humans) freq2(0.2)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_SM_Loyalist)
		)
		
		; // [Killer] Killed, is Ork.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4)
			talk1(enemy_is_destroyed_orks) freq1(0.5)
			talk2(enemy_is_destroyed_xenos) freq2(0.2)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Orks)
		)
		
		; // [Killer] Killed, is Tyranid.
		("SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand" effector(SC_prop_infantry_generic) check(not "ignore") d(4) 
			talk1(enemy_is_destroyed_tyr) freq1(0.5)
			talk2(enemy_is_destroyed_xenos) freq2(0.2)
			tag_op(SC_INF_Talk_Trigger_Tag_Fighting_Tyranids)
		)
	}
)


{on animation_event "SC_H_Request_Anm_Strafe_Slow"	
	("SC_INF_Talk_Trigger_Define_Strafe_Forward")		; // <- TEMP!
}

{on animation_event "SC_H_Request_Anm_Strafe_Fast"	
	("SC_INF_Talk_Trigger_Define_Strafe_Forward")		; // <- TEMP!
}

{on animation_event "SC_H_Request_Anm_Strafe_Back"	
	("SC_INF_Talk_Trigger_Define_Strafe_Back")		; // <- TEMP!
}
