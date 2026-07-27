{"sea_sparrow"
	{on spawn
		{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}
		{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
		{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}
		{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
		{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}
		{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}
		{add_view	 "flash_gun_big"	"shooter06"	"shooter06"}
		{add_view	 "flash_gun_big"	"shooter07"	"shooter07"}
		{add_view	 "startsmoke_big"	"shooter00"	"tail00"}	
		{add_view	 "startsmoke_big"	"shooter01"	"tail01"}	
		{add_view	 "startsmoke_big"	"shooter02"	"tail02"}	
		{add_view	 "startsmoke_big"	"shooter03"	"tail03"}	
		{add_view	 "startsmoke_big"	"shooter04"	"tail04"}	
		{add_view	 "startsmoke_big"	"shooter05"	"tail05"}	
		{add_view	 "startsmoke_big"	"shooter06"	"tail06"}	
		{add_view	 "startsmoke_big"	"shooter07"	"tail07"}	
	}	
	{on fire "gun2" 
		(define "fire_barrel"				name "%0"	
			{delay 0.1 {spawn "aim7m_carrier" "shooter%0"   x}}
			{ani_play "fire"}		
			{view start "shooter%0"}
			{delay 0.42			
				{view pause "shooter%0"}
			}	
		)
		{if
			("fire_barrel" args 00)	
		else 
			("fire_barrel" args 01)	
		else 
			("fire_barrel" args 02)
		else
			("fire_barrel" args 03)	
		else
			("fire_barrel" args 04)
		else
			("fire_barrel" args 05)
		else
			("fire_barrel" args 06)
		else 
			("fire_barrel" args 07)
		}
	}
}


{"searam"
	{on spawn
		{add_view	 "flash_gun_big"	"shooter000"	"shooter000"}
		{add_view	 "flash_gun_big"	"shooter001"	"shooter001"}
		{add_view	 "flash_gun_big"	"shooter002"	"shooter002"}
		{add_view	 "flash_gun_big"	"shooter003"	"shooter003"}	
		{add_view	 "flash_gun_big"	"shooter004"	"shooter004"}	
		{add_view	 "flash_gun_big"	"shooter005"	"shooter005"}
		{add_view	 "flash_gun_big"	"shooter006"	"shooter006"}	
		{add_view	 "flash_gun_big"	"shooter007"	"shooter007"}	
		{add_view	 "flash_gun_big"	"shooter008"	"shooter008"}	
		{add_view	 "flash_gun_big"	"shooter009"	"shooter009"}	
		{add_view	 "flash_gun_big"	"shooter010"	"shooter010"}	
		{add_view	 "flash_gun_big"	"shooter011"	"shooter011"}	
		{add_view	 "flash_gun_big"	"shooter012"	"shooter012"}	
		{add_view	 "flash_gun_big"	"shooter013"	"shooter013"}	
		{add_view	 "flash_gun_big"	"shooter014"	"shooter014"}	
		{add_view	 "flash_gun_big"	"shooter015"	"shooter015"}	
		{add_view	 "flash_gun_big"	"shooter016"	"shooter016"}	
		{add_view	 "flash_gun_big"	"shooter017"	"shooter017"}	
		{add_view	 "flash_gun_big"	"shooter018"	"shooter018"}	
		{add_view	 "flash_gun_big"	"shooter019"	"shooter019"}	
		{add_view	 "flash_gun_big"	"shooter020"	"shooter020"}	
		{add_view	 "startsmoke_big"	"shooter000"	"tail000"}	
		{add_view	 "startsmoke_big"	"shooter001"	"tail001"}	
		{add_view	 "startsmoke_big"	"shooter002"	"tail002"}	
		{add_view	 "startsmoke_big"	"shooter003"	"tail003"}	
		{add_view	 "startsmoke_big"	"shooter004"	"tail004"}	
		{add_view	 "startsmoke_big"	"shooter005"	"tail005"}	
		{add_view	 "startsmoke_big"	"shooter006"	"tail006"}	
		{add_view	 "startsmoke_big"	"shooter007"	"tail007"}	
		{add_view	 "startsmoke_big"	"shooter008"	"tail008"}	
		{add_view	 "startsmoke_big"	"shooter009"	"tail009"}	
		{add_view	 "startsmoke_big"	"shooter010"	"tail010"}	
		{add_view	 "startsmoke_big"	"shooter011"	"tail011"}	
		{add_view	 "startsmoke_big"	"shooter012"	"tail012"}	
		{add_view	 "startsmoke_big"	"shooter013"	"tail013"}	
		{add_view	 "startsmoke_big"	"shooter014"	"tail014"}	
		{add_view	 "startsmoke_big"	"shooter015"	"tail015"}
		{add_view	 "startsmoke_big"	"shooter016"	"tail016"}	
		{add_view	 "startsmoke_big"	"shooter017"	"tail017"}	
		{add_view	 "startsmoke_big"	"shooter018"	"tail018"}	
		{add_view	 "startsmoke_big"	"shooter019"	"tail019"}	
		{add_view	 "startsmoke_big"	"shooter020"	"tail020"}	
	}

	{on fire "gun2" 
		(define "fire_barrel"				name "%0"
			{delay 0.05		
				{spawn "poddon_cannon" "shooter0%0" x {impulse forward 2.5 0.5}}	
				{spawn "poddon_cannon" "tail0%0" x {impulse forward 2.5 0.5}}	
			}
			{delay 0.15 {spawn "rim116_carrier" "shooter0%0"   x}
				{view start "shooter0%0"}	
				{delay 0.42				
					{view pause "shooter0%0"}
				}		
			}
		)		
		{if ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)	
		else ("fire_barrel" args 04)	
		else ("fire_barrel" args 05)	
		else ("fire_barrel" args 06)	
		else ("fire_barrel" args 07)	
		else ("fire_barrel" args 08)	
		else ("fire_barrel" args 09)	
		else ("fire_barrel" args 10)	
		else ("fire_barrel" args 11)	
		else ("fire_barrel" args 12)	
		else ("fire_barrel" args 13)	
		else ("fire_barrel" args 14)	
		else ("fire_barrel" args 15)	
		else ("fire_barrel" args 16)	
		else ("fire_barrel" args 17)	
		else ("fire_barrel" args 18)
		else ("fire_barrel" args 19)
		else ("fire_barrel" args 20)	
		}
	}
}
	{"osa_ma_pu"
		{on spawn	
			{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}
			{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
			{add_view	 "startsmoke_big"	"shooter00"	"tail00"}	
			{add_view	 "startsmoke_big"	"shooter01"	"tail01"}	
		}	
		{on fire "gun2" 
			(define "fire_barrel" name "%0"
					
				{delay 0.1 {spawn "osa_missile_carrier" "shooter%0"   x}}
				{ani_play "fire"}	
				{view start "shooter%0"}
				{delay 0.42		
					{view pause "shooter%0"}
				}	
			)	
			{if    ("fire_barrel" args 00)	
			else ("fire_barrel" args 01)	
			}
		}
	}

	{"uragan_pu"
		{on spawn	
			{add_view	 "flash_gun_big"	"flashbarrel"	"foresight2"}
			{add_view	 "startsmoke_big"	"flashbarrel"	"tail"}	
		}
		{on fire "gun2" 
			{spawn "proj_probe" "foresight2"   x {tags add "shooter00"}}
			{view start "flashbarrel"}	
			{delay 0.42 {view pause "flashbarrel"} }
		}	
	}
		{"malahit_pu"
			{on spawn
				{add_view	 "flash_gun_big"	"shootera1"	"Missile1"}	
				{add_view	 "flash_gun_big"	"shootera2"	"Missile2"}
				{add_view	 "flash_gun_big"	"shootera3"	"Missile3"}	
				{add_view	 "flash_gun_big"	"shootera4"	"Missile4"}	
				{add_view	 "flash_gun_big"	"shootera5"	"Missile5"}	
				{add_view	 "flash_gun_big"	"shootera6"	"Missile6"}	
				{add_view	 "startsmoke_big"	"shooter1"	"tail1"}	
				{add_view	 "startsmoke_big"	"shooter2"	"tail2"}	
				{add_view	 "startsmoke_big"	"shooter3"	"tail3"}	
				{add_view	 "startsmoke_big"	"shooter4"	"tail4"}	
				{add_view	 "startsmoke_big"	"shooter5"	"tail5"}	
				{add_view	 "startsmoke_big"	"shooter6"	"tail6"}
			}	
			{on fire "gun2" 	
				(define "fire_barrel"	
					{delay 0.5 		
						{spawn "malahit_carrier" "Missile%0"   x}
						{bone cut "Missile%0"}	
						{volumes "ammo_storage_main%0" disable contact bullet blast}
					}	
					{ani_play "fire%0"}	
					{ani_play "cover%0"}	
					{delay 0.5			
						{view start "shooter%0"}	
						{view start "shootera%0"}
						{view pause "shooter%0"}	
						{delay 0.3		
							{view pause "shootera%0"}
						}	
					}	
				)	

				{if name "00" ("fire_barrel" args 1)
				else name "01" ("fire_barrel" args 2)	
				else name "02" ("fire_barrel" args 3)	
				else name "03" ("fire_barrel" args 4)	
				else name "04" ("fire_barrel" args 5)	
				else name "05" ("fire_barrel" args 6)	
				}
			}
		}	


		{"rastrub_pu"
		{on spawn		
		{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}		
		{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}		
		{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}		
		{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}		
		{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}		
		{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}		
		{add_view	 "flash_gun_big"	"shooter06"	"shooter06"}		
		{add_view	 "flash_gun_big"	"shooter07"	"shooter07"}	
		{add_view	 "startsmoke_big"	"shooter00"	"tail00"}		
		{add_view	 "startsmoke_big"	"shooter01"	"tail01"}		
		{add_view	 "startsmoke_big"	"shooter02"	"tail02"}		
		{add_view	 "startsmoke_big"	"shooter03"	"tail03"}		
		{add_view	 "startsmoke_big"	"shooter04"	"tail04"}		
		{add_view	 "startsmoke_big"	"shooter05"	"tail05"}		
		{add_view	 "startsmoke_big"	"shooter06"	"tail06"}		
		{add_view	 "startsmoke_big"	"shooter07"	"tail07"}	
		}	

		{on fire "gun2" 
		(define "fire_barrel"				name "%0" 	
		{ani_play "fire%0"}			
		{delay 0.5 				
		{if not tagged "launch_antiship" 
		{spawn "rastrub_carrier" "shooter%0"   x} {tags remove "launch_antiship"}
		else {spawn "rastrub_antiship_carrier" "shooter%0"   x}}	
		{view start "shooter%0"}		
		{delay 0.3				
		{view pause "shooter%0"}
						}
						}	
						)	

						{if ("fire_barrel" args 00)	
						else ("fire_barrel" args 01)
						else ("fire_barrel" args 02)
						else ("fire_barrel" args 03)	
						else ("fire_barrel" args 04)	
						else ("fire_barrel" args 05)	
						else ("fire_barrel" args 06)	
						else ("fire_barrel" args 07)	
						}		
						}
						}

						{"moskit_pu"
						{on spawn		
						{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}
						{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}	
						{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}	
						{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}	
						{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}
						{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}	
						{add_view	 "flash_gun_big"	"shooter06"	"shooter06"}	
						{add_view	 "flash_gun_big"	"shooter07"	"shooter07"}	
						{add_view	 "startsmoke_big"	"shooter00"	"tail00"}		
						{add_view	 "startsmoke_big"	"shooter01"	"tail01"}		
						{add_view	 "startsmoke_big"	"shooter02"	"tail02"}		
						{add_view	 "startsmoke_big"	"shooter03"	"tail03"}		
						{add_view	 "startsmoke_big"	"shooter04"	"tail04"}	
						{add_view	 "startsmoke_big"	"shooter05"	"tail05"}	
						{add_view	 "startsmoke_big"	"shooter06"	"tail06"}	
						{add_view	 "startsmoke_big"	"shooter07"	"tail07"}	
						}	
						{on fire "gun2" 	
						(define "fire_barrel"				name "%0" 	
						{ani_play "fire%0"}	
						{delay 0.5 			
						{spawn "moskit_carrier" "shooter%0"   x}	
						{view start "shooter%0"}	
						{delay 0.3					
						{view pause "shooter%0"}	
						}			
						}	
						)		
						{if ("fire_barrel" args 00)	
						else ("fire_barrel" args 01)	
						else ("fire_barrel" args 02)	
						else ("fire_barrel" args 03)	
						else ("fire_barrel" args 04)	
						else ("fire_barrel" args 05)	
						else ("fire_barrel" args 06)	
						else ("fire_barrel" args 07)	
						}	
						}	
						}
						{"basalt_pu"
						{on spawn	
						{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}
						{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
						{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}
						{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}	
						{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}	
						{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}	
						{add_view	 "flash_gun_big"	"shooter06"	"shooter06"}
						{add_view	 "flash_gun_big"	"shooter07"	"shooter07"}
						{add_view	 "flash_gun_big"	"shooter08"	"shooter08"}	
						{add_view	 "flash_gun_big"	"shooter09"	"shooter09"}	
						{add_view	 "flash_gun_big"	"shooter10"	"shooter10"}	
						{add_view	 "flash_gun_big"	"shooter11"	"shooter11"}	
						{add_view	 "flash_gun_big"	"shooter12"	"shooter12"}	
						{add_view	 "flash_gun_big"	"shooter13"	"shooter13"}	
						{add_view	 "flash_gun_big"	"shooter14"	"shooter14"}	
						{add_view	 "flash_gun_big"	"shooter15"	"shooter15"}	
						{add_view	 "startsmoke_big"	"shooter00"	"tail00"}		
						{add_view	 "startsmoke_big"	"shooter01"	"tail01"}	
						{add_view	 "startsmoke_big"	"shooter02"	"tail02"}	
						{add_view	 "startsmoke_big"	"shooter03"	"tail03"}	
						{add_view	 "startsmoke_big"	"shooter04"	"tail04"}	
						{add_view	 "startsmoke_big"	"shooter05"	"tail05"}	
						{add_view	 "startsmoke_big"	"shooter06"	"tail06"}	
						{add_view	 "startsmoke_big"	"shooter07"	"tail07"}	
						{add_view	 "startsmoke_big"	"shooter08"	"tail08"}	
						{add_view	 "startsmoke_big"	"shooter09"	"tail09"}	
						{add_view	 "startsmoke_big"	"shooter10"	"tail10"}	
						{add_view	 "startsmoke_big"	"shooter11"	"tail11"}	
						{add_view	 "startsmoke_big"	"shooter12"	"tail12"}	
						{add_view	 "startsmoke_big"	"shooter13"	"tail13"}	
						{add_view	 "startsmoke_big"	"shooter14"	"tail14"}	
						{add_view	 "startsmoke_big"	"shooter15"	"tail15"}	
						}	

						{on fire "gun2" 	
						(define "fire_barrel"				name "%0" 	
						{ani_play "fire%0"}			
						{delay 0.5 			
						{spawn "basalt_p1000_carrier" "shooter%0"   x}		
						{view start "shooter%0"}		
						{delay 0.3				
						{view pause "shooter%0"}	
						}		
						}	
						)	
						{if ("fire_barrel" args 00)		
						else ("fire_barrel" args 01)	
						else ("fire_barrel" args 02)	
						else ("fire_barrel" args 03)	
						else ("fire_barrel" args 04)	
						else ("fire_barrel" args 05)	
						else ("fire_barrel" args 06)	
						else ("fire_barrel" args 07)	
						else ("fire_barrel" args 08)	
						else ("fire_barrel" args 09)	
						else ("fire_barrel" args 10)	
						else ("fire_barrel" args 11)	
						else ("fire_barrel" args 12)
				  else ("fire_barrel" args 13)
				  else ("fire_barrel" args 14)	
				  else ("fire_barrel" args 15)		
				  }		
				  }
				  }	

				  {"granit1144_pu"	
				  {on spawn		
				  {add_view	 "flash_gun_big"	"shooter000"	"shooter000"}
				  {add_view	 "flash_gun_big"	"shooter001"	"shooter001"}
				  {add_view	 "flash_gun_big"	"shooter002"	"shooter002"}	
				  {add_view	 "flash_gun_big"	"shooter003"	"shooter003"}	
				  {add_view	 "flash_gun_big"	"shooter004"	"shooter004"}	
				  {add_view	 "flash_gun_big"	"shooter005"	"shooter005"}	
				  {add_view	 "flash_gun_big"	"shooter006"	"shooter006"}	
				  {add_view	 "flash_gun_big"	"shooter007"	"shooter007"}	
				  {add_view	 "flash_gun_big"	"shooter008"	"shooter008"}	
				  {add_view	 "flash_gun_big"	"shooter009"	"shooter009"}	
				  {add_view	 "flash_gun_big"	"shooter010"	"shooter010"}	
				  {add_view	 "flash_gun_big"	"shooter011"	"shooter011"}	
				  {add_view	 "flash_gun_big"	"shooter012"	"shooter012"}	
				  {add_view	 "flash_gun_big"	"shooter013"	"shooter013"}	
				  {add_view	 "flash_gun_big"	"shooter014"	"shooter014"}	
				  {add_view	 "flash_gun_big"	"shooter015"	"shooter015"}	
				  {add_view	 "flash_gun_big"	"shooter016"	"shooter016"}	
				  {add_view	 "flash_gun_big"	"shooter017"	"shooter017"}	
				  {add_view	 "flash_gun_big"	"shooter018"	"shooter018"}	
				  {add_view	 "flash_gun_big"	"shooter019"	"shooter019"}	
				  }	

				  {on fire "gun2" 		
				  (define "fire_barrel"				name "%0" 
				  {ani_play "fire%0"}		
				  {delay 0.5 		
				  {spawn "granit_carrier" "shooter0%0"   x}			
				  {view start "shooter0%0"}				
				  {delay 0.3			
				  {view pause "shooter0%0"}		
				  }		
				  {spawn "sturmtiger_fire" "shooter0%0"   x}
				  }		
				  )	
				  {if ("fire_barrel" args 00)	
				  else ("fire_barrel" args 01)	
				  else ("fire_barrel" args 02)		
				  else ("fire_barrel" args 03)		
				  else ("fire_barrel" args 04)		
				  else ("fire_barrel" args 05)		
				  else ("fire_barrel" args 06)		
				  else ("fire_barrel" args 07)		
				  else ("fire_barrel" args 08)		
				  else ("fire_barrel" args 09)		
				  else ("fire_barrel" args 10)		
				  else ("fire_barrel" args 11)		
				  else ("fire_barrel" args 12)	
				  else ("fire_barrel" args 13)	
				  else ("fire_barrel" args 14)		
				  else ("fire_barrel" args 15)		
				  else ("fire_barrel" args 16)		
				  else ("fire_barrel" args 17)		
				  else ("fire_barrel" args 18)		
				  else ("fire_barrel" args 19)		
				  }	
				  }	
				  }

				  					
{"patriot_launcher"
	{on spawn
		{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}
		{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
		{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}
		{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
		{add_view	 "startsmoke_big"	"shooter00"	"tail00"}	
		{add_view	 "startsmoke_big"	"shooter01"	"tail01"}	
		{add_view	 "startsmoke_big"	"shooter02"	"tail02"}	
		{add_view	 "startsmoke_big"	"shooter03"	"tail03"}	
	}	

	{on fire "gun2" 
		(define "fire_barrel"				name "%0"	
		{spawn "startsmoke" "shooter%0"   x}	
		{delay 0.1 {spawn "patriot_carrier" "shooter%0"   x}}
		{view start "shooter%0"}		
		{spawn "dust_shot_big_2" "basis"}	
		{delay 0.42			
		{view pause "shooter%0"}	
		}	
		)	
		{if    ("fire_barrel" args 00)	
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)	
		else ("fire_barrel" args 03)	
		}		
		("cw_check_shooting" weap_id(gun2))	
	}
}

{"patriot_radar"
	{on fire "radar"	
		{ik_enable "turret" 0}	
		{delay 5 {call "update_turret"}}
		("cw_check_shooting" weap_id(radar))
	}	
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(radar) marker(antirad_generator_large_usa))
	{on "update_radar"	
		{if tagged "radar_off" {weapon_work "radar" 0}	
		else not work "commander_triplex" {weapon_work "radar" 0}
		else not work "body" {weapon_work "radar" 0}		
		else not work "turret" {weapon_work "radar" 0}		
		else tagged "no_power" {weapon_work "radar" 0}	
		else {weapon_work "radar" 1}
		}
	}
}	


{"hawk_rls_units"	
	{on spawn
		{delay 0.1
			{call "check_unlink"}
		}
	}
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(radar) marker(antirad_generator_large_usa))
	{on "check_unlink"
	   {if not tagged "destroyed"
		{delay 3 "unlink_check"	
			{if linked
				{call "cwsh_radar_off"}	
			else
				{if not tagged "cwsh_passive"
					{if not tagged "radar_off"
						{call "cwsh_radar_on"}
					}
				}
			}	
			{call "check_unlink"}
		}
	    else {kill_delay "unlink_check"}
	    }
	}
	{on "mp_destroy"
		{delay 0.1
			{call "cwsh_radar_off"}
		}
	}

	{on "_explosion"
		{impulse up 0.1}
	}
}

{"hawk_system"

  {on spawn
		{delay 0.1
			{tags add "hawk_system"}
			{tags remove "hawk_setuped"}
		}
  }

}

{"exactor_mk2"
	{on spawn	
		{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}	
		{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}	
		{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}	
		{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}	
		{add_view	 "startsmoke_big"	"shooter00"	"tail00"}	
		{add_view	 "startsmoke_big"	"shooter01"	"tail01"}	
		{add_view	 "startsmoke_big"	"shooter02"	"tail02"}	
		{add_view	 "startsmoke_big"	"shooter03"	"tail03"}	
	}
	{on fire "gun2" 
		(define "fire_barrel"				name "%0"	
		{spawn "startsmoke" "shooter%0"   x}	
		{spawn "proj_probe" "foresight1"   x {tags add "shooter%0"}}	
		{view start "shooter%0"}		
		{delay 0.42			
			{view pause "shooter%0"}
		}		
		)	
		{if    ("fire_barrel" args 00)	
		else ("fire_barrel" args 01)	
		else ("fire_barrel" args 02)	
		else ("fire_barrel" args 03)	
		}
		("cw_check_shooting" weap_id(gun2))		}
		{on "update_gun23" overload	
			{if tagged "smalluav_no_connect" {weapon_work "gun2" 0}	
			else {inherited}	
			}
		}	
	}

	{"osa_am_rls"
		{on spawn		
			{if work "driver_triplex"	{ani_play "radar" loop}}
		}	
		{on break	
			{if component "driver_triplex"
			{if not tagged "driver_triplex_break"
			{bone cut "visor1"}			
			{ani_stop "radar"}	
			}		
			else component "commander_triplex"	
			{if not tagged "commander_triplex_break"	
			{bone cut "visor2"}			
			{bone cut "foresight2"}		
			}		
			}	
		}	
		{on "mp_destroy"	
		{components "driver_triplex" break}		}
		}

{"a22_ogon"
	{on spawn	
		{add_view 	"startsmoke_big" 		"rok_tail00" 		"tail00"}
		{add_view 	"startsmoke_big" 		"rok_tail01" 		"tail01"}	
		{add_view 	"startsmoke_big" 		"rok_tail02" 		"tail02"}	
		{add_view 	"startsmoke_big" 		"rok_tail03" 		"tail03"}	
		{add_view 	"startsmoke_big" 		"rok_tail04" 		"tail04"}	
		{add_view 	"startsmoke_big" 		"rok_tail05" 		"tail05"}	
		{add_view 	"startsmoke_big" 		"rok_tail06" 		"tail06"}	
		{add_view 	"startsmoke_big" 		"rok_tail07" 		"tail07"}	
		{add_view 	"startsmoke_big" 		"rok_tail08" 		"tail08"}	
		{add_view 	"startsmoke_big" 		"rok_tail09" 		"tail09"}	
		{add_view 	"startsmoke_big" 		"rok_tail10" 		"tail10"}	
		{add_view 	"startsmoke_big" 		"rok_tail11" 		"tail11"}	
		{add_view 	"startsmoke_big" 		"rok_tail12" 		"tail12"}	
		{add_view 	"startsmoke_big" 		"rok_tail13" 		"tail13"}	
		{add_view 	"startsmoke_big" 		"rok_tail14" 		"tail14"}	
		{add_view 	"startsmoke_big" 		"rok_tail15" 		"tail15"}	
		{add_view 	"startsmoke_big" 		"rok_tail16" 		"tail16"}	
		{add_view 	"startsmoke_big" 		"rok_tail17" 		"tail17"}	
		{add_view 	"startsmoke_big" 		"rok_tail18" 		"tail18"}	
		{add_view 	"startsmoke_big" 		"rok_tail19" 		"tail19"}	
		{add_view 	"startsmoke_big" 		"rok_tail20" 		"tail20"}	
		{add_view 	"startsmoke_big" 		"rok_tail21" 		"tail21"}	
	}	

	{on fire "gun2" 
		{spawn "startsmoke_big"}
		(define "fire_barrel"	
			name "%0"			
			{view start "rok_tail%0"}	
			{delay 0.42					
				{view pause "rok_tail%0"}
			}	
		)		

		{if    ("fire_barrel" args 00)	
		else ("fire_barrel" args 01)		
		else ("fire_barrel" args 02)		
		else ("fire_barrel" args 03)		
		else ("fire_barrel" args 04)		
		else ("fire_barrel" args 05)		
		else ("fire_barrel" args 06)		
		else ("fire_barrel" args 07)		
		else ("fire_barrel" args 08)		
		else ("fire_barrel" args 09)		
		else ("fire_barrel" args 10)		
		else ("fire_barrel" args 11)		
		else ("fire_barrel" args 12)		
		else ("fire_barrel" args 13)		
		else ("fire_barrel" args 14)		
		else ("fire_barrel" args 15)		
		else ("fire_barrel" args 16)
		else ("fire_barrel" args 17)		
		else ("fire_barrel" args 18)		
		else ("fire_barrel" args 19)	
		}
	}
}


{"bomb_launcher"	
	{on spawn	
		{add_view 	"startsmoke_big" 		"rok_tail00" 		"tail00"}
		{add_view 	"startsmoke_big" 		"rok_tail01" 		"tail01"}
		{add_view 	"startsmoke_big" 		"rok_tail02" 		"tail02"}
		{add_view 	"startsmoke_big" 		"rok_tail03" 		"tail03"}
		{add_view 	"startsmoke_big" 		"rok_tail04" 		"tail04"}
		{add_view 	"startsmoke_big" 		"rok_tail05" 		"tail05"}	
		{add_view 	"startsmoke_big" 		"rok_tail06" 		"tail06"}	
		{add_view 	"startsmoke_big" 		"rok_tail07" 		"tail07"}	
		{add_view 	"startsmoke_big" 		"rok_tail08" 		"tail08"}	
		{add_view 	"startsmoke_big" 		"rok_tail09" 		"tail09"}	
		{add_view 	"startsmoke_big" 		"rok_tail10" 		"tail10"}	
		{add_view 	"startsmoke_big" 		"rok_tail11" 		"tail11"}	
		}	

		{on fire "gun2" 	
		{spawn "startsmoke_big"}	
		(define "fire_barrel"				name "%0"	
		{view start "rok_tail%0"}			
		{delay 0.42					
		{view pause "rok_tail%0"}		
		}		
		)	
		{if    ("fire_barrel" args 00)	
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)	
		else ("fire_barrel" args 03)	
		else ("fire_barrel" args 04)	
		else ("fire_barrel" args 05)	
		else ("fire_barrel" args 06)	
		else ("fire_barrel" args 07)	
		else ("fire_barrel" args 08)	
		else ("fire_barrel" args 09)	
		else ("fire_barrel" args 10)	
		else ("fire_barrel" args 11)	
		}		
		}	
		}
		{"kinjal_pu"
		{on spawn		
		{volumes "gun_recoil" disable blast}	
		{call "init_gun2"}
		}	
		(define "fire_barrel"	
		{delay 0.2 		
		{volumes "gun_recoil" enable blast}	
 			{spawn "turret_dir_detector" "gun_recoil" {stuff_detonate}}	
 			{delay 0.5 {volumes "gun_recoil" disable blast}}	
 			{spawn "startsmoke_vert" "missile_nvis_0%shooter" x}
 			{bone show "kinzal_0%shooter"}		
 			{delay 0.05 {spawn "tank_canon_fire_small" "tail_0%shooter" x}}	
 			{delay 0.30 {spawn "tank_canon_fire_small" "tail_0%shooter" x}}	
 			{delay 0.45					{bone hide "kinzal_0%shooter"}	
 			{spawn "9m330_carrier" "shooter_0%shooter"   x}			
 			}		
 			{delay 0.49			
 			{ani_play "fire_restore"}	
 			}		
 			}		
 			{ani_play "fire_%shooter" 0.5}	
 			)
 			{on fire "gun2" 	
 			{if name "00" ("fire_barrel" shooter(00))
 			else name "01" ("fire_barrel" shooter(01))	
 			else name "02" ("fire_barrel" shooter(02))	
 			else name "03" ("fire_barrel" shooter(03))	
 			else name "04" ("fire_barrel" shooter(04))	
 			else name "05" ("fire_barrel" shooter(05))	
 			else name "06" ("fire_barrel" shooter(06))	
 			else name "07" ("fire_barrel" shooter(07))	
 			}	
 			}	
 			{on blast_hit		
 			{if stuff "turret_dir_detector"		
 			{if volume "recoil_gun_front"  {ani_play "fire_front"} {ani_play "fire_front_common"}	
 			else volume "recoil_gun_left"  {ani_play "fire_left"} {ani_play "fire_left_common"}		
 			else volume "recoil_gun_right"  {ani_play "fire_right"} {ani_play "fire_right_common"}	
 			else volume "recoil_gun_back"  {ani_play "fire_back"} {ani_play "fire_back_common"}		
 			else volume "recoil_gun_baleft"  {ani_play "fire_bl"}	
 			else volume "recoil_gun_baright"  {ani_play "fire_br"}		
 			else volume "recoil_gun_frright"  {ani_play "fire_fr"}		
 			else volume "recoil_gun_frleft"  {ani_play "fire_fl"}	
 			else volume "recoil_gun_central"	
 			}	
 			}
 			}	
 			{on "explosion"	
 			{spawn "ex_air_big2" "basis"}	
 			}	
 			}
 			{"s300f_pu"
 			{on "init_gun2"}	
 			{on spawn	
 			{volumes "gun_recoil" disable blast}
 			{call "init_gun2"}	
 			}	
 			(define "fire_barrel"
 			{delay 0.2 	
 			{volumes "gun_recoil" enable blast}	
 			{spawn "turret_dir_detector" "gun_recoil" {stuff_detonate}}	
 			{delay 0.5 {volumes "gun_recoil" disable blast}}	
 			{delay 0.1 {spawn "startsmoke_vert" "Shooter_0%shooter" x}}
 			{bone show "missile_0%shooter"}		
 			{delay 0.65 		
 			{add_view	 "proj_jet_sam"	"exh_0%shooter"	"tail_0%shooter"}	
 			{view start "exh_0%shooter"}	   
 			}		
 			{delay 0.65 {spawn "tank_canon_fire_small" "tail_0%shooter" x}}	
 			{delay 1.65			
 			{bone hide "missile_0%shooter"}	
 			{spawn "48n6_carrier" "shooter_0%shooter"   x}
 			{view pause "exh_0%shooter"}			
 			{view hide "exh_0%shooter"}			
 			{view stop "exh_0%shooter"}		
 			}		
 			{delay 1.69			
 			{ani_play "fire_restore"}	
 			}		
 			}		
 			{ani_play "fire_%shooter" 0.5}	
 			)

 			{on fire "gun2" 
 			{if name "00" ("fire_barrel" shooter(00))	
 			else name "01" ("fire_barrel" shooter(01))	
 			else name "02" ("fire_barrel" shooter(02))	
 			else name "03" ("fire_barrel" shooter(03))	
 			else name "04" ("fire_barrel" shooter(04))	
 			else name "05" ("fire_barrel" shooter(05))	
 			else name "06" ("fire_barrel" shooter(06))	
 			else name "07" ("fire_barrel" shooter(07))	
 			else name "08" ("fire_barrel" shooter(08))	
 			else name "09" ("fire_barrel" shooter(09))	
 			else name "10" ("fire_barrel" shooter(10))	
 			else name "11" ("fire_barrel" shooter(11))	
 			}	
 			}	
 			{on blast_hit	
 			{if
 				{if volume "recoil_gun_front"  {ani_play "fire_front"} {ani_play "fire_front_common"}
 				else volume "recoil_gun_left"  {ani_play "fire_left"} {ani_play "fire_left_common"}	
 				else volume "recoil_gun_right"  {ani_play "fire_right"} {ani_play "fire_right_common"}	
 				else volume "recoil_gun_back"  {ani_play "fire_back"} {ani_play "fire_back_common"}	
 				else volume "recoil_gun_baleft"  {ani_play "fire_bl"}		
 				else volume "recoil_gun_baright"  {ani_play "fire_br"}	
 				else volume "recoil_gun_frright"  {ani_play "fire_fr"}	
 				else volume "recoil_gun_frleft"  {ani_play "fire_fl"}	
 				else volume "recoil_gun_central"	
 				}	
 				}	
 				}	
 				{on "explosion"			{spawn "ex_air_big2" "basis"}		}	}