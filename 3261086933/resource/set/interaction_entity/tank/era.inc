

;/*=========== add by ordos Begin ===========*/

(define "cut_d_a_part"	            
 		{if component %0			
 			{delay_ex 0.11	                		
 				{tear "piece_medium_steel" bone %0	                			
 					{impulse up 2 1 dir 2 1}				
 				}			
 			}	           
 		}	
 )	

 (define "blast_d_a"		
 		{if component %0			
 			{spawn "ex_air_norm"}			
 				{blastwave c4 0.5 r0 0.3 r1 0.4}			
 					{components %0 break}		
 					{delay_ex 0.11 {bone cut %0}}		
 					

 			}
 		
 )

(define "DPS_Effect"			
	{	if rand %dps_apcr                        	                                        	
			("cut_d_a_part" args "d_a1")("cut_d_a_part" args "d_a2")("cut_d_a_part" args "d_a3")("cut_d_a_part" args "d_a4")("cut_d_a_part" args "d_a5")
			("cut_d_a_part" args "d_a6")("cut_d_a_part" args "d_a7")("cut_d_a_part" args "d_a8")("cut_d_a_part" args "d_a9")("cut_d_a_part" args "d_a10")
			("cut_d_a_part" args "d_a11")("cut_d_a_part" args "d_a12")("cut_d_a_part" args "d_a13")("cut_d_a_part" args "d_a14")("cut_d_a_part" args "d_a15")
			("cut_d_a_part" args "d_a16")("cut_d_a_part" args "d_a17")("cut_d_a_part" args "d_a18")("cut_d_a_part" args "d_a19")("cut_d_a_part" args "d_a20")
			("cut_d_a_part" args "d_a21")("cut_d_a_part" args "d_a22")("cut_d_a_part" args "d_a23")("cut_d_a_part" args "d_a24")("cut_d_a_part" args "d_a25")
			("cut_d_a_part" args "d_a26")("cut_d_a_part" args "d_a27")("cut_d_a_part" args "d_a28")("cut_d_a_part" args "d_a29")("cut_d_a_part" args "d_a30")
			("cut_d_a_part" args "d_a31")("cut_d_a_part" args "d_a32")("cut_d_a_part" args "d_a33")("cut_d_a_part" args "d_a34")("cut_d_a_part" args "d_a35")
			("cut_d_a_part" args "d_a36")("cut_d_a_part" args "d_a37")("cut_d_a_part" args "d_a38")("cut_d_a_part" args "d_a39")("cut_d_a_part" args "d_a40")
			("cut_d_a_part" args "d_a41")("cut_d_a_part" args "d_a42")("cut_d_a_part" args "d_a43")("cut_d_a_part" args "d_a44")("cut_d_a_part" args "d_a45")
			("cut_d_a_part" args "d_a46")("cut_d_a_part" args "d_a47")("cut_d_a_part" args "d_a48")("cut_d_a_part" args "d_a49")("cut_d_a_part" args "d_a50")
			("cut_d_a_part" args "d_a51")("cut_d_a_part" args "d_a52")("cut_d_a_part" args "d_a53")("cut_d_a_part" args "d_a54")("cut_d_a_part" args "d_a55")
			("cut_d_a_part" args "d_a56")("cut_d_a_part" args "d_a57")("cut_d_a_part" args "d_a58")("cut_d_a_part" args "d_a59")("cut_d_a_part" args "d_a60")
			("cut_d_a_part" args "d_a61")("cut_d_a_part" args "d_a62")("cut_d_a_part" args "d_a63")("cut_d_a_part" args "d_a64")("cut_d_a_part" args "d_a65")
			("cut_d_a_part" args "d_a66")("cut_d_a_part" args "d_a67")("cut_d_a_part" args "d_a68")("cut_d_a_part" args "d_a69")("cut_d_a_part" args "d_a70")
			("cut_d_a_part" args "d_a71")("cut_d_a_part" args "d_a72")("cut_d_a_part" args "d_a73")("cut_d_a_part" args "d_a74")("cut_d_a_part" args "d_a75")
			("cut_d_a_part" args "d_a76")("cut_d_a_part" args "d_a77")("cut_d_a_part" args "d_a78")("cut_d_a_part" args "d_a79")("cut_d_a_part" args "d_a80")
			("cut_d_a_part" args "d_a81")("cut_d_a_part" args "d_a82")("cut_d_a_part" args "d_a83")("cut_d_a_part" args "d_a84")("cut_d_a_part" args "d_a85")
			("cut_d_a_part" args "d_a86")("cut_d_a_part" args "d_a87")("cut_d_a_part" args "d_a88")("cut_d_a_part" args "d_a89")("cut_d_a_part" args "d_a90")
			("cut_d_a_part" args "d_a91")("cut_d_a_part" args "d_a92")("cut_d_a_part" args "d_a93")("cut_d_a_part" args "d_a94")("cut_d_a_part" args "d_a95")
			("cut_d_a_part" args "d_a96")("cut_d_a_part" args "d_a97")("cut_d_a_part" args "d_a98")("cut_d_a_part" args "d_a99")("cut_d_a_part" args "d_a100")
			("cut_d_a_part" args "d_a101")("cut_d_a_part" args "d_a102")("cut_d_a_part" args "d_a103")("cut_d_a_part" args "d_a104")("cut_d_a_part" args "d_a105")
			("cut_d_a_part" args "d_a106")("cut_d_a_part" args "d_a107")("cut_d_a_part" args "d_a108")("cut_d_a_part" args "d_a109")("cut_d_a_part" args "d_a110")
			("cut_d_a_part" args "d_a111")("cut_d_a_part" args "d_a112")("cut_d_a_part" args "d_a113")("cut_d_a_part" args "d_a114")("cut_d_a_part" args "d_a115")
			("cut_d_a_part" args "d_a116")("cut_d_a_part" args "d_a117")("cut_d_a_part" args "d_a118")("cut_d_a_part" args "d_a119")("cut_d_a_part" args "d_a120")
			("cut_d_a_part" args "d_a121")("cut_d_a_part" args "d_a122")("cut_d_a_part" args "d_a123")("cut_d_a_part" args "d_a124")("cut_d_a_part" args "d_a125")
			("cut_d_a_part" args "d_a126")("cut_d_a_part" args "d_a127")("cut_d_a_part" args "d_a128")("cut_d_a_part" args "d_a129")("cut_d_a_part" args "d_a130")
("cut_d_a_part" args "d_a130")
("cut_d_a_part" args "d_a131")
("cut_d_a_part" args "d_a132")
("cut_d_a_part" args "d_a133")
("cut_d_a_part" args "d_a134")
("cut_d_a_part" args "d_a135")
("cut_d_a_part" args "d_a136")
("cut_d_a_part" args "d_a137")
("cut_d_a_part" args "d_a138")
("cut_d_a_part" args "d_a139")
("cut_d_a_part" args "d_a140")
("cut_d_a_part" args "d_a141")
("cut_d_a_part" args "d_a142")
("cut_d_a_part" args "d_a143")
("cut_d_a_part" args "d_a144")
("cut_d_a_part" args "d_a145")
("cut_d_a_part" args "d_a146")
("cut_d_a_part" args "d_a147")
("cut_d_a_part" args "d_a148")
("cut_d_a_part" args "d_a149")
("cut_d_a_part" args "d_a150")
("cut_d_a_part" args "d_a151")
("cut_d_a_part" args "d_a152")
("cut_d_a_part" args "d_a153")
("cut_d_a_part" args "d_a154")
("cut_d_a_part" args "d_a155")
("cut_d_a_part" args "d_a156")
("cut_d_a_part" args "d_a157")
("cut_d_a_part" args "d_a158")
("cut_d_a_part" args "d_a159")
("cut_d_a_part" args "d_a160")
("cut_d_a_part" args "d_a161")
("cut_d_a_part" args "d_a162")
("cut_d_a_part" args "d_a163")
("cut_d_a_part" args "d_a164")
("cut_d_a_part" args "d_a165")
("cut_d_a_part" args "d_a166")
("cut_d_a_part" args "d_a167")
("cut_d_a_part" args "d_a168")
("cut_d_a_part" args "d_a169")
("cut_d_a_part" args "d_a170")			
			{damage_report "body" "component/era_pierced"}
			{tags add "ordos_debug_era_apcr"}
		else rand %dps_cm                                  	                                         	
			("blast_d_a" args "d_a1")("blast_d_a" args "d_a2")("blast_d_a" args "d_a3")("blast_d_a" args "d_a4")("blast_d_a" args "d_a5")	
			("blast_d_a" args "d_a6")("blast_d_a" args "d_a7")("blast_d_a" args "d_a8")("blast_d_a" args "d_a9")("blast_d_a" args "d_a10")	
			("blast_d_a" args "d_a11")("blast_d_a" args "d_a12")("blast_d_a" args "d_a13")("blast_d_a" args "d_a14")("blast_d_a" args "d_a15")	
			("blast_d_a" args "d_a16")("blast_d_a" args "d_a17")("blast_d_a" args "d_a18")("blast_d_a" args "d_a19")("blast_d_a" args "d_a20")
			("blast_d_a" args "d_a21")("blast_d_a" args "d_a22")("blast_d_a" args "d_a23")("blast_d_a" args "d_a24")("blast_d_a" args "d_a25")	
			("blast_d_a" args "d_a26")("blast_d_a" args "d_a27")("blast_d_a" args "d_a28")("blast_d_a" args "d_a29")("blast_d_a" args "d_a30")	
			("blast_d_a" args "d_a31")("blast_d_a" args "d_a32")("blast_d_a" args "d_a33")("blast_d_a" args "d_a34")("blast_d_a" args "d_a35")	
			("blast_d_a" args "d_a36")("blast_d_a" args "d_a37")("blast_d_a" args "d_a38")("blast_d_a" args "d_a39")("blast_d_a" args "d_a40")	
			("blast_d_a" args "d_a41")("blast_d_a" args "d_a42")("blast_d_a" args "d_a43")("blast_d_a" args "d_a44")("blast_d_a" args "d_a45")	
			("blast_d_a" args "d_a46")("blast_d_a" args "d_a47")("blast_d_a" args "d_a48")("blast_d_a" args "d_a49")("blast_d_a" args "d_a50")	
			("blast_d_a" args "d_a51")("blast_d_a" args "d_a52")("blast_d_a" args "d_a53")("blast_d_a" args "d_a54")("blast_d_a" args "d_a55")	
			("blast_d_a" args "d_a56")("blast_d_a" args "d_a57")("blast_d_a" args "d_a58")("blast_d_a" args "d_a59")("blast_d_a" args "d_a60")	
			("blast_d_a" args "d_a61")("blast_d_a" args "d_a62")("blast_d_a" args "d_a63")("blast_d_a" args "d_a64")("blast_d_a" args "d_a65")	
			("blast_d_a" args "d_a66")("blast_d_a" args "d_a67")("blast_d_a" args "d_a68")("blast_d_a" args "d_a69")("blast_d_a" args "d_a70")	
			("blast_d_a" args "d_a71")("blast_d_a" args "d_a72")("blast_d_a" args "d_a73")("blast_d_a" args "d_a74")("blast_d_a" args "d_a75")	
			("blast_d_a" args "d_a76")("blast_d_a" args "d_a77")("blast_d_a" args "d_a78")("blast_d_a" args "d_a79")("blast_d_a" args "d_a80")	
			("blast_d_a" args "d_a81")("blast_d_a" args "d_a82")("blast_d_a" args "d_a83")("blast_d_a" args "d_a84")("blast_d_a" args "d_a85")	
			("blast_d_a" args "d_a86")("blast_d_a" args "d_a87")("blast_d_a" args "d_a88")("blast_d_a" args "d_a89")("blast_d_a" args "d_a90")	
			("blast_d_a" args "d_a91")("blast_d_a" args "d_a92")("blast_d_a" args "d_a93")("blast_d_a" args "d_a94")("blast_d_a" args "d_a95")	
			("blast_d_a" args "d_a96")("blast_d_a" args "d_a97")("blast_d_a" args "d_a98")("blast_d_a" args "d_a99")("blast_d_a" args "d_a100")
			("blast_d_a" args "d_a101")("blast_d_a" args "d_a102")("blast_d_a" args "d_a103")("blast_d_a" args "d_a104")("blast_d_a" args "d_a105")
			("blast_d_a" args "d_a106")("blast_d_a" args "d_a107")("blast_d_a" args "d_a108")("blast_d_a" args "d_a109")("blast_d_a" args "d_a110")	
			("blast_d_a" args "d_a111")("blast_d_a" args "d_a112")("blast_d_a" args "d_a113")("blast_d_a" args "d_a114")("blast_d_a" args "d_a115")	
			("blast_d_a" args "d_a116")("blast_d_a" args "d_a117")("blast_d_a" args "d_a118")("blast_d_a" args "d_a119")("blast_d_a" args "d_a120")	
			("blast_d_a" args "d_a121")("blast_d_a" args "d_a122")("blast_d_a" args "d_a123")("blast_d_a" args "d_a124")("blast_d_a" args "d_a125")	
			("blast_d_a" args "d_a126")("blast_d_a" args "d_a127")("blast_d_a" args "d_a128")("blast_d_a" args "d_a129")("blast_d_a" args "d_a130")			
("blast_d_a" args "d_a130")
("blast_d_a" args "d_a131")
("blast_d_a" args "d_a132")
("blast_d_a" args "d_a133")
("blast_d_a" args "d_a134")
("blast_d_a" args "d_a135")
("blast_d_a" args "d_a136")
("blast_d_a" args "d_a137")
("blast_d_a" args "d_a138")
("blast_d_a" args "d_a139")
("blast_d_a" args "d_a140")
("blast_d_a" args "d_a141")
("blast_d_a" args "d_a142")
("blast_d_a" args "d_a143")
("blast_d_a" args "d_a144")
("blast_d_a" args "d_a145")
("blast_d_a" args "d_a146")
("blast_d_a" args "d_a147")
("blast_d_a" args "d_a148")
("blast_d_a" args "d_a149")
("blast_d_a" args "d_a150")
("blast_d_a" args "d_a151")
("blast_d_a" args "d_a152")
("blast_d_a" args "d_a153")
("blast_d_a" args "d_a154")
("blast_d_a" args "d_a155")
("blast_d_a" args "d_a156")
("blast_d_a" args "d_a157")
("blast_d_a" args "d_a158")
("blast_d_a" args "d_a159")
("blast_d_a" args "d_a160")
("blast_d_a" args "d_a161")
("blast_d_a" args "d_a162")
("blast_d_a" args "d_a163")
("blast_d_a" args "d_a164")
("blast_d_a" args "d_a165")
("blast_d_a" args "d_a166")
("blast_d_a" args "d_a167")
("blast_d_a" args "d_a168")
("blast_d_a" args "d_a169")
("blast_d_a" args "d_a170")			
			{damage_report "body" "component/era_pierced"}
			{tags add "ordos_debug_era_heat"}
			;{damage_report "body" "component/turret_broken"}
		 else rand %dps_ap                            		
	}		                                  
)

