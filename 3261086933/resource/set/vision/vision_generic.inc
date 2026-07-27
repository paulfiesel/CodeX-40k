;= START =====================================
;new visors
;—овр. опт. системы обладают бќльшим увеличением (часто переменным). „асто оснащены тепловизором или сист. повыш. контраста.
;дл€ геймпле€ это озн, что без ущерба ширине пол€ зрени€ немного (из-за баланса) увелич обща€ дально. обнар, и побольше -
;- людей. ¬изоры с тепловизором - высокое uncover, дальше замечают стрел€ющих, и т. д. Ќо встречаютс€ редко., по причине цены.
;============================================

;    ("radius" r(90))
;    {rules
;    }
(include "new_vision.inc")
(define "human_in_IR_and_optic_spectre"
        {human (* %human_ir (* %optic 0.75))
            {firing (* %human_ir (* %optic 1))
				{firing_silent_pb 		(* %human_ir (* %optic 0.1))}
				{firing_silent_pm_sil 		(* %human_ir (* %optic 0.1))}
				{firing_silent_rus_las_designator 		(* %human_ir (* %optic 0.1))}
				{firing_silent_rus_radar 		(* %human_ir (* %optic 0.1))}
				{firing_silent_usa_las_designator 		(* %human_ir (* %optic 0.1))}
				{firing_silent_usa_radar 		(* %human_ir (* %optic 0.1))}
				{firing_silent_sr25 		(* %human_ir (* %optic 0.1))}
				{firing_silent_svu 		(* %human_ir (* %optic 0.1))}
				{firing_silent_svu_2		(* %human_ir (* %optic 0.1))}
				{firing_silent_vintorez 		(* %human_ir (* %optic 0.1))}
				{firing_silent_abakan_1 		(* %human_ir (* %optic 0.1))}
				{firing_silent_abakan_scope		(* %human_ir (* %optic 0.1))}
				{firing_silent_aek_973_2 		(* %human_ir (* %optic 0.1))}
				{firing_silent_aek_973_4 		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak74spec_1 		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak74sps 		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak74us 		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak107_2 		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak107_3 		(* %human_ir (* %optic 0.1))}
				{firing_silent_aks74_4 		(* %human_ir (* %optic 0.1))}
				{firing_silent_aks74u_1 		(* %human_ir (* %optic 0.1))}
				{firing_silent_aks74u_2			(* %human_ir (* %optic 0.1))}
				{firing_silent_aks74u_3			(* %human_ir (* %optic 0.1))}
				{firing_silent_aks74u_4			(* %human_ir (* %optic 0.1))}
				{firing_silent_akval			(* %human_ir (* %optic 0.1))}
				{firing_silent_akval_1			(* %human_ir (* %optic 0.1))}
				{firing_silent_bizon			(* %human_ir (* %optic 0.1))}
				{firing_silent_cz_scorpion_evo3_1a			(* %human_ir (* %optic 0.1))}
				{firing_silent_groza_2			(* %human_ir (* %optic 0.1))}
				{firing_silent_groza_3			(* %human_ir (* %optic 0.1))}
				{firing_silent_hk416A5_Silenced			(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_sd_aimpoint			(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_sd_aimpoint_tactical			(* %human_ir (* %optic 0.1))}
				{firing_silent_mp5sd			(* %human_ir (* %optic 0.1))}
				{firing_silent_sp3_vihr_1			(* %human_ir (* %optic 0.1))}
				{firing_silent_sp3_vihr_2			(* %human_ir (* %optic 0.1))}
				{firing_silent_qbz_191_silence			(* %human_ir (* %optic 0.1))}
				{firing_silent_js2_silenced			(* %human_ir (* %optic 0.1))}
				{firing_silent_qbu88_silence		(* %human_ir (* %optic 0.1))}
				{firing_silent_qbz95_silence		(* %human_ir (* %optic 0.1))}
				{firing_silent_qbz95_silence_scope		(* %human_ir (* %optic 0.1))}
				{firing_silent_qsz_92_silence		(* %human_ir (* %optic 0.1))}
				{firing_silent_l129a1_silenced		(* %human_ir (* %optic 0.1))}
				{firing_silent_g36a3_eotech552_silencer_ag36		(* %human_ir (* %optic 0.1))}
				{firing_silent_an94_1		(* %human_ir (* %optic 0.1))}
				{firing_silent_an94_skope		(* %human_ir (* %optic 0.1))}
				{firing_silent_vssk_vyhlop		(* %human_ir (* %optic 0.1))}
				{firing_silent_noveske_n4			(* %human_ir (* %optic 0.1))}
				{firing_silent_noveske_n4_v1			(* %human_ir (* %optic 0.1))}
				{firing_silent_scar_hs			(* %human_ir (* %optic 0.1))}
				{firing_silent_uar15_v1			(* %human_ir (* %optic 0.1))}
				{firing_silent_urgi_m4			(* %human_ir (* %optic 0.1))}
				{firing_silent_xm7			(* %human_ir (* %optic 0.1))}
				{firing_silent_xm157			(* %human_ir (* %optic 0.1))}
				{firing_silent_qbz951_longbow_holo			(* %human_ir (* %optic 0.1))}
				{firing_silent_qbz951_longbow_qmk			(* %human_ir (* %optic 0.1))}
				{firing_silent_ak15_hgls		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak74m_zenitco_v4		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak105_t1		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak105_v0		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak105_v1		(* %human_ir (* %optic 0.1))}
				{firing_silent_ak105_v2		(* %human_ir (* %optic 0.1))}
				{firing_silent_akm_mod_v4b		(* %human_ir (* %optic 0.1))}
				{firing_silent_akms_s		(* %human_ir (* %optic 0.1))}

				{firing_silent_aks_74u_hgs			(* %human_ir (* %optic 0.1))}
				{firing_silent_am17			(* %human_ir (* %optic 0.1))}
				{firing_silent_ar15_urgi			(* %human_ir (* %optic 0.1))}
				{firing_silent_ar15_urgi_v2		(* %human_ir (* %optic 0.1))}
				{firing_silent_ar15_urgi_v3			(* %human_ir (* %optic 0.1))}
				{firing_silent_arx160_v3			(* %human_ir (* %optic 0.1))}
				{firing_silent_as_val 			(* %human_ir (* %optic 0.1))}
				{firing_silent_as_val_v1		(* %human_ir (* %optic 0.1))}
				{firing_silent_g3a3_s		(* %human_ir (* %optic 0.1))}
				{firing_silent_g27_hgfs		(* %human_ir (* %optic 0.1))}
				{firing_silent_hk416d5_v1		(* %human_ir (* %optic 0.1))}
				{firing_silent_hk416d5_v2		(* %human_ir (* %optic 0.1))}
				{firing_silent_huskyak74zv2		(* %human_ir (* %optic 0.1))}
				{firing_silent_huskyhk416		(* %human_ir (* %optic 0.1))}
				{firing_silent_l403		(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_block_ii_v3		(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_hgs		(* %human_ir (* %optic 0.1))}


				{firing_silent_m27_iar		(* %human_ir (* %optic 0.1))}
				{firing_silent_m38		(* %human_ir (* %optic 0.1))}
				{firing_silent_rm277	(* %human_ir (* %optic 0.1))}
				{firing_silent_rm277_ar		(* %human_ir (* %optic 0.1))}				
				{firing_silent_fn_licc	(* %human_ir (* %optic 0.1))}
				{firing_silent_fn_licc_holo		(* %human_ir (* %optic 0.1))}				
				{firing_silent_amb_17	(* %human_ir (* %optic 0.1))}
				{firing_silent_amb_17_1p87		(* %human_ir (* %optic 0.1))}
				{firing_silent_amb_17_g33		(* %human_ir (* %optic 0.1))}

				{firing_silent_m7_spear	(* %human_ir (* %optic 0.1))}
				{firing_silent_m7_spear_xm157_s		(* %human_ir (* %optic 0.1))}
				{firing_silent_m7_spear_holo		(* %human_ir (* %optic 0.1))}
				{firing_silent_m7_spear_xm157		(* %human_ir (* %optic 0.1))}
				{firing_silent_m7_spear_lvpo		(* %human_ir (* %optic 0.1))}
				{firing_silent_m250		(* %human_ir (* %optic 0.1))}
				{firing_silent_m250_holo		(* %human_ir (* %optic 0.1))}

















				{firing_silent_m4a1_hls			(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_mcmr			(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_mcmr_13			(* %human_ir (* %optic 0.1))}
				{firing_silent_m4a1_v4b		(* %human_ir (* %optic 0.1))}
				{firing_silent_m27_iar_ags_epm			(* %human_ir (* %optic 0.1))}
				{firing_silent_m27_iar_hgs			(* %human_ir (* %optic 0.1))}
				{firing_silent_mcx_virtus1e 			(* %human_ir (* %optic 0.1))}
				{firing_silent_mcx_virtus2e		(* %human_ir (* %optic 0.1))}
				{firing_silent_mcx_virtus4e		(* %human_ir (* %optic 0.1))}
				{firing_silent_mk16_mod2		(* %human_ir (* %optic 0.1))}
				{firing_silent_m39emr_v2		(* %human_ir (* %optic 0.1))}
				{firing_silent_mk14v3		(* %human_ir (* %optic 0.1))}
				{firing_silent_mk17_ssr		(* %human_ir (* %optic 0.1))}
				{firing_silent_Svd_mk1sd		(* %human_ir (* %optic 0.1))}
				{firing_silent_vss_vintorez_v1		(* %human_ir (* %optic 0.1))}
				{firing_silencer_vss (* %human_ir (* %optic 0.1))}
				{firing_silencer_asval (* %human_ir (* %optic 0.1))}
				{firing_silencer_akmss (* %human_ir (* %optic 0.1))}
				{firing_silencer_m4a1s (* %human_ir (* %optic 0.1))}
				{firing_silencer_85smgs (* %human_ir (* %optic 0.1))}
				{firing_silencer_g3s (* %human_ir (* %optic 0.1))}

				{firing_silencer_m (* %human_ir (* %optic 0.1))}
				{firing_silencer_n (* %human_ir (* %optic 0.1))}
				
				{firing_silent_ak12_m1_holo			(* %human_ir (* %optic 0.1))}				
				{firing_silent_ak12_m1_syq			(* %human_ir (* %optic 0.1))}		
			
				{firing_silent_qbz_191_syq			(* %human_ir (* %optic 0.1))}	

				{thrower 0}
				{firing_binocular 0}
				{firing_welrod 0}
				{firing_delisle 0}

				{firing_grenade_f1 		0.3}
				{firing_grenade_rgn 		0.3}
				{firing_grenade_rgo 		0.3}
				{firing_grenade_m61 		0.3}
				{firing_grenade_m67 		0.3}
				{firing_grenade_rgd 		0.3}
				{firing_grenade_rkg3 		0.3}
				{firing_grenade_molotov_coctail 		0.3}
				{firing_grenade_smoke 		0.3}
				{firing_grenade_type73 		0.3}
				{firing_grenade_type86p 		0.3}
				{firing_grenade_of37_grenade 		0.3}
				{firing_grenade_rgz89 		0.3}

				{firing_knife_axe 		(* %optic 0.01)}
				{firing_knife_ballistic_knife 		(* %optic 0.01)}
				{firing_knife_knife_army 		(* %optic 0.01)}
				{firing_knife_knife_bowie 		(* %optic 0.01)}
				{firing_knife_knife_ger 		(* %optic 0.01)}
				{firing_knife_knife_japan 		(* %optic 0.01)}
				{firing_knife_knife_old 		(* %optic 0.01)}
				{firing_knife_knife_rus 		(* %optic 0.01)}
				{firing_knife_knife_union 		(* %optic 0.01)}
				{firing_knife_knife1 		(* %optic 0.01)}
				{firing_knife_rambo_knife 		(* %optic 0.01)}
				{firing_knife_cn 		(* %optic 0.01)}

				{crawl (* %human_ir (* %optic 0.75))}
                {cover (* %human_ir (* %optic 0.6))}
            }
            {cover (* %human_ir (* %optic 0.7))
				{squat (* %human_ir (* %optic 0.68))
					{sniper (* %human_ir (* %optic 0.35))}
					{stealth (* %human_ir (* %optic 0.25))}
				}
                {crawl (* %human_ir (* %optic 0.5))
                    {sniper (* %human_ir (* %optic 0.34))}
                    {stealth (* %human_ir (* %optic 0.25))}
                }
				{sniper (* %human_ir (* %optic 0.4))}
                {stealth (* %human_ir (* %optic 0.2))}
            }
            {squat (* %human_ir (* %optic 0.62))
			    {sniper (* %human_ir (* %optic 0.5))}
                {stealth (* %human_ir (* %optic 0.3))}
			}
            {crawl (* %human_ir (* %optic 0.55))
                {still (* %human_ir (* %optic 0.55))
                    {sniper (* %human_ir (* %optic 0.35))}
                    {stealth (* %human_ir (* %optic 0.2))}
                }
                {sniper (* %human_ir (* %optic 0.4))}
                {stealth (* %human_ir (* %optic 0.25))}
            }
            {still (* %human_ir (* %optic 0.75))
				{stealth (* %human_ir (* %optic 0.25))}
				{sniper (* %human_ir (* %optic 0.65))}
			}
            {visible (* %human_ir (* %optic 0.76))
			    {sniper (* %human_ir (* %optic 0.68))}
                {stealth (* %human_ir (* %optic 0.4))}
			}
			{stealth (* %human_ir (* %optic 0.4))}
			{sniper (* %human_ir (* %optic 0.65))}
        }
)
(define "cannon_in_IR_and_optic_spectre"
        {cannon_01 (* %optic 0.65)						;heavy mgun, infantry mortar
            {firing (* %firing_ir (* %optic 1.1))}
            {visible (* %optic 0.65)}
            {still (* %optic 0.65)}
        }
        {cannon_01a (* %optic 0.5)					;small ATGMs Metis-type
            {firing (* %firing_ir (* %optic 0.55))}
            {visible (* %optic 0.5)}
            {still (* %optic 0.5)}
        }
        {cannon_02 (* %optic 0.6)    					;medium ATGMs tow-type
            {firing (* %firing_ir (* %optic 0.65))}
            {visible (* %optic 0.6) }
            {still (* %optic 0.6) }
        }
        {cannon_03 (* %optic 0.9)						;Heavy ATGMs, Zu-23
            {firing (* %firing_ir (* %optic 1.0))}
            {visible (* %optic 0.9)}
            {still (* %optic 0.9)}
        }
        {cannon_04 (* %optic 1.2)						;122mm howizers, towed art
            {firing (* %firing_ir (* %optic 1.5))}
            {visible (* %optic 1.25)}
            {still (* %optic 1.25)}
        }
        {cannon_05 (* %optic 1.3)						;155 howitzer, detection radars
            {firing (* %firing_ir (* %optic 1.5))}
            {visible (* %optic 1.4)}
            {still (* %optic 1.4)}
        }
)
(define "ground_veh_in_IR_and_optic_spectre"
        {vehicle_00 (* %moving_ir (* %optic 0.787))			;moto, jeep
            {firing (* %firing_ir (* %optic 1.05))}
            {visible (* %optic 1.15)}
            {still (* %optic 0.7)}
		}
        {vehicle_01 (* %moving_ir (* %optic 0.875))			;moto, jeep
            {firing (* %firing_ir (* %optic 1.25))}
            {visible (* %optic 1.35)}
            {still (* %optic 0.8)}
		}
        {vehicle_02 (* %moving_ir (* %optic 1.14))			;light armoredcars
            {firing (* %firing_ir (* %optic 1.55))}
            {visible (* %optic 1.55)}
            {still (* %optic 1.05)}
		}
        {vehicle_03 (* %moving_ir (* %optic 1.4))			;light SPA, armoredcars, trucks
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.75)}
            {still (* %optic 1.375)}
        }
        {vehicle_04 (* %moving_ir (* %optic 1.5))			;light tanks
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 1.85)}
            {still (* %optic 1.512)}
        }
        {vehicle_04_spa (* %moving_ir (* %optic 1.5))		;middle SPA
            {firing (* %firing_ir (* %optic 2.2))}
            {visible (* %optic 2.0)}
            {still (* %optic 1.512)}
        }
        {vehicle_05 (* %moving_ir (* %optic 1.75))			;middle tanks
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 2.25)}
            {still (* %optic 1.65)}
        }
        {vehicle_06 (* %moving_ir (* %optic 1.75))			;heavy tanks
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 2.0)}
            {still (* %optic 1.66)}
        }
        {vehicle_07 (* %moving_ir (* %optic 2.0))			;rocket artillery
            {firing (* %firing_ir (* %optic 2.12))}
            {visible (* %optic 2.05)}
            {still (* %optic 1.75)}
        }
)
(define "aviation_in_IR_and_optic_spectre"
        {stealth_plane (* %optic 1.57)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.65)}
            {still (* %optic 1.5)}
        }
        {small_UAV (* %optic 0.3)}
        {UAV (* %optic 1.3)
            {firing (* %firing_ir (* %optic 1.4))}
            {visible (* %optic 1.4)}
            {still (* %optic 1.3)}
        }
        {helicopter (* %optic 1.57)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.65)}
            {still (* %optic 1.5)}
        }
        {plane_01 (* %optic 1.57)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.65)}
            {still (* %optic 1.5)}
        }
)
;(define "marine_in_IR_and_optic_spectre"       {bigship (* %optic 2.62)} {submarine (* %optic 1.5)})
(define "human_invisible"
        {human 0
            {firing 0}
            {cover 0}
            {squat 0}
            {crawl 0}
            {still 0}
            {visible 0}
        }
)
(define "human_doppler_radar"
        {human 1
            {cover 0}
            {squat 0.77 {still 0}}
            {crawl 0.77 {still 0} {visible 0.78}}
            {still 0}
            {visible 1.01}
        }
)
(define "ground_veh_invisible"
        {cannon_01 0}
        {cannon_01a 0}
        {cannon_02 0}
        {cannon_03 0}
        {cannon_04 0}
        {cannon_05 0}
        {vehicle_00 0}
        {vehicle_01 0}
        {vehicle_02 0}
        {vehicle_03 0}
        {vehicle_04 0}
        {vehicle_04_spa 0}
        {vehicle_05 0}
		{vehicle_06 0}
        {vehicle_07 0}
)
(define "aviation_invisible"
        {stealth_plane  0}
        {small_UAV  0}
        {UAV  0}
        ;{plane  0}
        {plane_01  0}
        {helicopter  0}
)
(define "cannon_in_rad_spectre"
        {cannon_01 (* %radar 1)  {still (* %stand_radar (* %radar 1))}}
        {cannon_01a (* %radar 1)  {still (* %stand_radar (* %radar 1))}}
        {cannon_02 (* %radar 1.1)  {still (* %stand_radar (* %radar 1))}}
        {cannon_03 (* %radar 1.2)  {still (* %stand_radar (* %radar 1))}}
        {cannon_04 (* %radar 1.3)  {still (* %stand_radar (* %radar 1))}}
        {cannon_05 (* %radar 1.4)  {still (* %stand_radar (* %radar 1))}}
)
(define "ground_veh_in_rad_spectre"
        {vehicle_00 (* %radar 1.1)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_01 (* %radar 1.3)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_02 (* %radar 1.7)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_03 (* %radar 1.9)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_04 (* %radar 2)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_04_spa (* %radar 2.1)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_05 (* %radar 2.2)  {still (* %stand_radar (* %radar 1))}}
	{vehicle_06 (* %radar 2.3)  {still (* %stand_radar (* %radar 1))}}
        {vehicle_07 (* %radar 2.4)  {still (* %stand_radar (* %radar 1))}}
)
;stealth has EPR 0.5m2, common plane has 15 m2
(define "stealth_plane_in_rad_spectre_short"	;0-50km, base 25 - 190m instead of 300
        {stealth_plane  (* %radar 2.7)            {still (* %stand_radar (* %radar 1))}}
)
(define "stealth_plane_in_rad_spectre"	;50+km base 100 - 330m instead of 380
        {stealth_plane  (* %radar 3.7)            {still (* %stand_radar (* %radar 1))}}
)
(define "small_UAV_in_rad_spectre"
        {small_UAV  (* %radar 3.0)            {still (* %stand_radar (* %radar 1.4))}}
)
(define "aviation_in_rad_spectre"
        {UAV  (* %radar 3.5)            {still (* %stand_radar (* %radar 1.4))}}
        {plane_01  (* %radar 4.3) {still (* %stand_radar 1.8)}}
        {helicopter  (* %radar 3.5) {still (* %stand_radar 2)}}
)
;(define "marine_in_rad_spectre"       {bigship (* %radar 2.5)}{submarine (* %radar 1.0)})

