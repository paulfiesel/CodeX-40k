
;	<<<<--------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Misc Defines - Stomp ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>		
		
(define "SC_M_Stomp_Define_Add_Stomp_S0_no_gear"	; // <-========== For human sized fauna.
	{start_sound "SC_plataform/%sound"}
	;{start_sound "human/move/gear_rattle/normal/" 1}
	
	{if terrain_fx "road"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "rock"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "bridge"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "bridge_wood"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/wood/" 1}
	else terrain_fx "bridge_steel"
		;//{start_sound "human/move/%0/metal/" 1}
	else terrain_fx "country_road"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/mud/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/ground/" 1}
		}
	else terrain_fx "mud"
		{spawn "spherewater_very_small" "%leg" x}
		;//{start_sound "human/move/%0/mud/" 1} 
	else terrain_fx "ice"
		{spawn "iceblock_hit01" "%leg" x} 
		;//{start_sound "human/move/%0/ice/" 1}
	else terrain_fx "snow"
		{spawn "dustrun_foot_snow" "%leg" x} 
		;//{start_sound "human/move/%0/snow/" 1}
	else terrain_fx "sand"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/sand/" 1}
	else terrain_fx "grass"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/grass/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/grass/" 1}
		}
	else terrain_fx "water"
		{spawn "spherewater_small" "%leg" x} 
		;//{start_sound "human/move/%0/shallow_water/" 1}
	else terrain_fx "shallow_water"
		{spawn "spherewater_small" "%leg" x} 
		;//{start_sound "human/move/%0/shallow_water/" 1}
	else terrain_fx "puddle"
		{spawn "spherewater_very_small" "%leg" x} 
		;//{start_sound "human/move/%0/puddle/" 1}
	else terrain_fx "ground"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/mud/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/ground/" 1}
		}
	}
)

(define "SC_M_Stomp_Define_Add_Stomp_S0"	; // <-========== For human sized fauna.
	{start_sound "SC_plataform/%sound"}
	{start_sound "human/move/gear_rattle/normal/" 1}
	
	{if terrain_fx "road"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "rock"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "bridge"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/road/" 1}
	else terrain_fx "bridge_wood"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/wood/" 1}
	else terrain_fx "bridge_steel"
		;//{start_sound "human/move/%0/metal/" 1}
	else terrain_fx "country_road"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/mud/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/ground/" 1}
		}
	else terrain_fx "mud"
		{spawn "spherewater_very_small" "%leg" x}
		;//{start_sound "human/move/%0/mud/" 1} 
	else terrain_fx "ice"
		{spawn "iceblock_hit01" "%leg" x} 
		;//{start_sound "human/move/%0/ice/" 1}
	else terrain_fx "snow"
		{spawn "dustrun_foot_snow" "%leg" x} 
		;//{start_sound "human/move/%0/snow/" 1}
	else terrain_fx "sand"
		{spawn "dustrun_foot_ground" "%leg" x} 
		;//{start_sound "human/move/%0/sand/" 1}
	else terrain_fx "grass"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/grass/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/grass/" 1}
		}
	else terrain_fx "water"
		{spawn "spherewater_small" "%leg" x} 
		;//{start_sound "human/move/%0/shallow_water/" 1}
	else terrain_fx "shallow_water"
		{spawn "spherewater_small" "%leg" x} 
		;//{start_sound "human/move/%0/shallow_water/" 1}
	else terrain_fx "puddle"
		{spawn "spherewater_very_small" "%leg" x} 
		;//{start_sound "human/move/%0/puddle/" 1}
	else terrain_fx "ground"
		{if rain
			{spawn "spherewater_very_small" "%leg" x} 
			;//{start_sound "human/move/%0/mud/" 1}
		else
			{spawn "dustrun_foot_ground" "%leg" x} 
			;//{start_sound "human/move/%0/ground/" 1}
		}
	}
)

(define "SC_M_Stomp_Define_Add_Stomp_S1"	; // <-========== For big but smaller than vehicle sized fauna.	
	{start_sound "SC_plataform/%sound"}
	{start_sound "human/move/gear_rattle/normal/" 1}
	
	{if terrain_fx "road"
		{spawn "circledust_norm" "%leg" x} 
	else terrain_fx "rock"
		{spawn "circledust_norm" "%leg" x} 
	else terrain_fx "bridge"
		{spawn "circledust_norm" "%leg" x} 
	else terrain_fx "bridge_wood"
		{spawn "circledust_norm" "%leg" x} 
	else terrain_fx "bridge_steel"
	else terrain_fx "country_road"
		{if rain
		else
			{spawn "circledust_norm" "%leg" x} 
		}
	else terrain_fx "mud"
		{spawn "spherewater_very_small" "%leg" x}
	else terrain_fx "ice"
		{spawn "iceblock_hit01" "%leg" x} 
	else terrain_fx "snow"
		{spawn "snow_hit_small" "%leg" x} 
	else terrain_fx "sand"
		{spawn "circledust_norm" "%leg" x} 
	else terrain_fx "grass"
		{if rain
		else
			{spawn "circledust_norm" "%leg" x} 
		}
	else terrain_fx "water"
		{spawn "spherewater_small" "%leg" x} 
	else terrain_fx "shallow_water"
		{spawn "spherewater_small" "%leg" x} 
	else terrain_fx "puddle"
		{spawn "spherewater_very_small" "%leg" x} 
	else terrain_fx "ground"
		{if rain
		else
			{spawn "circledust_norm" "%leg" x} 
		}
	}
)


(define "SC_M_Stomp_Define_Add_Stomp_S2"	; // <-========== For big but smaller than vehicle sized fauna.	
	{start_sound "SC_plataform/%sound"}
	{start_sound "human/move/gear_rattle/normal/" 1}
	
	{if terrain_fx "road"
		{spawn "spheredust_big_short" "%leg" x} 
	else terrain_fx "rock"
		{spawn "spheredust_big_short" "%leg" x} 
	else terrain_fx "bridge"
		{spawn "spheredust_big_short" "%leg" x} 
	else terrain_fx "bridge_wood"
		{spawn "spheredust_big_short" "%leg" x} 
	else terrain_fx "bridge_steel"
	else terrain_fx "country_road"
		{if rain
		else
			{spawn "spheredust_big_short" "%leg" x} 
		}
	else terrain_fx "mud"
		{spawn "spherewater_small" "%leg" x}
	else terrain_fx "ice"
		{spawn "iceblock_hit01" "%leg" x} 
	else terrain_fx "snow"
		{spawn "snow_hit_small" "%leg" x} 
	else terrain_fx "sand"
		{spawn "spheredust_big_short" "%leg" x} 
	else terrain_fx "grass"
		{if rain
		else
			{spawn "spheredust_big_short" "%leg" x} 
		}
	else terrain_fx "water"
		{spawn "ex_size3_water" "%leg" x} 
	else terrain_fx "shallow_water"
		{spawn "ex_size3_water" "%leg" x} 
	else terrain_fx "puddle"
		{spawn "spherewater_small" "%leg" x} 
	else terrain_fx "ground"
		{if rain
		else
			{spawn "spheredust_big_short" "%leg" x} 
		}
	}
)