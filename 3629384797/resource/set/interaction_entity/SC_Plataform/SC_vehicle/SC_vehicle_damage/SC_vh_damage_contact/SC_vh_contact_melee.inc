
(define "SC_VH_Melee_Damage_Define_Spawn_Event"
	{tags remove "SC_melee_anti_armor_tier1"}	; // Similar effects to AT 20mm
	{tags remove "SC_melee_anti_armor_tier2"}	; // Similar effects to AT 30mm
	{tags remove "SC_melee_anti_armor_tier3"}	; // Similar effects to AT 40mm
	{tags remove "SC_melee_anti_armor_tier4"}	; // Similar effects to AT 57mm
	{tags remove "SC_melee_anti_armor_tier5"}	; // Similar effects to AT 75mm
	{tags remove "SC_melee_anti_armor_tier6"}	; // Similar effects to AT 100mm
	{tags remove "SC_melee_anti_armor_tier7"}	; // Similar effects to AT 120mm
	{tags remove "SC_melee_anti_armor_tier8"}	; // Similar effects to AT 155mm
	{tags remove "SC_melee_anti_armor_tier9"}	; // Similar effects to AT 200mm
	{tags remove "SC_melee_anti_armor_tier10"}	; // Similar effects to AT 300mm
)

(define "SC_VH_Melee_Damage_Define_Contact"
	{if not tagged "exploded"
		("SC_Allegiance_Define_Check_Effector_Different_Tag" effector(SC_prop_contactor_melee) 		do({Call_synced "SC_VH_Main_Call_Process_Melee_Hit"}))
	}
)

; <<<<	===================	SC Vehicle Generic: Melee Health Resistance Prop Values	===================	>>>>

("SC_M_Acc_Define_Add_Calls"	tag(bullet_debug))

{on "SC_M_Acc_Define_Deal_bullet_debug_x01"
	{if prop "SC_plataform_prop_vehicle_behemoth"	("SC_M_Acc_Define_Counter_500" tag(bullet_debug) do(SC_rand_break_body))
	else prop "tank heavy"							("SC_M_Acc_Define_Counter_400" tag(bullet_debug) do(SC_rand_break_body))
	else prop "tank medium"							("SC_M_Acc_Define_Counter_300" tag(bullet_debug) do(SC_rand_break_body))
	else prop "tank light"							("SC_M_Acc_Define_Counter_200" tag(bullet_debug) do(SC_rand_break_body))
	else											("SC_M_Acc_Define_Counter_100" tag(bullet_debug) do(SC_rand_break_body))
	}
}

; <<<<	===================	SC Vehicle Generic: Melee Damage Defines	===================	>>>>

{on "SC_rand_destroy_body" 		
	{if not tagged "exploded"
		{if tagged "SC_vh_melee_kill_counter_3"		{components "body" destroy}
		else tagged "SC_vh_melee_kill_counter_2"	{tags add "SC_vh_melee_kill_counter_3"}
		else tagged "SC_vh_melee_kill_counter_1"	{tags add "SC_vh_melee_kill_counter_2"}
		else										{tags add "SC_vh_melee_kill_counter_1"}
		}
	}
}

{on "SC_rand_break_body"		{components "body" break}}
{on "SC_rand_break_trackleft" 	{components "trackleft" break}}
{on "SC_rand_break_trackright" 	{components "trackright" break}}
{on "SC_rand_break_turret" 		{components "turret" break}}
{on "SC_rand_break_engine"		{if work "engine"	{components "engine" break}	else	{components "engine" destroy}}}


; // copypaste - also under use in "GOH/tank/tank-damage".

