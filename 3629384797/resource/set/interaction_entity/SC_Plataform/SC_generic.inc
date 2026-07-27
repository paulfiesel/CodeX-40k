
;	<<<< ---------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Generic/Terrain VFX and Effects List ===============] >>
;	<<<<----------------------------------------------------------------------------------->>>>			 

; // BUZZ: I'll probably modulate this script into DLCs in the future...

(Define "SC_Generic_DLC_LV40k_FX_SM_Radiation_Grenade"
	{blastwave c4 3.0 r0 3.0 r1 8.0 position}
	{spawn "ex_grenade_yellow"}
	{start_sound "SC_Plataform/hit/-bullet/size3/acid_ground_exp" use_position}
	
	{spawn "sc_empty_helper"
		{add_view "anomaly_radiashon_1" "fx" "basis"}
		{link_sound "sfx" "SC_Plataform/SC_fx/sc_misc_s4/00_geiger_radiation_"}
		
		{play_sound "sfx"}
		{view start "fx"}
	
		{Delay 1.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 4.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 7.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 10.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 13.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 16.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		{Delay 19.0		{Spawn "lv40k_effects_sm_radiation_grenade_s1" offset 0 0 0}}
		
		{Delay 22.0	{Delete}}
	}
)

(Define "SC_Generic_DLC_LV40k_FX_Weirdboy_Vomit"
	{bullet_detonate}
	{spawn "fx_ork_weirdboy_psychic_dead"}
	{spawn "fx_ork_weirdboy_warp_vomit_storm"}
	{blastwave c4 6.5 r0 6.0 r1 24 position}
	{spawn "sc_empty_helper"
		{Delay 0.25	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 1.0	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 1.5	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 3.0	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 4.0	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 5.0	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 6.5	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 7.5	{blastwave c4 10 r0 9 r1 24 position}}
		{Delay 9.0	{blastwave c4 10 r0 9 r1 24 position}}
		
		{Delay 10.0	{blastwave c4 10 r0 9 r1 24 position} {Delete}}
	}
)

(Define "SC_Generic_DLC_LV40k_FX_Venomthrope_Smoke"
	{spawn "smoke_volume_cylinder" 
		{add_view "fx_tyr_smoke_wp_venomthrope_s1" "smoke1" "root"}
		{view start "smoke1"}
		{delay 16
			{view stop "smoke1"}
		}
		{delay 21
			{hide 1}
		}
	}
	{spawn "sc_empty_helper"
		{delay 2
			{spawn "smoke_volume_cylinder" 	{delay 21 {hide 1}}}
			
			{Delay 0.5		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 3.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 6.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 9.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 12.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 15.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 18.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 21.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0} {Delete}}
		}
	}
)

