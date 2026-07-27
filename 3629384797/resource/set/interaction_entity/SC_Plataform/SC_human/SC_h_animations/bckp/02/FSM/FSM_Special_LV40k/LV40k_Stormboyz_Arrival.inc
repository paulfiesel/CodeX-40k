
;=============================================================================================================================
; FSM SPECIAL - // REQUEST CALL
;=============================================================================================================================

; // BUZZ: The spawn event tag is added through the Breed randomizer call for the stormboyz.
; // BUZZ: This here's called from the "Call-in" entity.

{on "SC_H_Request_Call_Anm_LV40k_Stormboy_Arrival" sync 
	{if not dead 
		{tags add "SC_H_Request_Tag_SPECIAL_LV40k_Stormboyz_Arrival"}
		{tags add "SC_H_Crew_CLL_Tag_Deploy"} 
		{Delay 0.2 1.2 {Call_Synced "SC_H_Request_Call_Anm_LV40k_Stormboy_Arrival_Play_Animations"}}
	}
}
{on "SC_H_Request_Call_Anm_LV40k_Stormboy_Arrival_Play_Animations" sync
	{unlink} {bone show "basis"}
	
	; // BUZZ: delay is temp to overwrite "takegun" animation, this is temporary until i add this state to the FSM.
	{Delay 0.01 
		{unlink} ("SC_FSM_Define_Update_FSM" do(add) state(SPECIAL))	
	}
}

;=============================================================================================================================
; FSM SPECIAL - // EVENT
;=============================================================================================================================

(Define "SC_FSM_SPECIAL_Define_LV40k_Stormboyz_Arrival"
	{Start_sound "SC_DLC_LV40k/W40k_fx/Generic_Jetpack/Orks/or_x_abil_jump_take_off_05" use_position}
	{ani_play "lv40k_stormboy_arrival" callback} {if rand 0.5 {talk "angry_brsrk"}}
	{add_view "ch_vehicle_start" "stormboy_arrival" "#ork_rig-stormrocket"} {view start "stormboy_arrival"}
)

{on animation_end "lv40k_stormboy_arrival" sync
	{ani_play "lv40k_stormboy_land" callback}
	{blastwave c4 2.5 r0 1.5 r1 5.0 position}	; // BUZZ: small blast on landing area to clear small obstacles like sandbags... or gitz!
	
	{delay 1.0 {view stop "stormboy_arrival"}}
	{Start_sound "SC_DLC_LV40k/W40k_fx/Generic_Jetpack/or_x_abil_jump_landing_02" use_position}
	
	; // ADD MORE TERRAIN BASED LANDING FX LATER!
	{if terrain_fx "water"
		{spawn "spherewater_big" "basis" x}	; // CANNOT BE DEPLOYED IN WATER AS THE CALL-IN UNIT HAS A CHECKER FOR IT!
	else terrain_fx "shallow_water"
		{spawn "spherewater_big" "basis" x}
	else
		{spawn "tank_fire_small_dust_ground" "basis" x}
		{Start_sound "SC_DLC_LV40k/W40k_fx/Generic_Jetpack/Landfall" use_position}
	}
}

{on animation_end "lv40k_stormboy_land" sync
	{tags remove "SC_H_Request_Tag_SPECIAL_LV40k_Stormboyz_Arrival"}
	{tags remove "SC_H_Crew_CLL_Tag_Deploy"}
	
	(define "lv40k_stormboy_arrival_ai_enable_attempt"	; // BUZZ: <- generalize this definite to be used within other call-in events later!
		{auto_operatable 1}
		{able select 1}
		{volumes enable bullet touch select visible}
		{able minimap 1}
		{drop_orders}
	)
	
	; // BUZZ: failsafe for framerate.
	("lv40k_stormboy_arrival_ai_enable_attempt")
	{delay 0.1 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	{delay 0.5 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	{delay 1.0 ("lv40k_stormboy_arrival_ai_enable_attempt")}
	{delay 1.5	{volumes enable blast contact}}		; // BUZZ: <- add delay to blast so the other boys that come alongside him doesn't blast the already landed units.
	
	("SC_FSM_Define_Update_FSM" do(remove) state(SPECIAL))	
}


