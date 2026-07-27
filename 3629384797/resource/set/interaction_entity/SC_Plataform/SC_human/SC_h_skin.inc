	
;	<<<< --------------------------------------------------------------->>>>			 
;	<< [=============== Humanskin Model Sorting Script ===============] >>
;	<<<<---------------------------------------------------------------->>>>			 

; <<<<	===================	SKINS: Link FX Views	===================	>>>>	

(define "SC_H_Skin_Define_Link_Views"
	{delay 0.1
		{Delay 0.2 {View start "SC_H_Fx_Skins_Disable_On_Death"}}
		
		{add_view	"cigarettesmoke"			"smoke"					%head}
		{add_view	"drops_water_small2"		"on_water"				%foot_right}
		{add_view	"drops_water_small2"		"on_water"				%foot_left}
		{add_view	"wash_human_small"			"swim_move"				%head}
		{add_view	"drops_water_small"			"on_puddle"				%foot_right}
		{add_view	"drops_water_small"			"on_puddle"				%foot_right}
		{add_view	"drops_puddle_small"		"on_shallow_water"		%foot_right}
		{add_view	"drops_puddle_small"		"on_shallow_water"		%foot_left}
		{add_view	"drops_puddle_small"		"on_row"				%gun_back}
		{add_view 	"fire_dead" 				"burn_fire" 			%body}

		{add_view	"marker_healing"			"marker_healing"			%head 	not_manual not_scenario}
		{add_view	"marker_repair"				"marker_repair"				%head 	not_manual not_scenario}
		{add_view	"marker_ammo_out"			"marker_ammo_out"			%head 	not_manual not_scenario}
		{add_view	"marker_ammo_refill"		"marker_ammo_refill"		%head 	not_manual not_scenario}
		{add_view	"marker_personage"			"marker_personage"			%head 	not_manual not_scenario}
		{add_view	"marker_personage_acute"	"marker_personage_acute"	%head 	not_manual not_scenario}
		{add_view	"marker_veterancy"			"marker_veterancy"			%head 	not_manual not_scenario}
		{add_view	"selection_linked"			"selection_linked"			%head 	not_manual not_scenario}
		
		; // ~~~~~~~~~~~~~~~~~~~~~~~~~~ SC PLATAFORM FX
		{add_view	"healing_bio"	"SC_healing"	%head 	not_manual}
	}
)

; <<<<	===================	SKINS: Skeleton Sets	===================	>>>>	

(define "SC_H_Skin_Define_is_Skin_Default"		{tags add "sc_h_skin_tag_skeleton_gem_default"})	
(define "SC_H_Skin_Define_is_Custom_Skin"		{tags add "sc_h_skin_tag_skeleton_%t"})	
(define "SC_H_Skin_Define_not_Custom_Skin"		{tags remove "sc_h_skin_tag_skeleton_%t"} 	{bone cut "%t_body"}	{bone cut "%t_models"})

(define "SC_H_Skin_Define_Custom_Skeletons_Listed"
	("SC_H_Skin_Define_%0_Skin_Default")
	
	; // SC HALO DLC
	("SC_H_Skin_Define_%1_Custom_Skin"	t(halo_brute))
	("SC_H_Skin_Define_%2_Custom_Skin"	t(halo_elite))
	("SC_H_Skin_Define_%3_Custom_Skin"	t(halo_grunt))
	("SC_H_Skin_Define_%4_Custom_Skin"	t(halo_jackal))
	("SC_H_Skin_Define_%5_Custom_Skin"	t(halo_marine))
	("SC_H_Skin_Define_%6_Custom_Skin"	t(halo_spartan))
	
	; // SC LV40k DLC
	("SC_H_Skin_Define_%7_Custom_Skin"	t(lv40k_spacemarine))
	("SC_H_Skin_Define_%8_Custom_Skin"	t(lv40k_orkboy))
	("SC_H_Skin_Define_%9_Custom_Skin"	t(lv40k_orknob))
	("SC_H_Skin_Define_%10_Custom_Skin"	t(lv40k_tyranidgaunt))
	("SC_H_Skin_Define_%11_Custom_Skin"	t(lv40k_tyranidwarrior))
	("SC_H_Skin_Define_%12_Custom_Skin"	t(lv40k_orkgrot))
	("SC_H_Skin_Define_%13_Custom_Skin"	t(lv40k_tyranidzoanthrope))
	("SC_H_Skin_Define_%14_Custom_Skin"	t(lv40k_tyranidravener))
	
	("SC_H_Skin_Define_%15_Custom_Skin"	t(lv40k_spacemarine_p))
	("SC_H_Skin_Define_%16_Custom_Skin"	t(lv40k_scout))
	("SC_H_Skin_Define_%17_Custom_Skin"	t(lv40k_servitor))
	
	("SC_H_Skin_Define_%18_Custom_Skin"	t(lv40k_tyranidvenomthrope))
	
	("SC_H_Skin_Define_%19_Custom_Skin"	t(lv40k_ogryn))
	
	("SC_H_Skin_Define_%20_Custom_Skin"	t(lv40k_eldarfemale))
	
	{tags add "sc_h_skin_tag_skeleton_defined"}

	{Delay 0.1 {Call "SC_Breed_Skin_Call_Post_Skin_Defined"}}	; // BUZZ: <- calls events on after the skin is defined.
	
	("SC_H_Skin_Weapon_Define_Spawn_Event")						; // BUZZ: <- link FX only after skeleton is defined.
	("SC_Abilities_Define_Spawn_Event")	

	("SC_H_Request_Define_Spawn_Event")		; // BUZZ: <- test
)

; ------------------------------------------------------------------------------------;

; // References to DLCs
(include "SC_h_skin/SC_sk_GEM_default.inc")	
(include "SC_h_skin/SC_DLC_HALO.inc")	
(include "SC_h_skin/SC_DLC_LV40k.inc")	

; <<<<	===================		Skin Selector	===================	>>>>	

(include "/set/breed/SC_Plataform/[MP]/SC_skin_selector.inc")	

(define "SC_H_Skin_Define_Spawn_Event"
	{if tagged "sc_h_skin_tag_skeleton_defined"
		{if tagged "@@@@@@"	("SC_Breed_Skin_Define_Get_Tags" args Spawn)}
	}
)

(define "SC_H_Skin_Define_Breed_Tags_Contact"
	{if effector "SC_inventory_item"
		{if not tagged "sc_h_skin_tag_skeleton_defined"
		
			{if not linked			;} // BUZZ: <- IN MULTIPLAYER VEHICLE TAGS ARE ADDED WITHIN "SC_H_CREW".inc 
				{with_Effector
					{if tagged "@@@@@@"		
						("SC_Breed_Skin_Define_Get_Tags" args Inv_Item)
					else
				;		{delete}	; // BUZZ: <- (DO NOT DELETE ANYMORE!) If the breed_selector has collided with an untagged marker this will be called.
					}	
				}
			}
		}
	}
)



