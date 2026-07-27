

;/*=========== add by ordos Begin ===========*/
{"kaz"
	(define "kaz_shot"
		volume "kaz_hitzone_%0"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{tags add "kaz_shot_ordos_debug!!kaz_hitzone_%0"}
		{bullet_detonate}
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		;{spawn "tank_cannon_fire" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
		else volume "kaz_hitzone_%0a"
		{spawn "cw_cumulative_frestrict" {delay 0.1 {delete}}}
		{bullet_detonate}
		{spawn "ex_air_sm" "kaz_%0"}
		{spawn "startsmoke_cali" "kaz_shot_a_%0" x}
		{spawn "ex_air_norm" "kaz_shot_b_%0" x}
		{spawn "bazooka_shot" "kaz_shot_b_%0" x}
		{bone hide "kaz_%0"}
		{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
		{volumes "kaz_hitzone_%0" disable bullet contact}
		{volumes "kaz_hitzone_%0a" disable bullet contact}
		{volumes "kaz_%0" enable touch}
		{volumes "kaz_hitzone_%0" enable touch}
		{tags add "kaz_%0_empty"}
	)
		(define "kaz_destroyed"
			volume "kaz_%0"
			{spawn "ex_air_norm"}
			{blastwave c4 0.5 r0 0.3 r1 0.4}
			{bone hide "kaz_%0"}
			{volumes "kaz_%0" disable contact bullet blast contact_ground visible select}
			{volumes "kaz_hitzone_%0" disable bullet contact}
			{volumes "kaz_%0" enable touch}
			{volumes "kaz_hitzone_%0" enable touch}
			{tags add "kaz_%0_empty"}
			{components "kaz%0" break}
		)
		{on "kaz_turn_on"
				{tags add "kaz_working"}
				{tags add "kaz_turn_on_ordos_debug111"}
			{if operatable
				{if not tagged "no_power"
					{call "kaz_enable"}
				}
			}
		}
		{on "kaz_enable"
			(define "kaz_single_turn_on"
				{if work "kaz%0" {if not tagged "kaz_%0_empty" {volumes "kaz_hitzone_%0" enable bullet contact}}}
			)
			{if work "kaz_radar"
				("kaz_single_turn_on" args 01)
				("kaz_single_turn_on" args 02)
				("kaz_single_turn_on" args 03)
				("kaz_single_turn_on" args 04)
				("kaz_single_turn_on" args 05)
				("kaz_single_turn_on" args 06)
				("kaz_single_turn_on" args 07)
				("kaz_single_turn_on" args 08)
				("kaz_single_turn_on" args 09)
				("kaz_single_turn_on" args 10)
				("kaz_single_turn_on" args 11)
				("kaz_single_turn_on" args 12)
				("kaz_single_turn_on" args 13)
				("kaz_single_turn_on" args 14)
				("kaz_single_turn_on" args 15)
				("kaz_single_turn_on" args 16)
				("kaz_single_turn_on" args 17)
				("kaz_single_turn_on" args 18)
				("kaz_single_turn_on" args 19)
				("kaz_single_turn_on" args 20)
				("kaz_single_turn_on" args 21)
				("kaz_single_turn_on" args 22)
				("kaz_single_turn_on" args 23)
				("kaz_single_turn_on" args 24)
				("kaz_single_turn_on" args 25)
				("kaz_single_turn_on" args 26)
				("kaz_single_turn_on" args 27)
				("kaz_single_turn_on" args 28)
				("kaz_single_turn_on" args 29)
			}
		}
			(define "kaz_single_turn_off"
				{volumes "kaz_hitzone_%0" disable bullet contact blast visible obstacle select}
				{volumes "kaz_hitzone_%0a" disable bullet contact blast visible obstacle select touch}
			)
			(define "kaz_turn_off"
				{if not "kaz_reloading"
					{tags remove "kaz_working"}
				}
				("kaz_single_turn_off" args 01)
				("kaz_single_turn_off" args 02)
				("kaz_single_turn_off" args 03)
				("kaz_single_turn_off" args 04)
				("kaz_single_turn_off" args 05)
				("kaz_single_turn_off" args 06)
				("kaz_single_turn_off" args 07)
				("kaz_single_turn_off" args 08)
				("kaz_single_turn_off" args 09)
				("kaz_single_turn_off" args 10)
				("kaz_single_turn_off" args 11)
				("kaz_single_turn_off" args 12)
				("kaz_single_turn_off" args 13)
				("kaz_single_turn_off" args 14)
				("kaz_single_turn_off" args 15)
				("kaz_single_turn_off" args 16)
				("kaz_single_turn_off" args 17)
				("kaz_single_turn_off" args 18)
				("kaz_single_turn_off" args 19)
				("kaz_single_turn_off" args 20)
				("kaz_single_turn_off" args 21)
				("kaz_single_turn_off" args 22)
				("kaz_single_turn_off" args 23)
				("kaz_single_turn_off" args 24)
				("kaz_single_turn_off" args 25)
				("kaz_single_turn_off" args 26)
				("kaz_single_turn_off" args 27)
				("kaz_single_turn_off" args 28)
				("kaz_single_turn_off" args 29)
			)
			{on spawn
				("kaz_turn_off")
				{delay 0.1 ("kaz_turn_off")}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				{tags remove "kaz_blocked"}
			}
			{on "kaz_work"
				{if not tagged "kaz_blocked"
					{kill_delay "kaz_delay"}
					{if not "kaz_reloading"
						{call "kaz_turn_on"}

					else {delay 0.2 "kaz_reloading"  {set "kaz_reloading" 0} {call "kaz_turn_on"}}
					}
					{if stuff "proj_pointer"
						{delay 9 "kaz_delay"
							{kill_delay "kaz_contact"}
							{kill_delay "kaz_reloading"}
							("kaz_turn_off")
						}
					else
						{delay 3 "kaz_delay"
							{kill_delay "kaz_contact"}
							{kill_delay "kaz_reloading"}
							("kaz_turn_off")
						}
					}
				}
			}
			(define "kaz_shoot"
				{tags add "kaz_shoot_ordos_debug!!!!!!!"}
				{if ("kaz_shot" args 01)
				else ("kaz_shot" args 02)
				else ("kaz_shot" args 03)
				else ("kaz_shot" args 04)
				else ("kaz_shot" args 05)
				else ("kaz_shot" args 06)
				else ("kaz_shot" args 07)
				else ("kaz_shot" args 08)
				else ("kaz_shot" args 09)
				else ("kaz_shot" args 10)
				else ("kaz_shot" args 11)
				else ("kaz_shot" args 12)
				else ("kaz_shot" args 13)
				else ("kaz_shot" args 14)
				else ("kaz_shot" args 15)
				else ("kaz_shot" args 16)
				else ("kaz_shot" args 17)
				else ("kaz_shot" args 18)
				else ("kaz_shot" args 19)
				else ("kaz_shot" args 20)
				else ("kaz_shot" args 21)
				else ("kaz_shot" args 22)
				else ("kaz_shot" args 23)
				else ("kaz_shot" args 24)
				else ("kaz_shot" args 25)
				else ("kaz_shot" args 26)
				else ("kaz_shot" args 27)
				else ("kaz_shot" args 28)
				else ("kaz_shot" args 29)
				}
				{set "kaz_reloading" 1}
				("kaz_turn_off")
				{tags add "kaz_reloading"}
				{delay 0.2 {call "kaz_work"}
				{set "kaz_reloading" 0}
				{tags remove "kaz_reloading"}
				}
			)
			{on break
				{if component "kaz_radar"
					{spawn "tank_die_particle"}
					{tags add "kaz_radar_damaged"}
					{if not tagged "destroyed"
						{damage_report "kaz_radar" "component/kaz_radar_damaged"}
					}
					else  component "kaz_radar1"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar1_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar1" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar2"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar2_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar2" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar3"
						{spawn "tank_die_particle"}
						{tags add "kaz_radar3_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar3" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar4"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar4_damaged"}
						{if not tagged "destroyed"
							{damage_report "kaz_radar4" "component/kaz_radar_damaged"}
						}
						else  component "kaz_radar5"
							{spawn "tank_die_particle"}
							{tags add "kaz_radar5_damaged"}
							{if not tagged "destroyed"
								{damage_report "kaz_radar5" "component/kaz_radar_damaged"}
							}
						else component "kaz01"
						else component "kaz02"
						else component "kaz03"
						else component "kaz04"
						else component "kaz05"
						else component "kaz06"
						else component "kaz07"
						else component "kaz08"
						else component "kaz09"
						else component "kaz10"
						else component "kaz11"
						else component "kaz12"
						else component "kaz13"
						else component "kaz14"
						else component "kaz15"
						else component "kaz16"
						else component "kaz17"
						else component "kaz18"
						else component "kaz19"
						else component "kaz20"
						else component "kaz21"
						else component "kaz22"
						else component "kaz23"
						else component "kaz24"
						else component "kaz25"
						else component "kaz26"
						else component "kaz27"
						else component "kaz28"
						else component "kaz29"
					}
			}
				{on repair
					(define "repair_kaz")
					{if component "kaz_radar"
						{damage_report "kaz_radar" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar_damaged"}
					else component "kaz_radar1"
						{damage_report "kaz_radar1" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar1_damaged"}
					else component "kaz_radar2"
						{damage_report "kaz_radar2" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar2_damaged"}
					else component "kaz_radar3"
						{damage_report "kaz_radar3" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar3_damaged"}
					else component "kaz_radar4"
						{damage_report "kaz_radar4" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar4_damaged"}
					else component "kaz_radar5"
						{damage_report "kaz_radar5" "component/armored/kaz_radar_repaired"}
						{tags remove "kaz_radar5_damaged"}
					else component "kaz01"
						("repair_kaz" args 01)
					else component "kaz02"
						("repair_kaz" args 02)
					else component "kaz03"
						("repair_kaz" args 03)
					else component "kaz04"
						("repair_kaz" args 04)
					else component "kaz05"
						("repair_kaz" args 05)
					else component "kaz06"
						("repair_kaz" args 06)
					else component "kaz07"
						("repair_kaz" args 07)
					else component "kaz08"
						("repair_kaz" args 08)
					else component "kaz09"
						("repair_kaz" args 09)
					else component "kaz10"
						("repair_kaz" args 10)
					else component "kaz11"
						("repair_kaz" args 11)
					else component "kaz12"
						("repair_kaz" args 12)
					else component "kaz13"
						("repair_kaz" args 13)
					else component "kaz14"
						("repair_kaz" args 14)
					else component "kaz15"
						("repair_kaz" args 15)
					else component "kaz16"
						("repair_kaz" args 16)
					else component "kaz17"
						("repair_kaz" args 17)
					else component "kaz18"
						("repair_kaz" args 18)
					else component "kaz19"
						("repair_kaz" args 19)
					else component "kaz20"
						("repair_kaz" args 20)
					else component "kaz21"
						("repair_kaz" args 21)
					else component "kaz22"
						("repair_kaz" args 22)
					else component "kaz23"
						("repair_kaz" args 23)
					else component "kaz24"
						("repair_kaz" args 24)
					else component "kaz25"
						("repair_kaz" args 25)
					else component "kaz26"
						("repair_kaz" args 26)
					else component "kaz27"
						("repair_kaz" args 27)
					else component "kaz28"
						("repair_kaz" args 28)
					else component "kaz29"
						("repair_kaz" args 29)
					}
				}
					{on pierce
						{if component "kaz_radar"
							{components "kaz_radar" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar1"
							{components "kaz_radar1" break}
							{burn fx "smoke_dead_tank2" fake}
						else  component "kaz_radar2"
							{components "kaz_radar2" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar3"
							{components "kaz_radar3" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar4"
							{components "kaz_radar4" break}
							{burn fx "smoke_dead_tank2" fake}
							else  component "kaz_radar5"
							{components "kaz_radar5" break}
							{burn fx "smoke_dead_tank2" fake}
							}
							{if ("kaz_destroyed" args 01)
							else ("kaz_destroyed" args 02)
							else ("kaz_destroyed" args 03)
							else ("kaz_destroyed" args 04)
							else ("kaz_destroyed" args 05)
							else ("kaz_destroyed" args 06)
							else ("kaz_destroyed" args 07)
							else ("kaz_destroyed" args 08)
							else ("kaz_destroyed" args 09)
							else ("kaz_destroyed" args 10)
							else ("kaz_destroyed" args 11)
							else ("kaz_destroyed" args 12)
							else ("kaz_destroyed" args 13)
							else ("kaz_destroyed" args 14)
							else ("kaz_destroyed" args 15)
							else ("kaz_destroyed" args 16)
							else ("kaz_destroyed" args 17)
							else ("kaz_destroyed" args 18)
							else ("kaz_destroyed" args 19)
							else ("kaz_destroyed" args 20)
							else ("kaz_destroyed" args 21)
							else ("kaz_destroyed" args 22)
							else ("kaz_destroyed" args 23)
							else ("kaz_destroyed" args 24)
							else ("kaz_destroyed" args 25)
							else ("kaz_destroyed" args 26)
							else ("kaz_destroyed" args 27)
							else ("kaz_destroyed" args 28)
							else ("kaz_destroyed" args 29)
							}
							}
							{on "kaz_shell_hit"

								{if stuff "low_speed"

									{if not stuff "proj_pointer"
										{call "kaz_work_on_rpg"}
									}
								}
								{if stuff "proj_pointer"
									{tags add "kaz_work_on_ptur!!!ordos_debug222"}

									{call "kaz_work_on_ptur"}
								}
							}
							{on bullet_hit

							{call "kaz_shell_hit"}
							}
							{on "kaz_work_on_rpg"
								{tags add "kaz_work_on_rpg!!!ordos_debug111"}
								("kaz_shoot")
							}
							{on "kaz_work_on_ptur" {call "kaz_work"}}
							{on "kaz_work_on_shell"}
							{on "other_kaz_contact"
								{if volume "kaz_hitzone"
									{if tagged "kaz_working"
										("kaz_turn_off")
										{kill_delay "kaz_contact"}
										{delay 0.5 "kaz_contact"
											{tags add "kaz_contact_ordos_debug111"}
											{call "kaz_turn_on"}
										}
									}
								}
								{if tagged "kaz_working"
									{delay 9 "kaz_delay"
									{kill_delay "kaz_contact"}
									("kaz_turn_off")
									}
								}
							}
							{on contact sync

								{if effector "proj_dummy"

									{if volume "kaz_hitzone"
										("kaz_shoot")
										{tags add "kaz_shield_contact!!proj_dummy!_ordos_debug222"}
										{with_effector {call "destroyed_by_kaz"}}
									else	{with_effector {call "detonate"}}
									}
								else effector "cw_cumassist_spawner" {tags add "cw_cumassist_spawner!_ordos_debug111"}
								else effector "cw_cumulative_assistor" {tags add "cw_cumulative_assistor!_ordos_debug111"}
								else effector "cw_fgassist_spawner" 	{tags add "cw_fgassist_spawner!_ordos_debug111"}
								else effector "cw_fg_assistor" 	      {tags add "cw_fg_assistor!_ordos_debug111"}
								else effector "cw_apcrassist_spawner" 	{tags add "cw_apcrassist_spawner!_ordos_debug111"}
								else effector "cw_apcr_assistor" 	{tags add "cw_apcr_assistor!_ordos_debug111"}
								else
									{call "other_kaz_contact"}
								}
							}
							{on "kaz_reload"
							(define "kaz_reload_single"
							tagged "kaz_%0_empty"
							{delay 0.1
							{volumes "kaz_%0" disable touch}
							{volumes "kaz_hitzone_%0" disable touch}
							{tags remove "kaz_%0_empty"}
							{volumes "kaz_%0" enable contact bullet blast contact_ground visible select}
							{bone show "kaz_%0"}
							}
							)
							{if ("kaz_reload_single" args 01)
							else ("kaz_reload_single" args 02)
							else ("kaz_reload_single" args 03)
							else ("kaz_reload_single" args 04)
							else ("kaz_reload_single" args 05)
							else ("kaz_reload_single" args 06)
							else ("kaz_reload_single" args 07)
							else ("kaz_reload_single" args 08)
							else ("kaz_reload_single" args 09)
							else ("kaz_reload_single" args 10)
							else ("kaz_reload_single" args 11)
							else ("kaz_reload_single" args 12)
							else ("kaz_reload_single" args 13)
							else ("kaz_reload_single" args 14)
							else ("kaz_reload_single" args 15)
							else ("kaz_reload_single" args 16)
							else ("kaz_reload_single" args 17)
							else ("kaz_reload_single" args 18)
							else ("kaz_reload_single" args 19)
							else ("kaz_reload_single" args 20)
							else ("kaz_reload_single" args 21)
							else ("kaz_reload_single" args 22)
							else ("kaz_reload_single" args 23)
							else ("kaz_reload_single" args 24)
							else ("kaz_reload_single" args 25)
							else ("kaz_reload_single" args 26)
							}
							}
							}
	

 


{"kaz kaz_drozd"
	{on "kaz_enable" overload
		{tags add "kaz_enable_ordos_debug!!!"}
		(define "kaz_single_turn_on"
			{if work "kaz%0" {if not tagged "kaz_%0_empty" {volumes "kaz_hitzone_%0" enable bullet contact} }}
		)
		{if work "kaz_radar"
			{if work "kaz_radar1"
				("kaz_single_turn_on" args 01)
				("kaz_single_turn_on" args 02)
				("kaz_single_turn_on" args 03)
				("kaz_single_turn_on" args 04)
			}
			{if work "kaz_radar2"
				("kaz_single_turn_on" args 05)
				("kaz_single_turn_on" args 06)
				("kaz_single_turn_on" args 07)
				("kaz_single_turn_on" args 08)
			}
		}
	}
}





;/*=========== add by ordos End ===========*/