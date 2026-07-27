
;	<<<< ------------------------------------------------------------------------------>>>>			 
;	<< [=============== Ability: [DLC - LV40k / Tyranid Lictor Cloak] ===============] >>
;	<<<<------------------------------------------------------------------------------->>>>			 

(Define "SC_AB_Define_Tyr_Lictor_Uncloak"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Lictor"
		{Tags remove "SC_AB_Tag_Lictor_Is_Cloaked"}
		
		{Able "minimap" 1}
		
		{with_linked_entity "cloaker"
			{Volumes disable visible}
			{update_visibility_patch}
		}
	
		{update_visibility_patch}
		
		{Volumes enable blast}
			
		{Bone hide "arms_c"}
		{Bone hide "body_c"}
		{Bone hide "head_c"}
		{Bone hide "talons_c"}
		
		{Bone show "arms"}
		{Bone show "body"}
		{Bone show "head"}
		{Bone show "talons"}
	
		{If tagged "_SC_INF_Tag_Bot_Unit" {call "SC_AB_Call_Ability_Tyr_Lictor_Cloak"}}
	}
)

(Define "SC_AB_Define_Tyr_Lictor_Revealed"
	{If tagged "SC_AB_Tag_Lictor_Is_Cloaked"
		{If not tagged "SC_AB_Tag_Lictor_Is_Revealed"
			{Tags add "SC_AB_Tag_Lictor_Is_Revealed"}
			{Tags remove "SC_AB_Tag_Lictor_Is_Cloaked"}
				
			{Damage_Report "basis"	"<f(impact)><c(RED)>REVEALED!"}
			("SC_AB_Define_Tyr_Lictor_Uncloak")
			{Delay 60 
				{Tags remove "SC_AB_Tag_Lictor_Is_Revealed"}
			
				{Delay 0.5 	{If tagged "_SC_INF_Tag_Bot_Unit" {call "SC_AB_Call_Ability_Tyr_Lictor_Cloak"}}}
			}
		}
	}
)

; <<<<	===================	Ability Event: Spawn	===================	>>>>	

(Define "SC_AB_Spawn_Tyr_Lictor"
	{Tags remove "SC_AB_Tag_Lictor_Is_Revealed"}
		
	("SC_AB_Define_Tyr_Lictor_Uncloak")
)

; <<<<	===================	Ability Event: Melee Attack	===================	>>>>	

(Define "SC_AB_Attack_Melee_Tyr_Lictor"
	("SC_AB_Define_Tyr_Lictor_Revealed")
)

; <<<<	===================	Ability Event: Damage	===================	>>>>	

(Define "SC_AB_Damage_Tyr_Lictor"
	("SC_AB_Define_Tyr_Lictor_Revealed")
)
	
; <<<<	===================	Ability Event: Die	===================	>>>>	

(Define "SC_AB_Die_Tyr_Lictor"
	("SC_AB_Define_Tyr_Lictor_Uncloak")
)

; <<<<	===================	Ability Event: Trigger Event	===================	>>>>	

{on "SC_AB_Call_Ability_Tyr_Lictor_Cloak"
	{if prop "LV40k_dlc_prop_troopers_Tyr_Lictor"
		{if tagged "SC_AB_Tag_Lictor_Is_Revealed"
			{Damage_Report "basis"	"<f(impact)><c(RED)>REVEALED! <f(impact)><c(FF7F00)>MUST WAIT A MOMENT BEFORE USING THIS AGAIN!"}
			
		else tagged "SC_AB_Tag_Lictor_Is_Cloaked"
			{Damage_Report "basis"	"<f(impact)><c(FF7F00)>ALREADY CLOAKED!"}
			
		else
			{tags add "SC_AB_Tag_Lictor_Is_Cloaked"}
			{Damage_Report "basis"	"<f(impact)><c(BLUE)>CLOAKED!"}
			
			{Bone hide "arms"}
			{Bone hide "body"}
			{Bone hide "head"}
			{Bone hide "talons"}
			
			{Bone show "arms_c"}
			{Bone show "body_c"}
			{Bone show "head_c"}
			{Bone show "talons_c"}
			
			{Call "ABC_EDF_G_HIJ_LMNG"}
			
			{Spawn "circledust_norm" "basis" x}
			
			{Able "minimap" 0}
					
			{Volumes disable blast}
			
			{Start_Sound "SC_PLATAFORM/SC_FX/SC_Ability_S2/invisibility_activate" use_position}
			
			{with_linked_entity "cloaker"
				{Volumes enable visible}
				{update_visibility_patch}
			}
			
			{update_visibility_patch}
		}
	}
}

; // TEST CAMO VOLUME
{On "ABC_EDF_G_HIJ_LMNG"
	{if tagged "SC_AB_Tag_Lictor_Is_Cloaked"
		{Spawn "smoke_volume_cylinder" "basis" x {delay 0.4 {delete}}}
		{Delay 0.1 {Call "ABC_EDF_G_HIJ_LMNG"}}
	}
}