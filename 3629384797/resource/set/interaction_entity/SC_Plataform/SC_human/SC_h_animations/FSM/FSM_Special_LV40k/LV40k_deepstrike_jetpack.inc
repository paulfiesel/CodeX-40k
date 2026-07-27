
; // BUZZ: [ORK] Stormboyz - [SMS] Assault Marines

;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

{on "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival" sync 
	{if not dead 
		{tags add "SC_H_Request_Tag_SPECIAL_LV40k_Jetpack_Arrival"}
		{tags add "SC_H_Crew_CLL_Tag_Deploy"} 
		{Delay 0.1 1.5 {Call_Synced "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival_Play_Animations"}}
	}
}

{on "SC_H_Request_Call_Anm_LV40k_Jetpack_Arrival_Play_Animations"
	{unlink} {bone show "basis"}
	("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Jetpack_Arrival"
	{Start_sound "SC_Plataform/SC_fx/sc_ability_s1/generic_jetpack/orks/or_x_abil_jump_take_off_05" use_position}
	
	{view start "LV40k_deepstrike_jetpack_FX"}
	{if rand 0.5 {talk "angry_brsrk"}}
	 
	{if tagged "sc_h_skin_tag_lv40k_stormboyz"
		{ani_play "lv40k_stormboy_arrival" callback} 
		
	else tagged "sc_h_skin_tag_lv40k_assaultmarines"
		{ani_play "lv40k_sms-assault_marine_descend" callback} 
		
	else tagged "IG_jetpack"
		; [...]
		
	else tagged "Eldar_swoopinghawk"
		; [...]
	}
)

(Define "SC_FSM_SPECIAL_Define_LV40k_Jetpack_Land"
	{Start_sound "SC_Plataform/SC_fx/sc_ability_s1/generic_jetpack/orks/or_x_abil_jump_landing_02" use_position}
	
	; // BUZZ: Landing FX
	{if terrain_fx "shallow_water"
		{spawn "spherewater_big" "basis" x}
	else
		{spawn "tank_fire_small_dust_ground" "basis" x}
		{Start_sound "SC_Plataform/SC_fx/sc_ability_s1/generic_jetpack/orks/Landfall" use_position}
	}
	
	{delay 1.0 {view stop "LV40k_deepstrike_jetpack_FX"}}
		
	; // BUZZ: Per user FX
	{if tagged "sc_h_skin_tag_lv40k_stormboyz"
		{blastwave c4 2.5 r0 1.5 r1 5.0 position}	; // BUZZ: small blast on landing area to clear small obstacles like sandbags... or gitz!
		{ani_play "lv40k_stormboy_land" callback}
		
	else tagged "sc_h_skin_tag_lv40k_assaultmarines"
		{blastwave c4 2.5 r0 1.5 r1 5.0 position}	; // BUZZ: small blast on landing area to clear small obstacles like sandbags... or gitz!
		{ani_play "lv40k_sms-assault_marine_impact" callback}
		
	else tagged "IG_jetpack"
		; [...]
		
	else tagged "Eldar_swoopinghawk"
		; [...]
	}
)

(Define "SC_FSM_SPECIAL_Define_LV40k_Jetpack_End"
	{tags remove "SC_H_Request_Tag_SPECIAL_LV40k_Jetpack_Arrival"}
	{tags remove "SC_H_Crew_CLL_Tag_Deploy"}
	
	{Call "SC_H_Request_Call_Callin_Exit"} 
	
	("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
)

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ;

{on animation_end "lv40k_stormboy_arrival" sync					("SC_FSM_SPECIAL_Define_LV40k_Jetpack_Land")}
{on animation_end "lv40k_stormboy_land" sync					("SC_FSM_SPECIAL_Define_LV40k_Jetpack_End")}

{on animation_end "lv40k_sms-assault_marine_descend" sync		("SC_FSM_SPECIAL_Define_LV40k_Jetpack_Land")}
{on animation_end "lv40k_sms-assault_marine_impact" sync		("SC_FSM_SPECIAL_Define_LV40k_Jetpack_End")}