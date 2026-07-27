
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Vehicles Generic ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

{"SC_plataform_prop_grav_vehicle"	;{}
	(Include "SC_grav_animations/SC_grav_animations.inc")
	(include "SC_grav_animations/SC_grav_request.inc")
	
	{on spawn 	
		("SC_GRAV_Request_Define_Spawn")
		
		{if prop "@@@@@@"
			
		else prop "behemoth"
			{add_view "fx_sc_grav_hover_s4_ground" "SC_grav_veh_FX_hover_ground" "basis"}
			{add_view "fx_sc_grav_hover_s4_snow" "SC_grav_veh_FX_hover_snow" "basis"}
			{add_view "fx_sc_grav_hover_s4_sand" "SC_grav_veh_FX_hover_sand" "basis"}
			{add_view "fx_sc_grav_hover_s4_water" "SC_grav_veh_FX_hover_water" "basis"}
			
		else prop "heavy"
			{add_view "fx_sc_grav_hover_s3_ground" "SC_grav_veh_FX_hover_ground" "basis"}
			{add_view "fx_sc_grav_hover_s3_snow" "SC_grav_veh_FX_hover_snow" "basis"}
			{add_view "fx_sc_grav_hover_s3_sand" "SC_grav_veh_FX_hover_sand" "basis"}
			{add_view "fx_sc_grav_hover_s3_water" "SC_grav_veh_FX_hover_water" "basis"}
			
		else prop "medium"
			{add_view "fx_sc_grav_hover_s2_ground" "SC_grav_veh_FX_hover_ground" "basis"}
			{add_view "fx_sc_grav_hover_s2_snow" "SC_grav_veh_FX_hover_snow" "basis"}
			{add_view "fx_sc_grav_hover_s2_sand" "SC_grav_veh_FX_hover_sand" "basis"}
			{add_view "fx_sc_grav_hover_s2_water" "SC_grav_veh_FX_hover_water" "basis"}
			
		else
			{add_view "fx_sc_grav_hover_s1_ground" "SC_grav_veh_FX_hover_ground" "basis"}
			{add_view "fx_sc_grav_hover_s1_snow" "SC_grav_veh_FX_hover_snow" "basis"}
			{add_view "fx_sc_grav_hover_s1_sand" "SC_grav_veh_FX_hover_sand" "basis"}
			{add_view "fx_sc_grav_hover_s1_water" "SC_grav_veh_FX_hover_water" "basis"}
		}
		
		{tags remove "SC_grav_veh_tag_hover_ground"}
		{tags remove "SC_grav_veh_tag_hover_snow"}
		{tags remove "SC_grav_veh_tag_hover_sand"}
		{tags remove "SC_grav_veh_tag_hover_water"}
		{tags remove "SC_grav_veh_tag_hover_mud_puddle"}
	}
	
	(Define "SC_Grav_Veh_Define_Terrain_Change"
		{if not tagged "SC_grav_veh_tag_hover_%terrain"
			{tags remove "SC_grav_veh_tag_hover_ground"}		{view pause "SC_grav_veh_FX_hover_ground"}
			{tags remove "SC_grav_veh_tag_hover_snow"}			{view pause "SC_grav_veh_FX_hover_snow"}
			{tags remove "SC_grav_veh_tag_hover_sand"}			{view pause "SC_grav_veh_FX_hover_sand"}
			{tags remove "SC_grav_veh_tag_hover_water"}			{view pause "SC_grav_veh_FX_hover_water"}
			{tags remove "SC_grav_veh_tag_hover_mud_puddle"}	{view pause "SC_grav_veh_FX_hover_mud_puddle"}
			
			{tags add "SC_grav_veh_tag_hover_%terrain"}			{view start "SC_grav_veh_FX_hover_%terrain"}
		}
	)
	{on "SC_grav_veh_call_check_hover"
		{if not work "body"
			{tags remove "SC_grav_veh_tag_is_hovering"}
			
			{tags remove "SC_grav_veh_tag_hover_ground"}		{view pause "SC_grav_veh_FX_hover_ground"}
			{tags remove "SC_grav_veh_tag_hover_snow"}			{view pause "SC_grav_veh_FX_hover_snow"}
			{tags remove "SC_grav_veh_tag_hover_sand"}			{view pause "SC_grav_veh_FX_hover_sand"}
			{tags remove "SC_grav_veh_tag_hover_water"}			{view pause "SC_grav_veh_FX_hover_water"}
			{tags remove "SC_grav_veh_tag_hover_mud_puddle"}	{view pause "SC_grav_veh_FX_hover_mud_puddle"}
			
		else not crew_in_place "driver"
			{tags remove "SC_grav_veh_tag_is_hovering"}
			
			{tags remove "SC_grav_veh_tag_hover_ground"}		{view pause "SC_grav_veh_FX_hover_ground"}
			{tags remove "SC_grav_veh_tag_hover_snow"}			{view pause "SC_grav_veh_FX_hover_snow"}
			{tags remove "SC_grav_veh_tag_hover_sand"}			{view pause "SC_grav_veh_FX_hover_sand"}
			{tags remove "SC_grav_veh_tag_hover_water"}			{view pause "SC_grav_veh_FX_hover_water"}
			{tags remove "SC_grav_veh_tag_hover_mud_puddle"}	{view pause "SC_grav_veh_FX_hover_mud_puddle"}
			
		else
			{tags add "SC_grav_veh_tag_is_hovering"}
			
			{if terrain_pp "ground"
				{if terrain_fx "shallow_water"
					("SC_Grav_Veh_Define_Terrain_Change" terrain(water))
				else terrain_fx "sand"
					("SC_Grav_Veh_Define_Terrain_Change" terrain(sand))
				else terrain_fx "mud"
					("SC_Grav_Veh_Define_Terrain_Change" terrain(mud_puddle))
				else
					("SC_Grav_Veh_Define_Terrain_Change" terrain(ground))
				}
			else terrain_pp "snow"
				("SC_Grav_Veh_Define_Terrain_Change" terrain(snow))
				
			else terrain_pp "water"
				("SC_Grav_Veh_Define_Terrain_Change" terrain(water))
			}
			{delay 1.5 "SC_grav_delay_check_hover" {call "SC_grav_veh_call_check_hover"}}
		}
	}
}