{"airborne_cw"
	{on "die"
		{chassis_work 0}
		{drop_orders}
		{call "engine_stop"}
		{stop_sound "fall"}	
		{stop_sound "engine_stop"}
		{explosive 0}		
		{burn stop}	
		{bone hide "engine_work"}
		{tags add "destroyed"}	
		{delay 60 {delete}}
	}

	{on "leave_unit" overload	
		{if operatable	
			{call "cwsh_switch_hatch"}
		}
	}
}
	{"airborne no_explosion"
		{on contact
		}
		{on ground_hit	
			{call "die"}	
			{impulse up 0.1 com}
		}	
		{on "_explosion" overload	
			{call "die"}	
			{impulse up 0.1 com}
			("cut_part" args "wingr2"		0.5)
			("cut_part" args "wingl2"		0.5)	
		}	
		{on "fall_fx" overload	}
	}	
	{"air_part"
		{on spawn		
			{delay 0.1	
				{volumes enable contact contact_ground}	
			}
			{view stop ""}	
			{add_view "smoke_black" "smoke" "root"}	
			{view start "smoke"}		
			{delay 180 30		
				{view stop "smoke"}
			}
		}
		{on ground_hit	
			{if min_speed 5	
				{spawn "spheredust_big_short"}	
			}
		}
	}
	{"air_part wing"	
		{on ground_hit	
			{if volume "part"
				{if volume_bone_level 3	
					{call "tear_part"}	
				}
			}
		}
		{on "tear_part"		
			{tear "piece_big_airborne_wing" bone from_volume	
				{impulse up 0.1 0.05}	
			}	
		}
	}	
	;(include "Helicopter_M.inc")
	(include "missile_m.inc")