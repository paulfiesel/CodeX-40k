
;	<<<< ---------------------------------------------------------------------->>>>			 
;	<< [=============== LV40k DLC Interaction Entity: Human ===============] >>
;	<<<<----------------------------------------------------------------------->>>>			 

{"LV40k_DLC_prop_human"
	{on spawn
	
		; // TEST
		{tags remove "dropped_orders"}
	}
	
	; <<<<	===================	LV40k Human: Weapon	===================	>>>>	

	{on "Link_weapon"
	
		;{} // BUZZ: Patch up ork skins fingers
		{ani_play "orkboy_fidget_left_hand_choppa"}
		{ani_play "orkboy_fidget_right_hand_shoota"}
		{ani_play "orknob_fidget_left_hand_choppa"}
		{ani_play "orknob_fidget_right_hand_shoota"}
		
		{ani_play "Scouts_Fidget"}
	}
	
	; <<<<	===================	LV40k Human: Death	===================	>>>>	

	{on "die"
		{if not dead
			
			;{} // BUZZ: small detail of orks releasing spores upon their deaths...
			{if tagged "sc_h_skin_tag_skeleton_lv40k_orkboy" {spawn "orks_spor" "body" x}}	
			{if tagged "sc_h_skin_tag_skeleton_lv40k_orknob" {spawn "orks_spor" "body" x}}
		}
	}
	
	; // TEST
	
	{on pierce
		{if tagged "_SC_inf_tag_bot_unit"
		
			{if not tagged "dropped_orders" {tags add "dropped_orders"} {delay 10.0 {tags remove "dropped_orders"}}
				{drop_orders}
			}
		}
	}
}