(Define "SC_vh_kill_crew_Logic" 	
	{if crew_in_place "%place" 
		{if prop "sc_vh_prop_trait_vehicle_crew_t4"		; // immortal crew
		else prop "sc_vh_prop_trait_vehicle_crew_t3"	{if rand (* 0.1 %kill_crew )	{call_synced "kill_%place"}}
		else prop "sc_vh_prop_trait_vehicle_crew_t2"	{if rand (* 0.25 %kill_crew)	{call_synced "kill_%place"}}
		else prop "sc_vh_prop_trait_vehicle_crew_t1"	{if rand (* 0.5 %kill_crew)		{call_synced "kill_%place"}}
		else
			{if rand %kill_crew	{call_synced "kill_%place"}}
		}
	}
)


(Define "SC_VH_Main_Define_Melee_Hit"
	
	; // COMPONENT DAMAGE CHANCE - BETTER DISABLED AGAINST WALKERS.
	{if not prop "SC_prop_walker_tank"
		{if volume "engine"			{if rand %dam_rnd {Call_synced "SC_rand_break_engine"}}}	
		{if volume "turret"			{if rand %dam_rnd {Call_synced "SC_rand_break_turret"}}}
		{if volume "trackleft"		{if rand %dam_rnd {Call_synced "SC_rand_break_trackleft"}}}		
		{if volume "trackright"		{if rand %dam_rnd {Call_synced "SC_rand_break_trackright"}}}
	}
	
	; // CREW INTERACTION CHANCE - [ELSE] IN CASE THE VEHICLE HAS NO CREW, JUST TEMPORALY DISABLE IT!
	{if prop "SC_plataform_prop_vehicle_auto"
		{if rand %stun_chance {call_synced "crew_shot_chance"} {delay 2.0 "crew_shock_time" {call_synced "driver_revive"} {call_synced "crew_revive"}}}
		
	else
		{if operatable
			("SC_vh_kill_crew_Logic" place(driver) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(gunner) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(gunner2) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(gunner3) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(gunner4) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(gunner5) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(charger) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(charger2) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(charger3) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(charger4) kill_crew(%crew_rnd))
			("SC_vh_kill_crew_Logic" place(commander) kill_crew(%crew_rnd))
			
			{if rand %stun_chance {call_synced "crew_shot_chance"} {delay 2.0 "crew_shock_time"  {call_synced "driver_revive"} {call_synced "crew_revive"}}}
		}
	}
)	

; <<<<	===================	SC Vehicle Generic: Melee Damage Settings	===================	>>>>

(Define "SC_VH_Melee_Define_Contact_Damage"
	{if effector "%effector"
		{if not tagged "%effector_cooldown"	{tags add "%effector_cooldown"}	{delay 0.5 {tags remove "%effector_cooldown"}}
		
			{if "SC_SH_Main_Flag_Is_Online"		
				{if tagged "SC_SH_Main_Tag_Tier2" 	{Call "SC_M_Acc_Define_Deal_shield_debug_x%damage_shield_t2"}
				else tagged "SC_SH_Main_Tag_Tier1"	{Call "SC_M_Acc_Define_Deal_shield_debug_x%damage_shield_t1"}}
				{Call "SC_SH_Main_Hits_Fx_%shield_s"}
	
			else
				{if prop "SC_plataform_prop_vehicle_behemoth"	
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_behemoth) crew_rnd(%crew_behemoth) stun_chance(%stun_behemoth))
					{if not work "body" {if rand %kill_behemoth {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank heavy"					
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_heavy) crew_rnd(%crew_heavy) stun_chance(%stun_heavy))
					{if not work "body" {if rand %kill_heavy {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank medium"					
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_medium) crew_rnd(%crew_medium) stun_chance(%stun_medium))
					{if not work "body" {if rand %kill_medium {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank light"					
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_light) crew_rnd(%crew_light) stun_chance(%stun_light))
					{if not work "body" {if rand %kill_light {call_synced "SC_rand_destroy_body"}}}
					
				else prop "armored_car"					
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_other) crew_rnd(%crew_other) stun_chance(%stun_other))
					{if not work "body" {if rand %kill_other {call_synced "SC_rand_destroy_body"}}}
					
				else									
					("SC_VH_Main_Define_Melee_Hit" dam_rnd(%components_other) crew_rnd(%crew_other) stun_chance(%stun_other))
					{if not work "body" {if rand %kill_other {call_synced "SC_rand_destroy_body"}}}
				}
				{if work "body"	{Call "SC_M_Acc_Define_Deal_bullet_debug_x%damage_armor"}}	
				%hit_effects
			}		
		}
	}
)

