;SDL
(include "terra-interactive_stuff.inc")
{"air"
	{on detonate
		("terra-interactive_stuff")
		(include "west81_cluster.inc")
		(include "hotmod_ground.inc")
		{if stuff "fx_proj_pointer"
			else stuff "fx_bul_small"
			else stuff "fx_bul_med"
			else stuff "fx_10_15 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_10_15"
			{spawn "ex_air_norm"}
			else stuff "fx_16_24 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_16_24"
			{spawn "ex_air_norm"}
			else stuff "fx_25_40 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_25_40"
			{spawn "ex_air_norm"}
			else stuff "fx_gren fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_gren fx_cm"
			{spawn "ex_air_big"}
			else stuff "fx_gren"
			{spawn "ex_air_norm"}
			else stuff "fx_45_89 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_45_89 fx_cm"
			{spawn "ex_air_cmnorm"}
			else stuff "fx_45_89 fx_cl"
			{spawn "ex_air_he_size5"}
			else stuff "fx_45_89 fx_clf"
			{spawn "ex_wp_size2"}
			else stuff "fx_45_89"
			;{spawn "ex_air_norm2"}
			{spawn "ex_air_big"}
			else stuff "fx_90_110 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_90_110 fx_cm"
			{spawn "ex_air_cmnorm"}
			else stuff "fx_90_110 fx_splitter_big"
			{spawn "ex_air_big"}
			{spawn "splitters_ground_big"}
			else stuff "fx_90_110"
			{spawn "ex_air_big"}
			else stuff "fx_111_145 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_111_145 fx_cm"
			{spawn "ex_air_cmbig"}
			else stuff "fx_111_145"
			{spawn "ex_air_big2"}
			else stuff "fx_146_299 fx_ap"
			{spawn "ex_air_sm"}
			else stuff "fx_146_299 fx_cm"
			{spawn "ex_air_cmbig"}
			else stuff "fx_146_299 fx_splitter_big"
			{spawn "ex_air_extrabig"}
			{spawn "splitters_ground_big"}
			else stuff "fx_146_299"
			{spawn "ex_air_extrabig"}
			else stuff "fx_upto15kg fx_cm"
			{spawn "ex_air_cmbig"}
			else stuff "fx_upto15kg"
			{spawn "ex_air_extrabig"}
			else stuff "fx_upto50kg"
			{spawn "ex_air_extrabig"}
			else stuff "fx_upto250kg"
			{spawn "ex_air_extrabig"}
			else stuff "fx_upto1000kg"
			{spawn "ex_air_extrabig"}
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
			else stuff "fx_shmel"
			else stuff "fx_odab250_air"
			{spawn "ex_odab250"}
			else stuff "fx_nuq"
			{spawn "expluto"}
			else stuff "fx_nuq_air"
			{spawn "expluto_air"}
		}
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_glass_ic_air"}

		else stuff "grenade size1"							; Anti-Personnel Grenades
			{spawn "ex_air_small"}

		else stuff "grenade size2"							; Anti-Personnel Grenades
			{spawn "ex_air_big2"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_air_norm"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "ex_air_he_size3"}

		else stuff "big mortar"
			{spawn "ex_air_he_size3"}

		else stuff "small mortar"
			{spawn "ex_small"}

		else stuff "mortar"
			{spawn "ex_air_norm"}

		else stuff "shell size1 all_he"
			{spawn "ex_small"}

		else stuff "shell size2 all_he"
			{spawn "ex_air_norm"}

		else stuff "shell size3 all_he"
			{spawn "ex_air_he_size3"}

		else stuff "shell size4 all_he"
			{spawn "ex_air_he_size4"}

		else stuff "shell size5 all_he"
			{spawn "ex_air_he_size5"}

		else stuff "shell wp_size1"							; small WP Smoke shells
			{spawn "ex_wp_size1"}									; initial explosion fx
			{spawn "shell_smoke_wp_size1"}							; actual smoke and vision volumes

		else stuff "shell wp_size2"							; medium WP Smoke shells
			{spawn "ex_wp_size2"}									; initial explosion fx
			{spawn "shell_smoke_wp_size2"}							; actual smoke and vision volumes

		else stuff "shell wp_size3"								; big WP Smoke shells
			{spawn "ex_wp_size3"}										; initial explosion fx
			{spawn "shell_smoke_wp_size3"}							; actual smoke and vision volumes

		else stuff "shell wp_size4"								; big WP Smoke shells
			{spawn "ex_wp_size4"}									; initial explosion fx
			{spawn "shell_smoke_wp_size4"}							; actual smoke and vision volumes

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes

		else stuff "shell smoke_size3"						; 150+mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_air_norm"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_air"}
			{spawn "burn_piece" dir_velocity}
		}
	}
}
