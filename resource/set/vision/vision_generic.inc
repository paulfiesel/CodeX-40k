;= START =====================================
;new visors
;\xd1\xee\xe2\xf0. \xee\xef\xf2. \xf1\xe8\xf1\xf2\xe5\xec\xfb \xee\xe1\xeb\xe0\xe4\xe0\xfe\xf2 \xe1\xce\xeb\xfc\xf8\xe8\xec \xf3\xe2\xe5\xeb\xe8\xf7\xe5\xed\xe8\xe5\xec (\xf7\xe0\xf1\xf2\xee \xef\xe5\xf0\xe5\xec\xe5\xed\xed\xfb\xec). \xd7\xe0\xf1\xf2\xee \xee\xf1\xed\xe0\xf9\xe5\xed\xfb \xf2\xe5\xef\xeb\xee\xe2\xe8\xe7\xee\xf0\xee\xec \xe8\xeb\xe8 \xf1\xe8\xf1\xf2. \xef\xee\xe2\xfb\xf8. \xea\xee\xed\xf2\xf0\xe0\xf1\xf2\xe0.
;\xe4\xeb\xff \xe3\xe5\xe9\xec\xef\xeb\xe5\xff \xfd\xf2\xee \xee\xe7\xed, \xf7\xf2\xee \xe1\xe5\xe7 \xf3\xf9\xe5\xf0\xe1\xe0 \xf8\xe8\xf0\xe8\xed\xe5 \xef\xee\xeb\xff \xe7\xf0\xe5\xed\xe8\xff \xed\xe5\xec\xed\xee\xe3\xee (\xe8\xe7-\xe7\xe0 \xe1\xe0\xeb\xe0\xed\xf1\xe0) \xf3\xe2\xe5\xeb\xe8\xf7 \xee\xe1\xf9\xe0\xff \xe4\xe0\xeb\xfc\xed\xee. \xee\xe1\xed\xe0\xf0, \xe8 \xef\xee\xe1\xee\xeb\xfc\xf8\xe5 -
;- \xeb\xfe\xe4\xe5\xe9. \xc2\xe8\xe7\xee\xf0\xfb \xf1 \xf2\xe5\xef\xeb\xee\xe2\xe8\xe7\xee\xf0\xee\xec - \xe2\xfb\xf1\xee\xea\xee\xe5 uncover, \xe4\xe0\xeb\xfc\xf8\xe5 \xe7\xe0\xec\xe5\xf7\xe0\xfe\xf2 \xf1\xf2\xf0\xe5\xeb\xff\xfe\xf9\xe8\xf5, \xe8 \xf2. \xe4. \xcd\xee \xe2\xf1\xf2\xf0\xe5\xf7\xe0\xfe\xf2\xf1\xff \xf0\xe5\xe4\xea\xee., \xef\xee \xef\xf0\xe8\xf7\xe8\xed\xe5 \xf6\xe5\xed\xfb.
;============================================