{on "SC_VH_Main_Call_Process_Melee_Hit"		sync	;{}

	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier1) 
		damage_armor(01)
		shield_s(S1)
		damage_shield_t1(02) 
		damage_shield_t2(01)
		
		components_behemoth(0) crew_behemoth(0) stun_behemoth(0) kill_behemoth(0)
		components_heavy(0.025) crew_heavy(0) stun_heavy(0) kill_heavy(0)
		components_medium(0.05) crew_medium(0) stun_medium(0) kill_medium(0)
		components_light(0.075) crew_light(0.025) stun_light(0.05) kill_light(0.1)
		components_other(0.1) crew_other(0.05) stun_other(0.1) kill_other(0.2)
		
		hit_effects(
			{spawn "metal_hit_bul_heavy"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier2) 
		damage_armor(02) 
		shield_s(S1)
		damage_shield_t1(04)
		damage_shield_t2(02)
		
		components_behemoth(0.025) crew_behemoth(0) stun_behemoth(0) kill_behemoth(0)
		components_heavy(0.05) crew_heavy(0) stun_heavy(0) kill_heavy(0)
		components_medium(0.075) crew_medium(0.025) stun_medium(0.05) kill_medium(0.1)
		components_light(0.1) crew_light(0.05) stun_light(0.1) kill_light(0.2)
		components_other(0.125) crew_other(0.075) stun_other(0.15) kill_other(0.3)
		
		hit_effects(
			{spawn "metal_hit_br_small"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier3) 
		damage_armor(05)
		shield_s(S1) 
		damage_shield_t1(08) 
		damage_shield_t2(04) 
		
		components_behemoth(0.05) crew_behemoth(0) stun_behemoth(0) kill_behemoth(0)
		components_heavy(0.075) crew_heavy(0.025) stun_heavy(0.05) kill_heavy(0.1)
		components_medium(0.1) crew_medium(0.05) stun_medium(0.1) kill_medium(0.2)
		components_light(0.125) crew_light(0.075) stun_light(0.15) kill_light(0.3)
		components_other(0.15) crew_other(0.1) stun_other(0.2) kill_other(0.4)
		
		hit_effects(
			{spawn "metal_hit_br_small"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier4) 
		damage_armor(10)
		shield_s(S1)
		damage_shield_t1(20)
		damage_shield_t2(10) 
		
		components_behemoth(0.025) crew_behemoth(0.0125) stun_behemoth(0.025) kill_behemoth(0)
		components_heavy(0.1) crew_heavy(0.025) stun_heavy(0.05) kill_heavy(0.15)
		components_medium(0.125) crew_medium(0.05) stun_medium(0.1) kill_medium(0.25)
		components_light(0.15) crew_light(0.075) stun_light(0.15) kill_light(0.35)
		components_other(0.175) crew_other(0.1) stun_other(0.2) kill_other(0.45)
		
		hit_effects(
			{spawn "metal_hit_br_big_ap"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier5) 
		damage_armor(25)
		shield_s(S2) 
		damage_shield_t1(40) 
		damage_shield_t2(20) 
		
		components_behemoth(0.05) crew_behemoth(0.025) stun_behemoth(0.05) kill_behemoth(0.1)
		components_heavy(0.125) crew_heavy(0.05) stun_heavy(0.1) kill_heavy(0.2)
		components_medium(0.15) crew_medium(0.075) stun_medium(0.15) kill_medium(0.3)
		components_light(0.175) crew_light(0.1) stun_light(0.2) kill_light(0.4)
		components_other(0.2) crew_other(0.125) stun_other(0.25) kill_other(0.5)
		
		hit_effects(
			{spawn "metal_hit_br_big_ap"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier6) 
		damage_armor(50)
		shield_s(S2) 
		damage_shield_t1(80) 
		damage_shield_t2(40) 
		
		components_behemoth(0.075) crew_behemoth(0.05) stun_behemoth(0.075) kill_behemoth(0.2)
		components_heavy(0.15) crew_heavy(0.075) stun_heavy(0.15) kill_heavy(0.3)
		components_medium(0.175) crew_medium(0.1) stun_medium(0.2) kill_medium(0.4)
		components_light(0.2) crew_light(0.125) stun_light(0.25) kill_light(0.5)
		components_other(0.225) crew_other(0.15) stun_other(0.3) kill_other(0.6)

		hit_effects(
			{spawn "metal_hit_br_big_ap"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier7) 
		damage_armor(75)
		shield_s(S2) 
		damage_shield_t1(100) 
		damage_shield_t2(50) 
		
		components_behemoth(0.1) crew_behemoth(0.05) stun_behemoth(0.1) kill_behemoth(0.3)
		components_heavy(0.175) crew_heavy(0.1) stun_heavy(0.2) kill_heavy(0.4)
		components_medium(0.2) crew_medium(0.125) stun_medium(0.25) kill_medium(0.5)
		components_light(0.225) crew_light(0.15) stun_light(0.3) kill_light(0.6)
		components_other(0.25) crew_other(0.175) stun_other(0.35) kill_other(0.7)
		
		hit_effects(
			{spawn "metal_hit_penetration_75_105"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier8) 
		damage_armor(100)
		shield_s(S2) 
		damage_shield_t1(150) 
		damage_shield_t2(100) 
		
		components_behemoth(0.125) crew_behemoth(0.075) stun_behemoth(0.15) kill_behemoth(0.4)
		components_heavy(0.2) crew_heavy(0.125) stun_heavy(0.25) kill_heavy(0.5)
		components_medium(0.225) crew_medium(0.15) stun_medium(0.3) kill_medium(0.6)
		components_light(0.25) crew_light(0.175) stun_light(0.35) kill_light(0.7)
		components_other(0.275) crew_other(0.2) stun_other(0.4) kill_other(0.8)
		
		hit_effects(
			{spawn "metal_hit_penetration_75_105"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier9) 
		damage_armor(150)
		shield_s(S2)
		damage_shield_t1(200)
		damage_shield_t2(150)
		
		components_behemoth(0.15) crew_behemoth(0.1) stun_behemoth(0.2) kill_behemoth(0.5)
		components_heavy(0.225) crew_heavy(0.15) stun_heavy(0.3) kill_heavy(0.6)
		components_medium(0.25) crew_medium(0.175) stun_medium(0.35) kill_medium(0.7)
		components_light(0.275) crew_light(0.2) stun_light(0.4) kill_light(0.8)
		components_other(0.3) crew_other(0.225) stun_other(0.45) kill_other(0.9)
		
		hit_effects(
			{spawn "metal_hit_penetration_120_152"}
		)
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier10) 
		damage_armor(200)
		shield_s(S2)
		damage_shield_t1(300)
		damage_shield_t2(200)
		
		components_behemoth(0.175) crew_behemoth(0.15) stun_behemoth(0.25) kill_behemoth(0.6)
		components_heavy(0.25) crew_heavy(0.175) stun_heavy(0.35) kill_heavy(0.7)
		components_medium(0.275) crew_medium(0.2) stun_medium(0.4) kill_medium(0.8)
		components_light(0.3) crew_light(0.225) stun_light(0.45) kill_light(0.9)
		components_other(0.325) crew_other(0.25) stun_other(0.5) kill_other(1.0)
		
		hit_effects(
			{spawn "metal_hit_penetration_120_152"}
		)
	)
}