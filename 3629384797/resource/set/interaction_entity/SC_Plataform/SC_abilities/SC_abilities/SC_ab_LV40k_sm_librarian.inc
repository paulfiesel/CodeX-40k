
;	<<<< -------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / SM Librarian] ===============] >>
;	<<<<--------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Librarian"
	{tags remove "SC_AB_Tag_Ability_Chek_Librarian"}
)

; <<<<	===================	Ability Event: Contact	===================	>>>>	

(Define "SC_AB_Contact_SM_Librarian"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_librarian"
		{if tagged "_SC_INF_Tag_Bot_Unit"	
			("SC_Allegiance_Define_Check_Effector_Different_Tag" effector(SC_prop_contactor_melee) do({Call_synced "SC_AB_Call_Ability_SM_librarian_mindwar"}))
		}
	}
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_SM_librarian_mindwar"
	{if tagged "sc_h_skin_tag_lv40k_spacemarine_librarian"
		{if tagged "SC_AB_Tag_Ability_Chek_Librarian"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
		else
			{Tags add "SC_AB_Tag_Ability_Chek_Librarian"}	{Delay 90.0 "SC_AB_Delay_Ability_SM_Librarian_Cooldown" {Tags remove "SC_AB_Tag_Ability_Chek_Librarian"}}
			
			("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag" c(lv40k_melee_sm_librarian_blast) where(basis) args())
			{Spawn "fx_sm_librarian_ability" "basis" x}
			{start_sound "SC_Plataform/hit/-bullet/size3/electro/arc_big" use_position}
		}
	}
}