(define "missile_visible" {missile 0} {impactor 0} {targetable_missile 0} {targetable_impactor 0})
(define "proj_point_invisible" {proj_point 0}{antirad_point 0}{large_antirad_point 0})
;(define "goh_missile_visible" {fake_target 25}  {missile_aim_point 20})
(define "goh_missile_visible" {fake_target 20})
(define "vision_radar_shipSAM"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
       ("aviation_in_rad_spectre" radar(1) stand_radar(1))
       ;("marine_in_rad_spectre" radar(1) stand_radar(1))
		{missile 0} {targetable_missile 8}
		{impactor 0} {targetable_impactor 3.6}
        {proj_point 10}
		{antirad_point 9}
		{large_antirad_point 15}
    }
    {mods {stand 1}}
)
(define "vision_radar_X_band_small"
    {rules
        ("human_invisible")
        ("cannon_in_rad_spectre" radar(2) stand_radar(1))
        ("ground_veh_in_rad_spectre" radar(2) stand_radar(1))
        ("stealth_plane_in_rad_spectre" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(2) stand_radar(1))
        {missile 0} {targetable_missile 5}
		{impactor 0} {targetable_impactor 3.6}
        {proj_point 0}
		{antirad_point 4}
		{large_antirad_point 5}
    }
    {mods {stand 1}}
)

