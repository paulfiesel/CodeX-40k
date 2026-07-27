
; ============================================================================================================================================================ ;
; // ORKZ - DIGGA
; ============================================================================================================================================================ ;

{"lv40k_mp_call_ork_digga"
	{on spawn
		{add_view "fx_call-in_ork_1_idle_ally"		"marker_idle_ally_fx" "basis"}
		{add_view "fx_call-in_ork_1_active_ally"	"marker_active_ally_fx" "basis"}
		{add_view "fx_call-in_ork_1_active_foe"		"marker_active_enemy_fx" "basis"}
		{add_view "fx_call-in_ork_1_idle_foe"		"marker_active_enemy_fx" "basis"}
		
		{add_view "ch_vehicle_start" "Digga_Exhaust" "Fxsmoke1"}
		{link_sound "sfx" "SC_DLC_LV40k/W40k_announcer_mp/ork_announcer/ork_player_reinf_digger"}
		{Link_sound "Digga_Sounds" "SC_DLC_LV40k/W40k_vehicles/engine/ig_baneblade/full"}
		
		{volumes "body" disable bullet blast contact visible touch obstacle}	{Bone hide "Body"}
	}
	{On "SC_MP_CLL_Call_Activated_Use"
		{Start_Sound "SC_Plataform/SC_fx/sc_ability_s3/Orks_digga/tremor" use_position}
		
		{Spawn "conquest_spawn_indicator" "body" x {Delay 12.0 {Delete}}}
		
		{delay 10	{Ani_play "Emerge" 0.8 callback} {Ani_play "Drills" 0.55}}
	}
	{on animation_event "Emerge"
		{View start "Digga_Exhaust"}
		{Play_sound "Digga_Sounds" 1}
		
		{blastwave c4 20 r0 0.5 r1 6.0 position}
		{blastwave c4 5.0 r0 6.0 r1 10.0 position}
		
		{View stop "marker_idle_ally_fx"}
		{View stop "marker_active_ally_fx"}
		{View stop "marker_active_enemy_fx"}
		
		{volumes "body" enable bullet blast contact visible touch obstacle}	
		{Bone show "Body"}
		
		{Spawn "fx_ork_digga_emerge_blast_dirt" "basis" x}
		{Delay 0.1 {Spawn "shellhole_big_ground_3" "basis" x}}
	}
	{on animation_event "Delete_Me"	
		{Delay 0.5 {Delete}}
	}
	{on animation_end "Emerge"
		{Ani_play "Doors" 0.6 callback}
		{Delay 10.0 
			{Ani_play "Doors" -0.6}
			{delay 0.5
				{Start_Sound "SC_Plataform/SC_fx/sc_ability_s3/Orks_digga/tremor" use_position}
				
				{Spawn "spheredust_big" "basis" x}
				{Delay 1.0 {Spawn "spheredust_big" "basis" x}}
				
				{Ani_Play "Drills"}
				{Ani_play "Go_back" -1 callback}
			}
		}
	}
	{on animation_end "Doors" overload		; {}	// BUZZ: <- here is where you spawn troops.
	}
}

{"lv40k_mp_call_ork_digga_slugga_mob"
	{on animation_end "Doors" overload		
		{Delay 0.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orknob_evilsunz_1) where(Boy_R01) args())}
		{Delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R02) args())}
		{Delay 0.3 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R03) args())}
		{Delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R04) args())}
		{Delay 0.5 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R05) args())}
		{Delay 0.6 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R06) args())}
		{Delay 0.8 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R07) args())}
		{Delay 0.9 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R08) args())}
		{Delay 1.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R09) args())}
		{Delay 1.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_R10) args())}
		
		{Delay 0.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orknob_evilsunz_1) where(Boy_L01) args())}
		{Delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L02) args())}
		{Delay 0.3 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L03) args())}
		{Delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L04) args())}
		{Delay 0.5 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L05) args())}
		{Delay 0.6 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L06) args())}
		{Delay 0.8 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L07) args())}
		{Delay 0.9 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L08) args())}
		{Delay 1.1 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L09) args())}
		{Delay 1.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(hi_orkboy_slugga_evilsunz_1) where(Boy_L10) args())}
		{Delay 0.5 {Spawn "waagh" "basis" x}}
	}
}

{"lv40k_mp_call_ork_digga_meganobz"
	{on animation_end "Doors" overload	
		{Delay 0.3 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_meganob_evilsunz_2) where(Boy_R03) args())}
		{Delay 0.5 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_meganob_evilsunz_1) where(Boy_R09) args())}
		
		{Delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_meganob_evilsunz_1) where(Boy_L07) args())}
		{Delay 0.2 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_meganob_evilsunz_1) where(Boy_L10) args())}
		{Delay 0.4 ("SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player" c(HI_meganob_evilsunz_1) where(Boy_L06) args())}
		{Delay 0.5 {Spawn "waagh" "basis" x}}
	}
}