(Define "SC_Generic_Define_FX_Shared_Air_Material"	
	{if stuff "sc_fx_laser_orange_small"
		{spawn "lazer_orange_flash_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/lasgan_hit" use_position}
		
	else stuff "sc_fx_laser_red_small"
		{spawn "lazer_red_flash_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/lasgan_hit" use_position}
		
	else stuff "sc_fx_projectile_incendiary_med"
		{spawn "ex_glass_ic_ground"}
		{spawn "burn_piece" dir_velocity}
		{fire radius 3 time 16 heating 0.25}
		
	else stuff "grenade sc_fx_plasma"
		{spawn "granata_plazm"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
	
	else stuff "grenade sc_fx_sm_stun"	
		{spawn "fx_greande_stun_exp"}
		{spawn "lv40k_effects_SM_stun_grenade_s1"}
		
	else stuff "grenade sc_fx_sm_radiation"	
		("SC_Generic_DLC_LV40k_FX_SM_Radiation_Grenade")
		
	else stuff "sc_fx_sm_orbital_strike"	
		{spawn "lv40k_mp_call_sms_orbital_strike"}
		
	else stuff "grenade sc_fx_meltabomb"	
		{spawn "volkite_hit_big_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/halo_wraith" use_position}
		{fire radius 3 time 5 heating 0.25}
		
	else stuff "sc_fx_volkite_s1"	
		{spawn "hit_multilaser_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/focusrifle_impacts" use_position}
		{fire radius 0.2 time 1 heating 0.25}
		
	else stuff "sc_fx_meltagun"
		{spawn "melta_hit_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/melta_hit" use_position}
		{fire radius 3 time 3 heating 0.2}
		
	else stuff "sc_fx_acid_cannon"
		{spawn "ex_plasma_med_green_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/melta_hit" use_position}
		
	else stuff "sc_fx_lascannon"
		{spawn "ex_lascan_air"}
		{start_sound "SC_Plataform/hit/-bullet/size2/spartan_laser_impacts" use_position}
		
	else stuff "sc_fx_lascannon_big"
		{spawn "ex_lascan_max"}
		{start_sound "SC_Plataform/hit/-bullet/size2/spartan_laser_impacts" use_position}
		
	else stuff "sc_fx_spinefists_spike"
		{spawn "det_tyr_fleshborer_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/spike_impacts" use_position}
		
	else stuff "sc_fx_deathspitter"
		{spawn "ex_plasma_med_green_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/focusrifle_impacts" use_position}
		
	else stuff "sc_fx_plasma_blue_small"
		{spawn "ex_plasma_med_blue_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/plasma_hit" use_position}
	else stuff "sc_fx_plasma_blue_med"
		{spawn "exp_plasmacannon_min_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
	else stuff "sc_fx_plasma_orange_med"
		{spawn "exp_plasmacannon_orks_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
		
	else stuff "sc_fx_plasma_orange_big"
		{spawn "exp_plasmacannon_orks_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
		
	else stuff "sc_fx_tyr_impaler"
		{spawn "hitin_auto"}
		
	else stuff "sc_fx_bolter hellfire"
		{spawn "tyr_hitin_hit_sm"}
		
	else stuff "sc_fx_bolter inferno"
		{spawn "thermal_hit_min"}
		{fire radius 1 time 2.0 heating 0.25}
		
	else stuff "sc_fx_bolter"
		{spawn "ex_bolt"}
		
	else stuff "sc_fx_bolter_h"
		{spawn "ex_hb_bolt"}
		
	else stuff "sc_fx_tyr_bioplasmic"
		{spawn "exp_spore_mine_acid"}
	else stuff "sc_fx_barbed_strangler"
		{spawn "exp_duwitel_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/acid_ground_exp" use_position}
	else stuff "sc_fx_venomthrope_smoke"
		{spawn "exp_spore_mine_yad"}
		{start_sound "SC_Plataform/hit/-bullet/size3/acid_ground_exp" use_position}
		("SC_Generic_DLC_LV40k_FX_Venomthrope_Smoke")
				
	else stuff "sc_fx_acid_spit"
		{spawn "bloodsparks_bigest-g"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
	else stuff "sc_fx_venom_cannon"
		{spawn "hitin_auto"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
	else stuff "sc_fx_venom_cannon_big"
		{spawn "hitin_bc"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
	else stuff "sc_fx_eldar_mental"
		{spawn "reaper_hit_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/plasma_hit" use_position}
	else stuff "sc_fx_ork_warp_energyball"
		{bullet_detonate}
		{spawn "volkite_hit_big_air"}
	else stuff "sc_fx_ork_lifta_drop"
		{spawn "gravi_hit_air"}
		;//{start_sound "SC_Plataform/hit/-bullet/size2/hunter_beam_impacts" use_position}
	else stuff "sc_fx_ork_zzap_big"
		{spawn "zzap_blast"}
		{start_sound "SC_Plataform/hit/-bullet/size3/electro/arc_big" use_position}
	else stuff "sc_fx_autocannon"
		{spawn "ex_autocan_air"}
;//		{start_sound "SC_Plataform/hit/-bullet/size2/chaos_autocanon_hit" use_position}
	else stuff "sc_fx_lascannon_red"
		{spawn "ex_lascan_red_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/big_Energy" use_position}
	else stuff "SC_fx_ork_warp_vomit"
		("SC_Generic_DLC_LV40k_FX_Weirdboy_Vomit")
	}
)

; ===================================================================================================== ;
; // MATERIALS GENERIC
; ===================================================================================================== ;

(Define "SC_Generic_Define_FX_Materials_All_Additive"
	("SC_Generic_Define_FX_Shared_Air_Material")
)

; ===================================================================================================== ;
; // TERRAIN
; ===================================================================================================== ;

(Define "SC_Generic_Define_FX_Terrain_Air_Additive"
	("SC_Generic_Define_FX_Shared_Air_Material")
)

(Define "SC_Generic_Define_FX_Terrain_Ground_All_Additive"
	{if stuff "sc_fx_laser_orange_small"
		{spawn "lazer_orange_flash"}
		{start_sound "SC_Plataform/hit/-bullet/size1/lasgan_hit" use_position}
		
	else stuff "sc_fx_laser_red_small"
		{spawn "lazer_red_flash"}
		{start_sound "SC_Plataform/hit/-bullet/size1/lasgan_hit" use_position}
	
	else stuff "sc_fx_projectile_incendiary_med"
		{spawn "ex_glass_ic_ground"}
		{spawn "burn_piece" dir_velocity}
		{spawn "burned_spot_round2" scale 1.4 random_orientation}
		{fire radius 3 time 16 heating 0.25}
		
	else stuff "grenade sc_fx_plasma"
		{spawn "granata_plazm"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
	
	else stuff "grenade sc_fx_sm_stun"	
		{spawn "fx_greande_stun_exp"}
		{spawn "lv40k_effects_SM_stun_grenade_s1"}
		
	else stuff "grenade sc_fx_sm_radiation"	
		("SC_Generic_DLC_LV40k_FX_SM_Radiation_Grenade")
		
	else stuff "sc_fx_sm_orbital_strike"	
		{spawn "lv40k_mp_call_sms_orbital_strike"}
		
	else stuff "grenade sc_fx_meltabomb"	
		{spawn "volkite_hit_big_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/halo_wraith" use_position}
		{fire radius 3 time 5 heating 0.25}
	
	else stuff "sc_fx_acid_cannon"
		{spawn "ex_plasma_med_green_air"}
		{spawn "burned_spot01"}
		{start_sound "SC_Plataform/hit/-bullet/size1/melta_hit" use_position}
		
	else stuff "sc_fx_deathspitter"
		{spawn "ex_plasma_med_green_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/focusrifle_impacts" use_position}
		
	else stuff "sc_fx_meltagun"
		{spawn "melta_hit"}
		{start_sound "SC_Plataform/hit/-bullet/size1/melta_hit" use_position}
		{fire radius 3 time 3 heating 0.2}
	else stuff "sc_fx_plasma_blue_small"
	;	{spawn "ex_plasma_med_blue"}		; // BUZZ: <- causing crashes.
		{spawn "ex_plasma_med_blue_air"}
		{start_sound "SC_Plataform/hit/-bullet/size1/plasma_hit" use_position}
		
	else stuff "sc_fx_volkite_s1"	
		{spawn "hit_multilaser"}
		{start_sound "SC_Plataform/hit/-bullet/size1/focusrifle_impacts" use_position}
		{fire radius 0.2 time 1 heating 0.25}
		
	else stuff "sc_fx_lascannon"
		{spawn "ex_lascan"}
		{start_sound "SC_Plataform/hit/-bullet/size2/spartan_laser_impacts" use_position}
		
	else stuff "sc_fx_lascannon_big"
		{spawn "ex_lascan_max"}
		{start_sound "SC_Plataform/hit/-bullet/size2/spartan_laser_impacts" use_position}
		
	else stuff "sc_fx_spinefists_spike"
		{spawn "det_tyr_fleshborer"}
		{start_sound "SC_Plataform/hit/-bullet/size1/spike_impacts" use_position}
		
	else stuff "sc_fx_tyr_impaler"
		{spawn "hitin_auto"}
	else stuff "sc_fx_tyr_bioplasmic"
		{spawn "exp_spore_mine_acid"}
	else stuff "sc_fx_barbed_strangler"
		{spawn "exp_duwitel"}
		{start_sound "SC_Plataform/hit/-bullet/size3/acid_ground_exp" use_position}
	else stuff "sc_fx_venomthrope_smoke"
		{spawn "exp_spore_mine_yad"}
		{start_sound "SC_Plataform/hit/-bullet/size3/acid_ground_exp" use_position}
		("SC_Generic_DLC_LV40k_FX_Venomthrope_Smoke")
		
	else stuff "sc_fx_acid_spit"
		{spawn "bloodsparks_bigest-g"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
	else stuff "sc_fx_venom_cannon"
		{spawn "hitin_auto"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
	else stuff "sc_fx_venom_cannon_big"
		{spawn "hitin_bc"}
		{start_sound "SC_Plataform/hit/-bullet/size1/hitin" use_position}
		
	else stuff "sc_fx_bolter hellfire"
		{spawn "tyr_hitin_hit_sm"}
		
	else stuff "sc_fx_bolter inferno"
		{spawn "thermal_hit_min"}
		{fire radius 1 time 2.0 heating 0.25}
		
	else stuff "sc_fx_bolter"
		{spawn "ex_bolt"}
		
	else stuff "sc_fx_bolter"
		{spawn "ex_hb"}
		
	else stuff "sc_fx_bolter_h"
		{spawn "ex_bolter"}
		
	else stuff "sc_fx_ork_warp_energyball"
		{bullet_detonate}
		{spawn "volkite_hit_big"}
	else stuff "sc_fx_eldar_mental"
		{spawn "reaper_hit"}
		{start_sound "SC_Plataform/hit/-bullet/size1/plasma_hit" use_position}
	else stuff "sc_fx_ork_lifta_drop"
		{spawn "gravi_hit"}
		;//{start_sound "SC_Plataform/hit/-bullet/size2/hunter_beam_impacts" use_position}
		
	else stuff "sc_fx_ork_zzap_big"
		{spawn "zzap_blast"}
		{start_sound "SC_Plataform/hit/-bullet/size3/electro/arc_big" use_position}
		
	else stuff "sc_fx_plasma_orange_big"
		{spawn "exp_plasmacannon_orks_air"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
		
	else stuff "sc_fx_plasma_orange_med"
		{spawn "exp_plasmacannon_orks"}
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
	else stuff "sc_fx_plasma_blue_med"
		{spawn "exp_plasmacannon_min_air"}
		;//{spawn "exp_plasmacannon_min"}	; <- causing crashes
		{start_sound "SC_Plataform/hit/-bullet/size3/Big_plasma" use_position}
	else stuff "sc_fx_autocannon"
		{spawn "ex_autocan"}
;//		{start_sound "SC_Plataform/hit/-bullet/size2/chaos_autocanon_hit" use_position}
	else stuff "sc_fx_lascannon_red"
		{spawn "ex_lascan_red"}
		{start_sound "SC_Plataform/hit/-bullet/size3/big_Energy" use_position}
	else stuff "SC_fx_ork_warp_vomit"
		("SC_Generic_DLC_LV40k_FX_Weirdboy_Vomit")
	}
)

(Define "SC_Generic_Define_FX_Terrain_Water_Additive"
	{if stuff ""}
)