;    ("radius" r(90))
;    {rules
;    }
(include "new_vision.inc")
(define "human_in_IR_and_optic_spectre"
        {human (* %human_ir (* %optic 0.75))
            {firing (* %human_ir (* %optic 1))}
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
			    {sniper (* %human_ir (* %optic 0.45))}
                {stealth (* %human_ir (* %optic 0.35))}
                {still (* %human_ir (* %optic 0.55))
				    {sniper (* %human_ir (* %optic 0.35))}
                    {stealth (* %human_ir (* %optic 0.28))}
                }
            }
            {crawl (* %human_ir (* %optic 0.45))
                {sniper (* %human_ir (* %optic 0.34))}
                {stealth (* %human_ir (* %optic 0.25))}
                {still (* %human_ir (* %optic 0.38))
				    {sniper (* %human_ir (* %optic 0.30))}
                    {stealth (* %human_ir (* %optic 0.23))}
                }
            }
            {still (* %human_ir (* %optic 0.75))
				{sniper (* %human_ir (* %optic 0.55))}
                {stealth (* %human_ir (* %optic 0.48))}
            }
            {visible (* %human_ir (* %optic 0.85))}
        }
)
(define "cannon_in_IR_and_optic_spectre"
        {cannon_01 (* %optic 0.6)
            {firing (* %firing_ir (* %optic 1.1))}
            {visible (* %optic 0.65)}
            {still (* %optic 0.5)}
        }
        {cannon_01a (* %optic 0.45)
            {firing (* %firing_ir (* %optic 0.55))}
            {visible (* %optic 0.5)}
            {still (* %optic 0.4)}
        }
        {cannon_02 (* %optic 0.55)
            {firing (* %firing_ir (* %optic 0.65))}
            {visible (* %optic 0.6) }
            {still (* %optic 0.5)}
        }
        {cannon_03 (* %optic 0.85)
            {firing (* %firing_ir (* %optic 1.0))}
            {visible (* %optic 0.9)}
            {still (* %optic 0.75)}
        }
        {cannon_04 (* %optic 1.15)
            {firing (* %firing_ir (* %optic 1.5))}
            {visible (* %optic 1.25)}
            {still (* %optic 1.0)}
        }
        {cannon_05 (* %optic 1.3)
            {firing (* %firing_ir (* %optic 1.5))}
            {visible (* %optic 1.4)}
            {still (* %optic 1.15)}
        }
)
(define "ground_veh_in_IR_and_optic_spectre"
        {vehicle_00 (* %optic 1.0)
            {firing (* %firing_ir (* %optic 1.05))}
            {visible (* %optic 1.15)}
            {still (* %optic 0.85)}
        }
        {vehicle_01 (* %optic 1.15)
            {firing (* %firing_ir (* %optic 1.25))}
            {visible (* %optic 1.35)}
            {still (* %optic 1.0)}
        }
        {vehicle_02 (* %optic 1.35)
            {firing (* %firing_ir (* %optic 1.55))}
            {visible (* %optic 1.55)}
            {still (* %optic 1.15)}
        }
        {vehicle_03 (* %optic 1.55)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.75)}
            {still (* %optic 1.35)}
        }
        {vehicle_04 (* %optic 1.65)
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 1.85)}
            {still (* %optic 1.45)}
        }
        {vehicle_04_spa (* %optic 1.8)
            {firing (* %firing_ir (* %optic 2.2))}
            {visible (* %optic 2.0)}
            {still (* %optic 1.6)}
        }
        {vehicle_05 (* %optic 2.0)
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 2.25)}
            {still (* %optic 1.8)}
        }
        {vehicle_06 (* %optic 1.8)
            {firing (* %firing_ir (* %optic 2.0))}
            {visible (* %optic 2.0)}
            {still (* %optic 1.6)}
        }
        {vehicle_07 (* %optic 1.85)
            {firing (* %firing_ir (* %optic 2.12))}
            {visible (* %optic 2.05)}
            {still (* %optic 1.65)}
        }
)
(define "aviation_in_IR_and_optic_spectre"
        {stealth_plane (* %optic 1.65)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.65)}
            {still (* %optic 1.5)}
        }
        {small_UAV (* %optic 0.3)}
        {UAV (* %optic 1.3)
            {firing (* %firing_ir (* %optic 1.4))}
            {visible (* %optic 1.4)}
            {still (* %optic 1.2)}
        }
        {plane_01 (* %optic 1.65)
            {firing (* %firing_ir (* %optic 1.75))}
            {visible (* %optic 1.65)}
            {still (* %optic 1.5)}
        }
        {helicopter (* %optic 1.65)
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
        {cannon_01a (* %radar 0.5)  {still (* %stand_radar (* %radar 0.5))}}
        {cannon_02 (* %radar 0.65)  {still (* %stand_radar (* %radar 0.65))}}
        {cannon_03 (* %radar 1.4)  {still (* %stand_radar (* %radar 1.4))}}
        {cannon_04 (* %radar 2.3)  {still (* %stand_radar (* %radar 2.3))}}
        {cannon_05 (* %radar 2.9)  {still (* %stand_radar (* %radar 2.9))}}
)
(define "ground_veh_in_rad_spectre"
        {vehicle_00 (* %radar 0.8) {still (* %stand_radar (* %radar 0.8))}}
        {vehicle_01 (* %radar 1.2) {still (* %stand_radar (* %radar 1.2))}}
        {vehicle_02 (* %radar 1.5) {still (* %stand_radar (* %radar 1.5))}}
        {vehicle_03 (* %radar 2.4) {still (* %stand_radar (* %radar 2.4))}}
        {vehicle_04 (* %radar 2.7) {still (* %stand_radar (* %radar 2.7))}}
        {vehicle_04_spa (* %radar 2.9) {still (* %stand_radar (* %radar 2.9))}}
        {vehicle_05 (* %radar 3.3) {still (* %stand_radar (* %radar 3.3))}}
        {vehicle_06 (* %radar 3.7) {still (* %stand_radar (* %radar 3.7))}}
        {vehicle_07 (* %radar 4.1) {still (* %stand_radar (* %radar 4.1))}}
)
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
(define "vision_radar_SAM"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
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
(define "vision_radar_SAM_ground"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(2) stand_radar(1))
        {missile 0} {targetable_missile 8}
		{impactor 0} {targetable_impactor 4.6}
        {proj_point 0}
		{antirad_point 6}
		{large_antirad_point 7}
    }
    {mods {stand 1}}
)
(define "vision_radar_anti_air_mgun"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0} {targetable_missile 0}
        {impactor 0} {targetable_impactor 0}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_gun"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("small_UAV_in_rad_spectre" radar(1) stand_radar(1))
        ("aviation_in_rad_spectre" radar(1) stand_radar(1))
        ;("marine_in_rad_spectre" radar(1) stand_radar(1))
        {missile 0} {targetable_missile 0}
        {impactor 0} {targetable_impactor 0}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_aps"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 2}
        {impactor 0} {targetable_impactor 2}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipAPS"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 3}
        {impactor 0} {targetable_impactor 3}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipMGUN"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 3}
        {impactor 0} {targetable_impactor 3}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 6}
        {impactor 0} {targetable_impactor 6}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_medium"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 5}
        {impactor 0} {targetable_impactor 5}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_large"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 8}
        {impactor 0} {targetable_impactor 8}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_xlarge"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 10}
        {impactor 0} {targetable_impactor 10}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_xxlarge"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 12}
        {impactor 0} {targetable_impactor 12}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_super"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 15}
        {impactor 0} {targetable_impactor 15}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_ultra"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 20}
        {impactor 0} {targetable_impactor 20}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_extreme"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 25}
        {impactor 0} {targetable_impactor 25}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