(define "vision_radar_X_band"
    {rules
        ("human_invisible")
        ("cannon_in_rad_spectre" radar(1) stand_radar(1))
        ("ground_veh_in_rad_spectre" radar(1) stand_radar(1))
        ("stealth_plane_in_rad_spectre" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0} {targetable_missile 5}
		{impactor 0} {targetable_impactor 3.6}
        {proj_point 0}
		{antirad_point 4}
		{large_antirad_point 5}
    }
    {mods {stand 1}}
)

(define "vision_radar_short"
    {rules
        ("human_invisible")
        ("cannon_in_rad_spectre" radar(1) stand_radar(1))
        ("ground_veh_in_rad_spectre" radar(1) stand_radar(1))
        ("stealth_plane_in_rad_spectre_short" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0} {targetable_missile 5}
		{impactor 0} {targetable_impactor 2.75}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar"
    {rules
        ("human_invisible")
        ("cannon_in_rad_spectre" radar(1) stand_radar(1))
        ("ground_veh_in_rad_spectre" radar(1) stand_radar(1))
        ("stealth_plane_in_rad_spectre" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0} {targetable_missile 5}
		{impactor 0} {targetable_impactor 2.75}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_ground"
    ("radius" r(41.25))
    {rules
        ("human_invisible")
        ("cannon_in_rad_spectre" radar(2) stand_radar(1))
        ("ground_veh_in_rad_spectre" radar(2) stand_radar(1))
        ("stealth_plane_in_rad_spectre_short" radar(1) stand_radar(1))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(2) stand_radar(1))
        {missile 0} {targetable_missile 0}
		{impactor 0} {targetable_impactor 0}
        {proj_point 0}
 		{antirad_point 0}
		{large_antirad_point 0}
   }
    {mods {stand 1}}
)

(define "vision_radar_air"
    ("radius" r(41.25))
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre_short" radar(1) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(0.001))
        ("aviation_in_rad_spectre" radar(1) stand_radar(0.001))
        {missile 0} {targetable_missile 4}
		{impactor 0} {targetable_impactor 3.38}
        {proj_point 0}
        ;{bigship 0.001}
        ;{submarine 0.001}
		{antirad_point 3}
		{large_antirad_point 6}
    }
    {mods {stand 1}}
)
(define "vision_radar_doppler_gr"
    {rules
		("human_doppler_radar")
        ("cannon_in_rad_spectre" radar(0.8) stand_radar(0.001))
        ("ground_veh_in_rad_spectre" radar(0.6) stand_radar(0.001))
        ("stealth_plane_in_rad_spectre_short" radar(0.001) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(0.001) stand_radar(0.001))
        ("aviation_in_rad_spectre" radar(0.001) stand_radar(0.001))
        ("marine_in_rad_spectre" radar(0.6) stand_radar(0.001))
        {missile 0.001} {targetable_missile 0}
		{impactor 0.001} {targetable_impactor 0.001}
        {proj_point 0.001}
 		{antirad_point 0.001}
		{large_antirad_point 0.001}
   }
    {mods {stand 1}}
)
(define "vision_pelengator"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre" radar(1) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(0.001))
        ("aviation_in_rad_spectre" radar(1) stand_radar(0.001))
        {missile 0.001} {targetable_missile 0.001}
		{impactor 0.001} {targetable_impactor 0.001}
        {proj_point 0.001}
        ;{bigship 0.001}
       ; {submarine 0.001}
		{antirad_point 3}
		{large_antirad_point 6}
    }
    {mods {stand 1}}
)
(define "vision_radar_L_band"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre" radar(2.5) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(0.001) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(0.001))
        {missile 0.001} {targetable_missile 0.001}
		{impactor 0.001} {targetable_impactor 0.001}
        ;{bigship 0.001}
       ; {submarine 0.001}
        {proj_point 0.001}
 		{antirad_point 0.001}
		{large_antirad_point 0.001}
    }
    {mods {stand 1}}
)
(define "vision_targradar_L_band"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre" radar(2.5) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(0.001) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(0.001))
        ("marine_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0.001} {targetable_missile 3.5}
		{impactor 0.001} {targetable_impactor 2}
        {proj_point 0.001}
		{antirad_point 4}
		{large_antirad_point 5}
    }
    {mods {stand 1}}
)
(define "vision_radar_Hawkeye"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("stealth_plane_in_rad_spectre" radar(2.5) stand_radar(0.001))
        ("small_UAV_in_rad_spectre" radar(0.001) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(0.001))
        {missile 0.001} {targetable_missile 4}
		{impactor 0.001} {targetable_impactor 3.38}
        {proj_point 0.001}
        ;{bigship 4}
        ;{submarine 1}
		{antirad_point 3}
		{large_antirad_point 6}
    }
    {mods {stand 1}}
)
(define "vision_shtora"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
		("aviation_invisible")
        {missile 1} {targetable_missile 1}
		{impactor 1} {targetable_impactor 1}
        ;{bigship 0.001}
        ;{submarine 0.001}
        {proj_point 0.001}
		{antirad_point 0.001}
		{large_antirad_point 0.001}
    }
    {mods {stand 1}}
)
;===============================================================
(define "vision_new_optic_human_cannon"
        ("human_in_IR_and_optic_spectre" optic(1) human_ir(1) firing_ir(1))
        ("cannon_in_IR_and_optic_spectre" optic(1) human_ir(1) firing_ir(1))

)
(define "vision_new_optic_vehicle"
        ("ground_veh_in_IR_and_optic_spectre" optic(1) moving_ir(1) firing_ir(1))
        ("aviation_in_IR_and_optic_spectre" optic(1) moving_ir(1) firing_ir(1))
       ; ("marine_in_IR_and_optic_spectre" optic(1))
        ("missile_visible")
        ("proj_point_invisible")
)
(define "vision_new_optic_IR_human_cannon"
        ("human_in_IR_and_optic_spectre" optic(1.5) human_ir(1.15) firing_ir(1.33))
        ("cannon_in_IR_and_optic_spectre" optic(1) human_ir(1.15) firing_ir(1.33))

)
(define "vision_new_optic_IR_vehicle"
        ("ground_veh_in_IR_and_optic_spectre" optic(1) moving_ir(1.15) firing_ir(1.33))
        ("aviation_in_IR_and_optic_spectre" optic(1) moving_ir(1.15) firing_ir(1.33))
        ;("marine_in_IR_and_optic_spectre" optic(1))
        ("missile_visible")
        ("proj_point_invisible")
)
(define "vision_optic_modern_1gen"
    ("radius" r(79))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
)