(define "blast_nera"
	{if component "nera%0"
		{delay_ex 0.11
			{tear "piece_medium_steel" bone "nera%0"
			{impulse up 2 1 dir 2 1}
			}
		}
	}
)


(define "damage_process_pierce_M" 					;// {on pierce} shell penetrates specific volume
		{if stuff "%staff"
		   {if not "pierced_processed"					;// check that process has not already run for the same event (prevents double damage for same projectile)
			{set "pierced_processed" 1}
			{if not component "body"
				{if not component "ammo"
				 {if not component "turret"
					{vehicle_health_damage_pierce}
				 }
				}
			}
			{if not component "shield"				;// prevents the pen FX from spawning when hitting shield components
				{if not material "wood"
					{if not volume "armor"
					   {if not stuff "proj_pointer"
						{if not tagged "pen_fx"						;// checks to ensure fx is not played more than once from the same shell / penetration
							{tags add "pen_fx"}
							{delay 0.05
								{tags remove "pen_fx"}
							}
							{burn fx "metal_hit_penetration_%pen_fx" time 1 fake}
							{if not stuff "auto"
							  {if not stuff "autocannon_small"
								{if stuff "shell"
									;{burn fx "smoke_after_pen" time 5 fake}
									{burn fx "hit_tank_armor_pierce_wind" fake}
								else stuff "rocketlauncher"
									;{burn fx "smoke_after_pen" time 5 fake}
									{burn fx "hit_tank_armor_pierce_wind" fake}
								}
							  }
							}
							{if component "body"
								{if not stuff "auto"
								  {if not stuff "autocannon_small"
									{if stuff "shell"
										{view start "smoke_after_pen_hatch"}
										{burn fx "hit_tank_armor_pierce_wind" fake}
										{delay 7 2
											{view pause "smoke_after_pen_hatch"}
										}
									else stuff "rocketlauncher"
										{view start "smoke_after_pen_hatch"}
										{burn fx "hit_tank_armor_pierce_wind" fake}
										{delay 7 2
											{view pause "smoke_after_pen_hatch"}
										}

									}
								  }
								}
							else component "turret"
								{if not stuff "auto"
								   {if not stuff "autocannon_small"
									{if stuff "shell"
										{view start "smoke_after_pen_hatch"}
										{burn fx "hit_tank_armor_pierce_wind" fake}
										{delay 7 2
											{view pause "smoke_after_pen_hatch"}
										}
									else stuff "rocketlauncher"
										{view start "smoke_after_pen_hatch"}
										{burn fx "hit_tank_armor_pierce_wind" fake}
										{delay 7 2
											{view pause "smoke_after_pen_hatch"}
										}

									}
								  }
								}
							}
							{start_sound "hit/steel/penetrate/%pen_sound"}
							{start_sound "hit/steel/penetrate/bkg/%pen_sound"}
						}
					   }
					}
				}
			}
			{if component "body"
				{if tagged "death_counter_start"
					{call "death_counter"}
				}
				{call "death_counter_check"}
				{if tagged "internal_fire"
					{burn fx "smoke_dead_tank1"}
				}
				{if material "wood"
					;// do nothing
				}

				{if operatable
					{if rand (* %kill_crew 0.8)		{call_synced "kill_driver"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner2"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner3"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner4"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner5"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_charger"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_charger2"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_charger3"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_charger4"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_commander"}}

						{if rand %crew_shock_chance
							{call_synced "crew_shot_chance"}
							{delay %crew_shock_time (* %crew_shock_time 0.15) "crew_shock_time"
								{call_synced "crew_revive"}
							}
							{delay (* %crew_shock_time 0.5) (* %crew_shock_time 0.07) "crew_shock_time"
								{call_synced "driver_revive"}
							}
						}
				}
				{if not tagged "destroyed"
					{damage_report "body" "component/armored/body_pierced"}	
				}
			   else component "ammo_storage_main"
				{damage_report "ammo_storage_main" "component/armored/ammo_storage_damaged"}
				{spawn "piece_ammorack" "Body"}			
				{tags add "ammo_rack_broken"}
				{spawn "metal_hit_bul"}	
				{if  explosive_amount 130
					{if rand 0.95 {components "ammo_storage_main" break}}	
				else  explosive_amount 100	
					{if rand 0.8 {components "ammo_storage_main" break}}	
				else  explosive_amount 50
					{if rand 0.65 {components "ammo_storage_main" break}}
				else  explosive_amount 30
					{if rand 0.50 {components "ammo_storage_main" break}}
				}
			   else component "ammo"
				{damage_report "ammo" "component/armored/ammo_storage_damaged"}	
				{spawn "piece_ammorack" "Body"}	
				{tags add "ammo_rack_broken"}
				{spawn "metal_hit_bul"}	
				{if  explosive_amount 130
					{if rand 0.95 {components "ammo" break}}	
				else  explosive_amount 100	
					{if rand 0.8 {components "ammo" break}}	
				else  explosive_amount 50
					{if rand 0.65 {components "ammo" break}}
				else  explosive_amount 30
					{if rand 0.50 {components "ammo" break}}
				}
			   else component "ammo_storage_autocannon"
				{damage_report "ammo_storage_autocannon" "component/armored/ammo_storage_damaged"}
				{spawn "piece_autocannon_ammo" "Body"}
				{tags add "ammo_storage_autocannon_break"}
				{spawn "metal_hit_bul"}
				{if rand 0.55
					{components "ammo_storage_autocannon" break}
				}
			  else  component "ammo_storage_mgun"
				{damage_report "ammo_storage_mgun" "component/armored/ammo_storage_damaged"}
				{tags add "ammo_storage_mgun_break"}
				{spawn "piece_mgun_ammo" "Body"}
				{spawn "metal_hit_bul"}
				{components "ammo_storage_mgun" break}
 			  else component "fuel_tank_internal_a"
 				{burn fx "smoke_dead_tank2" fake}
 				{if stuff "cm" 
 					{tags add "ordos_heat"}
 					{if rand 0.85 {components "fuel_tank_internal_a" break}}
 				else stuff "fg"
 					{tags add "ordos_fg"}
 					{if rand 0.8 {components "fuel_tank_internal_a" break}}
 				else stuff "ap"
 					{tags add "ordos_ap"}
 					{if rand 0.25 {components "fuel_tank_internal_a" break}}
 				else stuff "hv_ap"
 						{tags add "ordos_apds"}
 					{if rand 0.25 {components "fuel_tank_internal_a" break}}
 				else 
 					{if rand 0.5 {components "fuel_tank_internal_a" break}}
 				}
			 else component "fuel_tank_internal_b"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_internal_b" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_internal_b" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_internal_b" break}}
				else stuff "hv_ap"
					{if rand 0.25 {components "fuel_tank_internal_b" break}}
								
				else 
					{if rand 0.5 {components "fuel_tank_internal_b" break}}
				}
			 else component "fuel_tank_internal_c"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_internal_c" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_internal_c" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_internal_c" break}}
				else stuff "hv_ap"	
					{if rand 0.25 {components "fuel_tank_internal_c" break}}
				else 
					{if rand 0.5 {components "fuel_tank_internal_c" break}}
				}
			 else component "fuel_tank_internal_d"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_internal_d" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_internal_d" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_internal_d" break}}
				else stuff "hv_ap"
					{if rand 0.25 {components "fuel_tank_internal_d" break}}
				else 
					{if rand 0.5 {components "fuel_tank_internal_d" break}}
				}
 			 else component "fuel_tank_external_a"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_external_a" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_external_a" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_external_a" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel_tank_external_a" break}}
					
				else 
					{if rand 0.5 {components "fuel_tank_external_a" break}}
				}
			 else component "fuel_tank_external_b"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_external_b" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_external_b" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_external_b" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel_tank_external_b" break}}
					
				else 
					{if rand 0.5 {components "fuel_tank_external_b" break}}
				}
			 else component "fuel_tank_external_c"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_external_c" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_external_c" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_external_c" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel_tank_external_c" break}}
					
				else 
					{if rand 0.5 {components "fuel_tank_external_c" break}}
				}
			 else component "fuel_tank_external_d"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel_tank_external_d" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel_tank_external_d" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel_tank_external_d" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel_tank_external_d" break}}
					
				else 
					{if rand 0.5 {components "fuel_tank_external_d" break}}
				}
			else component "fuel"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel" break}}
					
				else 
					{if rand 0.5 {components "fuel" break}}
				}
			else component "fuel1"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel1" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel1" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel1" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel1" break}}
					
				else 
					{if rand 0.5 {components "fuel1" break}}
				}
			else component "fuel2"
				{burn fx "smoke_dead_tank2" fake}
				{if stuff "cm" 
					{if rand 0.85 {components "fuel2" break}}
				else stuff "fg"
					{if rand 0.8 {components "fuel2" break}}
				else stuff "ap"
					{if rand 0.25 {components "fuel2" break}}
				else stuff "hv_ap"
						
					{if rand 0.25 {components "fuel2" break}}
					
				else 
					{if rand 0.5 {components "fuel2" break}}
				}
			else component "apploque_inter"
				{components "apploque_inter" break}
				{tags add "ammo_gate_break"}

		
			else component "tank_crit_component"
				{components "tank_crit_component" break}
				{call_synced "kill_driver"}
				{burn fx "smoke_dead_tank2" fake}

			
			
			else component "turret_ring"
				{burn fx "smoke_dead_tank2" fake}
				{components "turret_ring" break}

			
			else component "turret_move_engine"
				{burn fx "smoke_dead_tank2" fake}
				{components "turret_move_engine" break}
			else component "autoloader"
				{components "autoloader" break}
				{burn fx "smoke_dead_tank2" fake}
			else component "panel_engine_connector"
				{burn fx "smoke_dead_tank2" fake}
				{components "panel_engine_connector" break}

			
			else component "stabilizer"
				{components "stabilizer" break}	
				{burn fx "smoke_dead_tank2" fake}
			
			else component "gunner_panel"
				{components "gunner_panel" break}
				{burn fx "smoke_dead_tank2" fake}
				{call_synced "kill_gunner"}
			else component "transmission"
				{burn fx "smoke_dead_tank2" fake}
				{components "transmission" break}

			else component "driver_triplex"	
				{spawn "glass_hit"}
				{components "driver_triplex" break}	
		
			else component "commander_triplex"	
				{spawn "glass_hit"}
				{components "commander_triplex" break}	
			
			else component "additional_triplex"	
				{spawn "glass_hit"}
				{components "additional_triplex" break}
			
			else component "additional_triplex1"	
				{spawn "glass_hit"}
				{components "additional_triplex1" break}
				
			else component "additional_triplex2"	
				{spawn "glass_hit"}
				{components "additional_triplex2" break}
			
			}		
			{if component "turret"
				{if tagged "death_counter_start"
					{call "death_counter"}
				}
				;{call "death_counter_check"}
				{if operatable
					{if rand (* %kill_crew 0.1)		{call_synced "kill_driver"}}
					{if rand (* %kill_crew 0.6)		{call_synced "kill_gunner"}}
					{if rand (* %kill_crew 0.4)		{call_synced "kill_gunner2"}}
					{if rand (* %kill_crew 0.2)		{call_synced "kill_gunner3"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_gunner4"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_gunner5"}}
					{if rand (* %kill_crew 0.4)		{call_synced "kill_charger"}}
					{if rand (* %kill_crew 0.4)		{call_synced "kill_charger2"}}
					{if rand (* %kill_crew 0.4)		{call_synced "kill_charger3"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_charger4"}}
					{if rand (* %kill_crew 0.3)		{call_synced "kill_commander"}}

						{if rand %crew_shock_chance
							{call_synced "crew_shot_chance"}
							{delay %crew_shock_time 1 "crew_shock_time"
								{call_synced "crew_revive"}
							}
							{delay (* %crew_shock_time 0.5) 0.5 "crew_shock_time"
								{call_synced "driver_revive"}
							}
						}
					}
				{if not tagged "destroyed"
					{damage_report "turret" "component/armored/turret_pierced"}
				}

			{if volume "mantlet"
				{tags add "mantlet_pierced!ordos_debug"}
				{##if rand %pierce_mantlet__mantlet_jam
					{call_synced "mantlet_jam"}				;// temporarily disables gun elevation (up/down movement)
				}
				{if not "turret"						;// tank has no turret. For tank destroyers. {props "-turret"}
					{if rand (* %kill_crew 0.05)	{call_synced "kill_gunner"}}
						{if rand (* %kill_crew 0.05)	{call_synced "kill_gunner2"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_gunner3"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_gunner4"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_gunner5"}}
						{if rand (* %kill_crew 0.05)	{call_synced "kill_charger"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_charger2"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_charger3"}}
						{if rand (* %kill_crew 0.05)		{call_synced "kill_charger4"}}
						{if rand (* %kill_crew 0.05)	{call_synced "kill_commander"}}

						{if rand %crew_shock_chance
							{call_synced "crew_shot_chance"}
							{delay %crew_shock_time 1 "crew_shock_time"
								{call_synced "crew_revive"}
							}
							{delay (* %crew_shock_time 0.5) 0.5 "crew_shock_time"
								{call_synced "driver_revive"}
							}
						}
					}
				}

			{if volume "gun_shield"					;// for open top tank destroyers when gun shield is penetrated. (technically not the turret)
				{if not "shield_pen"
					{set "shield_pen" 1}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_driver"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_gunner"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_gunner2"}}
					{if rand (* %kill_crew 0.1)		{call_synced "kill_gunner3"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_gunner4"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_gunner5"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_charger"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_charger2"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_charger3"}}
					{if rand (* %kill_crew 0.0)		{call_synced "kill_charger4"}}
					{if rand (* %kill_crew 0.5)		{call_synced "kill_commander"}}

						{if rand %crew_shock_chance
							{call_synced "crew_shot_chance"}
							{delay %crew_shock_time "crew_shock_time"
								{call_synced "crew_revive"}
							}
							{delay (* %crew_shock_time 0.5) 0.5 "crew_shock_time"
								{call_synced "driver_revive"}
							}
						}
						{delay 0.5
							{set "shield_pen" 0}
						}
					}
				}
			   {if volume "turret_mg"					;// for open top tank destroyers when gun shield is penetrated. (technically not the turret)
				{components "turret_mg" break}
			   }
			   {if volume "turret_mgun"					;// for open top tank destroyers when gun shield is penetrated. (technically not the turret)
				{components "turret_mgun" break}
			   }
			   {if volume "turret_mgun"					;// for open top tank destroyers when gun shield is penetrated. (technically not the turret)
				{components "turret_mgun" break}
			   }
			   
			   
			}

			{if component "d_a"
				("DPS_Effect" dps_apcr(0) dps_cm(1) dps_ap(0))	
			}
		    }
		}
	)

;/*=========== add by ordos End ===========*/