(define "vision_radar_shipGUN_maximum"
    {rules
        ("human_invisible")
        ("ground_veh_invisible")
        ("aviation_invisible")
        {missile 0} {targetable_missile 30}
        {impactor 0} {targetable_impactor 30}
        {proj_point 0}
		{antirad_point 0}
		{large_antirad_point 0}
    }
    {mods {stand 1}}
)
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
    ("radius" r(85))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_1gen_air"
    ("radius" r(95))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_3gen"
    ("radius" r(95))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_4gen"
    ("radius" r(110))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_and_IR_1gen"
    ("radius" r(90))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_and_IR_2gen"
    ("radius" r(100))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_and_IR_3gen"
    ("radius" r(115))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods {stand 1}}
)
(define "vision_optic_modern_and_IR_4gen"
    ("radius" r(130))
    {rules
	("vision_new_optic_IR_human_cannon")
	("vision_new_optic_IR_vehicle")
    }
    {mods {stand 1}}
)



{"vision_none"
    ("radius" r(0))
    {rules
        {human 0}
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
        {stealth_plane 0}
        {small_UAV 0}
        {UAV 0}
        {plane_01 0}
        {helicopter 0}
        {missile 0}
        {targetable_missile 0}
        {impactor 0}
        {targetable_impactor 0}
        {proj_point 0}
        {antirad_point 0}
        {large_antirad_point 0}
    }
    {mods {stand 1}}
    {h_fov 0}
    {v_fov 0}
}

