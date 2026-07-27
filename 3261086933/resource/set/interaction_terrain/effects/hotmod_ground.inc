
		{if stuff "bomb size4"								; 500kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size6"}
			{spawn "crater_massive" terrain_texmod}
			
		else stuff "handflammpatrone"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			
		else stuff "bomb size5"								; 1000kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size7"}
			{spawn "crater_massive" terrain_texmod}
			
		else stuff "bomb napalm"								; Napalm bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "napalm"}
			{spawn "crater_small" terrain_texmod}
			
		else stuff "bomb wp_bomb"								; White Phosphorous Bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "fuel_die"}
			{spawn "ex_wp_bomb"}
			{spawn "crater_small" terrain_texmod}
			
		else stuff "mininuke"								; W33 Davy Crockett 20-ton warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "ex_crockett"}
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			{spawn "shell_radiation"}
			
		else stuff "sizenuke"								; W45 0.5 to 5kt Warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			
		else stuff "vx"													
			{spawn "shell_chemical"}									
			{spawn "ap_shellhole"}
			{spawn "ex_air_he_size3"}
		else stuff "m270 cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_1gen" subm("m77_mlrs_submunition") spread(1500) )
		else stuff "shell rus152_cluster"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("shell_cluster_spreader_1gen" subm("cluster_subm_152") spread(500) )
		else stuff "shell cn122_cluster"
			{start_sound "detonation/he_size4/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("shell_cluster_spreader_1gen_122" subm("type90_submunition") spread(250) )			
		else stuff "300mm_9m55f cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_1gen" subm("m77_mlrs_submunition") spread(1500) )
		else stuff "300mm_r624 cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_1gen" subm("m77_mlrs_submunition") spread(1500) )			
		else stuff "300mm_fd140 cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_1gen" subm("m77_mlrs_submunition") spread(1500) )						
		else stuff "atacms cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_2gen" subm("m77_mlrs_submunition") spread(2000) )
		else stuff "9m27 cl"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("rocket_cluster_spreader_1gen" subm("m77_mlrs_submunition") spread(1000) )	
		else stuff "fx_shmel"
			{spawn "ex_shmel"}
			{spawn "crater_small" terrain_texmod}
		else stuff "shell rbkcn"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_big" offset -55 0 200}
			("shell_cluster_spreader_1gen" subm("250-3_submunition") spread(500) )
		else stuff "shell smoke"							; All cannon Smoke shells
			{spawn "mortar_smoke"}									; initial explosion fx
			{spawn "shell_smoke"}									; actual smoke and vision volumes
			{spawn "ap_shellhole"}
		}

