
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Weirdboy] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Ork_Weirdboy"
	{Tags remove "SC_AB_Tag_Ability_Weirdboy_Shields"}
	{Tags remove "SC_AB_Tag_Ability_Chek_Shields"}
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

; // Weirdboy explosion death
	
(Define "SC_AB_Die_Ork_Weirdboy"
	{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"
		{view stop "ork_fx_aura_Weirdboy"}
		{delay 0.01 
			{ani_play "sc_halo_flood_morph_test" 0.4 callback}
			{delay 0.5	{start_sound "talk\human\lv40k_ork_weirdboy\panicking\v1" 1 use_position}}
			{delay 4.0 	{start_sound "talk\human\lv40k_ork_weirdboy\panicking\v1" 1 use_position}}
			{add_view "plasma_smoke_gre" "fx_dead_weirdboy" "head"}
			{add_view "plasma_smoke_gre" "fx_dead_weirdboy" "body"}
			{View start "fx_dead_weirdboy"}
		}
	}
)

{on animation_end "sc_halo_flood_morph_test"
	{spawn "fx_ork_weirdboy_psychic_dead" "basis" x}
	{blastwave c4 5.0 r0 2.0 r1 6.0 position}
	
	("SC_INF_Define_Explode_Death" human(1) tsz1(1) tsz2(1) tsz3(1))
}

; <<<<	===================	Ability Event: Fire Hand Right	===================	>>>>	

(Define "SC_AB_Attack_Ork_Weirdboy"

	; // BUZZ: AI trigger.
	{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"
		{if tagged "_SC_INF_Tag_Bot_Unit"	{if not tagged "SC_AB_Tag_Ability_Chek_Shields"	{if rand 0.5 {Call_synced "SC_AB_Call_Ability_Ork_Weirdboy_Shields"}}}}
	}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_Ork_Weirdboy"
	("SC_Allegiance_Define_Check_Effector_Same_Tag" effector(lv40k_aura_Ork_Weirdboy) do({Call "SC_AB_Call_ability_Ork_Weirdboy_Effects"}))
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Ork_Weirdboy_Shields"
	{if tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"
		{if not tagged "SC_AB_Tag_Ability_Chek_Shields"
			{Tags add "SC_AB_Tag_Ability_Chek_Shields"}	{Delay 480 "SC_AB_Delay_Ability_Weirdboy_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Shields"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_Ork_Weirdboy) where(basis) args())
			{Spawn "fx_ork_weirdboy_ability" "basis" x}
		else
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		}
	}
}

{on "SC_AB_Call_ability_Ork_Weirdboy_Effects" 
	{if tagged "SC_INF_Tag_Unit_Faction_Orks"
		{if dead
			; [...]
		else tagged "start_personage"						;} // BUZZ: <- prevents personage/bleeding state orks from triggering FX.
			; [...]
		else tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"	;} // BUZZ: <- prevents it from affecting the weirdboy himself.
			; [...]
		else tagged "SC_AB_Tag_Ability_Weirdboy_Shields"
			; [...]
		else
			{Tags add "SC_AB_Tag_Ability_Weirdboy_Shields"}
			{Set "SC_SH_Main_Flag_No_Recharge" 1}
			
			{Damage_Report "basis"	"<f(impact)><c(GREEN)>Weirdstuff Around Me!"}
		
			{If prop "human"
				{add_view "fx_shields_online_weirdboy" 		"SC_SH_Main_FX_Shields_Online" "body"}
				{add_view "fx_shields_offline_weirdboy" 	"SC_SH_Main_FX_Shields_Depleted" "body"}
				{add_view "fx_shields_recharge_weirdboy" 	"SC_SH_Main_FX_Shields_Recharge" "body"}
			else
				{add_view "fx_shields_online_weirdboy" 		"SC_SH_Main_FX_Shields_Online" "fx_generic_body"}
				{add_view "fx_shields_offline_weirdboy" 	"SC_SH_Main_FX_Shields_Depleted" "fx_generic_body"}
				{add_view "fx_shields_recharge_weirdboy" 	"SC_SH_Main_FX_Shields_Recharge" "fx_generic_body"}
			}
			("SC_SH_Main_Define_Add_Shields" tier(1) lvl(1))
		}
	}
}