(define "human_in_IR_and_optic_spectre_ground"
        {human (* %human_ir (* %optic 0.85))
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

				{firing_silencer_vss (* %human_ir (* %optic 0.1))}
				{firing_silencer_asval (* %human_ir (* %optic 0.1))}
				{firing_silencer_akmss (* %human_ir (* %optic 0.1))}
				{firing_silencer_m4a1s (* %human_ir (* %optic 0.1))}
				{firing_silencer_85smgs (* %human_ir (* %optic 0.1))}
				{firing_silencer_g3s (* %human_ir (* %optic 0.1))}

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
                {cover (* %human_ir (* %optic 0.75))}
            }
            {cover (* %human_ir (* %optic 0.75))
				{squat (* %human_ir (* %optic 0.7))
					{sniper (* %human_ir (* %optic 0.45))}
					{stealth (* %human_ir (* %optic 0.3))}
				}
                {crawl (* %human_ir (* %optic 0.55))
                    {sniper (* %human_ir (* %optic 0.4))}
                    {stealth (* %human_ir (* %optic 0.3))}
                }
				{sniper (* %human_ir (* %optic 0.5))}
                {stealth (* %human_ir (* %optic 0.3))}
            }
            {squat (* %human_ir (* %optic 0.75))
			    {sniper (* %human_ir (* %optic 0.55))}
                {stealth (* %human_ir (* %optic 0.35))}
			}
            {crawl (* %human_ir (* %optic 0.6))
                {still (* %human_ir (* %optic 0.6))
                    {sniper (* %human_ir (* %optic 0.4))}
                    {stealth (* %human_ir (* %optic 0.3))}
                }
                {sniper (* %human_ir (* %optic 0.4))}
                {stealth (* %human_ir (* %optic 0.3))}
            }
            {still (* %human_ir (* %optic 0.75))
				{stealth (* %human_ir (* %optic 0.3))}
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
(define "cannon_in_IR_and_optic_spectre_ground"
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
(define "ground_veh_in_IR_and_optic_spectre_ground"
        {vehicle_00 (* %moving_ir (* %optic 0.84))			;moto, jeep
            {firing (* %firing_ir (* %optic 1.08))}
            {visible (* %moving_ir (* %optic 1.08))}
            {still (* %moving_ir (* %optic 1.08))}
		}
        {vehicle_01 (* %moving_ir (* %optic 0.88))			;moto, jeep
            {firing (* %firing_ir (* %optic 1.08))}
            {visible (* %moving_ir (* %optic 1.08))}
            {still (* %moving_ir (* %optic 1.08))}
		}
        {vehicle_02 (* %moving_ir (* %optic 0.89))			;light armoredcars
            {firing (* %firing_ir (* %optic 1.08))}
            {visible (* %moving_ir (* %optic 1.08))}
            {still (* %moving_ir (* %optic 1.08))}
		}
        {vehicle_03 (* %moving_ir (* %optic 0.90))			;light SPA, armoredcars, trucks
            {firing (* %firing_ir (* %optic 1.08))}
            {visible (* %moving_ir (* %optic 1.08))}
            {still (* %moving_ir (* %optic 1.08))}
        }
        {vehicle_04 (* %moving_ir (* %optic 0.90))			;light tanks
            {firing (* %firing_ir (* %optic 1.08))}
            {visible (* %moving_ir (* %optic 1.08))}
            {still (* %moving_ir (* %optic 1.08))}
        }
        {vehicle_04_spa (* %moving_ir (* %optic 0.98))		;middle SPA
           {firing (* %firing_ir (* %optic 1.18))}
            {visible (* %moving_ir (* %optic 1.18))}
            {still (* %moving_ir (* %optic 1.18))}
        }
        {vehicle_05 (* %moving_ir (* %optic 1.08))			;middle tanks
            {firing (* %firing_ir (* %optic 1.218))}
            {visible (* %moving_ir (* %optic 1.28))}
            {still (* %moving_ir (* %optic 1.28))}
        }
        {vehicle_06 (* %moving_ir (* %optic 1.18))			;heavy tanks
            {firing (* %firing_ir (* %optic 1.38))}
            {visible (* %moving_ir (* %optic 1.38))}
            {still (* %moving_ir (* %optic 1.38))}
        }
        {vehicle_07 (* %moving_ir (* %optic 1.18))			;rocket artillery
            {firing (* %firing_ir (* %optic 1.38))}
            {visible (* %moving_ir (* %optic 1.38))}
            {still (* %moving_ir (* %optic 1.38))}
        }
)



(define "vision_new_optic_human_cannon_ground"
        ("human_in_IR_and_optic_spectre_ground" optic(1) human_ir(1) firing_ir(1))
        ("cannon_in_IR_and_optic_spectre_ground" optic(1) human_ir(1) firing_ir(1))

)
(define "vision_new_optic_vehicle_ground"
        ("ground_veh_in_IR_and_optic_spectre_ground" optic(1) moving_ir(1) firing_ir(1))
        ("aviation_in_IR_and_optic_spectre" optic(1) moving_ir(1) firing_ir(1))
        ;("marine_in_IR_and_optic_spectre" optic(1))
        ("missile_visible")
        ("proj_point_invisible")
		;("goh_missile_visible")
)
(define "vision_new_optic_IR_human_cannon_ground"
        ("human_in_IR_and_optic_spectre_ground" optic(1) human_ir(1.15) firing_ir(1.20))
        ("cannon_in_IR_and_optic_spectre_ground" optic(1) human_ir(1.15) firing_ir(1.20))

)
(define "vision_new_optic_IR_vehicle_ground"
        ("ground_veh_in_IR_and_optic_spectre_ground" optic(1) moving_ir(1.15) firing_ir(1.15))
        ("aviation_in_IR_and_optic_spectre" optic(1) moving_ir(1.20) firing_ir(1.20))
        ;("marine_in_IR_and_optic_spectre" optic(1))
        ("missile_visible")
        ("proj_point_invisible")
		;("goh_missile_visible")
)

;ground
(define "vision_optic_modern_1gen_ground"
    ("radius" r(85))
    {rules
	("vision_new_optic_human_cannon_ground")
	("vision_new_optic_vehicle_ground")
    }
    {mods {stand 1}}
)

(define "vision_optic_modern_2gen_ground"
    ("radius" r(95))
    {rules
	("vision_new_optic_human_cannon_ground")
	("vision_new_optic_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_3gen_ground"
    ("radius" r(105))
    {rules
	("vision_new_optic_human_cannon_ground")
	("vision_new_optic_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_4gen_ground"
    ("radius" r(115))
    {rules
	("vision_new_optic_human_cannon_ground")
	("vision_new_optic_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_modern_and_IR_1gen_ground"
    ("radius" r(85))
    {rules
	("vision_new_optic_IR_human_cannon_ground")
	("vision_new_optic_IR_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_2gen_ground"
    ("radius" r(95))
    {rules
	("vision_new_optic_IR_human_cannon_ground")
	("vision_new_optic_IR_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_3gen_ground"
    ("radius" r(105))
    {rules
	("vision_new_optic_IR_human_cannon_ground")
	("vision_new_optic_IR_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_modern_and_IR_3gen_ground_recon"
    ("radius" r(115))
    {rules
	("vision_new_optic_IR_human_cannon_ground")
	("vision_new_optic_IR_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_modern_and_IR_4gen_ground"
    ("radius" r(115))
    {rules
	("vision_new_optic_IR_human_cannon_ground")
	("vision_new_optic_IR_vehicle_ground")
    }
    {mods
        {stand 1}
    }
)