(define "vision_optic_modern_2gen"
    ("radius" r(95))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_modern_1gen_air"
    ("radius" r(85))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_modern_3gen"
    ("radius" r(105))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_4gen"
    ("radius" r(150))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_modern_and_IR_1gen"
    ("radius" r(79))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_2gen"
    ("radius" r(95))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_3gen"
    ("radius" r(105))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_4gen"
    ("radius" r(150))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods
        {stand 1}
    }
)

(define "vision_missile"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
	("aviation_invisible")
        {missile 0} {targetable_missile 0}
	{impactor 0} {targetable_impactor 0}
        ;{bigship 0.001}
       ; {submarine 0.001}
        {proj_point 1}
	{antirad_point 0}
	{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_antirad"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
		("aviation_invisible")
        {missile 0.001} {targetable_missile 0.001}
		{impactor 0.001} {targetable_impactor 0.001}
        ;{bigship 0.001}
       ; {submarine 0.001}
        {proj_point 0.001}
		{antirad_point 1}
		{large_antirad_point 2}
    }
    {mods {stand 1}}
)
(define "vision_antimissile"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
		("aviation_invisible")
        {missile 0} {targetable_missile 1}
		{impactor 0} {targetable_impactor 1}
       ; {bigship 0.001}
        ;{submarine 0.001}
        {proj_point 1}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_antiship_missile"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
		("aviation_invisible")
        {missile 0.001} {targetable_missile 0.001}
		{impactor 0.001} {targetable_impactor 0.001}
        ;{bigship 3}
        ;{submarine 0.001}
        {proj_point 1}
		{antirad_point 0.001}
		{large_antirad_point 0.001}
    }
    {mods {stand 1}}
)
(define "vision_largeantiship_missile"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
		("aviation_invisible")
        {missile 0.001} {targetable_missile 0.001}
		{impactor 0.001} {targetable_impactor 0.001}
        ;{bigship 3}
        ;{submarine 0.001}
        {proj_point 0.001}
		{antirad_point 0.001}
		{large_antirad_point 0.001}
    }
    {mods {stand 1}}
)
;=======================================================
(define "eyes"
    {rules
		("vision_new_optic_human_cannon_ground")
		("vision_new_optic_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "eyes_IR"
    {rules
		("vision_new_optic_IR_human_cannon")
		("vision_new_optic_IR_vehicle")
    }
    {mods
        {stand 1}
    }
)
(define "vision_human"
    ("radius" r(75))
	("eyes" firing_ir(1))
)
(define "vision_human_IR"
    ("radius" r(85))
	("eyes_IR" firing_ir(1.15))
)

(define "vision_driver"
    ("radius" r(50))
	("eyes" firing_ir(1))
)
(define "vision_driver_IR"
    ("radius" r(50))
	("eyes_IR" firing_ir(1.15))
)

(define "vision_binocular"
    ("radius" r(90))
	("eyes" firing_ir(1))
)

(define "vision_mgunner"
    ("radius" r(80))
 	("eyes" firing_ir(1))
)


(define "vision_officer"
    ("radius" r(85))
	("eyes" firing_ir(1.15))

)
(define "vision_elite_officer"
    ("radius" r(95))
	("eyes" firing_ir(1.15))

)


(define "vision_stealth"
    ("radius" r(90))
	("eyes" firing_ir(1.15))
)

(define "vision_sniper"
    ("radius" r(90))
	("eyes" firing_ir(1.15))
)

(define "vision_optic"
    ("radius" r(100))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
)

(define "vision_optic_driver"
    ("radius" r(55))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
)

(define "vision_tgunner"
    ("radius" r(100))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
)



(define "vision_tankman"
	("radius" r(70))
	("eyes" firing_ir(1))
)

(define "glass"
		("radius" r(%0))
		("eyes" firing_ir(1))
;        {rules
;        }
)

(define "human_stand"
    ("radius" r(100))
	("eyes" firing_ir(1))
)

(define "driver_stand"
    ("radius" r(50))
	("eyes" firing_ir(1))
)


(define "vision_optic_unc"
    ("radius" r(100))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
)


(define "vision_turret"
    ("radius" r(70))
	("eyes" firing_ir(1))
)

{"cover-detector"
	{uncover 5}
	{h_fov 60}
	{v_fov 120}
	("vision_optic" args 70)
}



{"searchlight"
	("vision_optic" args 60)
	{h_fov 30}
	{v_fov 90}
}

{"watchtower"
    ("vision_optic" args 50)
	{h_fov 90}
	{v_fov 90}
}

;{"marine_main"
;    ("vision_optic" args 70)
;	{h_fov 50}
;	{v_fov 120}
;}

;= MAP HELPER ====================================

;-----------------------------Acoustic------------
(define "sensor_acoustic"
    {rules
        {human 0.001
            {firing 1
				{firing_silent_pb 		0.001}
				{firing_silent_pm_sil 		0.001}
				{firing_silent_rus_las_designator 		0.001}
				{firing_silent_rus_radar 		0.001}
				{firing_silent_usa_las_designator 		0.001}
				{firing_silent_usa_radar 		0.001}
				{firing_silent_sr25 		0.001}
				{firing_silent_svu 		0.001}
				{firing_silent_svu_2		0.001}
				{firing_silent_vintorez 		0.001}
				{firing_silent_abakan_1 		0.001}
				{firing_silent_abakan_scope		0.001}
				{firing_silent_aek_973_2 		0.001}
				{firing_silent_aek_973_4 		0.001}
				{firing_silent_ak74spec_1 		0.001}
				{firing_silent_ak74sps 		0.001}
				{firing_silent_ak74us 		0.001}
				{firing_silent_ak107_2 		0.001}
				{firing_silent_ak107_3 		0.001}
				{firing_silent_aks74_4 		0.001}
				{firing_silent_aks74u_1 		0.001}
				{firing_silent_aks74u_2			0.001}
				{firing_silent_aks74u_3			0.001}
				{firing_silent_aks74u_4			0.001}
				{firing_silent_akval			0.001}
				{firing_silent_akval_1			0.001}
				{firing_silent_bizon			0.001}
				{firing_silent_cz_scorpion_evo3_1a			0.001}
				{firing_silent_groza_2			0.001}
				{firing_silent_groza_3			0.001}
				{firing_silent_hk416A5_Silenced			0.001}
				{firing_silent_m4a1_sd_aimpoint			0.001}
				{firing_silent_m4a1_sd_aimpoint_tactical			0.001}
				{firing_silent_mp5sd			0.001}

				{firing_grenade_f1 		0.001}
				{firing_grenade_rgn 		0.001}
				{firing_grenade_rgo 		0.001}
				{firing_grenade_m61 		0.001}
				{firing_grenade_m67 		0.001}
				{firing_grenade_rgd 		0.001}
				{firing_grenade_rkg3 		0.001}
				{firing_grenade_molotov_coctail 		0.001}
				{firing_grenade_smoke 		0.001}

				{firing_knife_axe 		0.001}
				{firing_knife_ballistic_knife 		0.001}
				{firing_knife_knife_army 		0.001}
				{firing_knife_knife_bowie 		0.001}
				{firing_knife_knife_ger 		0.001}
				{firing_knife_knife_japan 		0.001}
				{firing_knife_knife_old 		0.001}
				{firing_knife_knife_rus 		0.001}
				{firing_knife_knife_union 		0.001}
				{firing_knife_knife1 		0.001}
				{firing_knife_rambo_knife 		0.001}
            }
        }
        {cannon_01 0.001					;heavy mgun, infantry mortar
            {firing 1.2}
        }
        {cannon_01a 0.001					;small ATGMs Metis-type
            {firing 0.8}
        }
        {cannon_02 0.001    				;medium ATGMs tow-type
            {firing 0.8}
        }
        {cannon_03 0.001					;Heavy ATGMs, Zu-23
            {firing 1.0}
        }
        {cannon_04 0.001					;122mm howizers, towed art
            {firing 1.4}
        }
        {cannon_05 0.001					;155 howitzer, detection radars
            {firing 1.6}
        }
        {vehicle_00 0.001			;moto, jeep
            {firing 1.0}
		}
        {vehicle_01 0.001			;moto, jeep
            {firing 1.0}
		}
        {vehicle_02 0.001			;light armoredcars
            {firing 1.2}
		}
        {vehicle_03 0.001			;light SPA, armoredcars, trucks
            {firing 1.3}
        }
        {vehicle_04 0.001			;light tanks
            {firing 1.3}
        }
        {vehicle_04_spa 0.001		;middle SPA
            {firing 1.5}
        }
        {vehicle_05 0.001			;middle tanks
            {firing 1.6}
        }
        {vehicle_06 0.001			;heavy tanks
            {firing 1.7}
        }
        {vehicle_07 0.001			;rocket artillery
            {firing 1.4}
        }
		{stealth_plane 0.001
			{firing 1.2}
        }
        {small_UAV 0.001
			{firing 1.2}
		}
        {UAV 0.001
			{firing 0.8}
        }
        {helicopter 0.001
			{firing 1.2}
        }
        {plane_01 0.001
			{firing 1.2}
        }
        ;{bigship 1 {firing 1.2} {still 0.6}}
        ;{submarine 1 {firing 1.2} {still 0.6}}
        {missile 0.001} {impactor 0.001}
		{targetable_missile 0.001}
		{targetable_impactor 0.001}
        ("proj_point_invisible")
    }
)
;(define "sensor_ship_sonar"
 ;   {rules
 ;       ("human_invisible")
 ;       ("ground_veh_invisible")
;		("aviation_invisible")
 ;       {missile 0.001} {targetable_missile 0.001}
;		{impactor 0.001} {targetable_impactor 0.001}
 ;       {bigship 1.5 {firing 1.2} {still 1}}
;        {submarine 1 {firing 1.5} {still 0.6}}
 ;       ("proj_point_invisible")
;    }
;)