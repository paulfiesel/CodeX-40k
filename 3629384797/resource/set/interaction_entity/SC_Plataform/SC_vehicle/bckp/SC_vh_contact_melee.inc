
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

{on "SC_rand_destroy_body" 		{components "body" destroy}}

{on "SC_rand_break_body"		{components "body" break}}
{on "SC_rand_break_trackleft" 	{components "trackleft" break}}
{on "SC_rand_break_trackright" 	{components "trackright" break}}
{on "SC_rand_break_turret" 		{components "turret" break}}

{on "SC_rand_break_engine" 
	{if work "engine"	{components "engine" break}
	else				{components "engine" destroy}}
}

; // copypaste - also under use in "GOH/tank/tank-damage".

(Define "SC_vh_kill_crew_Logic" 	
	{if crew_in_place "%place" 
		{if prop "sc_vh_prop_trait_vehicle_crew_t4"		; // immortal crew
		else prop "sc_vh_prop_trait_vehicle_crew_t3"	{if rand (* %mp (* 0.1 (* %kill_crew %kill_mp)))	{call_synced "kill_%place"}}
		else prop "sc_vh_prop_trait_vehicle_crew_t2"	{if rand (* %mp (* 0.25 (* %kill_crew %kill_mp)))	{call_synced "kill_%place"}}
		else prop "sc_vh_prop_trait_vehicle_crew_t1"	{if rand (* %mp (* 0.5 (* %kill_crew %kill_mp)))	{call_synced "kill_%place"}}
		else
			{if rand (* %mp (* %kill_crew %kill_mp))	{call_synced "kill_%place"}}
		}
	}
)

