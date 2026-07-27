
(define "auto_gren_launcher"
    	{on fire "%mgun" overload
		;{spawn "startsmoke" inv_normal}
		("cw_check_shooting" weap_id(%mgun))
	}
)

(define "atgm_multi_launcher"
	;{on "init_%weapon"
	;	{add_view 	"rocket_smoke_bm13"		"%tail00"			"%tail00"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail01"			"%tail01"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail02"			"%tail02"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail03"			"%tail03"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail04"			"%tail04"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail05"			"%tail05"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail06"			"%tail06"}
	;	{add_view 	"rocket_smoke_bm13"		"%tail07"			"%tail07"}
	;}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{spawn "proj_probe" "%foresight" x  {tags add "%foresight"}}
		(define "fire_barrel"
			name "%0"
			{view start "%tail%0"}
			{spawn "startsmoke" "%foresight" x}
			{spawn "startsmoke" "%tail%0" x}
			{delay 0.4
				{view pause "%tail%0"}
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
		}
		("cw_check_shooting" weap_id(%weapon))
	}
)

(define "atgm_single_launcher"
	{on "init_%weapon"
		{add_view	"rok_tail"	"rok_tail_%weapon"	"%tail"}
	}
	{on fire "%weapon" overload
		("low_speed_bullet")
		{view start "rok_tail_%weapon"}
		{spawn "startsmoke" "%foresight" x}
		{spawn "startsmoke" "%tail" x}
		{spawn "proj_probe" "%foresight" x {tags add "%foresight"}}
		{delay 0.4 {view pause "rok_tail_%weapon"}}
		("cw_check_shooting" weap_id(%weapon))
		{delay 0.2 {call "spawn_shell"}}
	}
)

