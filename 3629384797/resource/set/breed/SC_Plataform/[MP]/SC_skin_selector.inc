
;	<<<< ------------------------------------------------------>>>>			 
;	<< [=============== Breed Skin Randomizer ===============] >>
;	<<<<------------------------------------------------------->>>>			 

; // Arguments %0 and %1: Concated skin name (READER: not important, as it is already defined in breed mapper)
; // Arguments %2: Randomizer ID Define:
;		* String "Randomizer_" + random ID - Ex: Randomizer_ + LV40k_Orkboy_001 = "Randomizer_LV40k_Orkboy_001"
;		* I recommend adding the DLC prefix + 3 digits alongside the ID as shown right above.	

(Define "Skin_Randomizer_tagged_OLD_METHOD" ; // <- RAM 1gb plus old outdated worse method here just for the sake of it
	{if tagged "sc_skin_tag_%1_%0"				
		("SC_H_Skin_Define_Set_%1_Skin") 	
		{Delay 0.1 
			("Randomizer_%2")
			("SC_Breed_Skin_Define_Post_Skin_Call")
		}
	}
)

(Define "Skin_Randomizer_tagged"
	{if tagged "sc_skin_tag_%1_%0"			
		{Call "SC_H_Skin_Call_Set_%1_Skin"}
		("Randomizer_%2")
	}
)

;	<<<< --------------------------------------------------->>>>			 
;	<< [=============== Breed Skin Mapping ===============] >>
;	<<<<---------------------------------------------------->>>>			 

;	There are several methods when it comes to adding tags to individual breeds/skins in GEM, 
;		-you can try checking Texmods, checking Link_Weapon event or even add an object to inventory and check through contact.

;	The tex_mod checker does not work in MP, or if the map has a station preset, 
;		-tex_mod checkers can only work properly in SP and Editor, so we are not using this method in SC Plataform.

;	The method used bellow is the "Link_Weapon" checker event.
;	It checks which weapon is being linked to the soldier on spawn, thus adding the proper tag.
;	Indeed, this is not the best method. But its alternative, the item in inventory checker can sometimes-
;		-falter when playing in low-performance environments.

; ----------------------------------------------------------------------;

; // Arguments %0: Weapon/Breed matching with same name 
; // Arguments %1: (Animation) Skeleton flag tag, use to switch between SC_Plataform custom skeletons. [IS CASE SENSITIVE!]
	
	;	Avaiable flags in SC_DLC_HALO: 
		;	* HALO_Marine, HALO_Elite, HALO_Brute, HALO_Grunt, HALO_Jackal
	
	;	Avaiable flags in SC_DLC_LV40k: 
		;	* LV40k_Orkboy, LV40k_Orknob, LV40k_Orkgrot,
		;	* LV40k_SpaceMarine, LV40k_SpaceMarine_P, LV40k_Scout, LV40k_Servitor, LV40k_Ogryn
		;	* LV40k_TyranidWarrior, LV40k_TyranidGaunt, LV40k_TyranidZoanthrope, LV40k_TyranidRavener, LV40k_TyranidVenomthrope
		;	* LV40k_Eldarfemale
		
	;	Default skeleton flag: GEM_Default.

; // Arguments %2: Randomizer ID (See more above)

(Define "SC_Skin_Check_Event_Spawn"
	else tagged "sc_skin_tag_%1_%0"
		("Skin_Randomizer_tagged" args %0 %1 %2)
)

(Define "SC_Skin_Check_Event_Inv_Item"
	else tagged "%0"			
		{with_effector
			{delay 0.01	;{} //  BUZZ: <- This delay is necessary, you'll get a .Quant error without it.
				{tags add "sc_skin_tag_%1_%0"}		
				("Skin_Randomizer_tagged" args %0 %1 %2)
			}
		}
		{delete}
)

(Define "SC_Skin_Check_Event_Get_Props"
	{"%0" 
		{on spawn 
			(define "SC_Skin_Select_Attempt"
				{delay %c 
					{if not tagged "sc_h_skin_tag_skeleton_defined"
						{spawn "SC_inventory_item" "body" x 
							{tags add "%0"} 
							{impulse up 0.01}
						;	{gravity 0}
							{delay 0.1 {delete}}
						}
					}
				}
			)
			("SC_Skin_Select_Attempt" c(0))
			("SC_Skin_Select_Attempt" c(0.1))
			("SC_Skin_Select_Attempt" c(0.5))
			("SC_Skin_Select_Attempt" c(1.0))
			("SC_Skin_Select_Attempt" c(2.0))
			("SC_Skin_Select_Attempt" c(3.0))
			("SC_Skin_Select_Attempt" c(5.0))
			("SC_Skin_Select_Attempt" c(10.0))
			("SC_Skin_Select_Attempt" c(15.0))
			("SC_Skin_Select_Attempt" c(25.0))
			
			(mod "mp"
				("SC_Skin_Select_Attempt" c(7.5))
				("SC_Skin_Select_Attempt" c(15.0))
				("SC_Skin_Select_Attempt" c(20.0))
				("SC_Skin_Select_Attempt" c(30.0))
			)
		}
	}
)

(Define "SC_Skin_Tag_Selector"
	("SC_Skin_Check_Event_%0" args %1 %2 %3)
)

; <<<<	===================	Skeleton Breed List	===================	>>>>	


(include "/set/breed/[SC_DLC_HALO]/[MP]/SC_HALO_MP_Breeds.inc")
(include "/set/breed/[SC_DLC_LV40k]/[MP]/SC_LV40k_MP_Breeds.inc")

(define "SC_Breed_Skin_Define_Get_Tags"
	("SC_DLC_HALO_MP_Breeds" args %0)
	("SC_DLC_LV40k_MP_Breeds" args %0)
)

{On "SC_Breed_Skin_Call_Post_Skin_Defined"		; // BUZZ: <- use to fix and cut unwanted bones.
	("SC_DLC_HALO_MP_Breeds_Post_Call")
	("SC_DLC_LV40k_MP_Breeds_Post_Call")
}