

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
						{spawn "mg_shell" "fx_invers1" x scale 0.07 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
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
			{bone show "lantern_s01"}
		}
	}

	{on operatable off					;// called on engine and body break
		{ani_stop "aircondition"}
		{bone hide "lantern_s01"}
	}

	{on "engine fullstop"					;// called on explosion
		{ani_stop "aircondition"}
	}
	{on spawn
			{bone hide "lantern_s01"}
	}
}

{"m1a1_hc"
	
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
						{spawn "mg_shell" "fx_invers1" x scale 0.07 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
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
			{bone show "lantern_s01"}
		}
	}

	{on operatable off					;// called on engine and body break
		{ani_stop "aircondition"}
		{bone hide "lantern_s01"}
	}

	{on "engine fullstop"					;// called on explosion
		{ani_stop "aircondition"}
	}
	{on spawn
			{bone hide "lantern_s01"}
	}
}

{"m1a1_hc_shovel"
	
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
						{spawn "mg_shell" "fx_invers1" x scale 0.07 {impulse up 0.2 0.3 dir 0.2 0.7 cz 0.2 0.1 forward 3 0.5 com}}
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
			{bone show "lantern_s01"}
		}
	}

	{on operatable off					;// called on engine and body break
		{ani_stop "aircondition"}
	}

	{on "engine fullstop"					;// called on explosion
		{ani_stop "aircondition"}
		{bone hide "lantern_s01"}
	}
	
	{on "construction_tank"
			{ani_play "shovel" 1}
        ("cannon_sandbag" args "tank_cover" "shovelPoint")
        {delay 5
            {spawn "spheredust_big_short" "shovelPoint"}
            {call "activate_vehicle"}
            {call "engine_on"}
            {ani_play "shovel" -1}
        }
     
    }
	{on spawn
			{bone hide "lantern_s01"}
	}
}