(Define "SC_VH_Main_Define_Melee_Hit"
	
	; // COMPONENT DAMAGE CHANCE
	{if volume "engine"			{if rand (* 0.6 (* %mp %dam_rnd)) {Call_synced "SC_rand_break_engine"}}}	
	{if volume "turret"			{if rand (* %mp %dam_rnd) {Call_synced "SC_rand_break_turret"}}}
	{if volume "trackleft"		{if rand (* 0.25 (* %mp %dam_rnd)) {Call_synced "SC_rand_break_trackleft"}}}		
	{if volume "trackright"		{if rand (* 0.25 (* %mp %dam_rnd)) {Call_synced "SC_rand_break_trackright"}}}
	
	; // CREW INTERACTION CHANCE - [ELSE] IN CASE THE VEHICLE HAS NO CREW, JUST TEMPORALY DISABLE IT!
	{if not prop "SC_plataform_prop_vehicle_auto"
		{if operatable
			{if rand (* %mp %crew_rnd)	{call_synced "crew_shot_chance"} {delay %mp (* %mp 3) "crew_shock_time" {call_synced "crew_revive"}}}
			
			("SC_vh_kill_crew_Logic" place(driver) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(gunner) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(gunner2) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(gunner3) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(gunner4) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(gunner5) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(charger) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(charger2) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(charger3) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(charger4) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
			("SC_vh_kill_crew_Logic" place(commander) kill_crew(%crew_rnd) kill_mp(%kill_rnd) mp(%mp))
		}
	else
		{if rand (* %mp %crew_rnd)	{call_synced "crew_shot_chance"} {delay %mp (* %mp 4) "crew_shock_time" {call_synced "crew_revive"}}}
	}
)	

; <<<<	===================	SC Vehicle Generic: Melee Damage Settings	===================	>>>>

(Define "SC_VH_Melee_Define_Contact_Damage"
	{if effector "%effector"
		{if not tagged "%effector_cooldown"	
			{tags add "%effector_cooldown"}	{delay 0.5 {tags remove "%effector_cooldown"}}
		
			{if "SC_SH_Main_Flag_Is_Online"		
				{If tagged "SC_SH_Main_Tag_Tier1"
					{Call "SC_M_Acc_Define_Deal_shield_debug_x%damage_shield_t1"}	{Call "SC_SH_Main_Hits_Fx_%shield_s"}

				else tagged "SC_SH_Main_Tag_Tier2" 
					{Call "SC_M_Acc_Define_Deal_shield_debug_x%damage_shield_t2"}	{Call "SC_SH_Main_Hits_Fx_%shield_s"}
				}
			else
				{if work "body"	{Call "SC_M_Acc_Define_Deal_bullet_debug_x%damage_armor"}}
				
				%hit_effects
				
				{if prop "SC_plataform_prop_vehicle_behemoth"	
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(0.05) dam_rnd(0.05) crew_rnd(0.05) mp(%effects_behemoth))
					{if not work "body" {if rand (* 0.2 %effects_behemoth) {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank heavy"					
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(0.1) dam_rnd(0.1) crew_rnd(0.1) mp(%effects_heavy))
					{if not work "body" {if rand (* 0.3 %effects_heavy) {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank medium"					
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(0.3) dam_rnd(0.2) crew_rnd(0.15) mp(%effects_medium))
					{if not work "body" {if rand (* 0.4 %effects_medium) {call_synced "SC_rand_destroy_body"}}}
					
				else prop "tank light"					
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(0.5) dam_rnd(0.4) crew_rnd(0.2) mp(%effects_light))
					{if not work "body" {if rand (* 0.5 %effects_light) {call_synced "SC_rand_destroy_body"}}}
					
				else prop "armored_car"					
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(0.7) dam_rnd(0.6) crew_rnd(0.25) mp(%effects_unarmored))
					{if not work "body" {if rand (* 0.6 %effects_unarmored) {call_synced "SC_rand_destroy_body"}}}
					
				else									
					("SC_VH_Main_Define_Melee_Hit" kill_rnd(1.0) dam_rnd(0.8) crew_rnd(0.3) mp(%effects_unarmored))
					{if not work "body" {if rand (* 0.7 %effects_unarmored) {call_synced "SC_rand_destroy_body"}}}
				}
			}		
		}
	}
)

{on "SC_VH_Main_Call_Process_Melee_Hit" sync	;{}

	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier1) 
		damage_armor(01) destroy_chance(0.05)
		effects_behemoth(0.0) effects_heavy(0.0) effects_medium(0.0) effects_light(0.1) effects_unarmored(0.25)
		shield_s(S1) damage_shield_t1(02) damage_shield_t2(01) hit_effects({spawn "metal_hit_bul_heavy"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier2) 
		damage_armor(02) destroy_chance(0.1)
		effects_behemoth(0.0) effects_heavy(0.0) effects_medium(0.0) effects_light(0.2) effects_unarmored(0.5)
		shield_s(S1) damage_shield_t1(04) damage_shield_t2(02) hit_effects({spawn "metal_hit_br_small"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier3) 
		damage_armor(05) destroy_chance(0.15)
		effects_behemoth(0.0) effects_heavy(0.0) effects_medium(0.025) effects_light(0.3) effects_unarmored(0.6)
		shield_s(S1) damage_shield_t1(08) damage_shield_t2(04) hit_effects({spawn "metal_hit_br_small"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier4) 
		damage_armor(10) destroy_chance(0.2)
		effects_behemoth(0.0) effects_heavy(0.025) effects_medium(0.05) effects_light(0.4) effects_unarmored(0.75)
		shield_s(S1) damage_shield_t1(20) damage_shield_t2(10) hit_effects({spawn "metal_hit_br_big_ap"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier5) 
		damage_armor(25) destroy_chance(0.25)
		effects_behemoth(0.025) effects_heavy(0.05) effects_medium(0.1) effects_light(0.5) effects_unarmored(0.8)
		shield_s(S2) damage_shield_t1(40) damage_shield_t2(20) hit_effects({spawn "metal_hit_br_big_ap"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier6) 
		damage_armor(50) destroy_chance(0.3)
		effects_behemoth(0.05) effects_heavy(0.1) effects_medium(0.2) effects_light(0.6) effects_unarmored(0.9)
		shield_s(S2) damage_shield_t1(80) damage_shield_t2(40) hit_effects({spawn "metal_hit_br_big_ap"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier7) 
		damage_armor(75) destroy_chance(0.35)
		effects_behemoth(0.1) effects_heavy(0.2) effects_medium(0.3) effects_light(0.8) effects_unarmored(1.0)
		shield_s(S2) damage_shield_t1(100) damage_shield_t2(50) hit_effects({spawn "metal_hit_penetration_75_105"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier8) 
		damage_armor(100) destroy_chance(0.4)
		effects_behemoth(0.2) effects_heavy(0.3) effects_medium(0.4) effects_light(1.0) effects_unarmored(1.0)
		shield_s(S2) damage_shield_t1(150) damage_shield_t2(100) hit_effects({spawn "metal_hit_penetration_75_105"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier9) 
		damage_armor(150) destroy_chance(0.45)
		effects_behemoth(0.3) effects_heavy(0.4) effects_medium(0.5) effects_light(1.0) effects_unarmored(1.0)
		shield_s(S2) damage_shield_t1(200) damage_shield_t2(150) hit_effects({spawn "metal_hit_penetration_120_152"})
	)
	
	("SC_VH_Melee_Define_Contact_Damage" effector(SC_melee_anti_armor_tier10) 
		damage_armor(200) destroy_chance(0.5)
		effects_behemoth(0.4) effects_heavy(0.5) effects_medium(0.6) effects_light(1.0) effects_unarmored(1.0)
		shield_s(S2) damage_shield_t1(300) damage_shield_t2(200) hit_effects({spawn "metal_hit_penetration_120_152"})
	)
}