
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_droppod/animations/anm.ext"}
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/body_ammo.ply"}
		;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/body.ply"}
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
				{bone "seat10"
					{Matrix34
						0.939692	0.342021	0
						-0.342021	0.939692	0
						0	0	1
						-1.81866	26.6616	26.5
					}
				}
				{bone "seat9"
					{Matrix34
						-0.573577	0.819152	0
						-0.819152	-0.573577	0
						0	0	1
						17.1779	20.6062	26.5
					}
				}
				{bone "seat8"
					{Matrix34
						-0.573576	-0.819152	0
						0.819152	-0.573576	0
						0	0	1
						17.4513	-20.3547	26.5
					}
				}
				{bone "seat7"
					{Matrix34
						0.965926	-0.258819	0
						0.258819	0.965926	0
						0	0	1
						-2.35781	-26.7141	26.5
					}
				}
				{bone "seat6"
					{Matrix34
						0.0871561	-0.996195	0
						0.996195	0.0871561	0
						0	0	1
						-26.1212	-5.87242	26.5
					}
				}
				{bone "seat5"
					{Matrix34
						-0.939693	0.34202	0
						-0.34202	-0.939693	0
						0	0	1
						-13.2835	-23.8782	26.5
					}
				}
				{bone "seat4"
					{Matrix34
						-0.939693	-0.34202	0
						0.34202	-0.939693	0
						0	0	1
						-14.4496	22.7269	26.5
					}
				}
				{bone "seat3"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						-25.8492	5.66216	26.5
					}
				}
				{bone "seat2"
					{Matrix34
						0.573576	-0.819152	0
						0.819152	0.573576	0
						0	0	1
						25	10	26.5
					}
				}
				{bone "seat1"
					{Matrix34
						0.573576	0.819152	0
						-0.819152	0.573576	0
						0	0	1
						25	-10	26.5
					}
				}
				{bone revolute "turret"
					{Position 0	0	98.8092}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/turret.ply"}
					{bone revolute "gun_rot"
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							-1.0045	0.000665045	-8.20924
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/gun_rot.ply"}
						{bone "foresight3"
							{Matrix34
								1	0	0
								0	0	-1
								0	1	0
								18.8974	-2.91821	1.25885e-05
							}
							{bone "barrels00"
								{Position -3.4816	-5.51193	0}
							}
							{bone "barrels01"
								{Position -3.48161	5.45318	0}
							}
							{bone "shell00"
								{Matrix34
									0	-1	0
									1	0	0
									0	0	1
									-15.6448	-7.30454	1.3587
								}
							}
							{bone "shell01"
								{Matrix34
									0	1	0
									-1	0	0
									0	0	1
									-15.6448	7.30009	1.3587
								}
							}
						}
					}
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
				{bone "floor_mesh"
					{parameters "Ground;Land;"}
					{Matrix34
						0.819152	0.573576	0
						-0.573576	0.819152	0
						0	0	1
						0	0	-2.9088
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/droppod_chassis/floor_mesh.ply" {Ground}}
					{visibility 0}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/v_droppod/Model/+base_vol.inc")
	
	%args_vol
)