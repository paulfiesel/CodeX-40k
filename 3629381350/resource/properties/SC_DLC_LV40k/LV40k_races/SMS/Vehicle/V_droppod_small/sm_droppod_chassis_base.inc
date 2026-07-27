
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_droppod/animations/anm.ext"}
		
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "scale"
				{Matrix34
					0.6	0	0
					0	0.6	0
					0	0	0.6
					0	0	0
				}
				{bone "body"
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/body_ammo.ply"}
					{bone "door_bl"
						{Matrix34
							0.587785	0.809017	0
							-0.809017	0.587785	0
							0	0	1
							-33.3319	25.1486	25.6564
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/door_bl.ply"}
					}
					{bone "door_fl"
						{Matrix34
							0.961262	-0.275637	0
							0.275637	0.961262	0
							0	0	1
							13.6918	39.743	25.6564
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/door_fl.ply"}
					}
					{bone "door_f"
						{Position 42.113	-0.456779	25.6564}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/door_f.ply"}
					}
					{bone "door_fr"
						{Matrix34
							-0.938493	-0.345298	0
							0.345298	-0.938493	0
							0	0	1
							12.6498	-39.9315	25.6564
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/door_fr.ply"}
					}
					{bone "door_br"
						{Matrix34
							-0.615661	0.788011	0
							-0.788011	-0.615661	0
							0	0	1
							-33.9928	-24.096	25.6564
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/door_br.ply"}
					}
					{bone "fx_droppod"
						{Position 0.215572	0.0967661	143.005}
					}
					{bone "floor"
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/floor.ply"}
					}
					{bone "fx_steam1"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-15.8861	-11.812	138.376
						}
					}
					{bone "fx_steam2"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-15.8861	12.1265	138.376
						}
					}
					{bone "fx_steam3"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							6.50145	19.2011	138.376
						}
					}
					{bone "fx_steam4"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							6.3782	-18.8926	138.376
						}
					}
					{bone "fx_steam5"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							20.5884	0.444111	138.376
						}
					}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/v_droppod_small/Model/+base_vol.inc")
	
	%args_vol
)