; CX40K: Code-X vehicle macro registry required by modern vehicle extenders.
; The effective SC Platform vehicle.ext omits several Code-X macro families.
; Keep this file supplemental: only compatibility macros belong here.

(define "components_tank"
	{component "body"
		{RepairTime (* %repair 100)}
		{tags "mover" "noDestroyedView"}
	}
	{component "tank_crit_component" {RepairTime (* %repair 5)} {tags "repair_lev3" "repair_lev2"}}
	{component "transmission" {RepairTime (* %repair 10)} {RepairOrder 2} {tags "repair_lev2"}}
	{component "autoloader" {RepairTime (* %repair 5)} {tags "repair_lev3" "repair_lev2"}}
	{component "mgun" {RepairTime (* %repair 7)}}
	{component "mgun1" {RepairTime (* %repair 7)}}
	{component "mgun2" {RepairTime (* %repair 7)}}
	{component "mgun3" {RepairTime (* %repair 7)}}
	{component "mgun4" {RepairTime (* %repair 7)}}
	{component "mgun5" {RepairTime (* %repair 7)}}
	{component "mgun6" {RepairTime (* %repair 7)}}
	{component "mgun20" {RepairTime (* %repair 7)}}
	{component "mgun21" {RepairTime (* %repair 7)}}
	{component "turret_ring" {RepairTime (* %repair 10)} {RepairOrder 4} {tags "repair_lev3" "repair_lev2"}}
	{component "panel_engine_connector" {RepairTime (* %repair 10)} {tags "repair_lev3" "repair_lev2"}}
	{component "turret_move_engine" {RepairTime (* %repair 5)} {RepairOrder 2} {tags "repair_lev3" "repair_lev2"}}
	{component "stabilizer" {RepairTime (* %repair 5)} {tags "repair_lev3" "repair_lev2"}}
	{component "gunner_panel" {RepairTime (* %repair 5)} {tags "repair_lev2"}}
	{component "APU" {RepairTime (* %repair 7)} {RepairOrder 3} {tags "repair_lev2"}}
	{component "driver_triplex" {RepairTime (* %repair 5)} {RepairOrder 3}}
	{component "commander_triplex" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex1" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex2" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex3" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex4" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "additional_triplex5" {RepairTime (* %repair 5)} {RepairOrder 3} {tags "repair_lev3" "repair_lev2"}}
	{component "ammo_storage_main" {RepairTime (* %repair 5)} {tags "explosive"}}
	{component "ammo_storage_autocannon" {RepairTime (* %repair 5)} {tags "explosive"}}
	{component "ammo_storage_mgun" {RepairTime (* %repair 5)} {tags "explosive"}}
	{component "fuel_tank_internal_a" {tags "fuel_tank_internal" "explosive"} {RepairTime (* %repair 3)} {RepairOrder 3}}
	{component "fuel_tank_internal_b" {tags "fuel_tank_internal" "explosive"} {RepairTime (* %repair 3)} {RepairOrder 3}}
	{component "fuel_tank_internal_c" {tags "fuel_tank_internal" "explosive"} {RepairTime (* %repair 3)} {RepairOrder 3}}
	{component "fuel_tank_internal_d" {tags "fuel_tank_internal" "explosive"} {RepairTime (* %repair 3)} {RepairOrder 3}}
	{component "fuel_tank_external_a" {tags "fuel_tank_external" "explosive"} {RepairTime (* %repair 2)} {RepairOrder 3}}
	{component "fuel_tank_external_b" {tags "fuel_tank_external" "explosive"} {RepairTime (* %repair 2)} {RepairOrder 3}}
	{component "fuel_tank_external_c" {tags "fuel_tank_external" "explosive"} {RepairTime (* %repair 2)} {RepairOrder 3}}
	{component "fuel_tank_external_d" {tags "fuel_tank_external" "explosive"} {RepairTime (* %repair 2)} {RepairOrder 3}}
	{component "gun1" {RepairTime (* %repair 5)}}
	{component "gun2" {RepairTime (* %repair 7)}}
	{component "gun3" {RepairTime (* %repair 7)}}
	{component "power_indicator"}
	{component "engine" {RepairTime (* %repair 5)} {tags "repair_lev2"}}
	{component "turret" {RepairTime (* %repair 5)} {tags "repair_lev3" "repair_lev2"}}
	{component "gun" {RepairTime (* %repair 5)}}
	{component "trackleft" {RepairTime (* %repair 5)}}
	{component "trackright" {RepairTime (* %repair 5)}}
)

(define "comp_armor_increment"
	{volume "comp_armor_body" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_body"}}
	{volume "comp_armor_body1" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_body"}}
	{volume "comp_armor_body2" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_body"}}
	{volume "comp_armor_turret" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{volume "comp_armor_turret1" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{volume "comp_armor_turret2" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{volume "comp_armor_turret3" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{volume "comp_armor_turret4" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{volume "comp_armor_turret5" {tags "comp_armor"} {able clear {NoWoundDecal}} {component "comp_armor_turret"}}
	{armor
		{setting "comp_armor_body"
			{thickness %body}
			{volumes "comp_armor_body*"}
		}
		{setting "comp_armor_turret"
			{thickness %turret}
			{volumes "comp_armor_turret*"}
		}
	}
)

(define "armor_turret_ring"
	{armor
		{setting "%volume"
			{thickness %thickness}
			{volumes "%volume*"}
		}
	}
)

; Code-X turret-speed family.
(define "turr_speed"
	{bone "turret"
		{speed (* %deg_per_s 0.000355)}
	}
)

(define "gun_speed"
	{bone "gun_rot"
		{speed (* %deg_per_s 0.000355)}
	}
)

; Code-X CWPS3 missile aim-point family. Defining the shared constructor and
; its size aliases together prevents one-define-at-a-time failures.
(define "missile_aimpoint_custom"
	{extension "/properties/animation/vehicle/proj_point_anm.ext"}
	{bone "basis"
		{bone "cwps3_place1"
			{Matrix34
				1 0 0
				0 1 0
				0 0 1
				(* 20 %front) (* 20 %side) (* 20 %height)
			}
			{bone "cwps3_place"}
		}
	}
	{Placer
		{place "cwps_proj_point"
			{entity "cwps3_proj_point"}
			{Linkbone "cwps3_place"}
			{handlebone "Basis"}
			{obstacle disable}
		}
	}
)

(define "missile_aimpoint_tanksize"
	("missile_aimpoint_custom" height(0.8) front(0) side(0))
	{props "cwps3_fixmarker6"}
)

(define "missile_aimpoint_wieselsize"
	("missile_aimpoint_custom" height(0.4) front(0) side(0))
	{props "cwps3_fixmarker3"}
)

(define "missile_aimpoint_stansize")

(define "missile_aimpoint_boatsize"
	("missile_aimpoint_custom" height(0.25) front(0) side(0))
)

(define "missile_aimpoint_trucksize"
	("missile_aimpoint_custom" height(1.0) front(0) side(0))
	{props "cwps3_fixmarker5"}
)

(define "missile_aimpoint_air"
	("missile_aimpoint_custom" height(0) front(0) side(0))
	{props "cwps3_fixmarker6"}
)
