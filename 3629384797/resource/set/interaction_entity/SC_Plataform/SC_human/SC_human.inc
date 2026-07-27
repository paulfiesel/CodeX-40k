
;	<<<< ---------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Human ===============] >>
;	<<<<----------------------------------------------------------------------->>>>			 

{"SC_Plataform_prop_human"
	(Include "SC_H_animations/SC_H_animations.inc")
	(Include "SC_H_gore.inc")
	(Include "SC_H_skin_weapon.inc")
	(Include "SC_H_skin.inc")
	(Include "SC_H_crew.inc")
	
	{on spawn 
		{Delay 0.01 {volumes enable contact}}
		
		("SC_H_Skin_Define_Spawn_Event")
		
		{Delay 0.1	{If linked	{Call "SC_H_Crew_Call_Spawn_Event"}}}
		
		; // Additional Attemps as safety [...]
		{Delay 1.5	{If linked	{If not dead {Call "SC_H_Crew_Call_Spawn_Event"}}}}
		{Delay 5.0	{If linked	{If not dead {Call "SC_H_Crew_Call_Spawn_Event"}}}}
	}
	{on "Link_weapon" sync
		("SC_H_Skin_Weapon_Define_Link_Weapon")		
		("SC_H_Request_Define_Link_Weapon")
	}	 
	{on "unlink_weapon" sync
		("SC_H_Skin_Weapon_Define_Unlink_Weapon")	
		("SC_H_Request_Define_Unlink_Weapon")
	}	 
	{on fire "hand_right"
		("SC_H_Skin_Weapon_Define_Fire_Hand_Right")	
		("SC_H_Request_Define_Fire_Hand_Right")
	}
	{on blast_hit
		; [...]
	}
	{on bullet_hit
		("SC_H_Request_Define_Bullet_Hit")
	}
	{on "die"
		("SC_H_Gore_Define_Die")
		("SC_H_Request_Define_Die")
		
		{View stop "SC_H_Fx_Skins_Disable_On_Death"}	; // <- Turns Randomizer FX Off upon death.
	}
	{on contact	
		("SC_H_Skin_Define_Breed_Tags_Contact")
	}
}

; =============================================================================================================== ;

("SC_Breed_Skin_Define_Get_Tags" args Get_Props)	; // BUZZ: <- Generetes a prop for each inventory item.

{"SC_inventory_item"}	; // BUZZ: <- for notice
