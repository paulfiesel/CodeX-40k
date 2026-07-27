
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_TP_Request_Call_Anm_LV40k_Tervigon_Spawn" sync 
	{if not dead 
		{tags add "SC_TP_Request_Tag_SPECIAL_LV40k_Tervigon"}
		
		("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))
	}
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Tervigon_Stop_Animations"
	{Ani_Stop "Tervigon_Spawn"}
	
	{tags remove "SC_AB_Tag_Ability_Chek_Tervigon"}
)

(Define "SC_FSM_SPECIAL_Define_LV40k_Tervigon"
	("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
	("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
	("SC_TP_Main_Define_IKs_Disable")
	("SC_TP_Main_Define_Chassis_Disable")
	
	{ani_play "Tervigon_Spawn" 0.5 callback}
	{start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}
	{Delay 1.9 {start_sound "talk/human/lv40k_tyr_big/angry_brsrk/v1" use_position}}

	; // BUZZ: Reminder to Add Color tags later!
	{Delay 0.2 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit1) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 0.4 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit2) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 0.6 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit3) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 0.8 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit4) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 1.0 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit5) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 1.2 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit6) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 1.4 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit7) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 1.6 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit8) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 1.8 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit9) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
	{Delay 2.0 {If not dead 	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(hi_tyr_hormagaunt_leviathan_1) where(emit10) args({Spawn "bloodsparks_big-g" "basis" x} {Delay 90 {Call "die"}}))}}
)

{on animation_end "Tervigon_Spawn"			; {}
	
	{Delay 0.1 
		("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
		("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
		("SC_TP_Main_Define_IKs_Disable")
		("SC_TP_Main_Define_Chassis_Disable")
			
		; {} // TAG FROM SC ABILITY
		{tags remove "SC_AB_Tag_Ability_Chek_Tervigon"}
		{Tags add "SC_AB_Tag_Ability_Tervigon_Cooldown"}	{Delay 21.0 "SC_AB_Delay_Ability_Tervigon_Cooldown" {Tags remove "SC_AB_Tag_Ability_Tervigon_Cooldown"}}

		{tags remove "SC_TP_Request_Tag_SPECIAL_LV40k_Tervigon"}
		
		("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
	}
}

