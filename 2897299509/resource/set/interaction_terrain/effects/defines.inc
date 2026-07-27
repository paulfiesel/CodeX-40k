  (define "expl_ground"
  	{if stuff "fx_proj_pointer"	
  		else stuff "fx_bul_small"
  		else stuff "fx_bul_med"
  		else stuff "fx_10_15 fx_ap"
  		else stuff "fx_10_15"
  		else stuff "fx_16_24 fx_ap"	
  		else stuff "fx_16_24"	
  		else stuff "fx_25_40 fx_ap"
  		{spawn "ex_fx_25_40_ap"}
  		else stuff "fx_25_40"
  		{spawn "ex_fx_25_40"}	
  		else stuff "fx_gren fx_ap"
  		{spawn "ex_fg_grenade"}	
  		else stuff "fx_gren fx_cm"	
  		{spawn "ex_fg_grenade"}	
  		else stuff "fx_gren"	
  		{spawn "ex_fg_grenade"}	
  		else stuff "fx_45_89 fx_ap"	
  		{spawn "ex_fx_45_89_ap"}	
  		else stuff "fx_45_89 fx_cm"	
  		{spawn "ex_fx_45_89_ap"}	
  		else stuff "fx_45_89"	
  		;{spawn "ex_fx_45_89"} 	
  		{start_sound "detonation/he_size2/bkg/" use_position}
		{spawn "ex_he_size2"}
  		else stuff "fx_90_110 fx_ap"
  		{spawn "ex_fx_90_110_ap"}	
  		else stuff "fx_90_110 fx_cm"
  		{spawn "ex_fx_90_110_cm"}	
  		else stuff "fx_90_110"		
  		{spawn "ex_fx_90_110"} 	
  		else stuff "fx_111_145 fx_ap"
  		{spawn "ex_fx_111_145_ap"}	
  		else stuff "fx_111_145 fx_cm"
  		{spawn "ex_fx_111_145_cm"}	
  		else stuff "fx_111_145"	
  		{spawn "ex_fx_111_145"} 
  		{spawn "crater_small" terrain_texmod}
  		else stuff "fx_146_299 fx_ap"
  		{spawn "ex_fx_111_145_ap"}	
  		else stuff "fx_146_299 fx_cm"
  		{spawn "ex_fx_146_299_cm"}	
  		else stuff "fx_146_299"	
  		;{spawn "ex_fx_146_299"} 
			{start_sound "detonation/he_size4/bkg/" use_position}
			{spawn "ex_he_size4"}
			{spawn "crater_medium" terrain_texmod}
  		else stuff "fx_upto15kg fx_cm"
  		{spawn "ex_fx_146_299_cm"}	
  		else stuff "fx_upto15kg"	
  		{spawn "ex_fx_146_299"}		
  		else stuff "fx_upto50kg"
  		{spawn "ex_fx_upto50kg"}	
  		else stuff "fx_upto250kg"
  		{spawn "ex_fx_upto250kg"}	
  		else stuff "fx_upto1000kg"	
  		{spawn "ex_fx_upto1000kg"}	
  		else stuff "molotov_coctail"
  		{spawn "ex_molot"}		
  		else stuff "fx_wp_small"
  		{spawn "ex_wpshell_small"}
  		{spawn "smoke_volume" offset 0 0 100}
  		else stuff "fx_wp_med"	
  		{spawn "ex_wpshell_medium"} 
  		{spawn "smoke_volume" offset 0 0 150}	
  		else stuff "fx_wp_large"
  		{spawn "ex_wpshell_large"}
  		{spawn "smoke_volume" offset 0 0 200}
  		else stuff "fx_tos"		
  		{spawn "ex_bomb_250kg"}	
  		else stuff "fx_shmel"	
  		{spawn "ex_shmel"}		
  		else stuff "fx_odab250_air"
  		{spawn "ex_odab250"}		
  		else stuff "fx_nuq"		
  		{spawn "expluto"}		
  		else stuff "fx_nuq_air"	
  		{spawn "expluto_air"}	
  		}	
  )	
  		(define "ex_water"	
  		{if stuff "fx_proj_pointer"	
  		else stuff "fx_bul_small" 
  		{spawn "ex_bul_sm_w"}	
  		else stuff "fx_bul_med"	
  		{spawn "ex_bul_big_w"}	
  		else stuff "fx_10_15 fx_ap"
  		{spawn "ex_bul_big_50_w"}	
  		else stuff "fx_10_15"		
  		{spawn "ex_bul_big_50fg_w"}	
  		else stuff "fx_16_24 fx_ap"
  		{spawn "ex_water_small"}	
  		else stuff "fx_25_40"		
  		{spawn "ex_water_small"}	
  		else stuff "fx_16_24"	
  		{spawn "ex_water_small"}	
  		else stuff "fx_45_89"		
  		;{spawn "ex_water_small"} 
  		{start_sound "detonation/he_size2/bkg/" use_position}
		{spawn "ex_he_size2"}
  		else stuff "fx_90_110 fx_ap"
  		{spawn "ex_water_small"}	 
  		else stuff "fx_90_110 fx_cm"
  		{spawn "ex_water_small"}	 
  		else stuff "fx_90_110"		
  		{spawn "ex_water_small"} 	
  		else stuff "fx_111_145 fx_ap"	
  		{spawn "ex_water_small"}	
  		else stuff "fx_111_145 fx_cm"
  		{spawn "ex_water_small"}	
  		else stuff "fx_111_145"		
  		{spawn "ex_water_small"} 	
  		else stuff "fx_146_299 fx_ap"	
  		{spawn "ex_water_norm"}	 
  		else stuff "fx_146_299 fx_cm"
  		{spawn "ex_water_norm"}	 
  		else stuff "fx_146_299"		
  		{spawn "ex_water_norm"} 	
  		else stuff "fx_upto15kg fx_cm"	
  		{spawn "ex_water_big"}	 
  		else stuff "fx_upto15kg"	
  		{spawn "ex_water_big"}	 
  		else stuff "fx_upto50kg"	
  		{spawn "ex_water_big"}	 
  		else stuff "fx_upto250kg"	
  		{spawn "ex_water_big"}	 
  		else stuff "fx_upto1000kg"	
  		{spawn "ex_water_big"}		
  		else stuff "fx_wp_small"	
  		{spawn "ex_water_small"}	
  		else stuff "fx_wp_med"		
  		{spawn "ex_water_small"}	
  		else stuff "fx_wp_large"	
  		{spawn "ex_water_small"}	 
  		else stuff "fx_tos"			
  		{spawn "ex_water_big"}	 
  		else stuff "fx_shmel"	
  		{spawn "ex_water_big"}		
  		else stuff "fx_odab250_air"
  		{spawn "ex_odab250"}	
  		else stuff "fx_nuq"		
  		{spawn "expluto"}	
  		else stuff "fx_nuq_air"		
  		{spawn "expluto_air"}	 
  		}	
  		)

  		(define "ex_puddle_add"	
  		{if stuff "fx_proj_pointer"	
  		else stuff "fx_bul_small" 	
  		{spawn "ex_bul_sm_w"}	
  		else stuff "fx_bul_med"	
  		{spawn "ex_bul_big_w"}	
  		else stuff "fx_10_15 fx_ap"	
  		{spawn "ex_bul_big_50_w"}	
  		else stuff "fx_10_15"	
  		{spawn "ex_bul_big_50fg_w"}	
	    else stuff "fx_16_24 fx_ap"	
	    {spawn "ex_water_small"}
	    else stuff "fx_16_24"	
	    {spawn "ex_water_small"}
	    }	
	    )	

	    (define "debris_ground"	
	    {if stuff "fx_proj_pointer"
	    else stuff "fx_bul_small" 
	    {if rand 0.5 {spawn "ex_bul_sm"} 
	    else {spawn "ex_bul_sm2"}}	
	    else stuff "fx_bul_med"		
	    {if rand 0.5 {spawn "ex_bul_big"} 
	    else {spawn "ex_bul_big2"}}	
	    else stuff "fx_10_15 fx_ap"	
	    {spawn "ex_bul_big_50"}		
	    else stuff "fx_10_15"		
	    {spawn "ex_bul_big_50fg"}
	    else stuff "fx_16_24 fx_ap"	
	    {spawn "ex_bul_zenit_ap"}	
	    else stuff "fx_16_24"	
	    {spawn "ex_bul_zenit"}	
	    else stuff "fx_25_40 fx_ap"	
	    {spawn "ex_bul_zenit_ap"}	
	    else stuff "fx_25_40"	
	    {spawn "ex_bul_zenit"}		
	    else stuff "fx_45_89"		
	    ;{spawn "ex_fx_45_89_debris_ground"}
	    {start_sound "detonation/he_size2/bkg/" use_position}
	   {spawn "ex_he_size2"}
	    else stuff "fx_90_110 fx_ap"
	    {spawn "ex_fx_45_89_debris_ground"}	
	    else stuff "fx_90_110 fx_cm"	
	    {spawn "ex_fx_90_110_debris_ground"}
	    else stuff "fx_90_110"		
	    {spawn "ex_fx_90_110_debris_ground"} 
	    else stuff "fx_111_145 fx_ap"
	    {spawn "ex_fx_45_89_debris_ground"}
	    else stuff "fx_111_145 fx_cm"
	    {spawn "ex_fx_111_145_debris_ground"}
	    else stuff "fx_111_145"		
	    {spawn "ex_fx_111_145_debris_ground"} 
	    else stuff "fx_146_299 fx_ap"
	    {spawn "ex_fx_45_89_debris_ground"}	 
	    else stuff "fx_146_299 fx_cm"
	    {spawn "ex_fx_146_299_debris_ground"}
	    else stuff "fx_146_299"		
	    {spawn "ex_fx_146_299_debris_ground"} 	
	    else stuff "fx_upto15kg fx_cm"
	    {spawn "ex_fx_146_299_debris_ground"}
	    else stuff "fx_upto15kg"	
	    {spawn "ex_fx_upto50kg_debris_ground"}	
	    else stuff "fx_upto50kg"	
	    {spawn "ex_fx_upto50kg_debris_ground"}	
	    else stuff "fx_upto250kg"	
	    {spawn "ex_fx_upto1000kg_debris_ground"}
	    else stuff "fx_upto1000kg"	
	    {spawn "ex_fx_upto1000kg_debris_ground"}
	    else stuff "fx_tos"		
	    {spawn "ex_fx_upto50kg_debris_ground"}	
	    else stuff "fx_shmel"		
	    {spawn "ex_fx_111_145_debris_ground"}	
	    }	
	   )

	    (define "debris_puddle"	 
	    {if stuff "fx_proj_pointer"	
	    else stuff "fx_45_89"		
	   ; {spawn "ex_fx_45_89_debris_ground"}
	     {start_sound "detonation/he_size2/bkg/" use_position}
	   {spawn "ex_he_size2"}
	    else stuff "fx_90_110 fx_ap"
	    {spawn "ex_fx_45_89_debris_ground"}	 
	    else stuff "fx_90_110 fx_cm"	
	    {spawn "ex_fx_90_110_debris_ground"}	 
	    else stuff "fx_90_110"		
	    {spawn "ex_fx_90_110_debris_ground"} 	
	    else stuff "fx_111_145 fx_ap"	
	    {spawn "ex_fx_45_89_debris_ground"}		
	    else stuff "fx_111_145 fx_cm"
	    {spawn "ex_fx_111_145_debris_ground"}	
	    else stuff "fx_111_145"		
	    {spawn "ex_fx_111_145_debris_ground"} 	
	    else stuff "fx_146_299 fx_ap"
	    {spawn "ex_fx_45_89_debris_ground"}	
	    else stuff "fx_146_299 fx_cm"
	    {spawn "ex_fx_146_299_debris_ground"}
	    else stuff "fx_146_299"		
	    {spawn "ex_fx_146_299_debris_ground"} 
	    else stuff "fx_upto15kg fx_cm"	
	    {spawn "ex_fx_146_299_debris_ground"}	
	    else stuff "fx_upto15kg"	
	    {spawn "ex_fx_upto50kg_debris_ground"}	
	    else stuff "fx_upto50kg"	
	    {spawn "ex_fx_upto50kg_debris_ground"}
	    else stuff "fx_upto250kg"	
	    {spawn "ex_fx_upto1000kg_debris_ground"}
	    else stuff "fx_upto1000kg"	
	    {spawn "ex_fx_upto1000kg_debris_ground"}
	    else stuff "fx_tos"	 
	    else stuff "fx_shmel"	
	    }	
	   )

	   (define "debris_sand"	
	   {if stuff "fx_proj_pointer"	
	   else stuff "fx_bul_small" 	
	   {if rand 0.5 {spawn "ex_bul_sm"} 
	   else {spawn "ex_bul_sm2"}}		
	   else stuff "fx_bul_med"			
	   {if rand 0.5 {spawn "ex_bul_big"}
	   else {spawn "ex_bul_big2"}}	
	   else stuff "fx_10_15 fx_ap"	
	   {spawn "ex_bul_big_50"}	
	   else stuff "fx_10_15"		
	   {spawn "ex_bul_big_50fg"}	
	   else stuff "fx_16_24 fx_ap"	
	   {spawn "ex_bul_zenit_ap"}	
	   else stuff "fx_16_24"		
	   {spawn "ex_bul_zenit"}	
	   else stuff "fx_25_40 fx_ap"	
	   {spawn "ex_bul_zenit_ap"}	
	   else stuff "fx_25_40"		
	   {spawn "ex_bul_zenit"}		
	   else stuff "fx_45_89"		
	   ;{spawn "ex_fx_45_89_debris_sand"} 
	     {start_sound "detonation/he_size2/bkg/" use_position}
	   {spawn "ex_he_size2"}
	   else stuff "fx_90_110 fx_ap"	
	   {spawn "ex_fx_45_89_debris_sand"}	 
	   else stuff "fx_90_110 fx_cm"	
	   {spawn "ex_fx_90_110_debris_sand"}
	   else stuff "fx_90_110"		
	   {spawn "ex_fx_90_110_debris_sand"} 
	   else stuff "fx_111_145 fx_ap"
	   {spawn "ex_fx_45_89_debris_sand"}	
	   else stuff "fx_111_145 fx_cm"
	   {spawn "ex_fx_111_145_debris_sand"}	
	   else stuff "fx_111_145"			
	   {spawn "ex_fx_111_145_debris_sand"} 	 
	   else stuff "fx_146_299 fx_ap"
	   {spawn "ex_fx_45_89_debris_sand"}
	   else stuff "fx_146_299 fx_cm"
	   {spawn "ex_fx_146_299_debris_sand"}	
	   else stuff "fx_146_299"	
		{spawn "ex_fx_146_299_debris_sand"}
		else stuff "fx_upto15kg fx_cm"
		{spawn "ex_fx_146_299_debris_sand"}	
		else stuff "fx_upto15kg"	
		{spawn "ex_fx_upto50kg_debris_sand"}
		else stuff "fx_upto50kg"	
		{spawn "ex_fx_upto50kg_debris_sand"}
		else stuff "fx_upto250kg"	
		{spawn "ex_fx_upto1000kg_debris_sand"}	 
		else stuff "fx_upto1000kg"	
		{spawn "ex_fx_upto1000kg_debris_sand"}	
		else stuff "fx_tos"			
		{spawn "ex_fx_upto50kg_debris_sand"}
		else stuff "fx_shmel"		
		{spawn "ex_fx_111_145_debris_sand"}
		}	
		)	


		(define "debris_wood"	
		{if stuff "fx_proj_pointer"	
		else stuff "fx_bul_small" 	
		{if rand 0.5 {spawn "ex_bul_sm"} 
		else {spawn "ex_bul_sm2"}}		
		else stuff "fx_bul_med"		
		{if rand 0.5 {spawn "ex_bul_big"} else {spawn "ex_bul_big2"}}	
		else stuff "fx_10_15 fx_ap"	
		{spawn "ex_bul_big_50"}		
		else stuff "fx_10_15"		
		{spawn "ex_bul_big_50fg"}		
		else stuff "fx_16_24 fx_ap"		
		{spawn "ex_bul_zenit_ap"}		
		else stuff "fx_16_24"		
		{spawn "ex_bul_zenit"}		
		else stuff "fx_25_40 fx_ap"		
		{spawn "ex_bul_zenit_ap"}		
		else stuff "fx_25_40"			
		{spawn "ex_bul_zenit"}		
		else stuff "fx_45_89"		
		{spawn "ex_wood_debris_small"} 	 
		else stuff "fx_90_110 fx_ap"	
		{spawn "ex_wood_debris_small"}	 
		else stuff "fx_90_110 fx_cm"	
		{spawn "ex_wood_debris_small"}	 	
		else stuff "fx_90_110"			
		{spawn "ex_wood_debris_norm"} 	
		else stuff "fx_111_145 fx_ap"	
		{spawn "ex_wood_debris_small"}	
		else stuff "fx_111_145 fx_cm"	
		{spawn "ex_wood_debris_small"}	
		else stuff "fx_111_145"			
		{spawn "ex_wood_debris_norm"} 	
		else stuff "fx_146_299 fx_ap"	
		{spawn "ex_wood_debris_small"}	
		else stuff "fx_146_299 fx_cm"	
		{spawn "ex_wood_debris_norm"}	 
		else stuff "fx_146_299"			
		{spawn "ex_wood_debris_norm"} 	 
		else stuff "fx_upto15kg fx_cm"	
		{spawn "ex_wood_debris_norm"}	 
		else stuff "fx_upto15kg"		
		{spawn "ex_wood_debris_big"}	 
		else stuff "fx_upto50kg"		
		{spawn "ex_wood_debris_big"}	 
		else stuff "fx_upto250kg"		
		{spawn "ex_wood_debris_big"}	 
		else stuff "fx_upto1000kg"		
		{spawn "ex_wood_debris_big"}	
		else stuff "fx_tos"				
		{spawn "ex_wood_debris_big"}	 
		else stuff "fx_shmel"			
		{spawn "ex_wood_debris_norm"}	 
		}	
		)	
		(define "debris_water"	
		{if stuff "fx_proj_pointer"	
		else stuff "fx_bul_small" 		
		{spawn "ex_bul_sm_w"}		
		else stuff "fx_bul_med"			
		{spawn "ex_bul_big_w"}		
		else stuff "fx_10_15 fx_ap"		
		{spawn "ex_bul_big_50_w"}		
		else stuff "fx_10_15"			
		{spawn "ex_bul_big_50fg_w"}		
		else stuff "fx_16_24 fx_ap"		
		{spawn "ex_bul_big_50_w"}		
		else stuff "fx_16_24"			
		{spawn "ex_bul_big_50fg_w"}		
		else stuff "fx_25_40 fx_ap"		
		{spawn "ex_water_small"}		
		else stuff "fx_25_40"			
		{spawn "ex_water_small"}		
		else stuff "fx_45_89"			
		{spawn "ex_water_small"}
		{spawn "fish_black"} 	
		else stuff "fx_90_110 fx_ap"
		{spawn "ex_water_small"}	
		else stuff "fx_90_110 fx_cm"	
		{spawn "ex_water_norm"}
		{spawn "fish_black"}	
		else stuff "fx_90_110"		
		{spawn "ex_water_norm"}
		{spawn "fish_black"} 	
		else stuff "fx_111_145 fx_ap"	
		{spawn "ex_water_small"}		
		else stuff "fx_111_145 fx_cm"	
		{spawn "ex_water_norm"}
		{spawn "fish_black"}		
		else stuff "fx_111_145"		
		{spawn "ex_water_norm"}
		{spawn "fish_black"} 	 
		else stuff "fx_146_299 fx_ap"
		{spawn "ex_water_small"}	
		else stuff "fx_146_299 fx_cm"
		{spawn "ex_water_big"}
		{spawn "fish_black"}	
		else stuff "fx_146_299"		
		{spawn "ex_water_big"}
		{spawn "fish_black"} 	 
		else stuff "fx_upto15kg fx_cm"	
		{spawn "ex_water_big"}{spawn "fish_black"}	 
		else stuff "fx_upto15kg"		
		{spawn "ex_water_maximum"}{spawn "fish_black"}
		else stuff "fx_upto50kg"		
		{spawn "ex_water_maximum"}{spawn "fish_black"}	
		else stuff "fx_upto250kg"	
		{spawn "ex_water_maximum"}{spawn "fish_black"}	
		else stuff "fx_upto1000kg"	
		{spawn "ex_water_maximum"}{spawn "fish_black"}	
		else stuff "fx_tos"				
		{spawn "ex_water_maximum"}{spawn "fish_black"}	 
		else stuff "fx_shmel"		
		{spawn "ex_water_norm"}{spawn "fish_black"}	
		}	
		)	


		(define "debris_shallow_water"	
		{if stuff "fx_proj_pointer"		
		else stuff "fx_bul_small" 		
		{spawn "ex_bul_sm_w"}		
		else stuff "fx_bul_med"			
		{spawn "ex_bul_big_w"}		
		else stuff "fx_10_15 fx_ap"	
		{spawn "ex_bul_big_50_w"}	
		else stuff "fx_10_15"		
		{spawn "ex_bul_big_50fg_w"}	
		else stuff "fx_16_24 fx_ap"	
		{spawn "ex_bul_zenit_ap"}
		else stuff "fx_16_24"	
		{spawn "ex_bul_zenit"}		
		else stuff "fx_25_40 fx_ap"
		{spawn "ex_water_small"}	
		else stuff "fx_25_40"		
		{spawn "ex_water_small"}	
		else stuff "fx_45_89"		
		{spawn "ex_water_small"} 	 
		else stuff "fx_90_110 fx_ap"
		{spawn "ex_water_small"}	 
		else stuff "fx_90_110 fx_cm"	
		{spawn "ex_water_norm"}	 	
		else stuff "fx_90_110"		
		{spawn "ex_water_norm"}{spawn "ex_fx_45_89_debris_ground"} 
		else stuff "fx_111_145 fx_ap"
		{spawn "ex_water_small"}	
		else stuff "fx_111_145 fx_cm"	
		{spawn "ex_water_norm"}{spawn "ex_fx_90_110_debris_ground"}	
		else stuff "fx_111_145"		
		{spawn "ex_water_norm"}{spawn "ex_fx_90_110_debris_ground"} 
		else stuff "fx_146_299 fx_ap"
		{spawn "ex_water_small"}	 
		else stuff "fx_146_299 fx_cm"
		{spawn "ex_water_big"}{spawn "ex_fx_90_110_debris_ground"}
		else stuff "fx_146_299"		
		{spawn "ex_water_big"}{spawn "ex_fx_111_145_debris_ground"} 
		else stuff "fx_upto15kg fx_cm"	
		{spawn "ex_water_big"}{spawn "ex_fx_111_145_debris_ground"}
		else stuff "fx_upto15kg"	
		{spawn "ex_water_maximum"}{spawn "ex_fx_111_145_debris_ground"}
		else stuff "fx_upto50kg"		
		{spawn "ex_water_maximum"}{spawn "ex_fx_146_299_debris_ground"}	
		else stuff "fx_upto250kg"		
		{spawn "ex_water_maximum"}{spawn "ex_fx_upto50kg_debris_ground"}	
		else stuff "fx_upto1000kg"		
		{spawn "ex_water_maximum"}{spawn "ex_fx_upto50kg_debris_ground"}
		else stuff "fx_tos"				
		{spawn "ex_water_maximum"}{spawn "ex_fx_111_145_debris_ground"}	 
		else stuff "fx_shmel"			
		{spawn "ex_water_norm"}	  
		}	
		)
		(define "debris_snow"	 
		{if stuff "fx_proj_pointer"		
		else stuff "fx_bul_small" 		
		{spawn "ex_bul_sm_snow"}	
		else stuff "fx_bul_med"		
		{spawn "ex_bul_big_snow"}	
		else stuff "fx_10_15 fx_ap"	
		{spawn "ex_bul_big_50_snow"}	
		else stuff "fx_10_15"			
		{spawn "ex_bul_big_50fg_snow"}	
		else stuff "fx_16_24 fx_ap"		
		{spawn "ex_bul_zenit_ap_snow"}	
		else stuff "fx_16_24"			
		{spawn "ex_bul_zenit_snow"}		
		else stuff "fx_25_40 fx_ap"		
		{spawn "ex_bul_zenit_ap_snow"}	
		else stuff "fx_25_40"			
		{spawn "ex_bul_zenit_snow"}		
		else stuff "fx_45_89"			
		{spawn "ex_snow_debris_small"} 	 
		else stuff "fx_90_110 fx_ap"	
		{spawn "ex_snow_debris_minimum"}
		else stuff "fx_90_110 fx_cm"	
		{spawn "ex_snow_debris_small"}	 
		else stuff "fx_90_110"			
		{spawn "ex_snow_debris_norm"} 	
		else stuff "fx_111_145 fx_ap"	
		{spawn "ex_snow_debris_minimum"}
		else stuff "fx_111_145 fx_cm"	
		{spawn "ex_snow_debris_norm"}	
		else stuff "fx_111_145"			
		{spawn "ex_snow_debris_norm"} 	
		else stuff "fx_146_299 fx_ap"	
		{spawn "ex_snow_debris_minimum"}	
		else stuff "fx_146_299 fx_cm"	
		{spawn "ex_snow_debris_norm"}	 
		else stuff "fx_146_299"			
		{spawn "ex_snow_debris_big"} 	
		else stuff "fx_upto15kg fx_cm"	
		{spawn "ex_snow_debris_big"}	
		else stuff "fx_upto15kg"		
		{spawn "ex_snow_debris_big"}	 
		else stuff "fx_upto50kg"		
		{spawn "ex_snow_debris_big"}	 
		else stuff "fx_upto250kg"		
		{spawn "ex_snow_debris_big"}	
		else stuff "fx_upto1000kg"		
		{spawn "ex_snow_debris_big"}	
		else stuff "fx_tos"				
		{spawn "ex_bomb_250kg_snow"}	
		else stuff "fx_shmel"		
		{spawn "ex_snow_debris_norm"}	 
		}	
		)	
		(define "shellhole_ground"	  
		{if stuff "fx_proj_pointer"		
		else stuff "fx_bul_small" 		
		else stuff "fx_bul_med"			
		else stuff "fx_16_24"			
		else stuff "fx_25_40"			  
		else stuff "fx_gren fx_cm"	
		{spawn "grenade_shellhole" terrain_texmod }
		else stuff "fx_gren"	
		{spawn "grenade_at_shellhole" terrain_texmod }
		else stuff "fx_45_89 fx_ap"	
		{spawn "grenade_shellhole" terrain_texmod }		
		else stuff "fx_45_89 fx_cm"	
		{spawn "grenade_at_shellhole" terrain_texmod }	
		else stuff "fx_45_89"		
		{spawn "grenade_at_shellhole" terrain_texmod } 	 
		else stuff "fx_90_110 fx_ap"	
		{spawn "grenade_at_shellhole" terrain_texmod }	
		else stuff "fx_90_110 fx_cm"	
		{spawn "shellhole_medium_ground" terrain_texmod }
		else stuff "fx_90_110"			
		{spawn "crater_small" terrain_texmod } 	
		else stuff "fx_111_145 fx_ap"	
		{spawn "grenade_at_shellhole" terrain_texmod }
		else stuff "fx_111_145 fx_cm"
		{spawn "shellhole_medium" terrain_texmod }	
		else stuff "fx_111_145"		
		{spawn "crater_small" terrain_texmod } 	
		else stuff "fx_146_299 fx_ap"
	{spawn "grenade_at_shellhole" terrain_texmod }	
	else stuff "fx_146_299 fx_cm"	
	{spawn "crater_small" terrain_texmod }	 
	else stuff "fx_146_299"		
	{spawn "crater_norm" terrain_texmod } 
	else stuff "fx_upto15kg fx_cm"	
	{spawn "shellhole_big_sand" terrain_texmod }
	else stuff "fx_upto15kg"	
	{spawn "crater_norm" terrain_texmod }	
	else stuff "fx_upto50kg"	
	{spawn "crater_big" terrain_texmod }
	else stuff "fx_upto250kg"	
	{spawn "crater_big" terrain_texmod }	
	else stuff "fx_upto1000kg"	
	{spawn "crater_norm_land_size5" terrain_texmod }	
	else stuff "molotov_coctail"	
	{spawn "fire_shellhole" }	 
	else stuff "fx_tos"			
	{spawn "shellhole_medium" terrain_texmod }	
	else stuff "fx_shmel"		
	{spawn "shellhole_super_ground" terrain_texmod }
	}	
	)



	(define "shellhole_ground_nocrater"	 
	{if stuff "fx_proj_pointer"		
	else stuff "fx_bul_small" 		
	else stuff "fx_bul_med"			
	else stuff "fx_16_24"			
	else stuff "fx_25_40"			
	else stuff "fx_gren fx_cm"	
	{spawn "grenade_shellhole" terrain_texmod }	
	else stuff "fx_gren"		
	{spawn "grenade_at_shellhole" terrain_texmod }
	else stuff "fx_45_89 fx_ap"	
	{spawn "grenade_shellhole" terrain_texmod }	
	else stuff "fx_45_89 fx_cm"	
	{spawn "grenade_at_shellhole" terrain_texmod }	
	else stuff "fx_45_89"		
	{spawn "grenade_at_shellhole" terrain_texmod }
	else stuff "fx_90_110 fx_ap"
	{spawn "grenade_at_shellhole" terrain_texmod }
	else stuff "fx_90_110 fx_cm"	
	{spawn "shellhole_medium_ground" terrain_texmod }	
	else stuff "fx_90_110"		
	{spawn "shellhole_medium_ground" terrain_texmod } 	
	else stuff "fx_111_145 fx_ap"
	{spawn "grenade_at_shellhole" terrain_texmod }	
	else stuff "fx_111_145 fx_cm"	
	{spawn "shellhole_medium_ground" terrain_texmod }	
	else stuff "fx_111_145"		
	{spawn "shellhole_medium_ground" terrain_texmod } 	
	else stuff "fx_146_299 fx_ap"
	{spawn "grenade_at_shellhole" terrain_texmod }	 
	else stuff "fx_146_299 fx_cm"	
	{spawn "shellhole_big_sand" terrain_texmod }	
	else stuff "fx_146_299"		
	{spawn "shellhole4d" terrain_texmod } 	 
	else stuff "fx_upto15kg fx_cm"
	{spawn "shellhole_big_sand" terrain_texmod }	
	else stuff "fx_upto15kg"	
	{spawn "shellhole4d" terrain_texmod }	
	else stuff "fx_upto50kg"	
	{spawn "shellhole_super_ground" terrain_texmod }	
	else stuff "fx_upto250kg"	
	{spawn "shellhole_super_ground" terrain_texmod }	
	else stuff "fx_upto1000kg"		
	{spawn "shellhole_super_ground" terrain_texmod }
	else stuff "molotov_coctail"	
	{spawn "fire_shellhole" }	
	else stuff "fx_tos"			
	{spawn "shellhole_medium" terrain_texmod }	 
	else stuff "fx_shmel"		
	{spawn "shellhole_super_ground" terrain_texmod }	
	}	
	)