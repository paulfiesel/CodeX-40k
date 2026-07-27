
; Breed tag assigner script.

; Check instructions in: "/set/breed/SC_Plataform/[MP]/SC_Skin_Selector.inc"

(Define "SC_DLC_LV40k_MP_Breeds"

	; // ORKS
	(Include "/set/breed/[SC_DLC_LV40k]/[MP]/-Orks/[Tags]/LV40k_MP_Orks_Breeds.inc")
	("LV40k_MP_Breeds_Orks" args %0)
	
	; // Space Marines
	(Include "/set/breed/[SC_DLC_LV40k]/[MP]/-SM/[Tags]/LV40k_MP_SMs_Breeds.inc")
	("LV40k_MP_Breeds_SMs" args %0)
	
	; // Imperial Guard
	(Include "/set/breed/[SC_DLC_LV40k]/[MP]/-ig/[Tags]/LV40k_MP_IG_Breeds.inc")
	("LV40k_MP_Breeds_IG" args %0)
	
	; // Tyranids
	(Include "/set/breed/[SC_DLC_LV40k]/[MP]/-tyr/[Tags]/LV40k_MP_Tyr_Breeds.inc")
	("LV40k_MP_Breeds_Tyr" args %0)
)

; ========================================================================================================================================;

; // BUZZ: I'll temporaly leave this part of the code here, when it gets too big, i'll move each part of it to the respective folders of the races they belong.

(Define "SC_DLC_LV40k_MP_Breeds_Post_Call"			

	{able "fight" 0}
	 
	; ================================================== ;
	; // SC SCRIPT - Traits
	; ================================================== ;
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_orknob"		
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_melee_resistance_t3"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"	
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_melee_resistance_t2"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_gas_resistance_t2"}
		{tags add "sc_skin_tag_trait_poison_resistance_t1"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_melee_resistance_t3"}
		
	else tagged "sc_h_skin_tag_lv40k_orkboy_weirdboy"		
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"	
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_gas_resistance_t1"}
		{tags add "sc_skin_tag_trait_melee_resistance_t4"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine_p"	
		{tags add "sc_skin_tag_trait_heavy_infantry"}
		{tags add "sc_skin_tag_trait_gas_resistance_t1"}
		{tags add "sc_skin_tag_trait_melee_resistance_t4"}
		
	else tagged "sc_h_skin_tag_skeleton_lv40k_scout"		
		{tags add "sc_skin_tag_trait_melee_resistance_t2"}
	}
	
	; ================================================== ;
	; // Space Marines - SMS
	; ================================================== ;
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine"			{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Space_Marines"}
	else tagged "sc_h_skin_tag_skeleton_lv40k_spacemarine_p"		{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Space_Marines"}
	else tagged "sc_h_skin_tag_skeleton_lv40k_scout"				{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Space_Marines"}
	else tagged "sc_h_skin_tag_skeleton_lv40k_servitor"				{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{able "crew" 0} {able "fight" 0}}
	
	; ================================================== ;
	; // Orks - ORK
	; ================================================== ;
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_orkgrot"				{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Orks"}
	else tagged "sc_h_skin_tag_skeleton_lv40k_orkboy"				{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Orks"}
	else tagged "sc_h_skin_tag_skeleton_lv40k_orknob"				{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Orks"}}
	
	; ================================================== ;
	; // Tyranids - TYR
	; ================================================== ;
	
	{if tagged "sc_h_skin_tag_skeleton_lv40k_tyranidravener"		{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}	{able "crew" 0}
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidgaunt"			{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}	{able "crew" 0}
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidwarrior"		{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}	{able "crew" 0}
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidvenomthrope"	{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}	{able "crew" 0} {able "fight" 0}
	else tagged "sc_h_skin_tag_skeleton_lv40k_tyranidzoanthrope"	{tags add "SC_INF_Tag_Unit_Faction_Xenos"}	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}	{able "crew" 0} {able "fight" 0}}
	
	; ================================================== ;
	; // Imperial Guard - IGC
	; ================================================== ;
	
	
	{if tagged "sc_skin_tag_lv40k_guardsmen"						{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}}

	{if not tagged "sc_skin_tag_lv40k_guardsmen_Csp"
		{bone cut "#imp_rig-guardsmen_body_vol"}
		{bone cut "#imp_rig-guardsmen_head_vol"}
	else
		{bone cut "ik_updown_volume"}
		{bone cut "head_volume"}
	}
	{if not tagged "sc_skin_tag_lv40k_guardsmen_Vet"
		{bone cut "#imp_rig-veteran_body_vol"}
		{bone cut "#imp_rig-veteran_head_vol"}
		{bone cut "#imp_rig-veteran_Hand1r_vol"}
		{bone cut "#imp_rig-veteran_Hand1l_vol"}
		{bone cut "#imp_rig-veteran_foot2r_vol"}
		{bone cut "#imp_rig-veteran_foot2l_vol"}
	else
		{bone cut "ik_updown_volume"}
		{bone cut "head_volume"}
		{bone cut "foot2l_volume"}
		{bone cut "foot2r_volume"}
	}
	{if not tagged "sc_skin_tag_lv40k_guardsmen_Stm"
		{bone cut "#imp_rig-stormtrooper_body_vol"}
		{bone cut "#imp_rig-stormtrooper_head_vol"}
		{bone cut "#imp_rig-stormtrooper_Hand1r_vol"}
		{bone cut "#imp_rig-stormtrooper_Hand1l_vol"}
		{bone cut "#imp_rig-stormtrooper_Hand2r_vol"}
		{bone cut "#imp_rig-stormtrooper_Hand2l_vol"}
		{bone cut "#imp_rig-stormtrooper_Foot1r_vol"}
		{bone cut "#imp_rig-stormtrooper_Foot1l_vol"}
		{bone cut "#imp_rig-stormtrooper_foot2r_vol"}
		{bone cut "#imp_rig-stormtrooper_foot2l_vol"}
	else
		{bone cut "ik_updown_volume"}
		{bone cut "head_volume"}
		{bone cut "foot1r_volume"}
		{bone cut "foot1l_volume"}
		{bone cut "foot2l_volume"}
		{bone cut "foot2r_volume"}
	}
)