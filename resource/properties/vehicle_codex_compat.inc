; CX40K: Code-X vehicle macro registry required by modern vehicle extenders.
; Source: Code-X resource/properties/vehicle.ext, blob
; 82d71e9f64ebb82de7092ed4b7dffb144d9ed1e3.

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

; Narrow bridge for Code-X vehicle extenders that assign an explicit ring thickness.
(define "armor_turret_ring"
	{armor
		{setting "%volume"
			{thickness %thickness}
			{volumes "%volume*"}
		}
	}
)
