
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_Russ/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{parameters "ID=body;"}
				{animation
					{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/body_b"} {speed -0.6}}
					{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_russ/Animations/body_b"} {speed 0.6}}
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/body.ply"}
				
				{bone "Role"			;{}
					%args_role
				}
				{bone "visor_main"
					{Position -0.577053	0	150}
				}
				{bone "visor_driver"
					{Position 47.5581	-24.8461	59.6869}
				}
				{bone "fxsmoke2"
					{Matrix34
						-0.984808	0	0.173648
						0	-1	0
						0.173648	0	0.984808
						-89.7349	25.5595	62.4956
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						-0.984808	0	0.173648
						0	-1	0
						0.173648	0	0.984808
						-89.7349	-25.5595	62.4956
					}
				}
				{bone "fxfire4"
					{Position -0.577049	0	78.3599}
				}
				{bone "fxfire3"
					{Position 25	0	50}
				}
				{bone "fxfire1"
					{Position -55	0	60}
				}
			}
			{bone "wheelsl"
				{parameters "WheelsL;"}
				{Position -17.0824	48.3264	36.88}
				{bone "fxtracel3"
					{Position -68.63	0.173557	-36.88}
				}
				{bone "fxtracel2"
					{Position -31.406	0.173557	-36.88}
				}
				{bone "fxtracel1"
					{Position 32.501	0.173557	-36.88}
				}
				{bone "trackl"
					{parameters "ID=trackleft;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/tracksl.ply"}
				}
			}
			{bone "wheelsr"
				{parameters "WheelsR;"}
				{Position -17.0824	-48.3264	36.88}
				{bone "fxtracer1"
					{Position 32.501	-0.173729	-36.88}
				}
				{bone "fxtracer2"
					{Position -31.406	-0.173729	-36.88}
				}
				{bone "fxtracer3"
					{Position -68.63	-0.173729	-36.88}
				}
				{bone "trackr"
					{parameters "ID=trackright;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/tracksr.ply"}
				}
			}
			{bone "body2"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/body_tracks.ply"}
				
				{bone "Role_S"	
					%args_sponson
				}
				{bone "hatch_l"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-46.6915	60.1226	45.123
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/hatch_l.ply"}
				}
				{bone "hatch_r"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-46.6915	-60.1226	45.123
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/russ_chassis/hatch_r.ply"}
				}
			}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit3"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	100	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					50	100	0
				}
			}
			{bone "emit5"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-36	72	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-36	-72	0
				}
			}
			{bone "emit6"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	-91	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					50	-100	0
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_Russ/Model/base/+base_vol.inc")
	
	%args_vol
)