{"vision_optic_modern_1gen"
    ("vision_optic_modern_1gen")
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_2gen"
    ("vision_optic_modern_2gen")
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_1gen_air"
    ("vision_optic_modern_1gen_air")
    {h_fov 90}
    {v_fov 120}
}
{"vision_optic_modern_3gen"
    ("vision_optic_modern_3gen")
    {h_fov 90}
    {v_fov 120}
}
{"vision_optic_modern_4gen"
    ("vision_optic_modern_4gen")
    {h_fov 90}
    {v_fov 120}
}
{"vision_optic_modern_and_IR_1gen"
    ("vision_optic_modern_and_IR_1gen")
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_and_IR_2gen"
    ("vision_optic_modern_and_IR_2gen")
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_and_IR_3gen"
    ("vision_optic_modern_and_IR_3gen")
    {h_fov 90}
    {v_fov 120}
}
{"vision_optic_modern_and_IR_4gen"
    ("vision_optic_modern_and_IR_4gen")
    {h_fov 90}
    {v_fov 120}
}

{"vision_optic_modern_and_IR_1gen_human"
    ("radius" r(90))
    {rules
        ("human_in_IR_and_optic_spectre" optic(1.5) human_ir(1.15) firing_ir(1.33))
    }
    {mods {stand 1}}
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_and_IR_2gen_human"
    ("radius" r(100))
    {rules
        ("human_in_IR_and_optic_spectre" optic(1.5) human_ir(1.15) firing_ir(1.33))
    }
    {mods {stand 1}}
    {h_fov 90}
    {v_fov 110}
}
{"vision_optic_modern_and_IR_3gen_human"
    ("radius" r(115))
    {rules
        ("human_in_IR_and_optic_spectre" optic(1.5) human_ir(1.15) firing_ir(1.33))
    }
    {mods {stand 1}}
    {h_fov 90}
    {v_fov 120}
}
{"vision_optic_modern_and_IR_4gen_human"
    ("radius" r(130))
    {rules
        ("human_in_IR_and_optic_spectre" optic(1.5) human_ir(1.15) firing_ir(1.33))
    }
    {mods {stand 1}}
    {h_fov 90}
    {v_fov 120}
}

{"vision_radar_shipSAM"
    ("vision_radar_shipSAM")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_SAM"
    ("vision_radar_SAM")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_SAM_ground"
    ("vision_radar_SAM_ground")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_anti_air_mgun"
    ("vision_radar_anti_air_mgun")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_gun"
    ("vision_radar_gun")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_aps"
    ("vision_radar_aps")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipAPS"
    ("vision_radar_shipAPS")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipMGUN"
    ("vision_radar_shipMGUN")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN"
    ("vision_radar_shipGUN")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_medium"
    ("vision_radar_shipGUN_medium")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_large"
    ("vision_radar_shipGUN_large")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_xlarge"
    ("vision_radar_shipGUN_xlarge")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_xxlarge"
    ("vision_radar_shipGUN_xxlarge")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_super"
    ("vision_radar_shipGUN_super")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_ultra"
    ("vision_radar_shipGUN_ultra")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_extreme"
    ("vision_radar_shipGUN_extreme")
    {h_fov 180}
    {v_fov 180}
}
{"vision_radar_shipGUN_maximum"
    ("vision_radar_shipGUN_maximum")
    {h_fov 180}
    {v_fov 180}
}

{"vision_optic"
    ("radius" r(90))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
    {h_fov 90}
    {v_fov 110}
}

{"vision_optic_driver"
    ("radius" r(70))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
    {h_fov 60}
    {v_fov 90}
}

{"vision_optic_gunner"
    ("radius" r(95))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
    {h_fov 70}
    {v_fov 100}
}

{"vision_optic_commander"
    ("radius" r(105))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
    {h_fov 80}
    {v_fov 110}
}

{"vision_optic_unc"
    ("radius" r(85))
    {rules
	("vision_new_optic_human_cannon")
	("vision_new_optic_vehicle")
    }
    {mods {stand 1}}
    {h_fov 70}
    {v_fov 100}
}

{"vision_tank"
    ("vision_optic" args 70)
	{h_fov 60}
	{v_fov 90}
}

{"vision_cannon"
    ("vision_optic" args 60)
	{h_fov 50}
	{v_fov 80}
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
            {firing 1}
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