(define "custom_multi_launcher"	;cпавн на шутере без выбора боеприпаса
	{on "init_%weapon"
		{add_view 	"rok_tail"		"%tail00"			"%tail00"}
		{add_view 	"rok_tail"		"%tail01"			"%tail01"}
		{add_view 	"rok_tail"		"%tail02"			"%tail02"}
		{add_view 	"rok_tail"		"%tail03"			"%tail03"}
		{add_view 	"rok_tail"		"%tail04"			"%tail04"}
		{add_view 	"rok_tail"		"%tail05"			"%tail05"}
		{add_view 	"rok_tail"		"%tail06"			"%tail06"}
		{add_view 	"rok_tail"		"%tail07"			"%tail07"}
	}
	{on fire "%weapon" overload
		(define "fire_barrel"
			name "%0"
				{delay 0.1 {spawn "%missile_carrier" "%shooter%0"   x}}
				{view start "%tail%0"}
				{spawn "startsmoke" "%shooter%0" x}
				{spawn "startsmoke" "%tail%0" x}
				{delay 0.4
					{view pause "%tail%0"}
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
			}
		("cw_check_shooting" weap_id(%weapon))
	}
)


{"muzzle_mk19" ; // T40
	{on spawn
		{add_view	"flash_gun_hmg"		"flashbarrel1"			"Foresight1"}
	}
	{on fire "mgun"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
}

{"muzzle_m2hb"
	{on spawn
		{add_view	"flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight1"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"muzzle_m2hb1"
	{on spawn
		{add_view	"flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight2"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"muzzle_m2hb3"
	{on spawn
		{add_view	"flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight4"}
	}
	{on fire "mgun2"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"muzzle_m2hb2"
	{on spawn
		{add_view	"flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight4"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"muzzle_mi24" ; // T40
	{on spawn
		{add_view "flash_gun_big"			"flashbarrel00"	"foresight1"}
	}
	{on fire "mgun"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel00"}
		}
	}
}
(define "90-105mm_gilza_back"
	{on "spawn_shell"
		{spawn "shell_cannon" "turret_systems" x scale 1.0
			{impulse up 0.1 0.1 forward 2 0.5 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 6 2 "stop"}
			{delay 6 2.5 {hide 3}}
		}
	}
)

{"shorad"
	("apc_sound")
	("25-50mm_gilza" fxshell(fxshell))
	("radar_params" triplex(commander_triplex) visor(visor1) anim_rotate(none) marker(antirad_generator_usa))
;	("custom_sh_multi_launcher" weapon(gun3) foresight(foresight5) tail(tailL_) shooter(shooterl))
	{on "init_gun2"	
		{add_view 	"rok_tail"		"tailL_00"			"tailL_00"}
		{add_view 	"rok_tail"		"tailL_01"			"tailL_01"}
		{add_view	"startsmoke_link"	"tailL_00"	"shooterl00"}
		{add_view	"startsmoke_link"	"tailL_00"	"shooterl00"}
		{add_view	"startsmoke_link"	"tailL_00"	"tailL_00"}
		{add_view	"startsmoke_link"	"tailL_00"	"tailL_00"}
	}
	("atgm_multi_launcher"	weapon(gun) tail(tail) foresight(foresight5))	
	("custom_multi_launcher"	weapon(gun3) tail(tail_) shooter(shooter) missile(fim-92a))
}
{"m1296"
	("apc_sound")
	{on spawn		
		{add_view	 	"flash_gun_big"	"flashbarrel3"		"Foresight3"}
 		{add_view "zenit_gilz"		"shells_mg"	"fxshell_mgun"}
   }
	{on fire "mgun" overload
		{view start "flashbarrel3"}
		{view show	"shells_mg"}
		{view start	"shells_mg"}
		{delay 0.2
			{view pause	"shells_mg"}
		}
		("cw_check_shooting" weap_id(mgun))
		
	}
    ("autocannon")
	("25-50mm_gilza" fxshell(box00))
}

{"m1a1_hc_click_bait"
	("m1_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open"  end}
		{ani_play "open"  +1.0 resume}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open1"  end}
		{ani_play "open1" +1.0 resume}
		{ani_wind "mgun_aa2"  end}
		{ani_play "mgun_aa2" +1.0 resume}
		{ani_stop "observe"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{ani_play "mgun_aa2" -1.0 resume}
		{ani_play "observe" loop}
	}
	{on fire "mgun3"
		{ani_play "mgun2_fire" 1}
		{ani_play "mgun2_ammo" +1.0 resume}		
	}
	{on fire "mgun"
		{ani_play "mgun1_fire" 1}
		{ani_play "mgun1_ammo" +1.0 resume}		
						{spawn "gilza_20mm" "fx_invers1" x scale 0.07 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
	}
    {on "reload"
        {play_sound "eject_clip"}
        {delay 0.075
            {stop_sound "action_recoil"}
        }
        (define "ammo_box"
            {if name "mgun"
                {delay 0
                    {bone hide "ammo_box03"}
                    {tear "piece_tiny_steel" bone "ammo_box03" copy
                    {impulse up -0.01 com}
                    }
                    {delay 8.5
                        {bone show "ammo_box03"}
                    }
                }
            else
             {if name "mgun3"
                {delay 0
                    {bone hide "ammo_box02"}
                    {tear "piece_tiny_steel" bone "ammo_box02" copy
                    {impulse up -0.01 com}
                    }
                    {delay 4
                        {bone show "ammo_box02"}
                    }
                }
            }}
        )
        ("ammo_box" mg() box(03))
        ("ammo_box" mg(3) box(02))
    }
	{on operatable on					;// settings for engine while idle
		{if work "engine"
			{ani_play "aircondition" loop}
		}
	}

	{on operatable off					;// called on engine and body break
		{ani_stop "aircondition"}
	}

	{on "engine fullstop"					;// called on explosion
		{ani_stop "aircondition"}
	}
}

{"stay_close"
	{on spawn
		{ani_play "open"}
	}
}

{"change"
	{on spawn
	      {delay 0.1 {tex_mod "ukr"}}
            
	}
}



	
