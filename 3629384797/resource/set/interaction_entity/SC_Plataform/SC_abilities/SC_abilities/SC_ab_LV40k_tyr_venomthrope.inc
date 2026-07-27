
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Ork Warboss Aura] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_Tyr_Venomthrope"
	{Tags remove "SC_AB_Tag_Aura_Venomthrope"}
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"
		{Add_view "midges_pluge" "SC_AB_FX_Aura_Venomthrope" "#vth_rig-spine_01_01SHJnt"}
		{Add_view "smoke_plague_norm" "SC_AB_FX_Aura_Venomthrope" "Basis"}
		
		{View start "SC_AB_FX_Aura_Venomthrope"}
		
		{Call "SC_AB_Call_ability_Tyr_Venomthrope_Spawn_Aura"}
	}
)
	
{On "SC_AB_Call_ability_Tyr_Venomthrope_Spawn_Aura"
	("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_aura_Tyr_Venomthrope) where(basis) args())
	
	{Start_sound "SC_Plataform/body_move/-halo/loop" use_position}
	{Delay 1.0 {Start_sound "SC_Plataform/SC_fx/sc_ability_s1/nurgle_stomachal"}}
	{Delay 8.0 "LV40k_Tyr_Venomthrope_Aura_Delay"	{If not dead	{Call "SC_AB_Call_ability_Tyr_Venomthrope_Spawn_Aura"}}}
}

; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Venomthrope"
	{Kill_Delay "LV40k_Tyr_Venomthrope_Aura_Delay"}	; // <- Terminates aura on death...
	{view stop "SC_AB_FX_Aura_Venomthrope"}
)
