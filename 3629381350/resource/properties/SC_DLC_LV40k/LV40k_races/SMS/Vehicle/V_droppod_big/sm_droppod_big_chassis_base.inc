
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_droppod_big/animations/anm.ext"}
		
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/body.ply"}
				{bone "door1"
					{Position 0	-59.07	33.22}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/door1.ply"}
				}
				{bone "door2"
					{Matrix34
						0.866025	-0.5	0
						0.5	0.866025	0
						0	0	1
						-51.1761	29.5451	33.22
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/door2.ply"}
				}
				{bone "door3"
					{Matrix34
						0.866025	0.5	0
						-0.5	0.866025	0
						0	0	1
						51.1693	29.5475	33.22
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/door3.ply"}
				}
				{bone "floor_mesh"
					{parameters "Ground;Land;"}
					{Position 0	0	5}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/floor_mesh.ply" {Ground}}
					{visibility 0}
				}
				{bone "floor"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_big_chassis/floor.ply"}
				}
				{bone "fx_droppod"
					{Matrix34
						-0.5	0.866026	0
						-0.866026	-0.5	0
						0	0	1
						1.16229e-05	0	180
					}
				}
				{bone "spawn_point"
					{Matrix34
						0.866025	0.5	0
						-0.5	0.866025	0
						0	0	1
						0	0	42
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/v_droppod_big/Model/+base_vol.inc")
	
	%args_vol
)