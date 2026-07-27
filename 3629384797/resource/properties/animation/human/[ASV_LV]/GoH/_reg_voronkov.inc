
;======Animations by Dmitriy Voronkov (gore package). Some are out of place. Purge needed.=======

	{smooth 0.025}
	{sequence "000_a_turn_180"		{movement} {speed 0.5}}

	{sequence "000_a_turn_180+pistol_up0"		{smooth 0.1} {speed 0.5}}
	{sequence "000_a_turn_180+pistol_up1"		{smooth 0.1} {speed 0.5}}
	{sequence "000_a_turn_180+pistolshot"		{smooth 0.1} {speed 0.5}}

	
;	{sequence "000_die_agonia-0"		{smooth 0.2} {speed 0.2}}
;	{sequence "000_die_agonia-1"		{smooth 0.5} {speed 0.2}}
;	{sequence "000_die_agonia-2"		{smooth 0.5} {speed 0.2}}
;	{sequence "000_die_agonia-3"		{smooth 0.5} {speed 0.2}}
;	{sequence "000_die_agonia-4"		{smooth 0.5} {speed 0.2}}
;	{sequence "000_die_shoker-0"		{smooth 0.2} {speed 1}}
;	{sequence "000_die_shoker-1"		{smooth 0.2} {speed 1}}
;	{sequence "000_driver_stretcher_0"	{smooth 0.2} {speed 0.2}}
;	{sequence "000_driver_stretcher_0stay"	{smooth 0.2} {speed 0.2}}
;	{sequence "000_driver_stretcher_0drop"	{smooth 0.2} {speed 0.5}}

	{sequence "000_die_agonia-fire"		{smooth 0.1} {speed 0.2}}
	{sequence "000_die_agonia-head_off"	{speed 0.9}}

	{sequence "000_die_agonia-h-arm_l_off"	{speed 2}}
	{sequence "000_die_agonia-h-arm_r_off"	{speed 2}}
	{sequence "000_die_agonia-h-leg_l_off"	{speed 2}}
	{sequence "000_die_agonia-h-leg_r_off"	{speed 2}}

	{sequence "000_die_agonia-5-l-leg"	{smooth 0.5} {speed 0.2}}
	{sequence "000_die_agonia-61"		{smooth 0.3} {speed 0.2}}
	{sequence "000_die_agonia-62"		{smooth 0.3} {speed 0.2}}

	{sequence "000_die_agonia-blind"		{smooth 0.1} {speed 0.08}}
	{sequence "000_die_agonia-leg-l-1"		{smooth 0.1} {speed 0.08}}
	{sequence "000_die_agonia-leg-r-1"		{smooth 0.1} {speed 0.08}}
	{sequence "000_die_agonia-eggs-1"		{smooth 0.1} {dynamicSpeed {0 20 0.9} {21 75 0.3}}}
	{sequence "000_die_agonia-eggs-2"		{smooth 0.1} {dynamicSpeed {0 30 0.9} {31 90 0.2}}}
	{sequence "000_die_agonia-lastshot1"	{smooth 0.4} {dynamicSpeed {0 30 0.8} {31 70 0.25}{71 90 0.45}}}
	{sequence "000_die_bullet-storm"		{smooth 0.1} {speed 1}}
	{sequence "000_die_bullet-dance"		{smooth 0.1} {speed 1}}
	{sequence "000_die_bullet-head"			{smooth 0.1} {speed 1}}

	{sequence "001_kill_rape_head_ag1"		{smooth 0.2}{speed 0.5}}
	{sequence "001_kill_rape_head0"			{smooth 0.2}{speed 0.5}}
	{sequence "001_kill_rape_head1"			{smooth 0.2}{speed 0.5}}
	{sequence "001_kill_rape_isteria_1"		{smooth 0.2}{speed 0.5}}
	{sequence "001_kill_rape_to_parts1"		{smooth 0.2}{speed 0.5}}
	{sequence "001_kill_rape_to_parts2"		{smooth 0.2}{speed 0.5}}

	{sequence "001_k-jump1"		{smooth 0.5} {movement} {speed 1}}
	{sequence "001_k-jump2"		{smooth 0.5} {movement} {speed 1}}
	{sequence "001_r_fall1"		{speed 0.4}}
	{sequence "001_r_up1"		{speed 0.4}}
	{sequence "001_r_move-1"		{movement} {speed 50.5}}
	{sequence "001_r_move-2"		{movement} {speed 10.5}}

	{sequence "001_super-jump1"		{movement} {speed 0.4}}
	{sequence "001_super-fall1"		{movement} {speed 0.4}}

	{sequence "006_dialog_im-not-1"		{smooth 0.1} {movement} {speed 0.2}}
	{sequence "006_dialog_talk_wtf1"	{smooth 0.1} {speed 0.2}}
	{sequence "101_mod-4_jump-1"		{smooth 0.1} {movement} {speed 0.8}}
	{sequence "101_str_l_m"		{smooth 0.1} {movement} {speed 0.5}}
	{sequence "101_str_r_m"		{smooth 0.1} {movement} {speed 0.5}}


	{sequence "009_cros_sit_b_01"		{smooth 0.1} {speed 0.2}}
	{sequence "009_cros_sit_b_02"		{smooth 0.1} {speed 0.2}}
	{sequence "009_cros_sit_b_03"		{smooth 0.1} {speed 0.2}}
	{sequence "009_cros_sit_b_04"		{smooth 0.1} {speed 0.2}}

	{sequence "009_cros_stifler0"		{smooth 0.1} {speed 0.4}}
	{sequence "009_cros_stifler1"		{smooth 0.1} {speed 0.4}}
	{sequence "009_cros_stifler2"		{smooth 0.1} {speed 0.4}}
	{sequence "009_cros_stifler2dance"		{smooth 0.1} {speed 0.4}}
	{sequence "009_cros_stifler4run"		{smooth 0.1} {speed 0.4}}

	{sequence "009_cros_paling2"		{smooth 0.1} {speed 0.2}}

	{sequence "009_grind-sit"		{smooth 0.5} {speed 0.4}}
	{sequence "009_grind-sit-roll"		{movement} {speed 0.6}}
	{sequence "009_cross-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-2-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-2-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-3-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-3-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-4-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_cross-4-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_dead_swim1"		{smooth 0.2} {speed 0.1}}
	{sequence "009_sit-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_sit-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_sit-3bike"		{smooth 0.5} {speed 0.4}}
	{sequence "009_sit-3bike_roll"		{smooth 0.5} {speed 0.4}}

	{sequence "009_lie-colba1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_lie-colba2"		{smooth 0.5} {speed 0.4}}

	{sequence "009_lie-table-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_lie-table-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_slave-cage-1"		{smooth 0.5} {speed 0.4}}
	{sequence "009_slave-cage-2"		{smooth 0.5} {speed 0.4}}
	{sequence "009_signal_1"		{smooth 0.1} {speed 0.4}}
	{sequence "009_signal_2"		{smooth 0.1} {speed 0.4}}

	{sequence "010_bm_arm-bayonets_1"		{smooth 0.2} {speed 0.7}}
	{sequence "010_bm_arm-bayonets_2"		{smooth 0.2} {speed 0.7}}

	{sequence "010_bm_arm-l_facepalm1"		{smooth 0.2} {speed 0.7}}
	{sequence "010_bm_arm-l_facepalm2"		{smooth 0.2} {speed 0.7}}

	{sequence "010_bm_arm-l_hit_1"		{smooth 0.1} {speed 1}}
	{sequence "010_bm_arm-r_hit_1"		{smooth 0.1} {speed 1}}
	{sequence "010_bm_arm-l_megafon1"	{smooth 0.1} {speed 0.1}}

	{sequence "010_bm_arm-l_show-forw"		{smooth 0.3} {speed 0.4}}
	{sequence "010_bm_arm-l_show-left"		{smooth 0.3} {speed 0.4}}
	{sequence "010_bm_arm-r_show-forw"		{smooth 0.3} {speed 0.4}}
	{sequence "010_bm_arm-r_show-right"		{smooth 0.3} {speed 0.4}}

	{sequence "010_bm_arm-l_trem-0"		{smooth 0.1} {speed 0.4}}
	{sequence "010_bm_arm-l_trem-1"		{smooth 0.1} {speed 0.4}}
	{sequence "010_bm_head-no-1"		{smooth 0.5} {speed 0.4}}
	{sequence "010_bm_head-no-2"		{smooth 0.5} {speed 0.4}}
	{sequence "010_bm_head-yes-1"		{smooth 0.5} {speed 0.4}}
	{sequence "010_bm_head-yes-2"		{smooth 0.5} {speed 0.4}}
	{sequence "010_bm_head-trem"		{smooth 0.1} {speed 0.4}}
	{sequence "010_bm_stay-still-1"		{smooth 1.0} {speed 0.01}}
	{sequence "010_bm_stay-still-2"		{smooth 0.5} {speed 0.4}}
	{sequence "010_bm_stay-still-3"		{smooth 0.5} {speed 0.4}}

	{sequence "010_bm_head-tt180"		{smooth 0.5} {speed 0.2}}
	{sequence "010_bm_head-ttleft"		{smooth 0.5} {speed 0.2}}
	{sequence "010_bm_head-ttright"		{smooth 0.5} {speed 0.2}}

	{sequence "700_an_sit_1"		{smooth 0.1} {speed 0.4}}
	{sequence "700_an_sit_1roll"		{smooth 0.1} {speed 0.3}}
	{sequence "700_an_sit_2"		{smooth 0.1} {speed 0.4}}
	{sequence "700_an_sit_2roll"		{smooth 0.1} {speed 0.3}}
	{sequence "700_an_sit_3"		{smooth 0.1} {speed 0.4}}
	{sequence "700_an_sit_3roll"		{smooth 0.1} {speed 0.3}}

	{sequence "700_an_stay_wall1"		{smooth 0.1} {speed 0.4}}
	{sequence "700_an_stay_wall1roll"	{smooth 0.1} {speed 0.1}}
	{sequence "700_an_stay_wall2"		{smooth 0.1} {speed 0.4}}
	{sequence "700_an_stay_wall2roll"	{smooth 0.1} {speed 0.1}}

	{sequence "900_zero"				{smooth 0.1} {speed 10}}
	{sequence "900_gun_roll"				{smooth 0.1} {speed 1}}
