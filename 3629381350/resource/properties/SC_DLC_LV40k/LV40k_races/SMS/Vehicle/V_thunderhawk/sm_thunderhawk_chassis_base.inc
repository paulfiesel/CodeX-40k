
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_thunderhawk/animations/anm.ext"}
		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{Orientation
					0	1	0
					-1	0	0
					0	0	1
				}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/body.ply"}
				
				%args_role
				
				{bone "interior"
					{Position -282.892	-258.89	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/interior.ply"}
				}
				{bone "door_frontal"
					{Position 2.72751e-05	-327.923	42.2458}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/door_frontal.ply"}
				}
				{bone "door_right"
					{Position -68.6002	-150.834	110.298}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/door_right.ply"}
				}
				{bone "door_left"
					{Position 68.6002	-150.834	110.298}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/door_left.ply"}
				}
				{bone "z_weapons"
					{Orientation
						0	-1	0
						1	0	0
						0	0	1
					}
					{bone "frontal_l_hb"
						{Position 302.346	90.1507	97.4497}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/frontal_l_hb.ply"}
						{bone "fhbl"
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								19.5395	0.0012207	4.11444
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/fhbl.ply"}
							{bone "foresight_fhbl"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									31.4207	-1.82944	-0.000152588
								}
								{bone "fhbl_barrels00"
									{Position -6.38293	-6.37586	0}
								}
								{bone "fhbl_barrels01"
									{Position -6.38293	6.26283	0}
								}
								{bone "fhbl_shell00"
									{Matrix34
										0	-1	0
										1	0	0
										0	0	1
										-28.6821	-9.7822	2.49094
									}
								}
								{bone "fhbl_shell01"
									{Matrix34
										0	1	0
										-1	0	0
										0	0	1
										-28.6821	9.78265	2.49094
									}
								}
							}
						}
					}
					{bone "frontal_r_hb"
						{Position 302.346	-90.1506	97.4497}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/frontal_r_hb.ply"}
						{bone "fhbr"
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								19.5396	-0.00112152	4.11443
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/fhbr.ply"}
							{bone "foresight_fhbr"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									31.4207	-1.82944	3.05176e-05
								}
								{bone "fhbr_barrels01"
									{Position -6.38293	6.26282	0}
								}
								{bone "fhbr_barrels00"
									{Position -6.38293	-6.37587	0}
								}
								{bone "fhbr_shell00"
									{Matrix34
										0	-1	0
										1	0	0
										0	0	1
										-28.6821	-9.7822	2.49094
									}
								}
								{bone "fhbr_shell01"
									{Matrix34
										0	1	0
										-1	0	0
										0	0	1
										-28.6821	9.78265	2.49094
									}
								}
							}
						}
					}
					{bone "gun_rot_thundercannon"
						{Position -94.7497	-1.52588e-05	265.657}
						{bone "th_thundercannon"
							{Orientation
								1	0	0
								0	0	1
								0	-1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/th_thundercannon.ply"}
							{bone "foresight_thundercannon"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									234.36	0.212341	0
								}
							}
						}
					}
				}
				{bone "z_landing_gear"
					{Orientation
						0	-1	0
						1	0	0
						0	0	1
					}
					{bone "landing_rear"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-159.47	-3.05176e-05	53.8639
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/landing_rear.ply"}
					}
					{bone "landing_frontal"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							184.317	6.10352e-05	22.8504
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/landing_frontal.ply"}
					}
				}
				{bone "z_wings"
					{Orientation
						0	-1	0
						1	0	0
						0	0	1
					}
					{bone "front_wing_left"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							221.824	128.048	132.049
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/front_wing_left.ply"}
						{bone "fxlight4"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								53.2453	5.08125	-0.178787
							}
						}
					}
					{bone "top_wing_left"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-138.848	70.2304	223.922
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/top_wing_left.ply"}
					}
					{bone "back_wing_left"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-140	67.5	115
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/back_wing_left.ply"}
						{bone "wing_hb_left"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								283.857	-23.8029	-9.93361
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/wing_hb_left.ply"}
							{bone "hbs_wgl"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									-1.84158	0.0012207	-15.0503
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/hbs_wgl.ply"}
								{bone "foresight_wgl"
									{Matrix34
										1	0	0
										0	0	-1
										0	1	0
										34.6452	-5.35006	3.05176e-05
									}
									{bone "wgl_barrels00"
										{Position -6.38293	-10.1052	0}
									}
									{bone "wgl_barrels01"
										{Position -6.38295	9.9975	0}
									}
									{bone "wgl_shell00"
										{Matrix34
											0	-1	0
											1	0	0
											0	0	1
											-28.6821	-13.3917	2.49094
										}
									}
									{bone "wgl_shell01"
										{Matrix34
											0	1	0
											-1	0	0
											0	0	1
											-28.6821	13.3835	2.49094
										}
									}
								}
							}
						}
						{bone "fxlight3"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								331.817	12.1134	7.97327
							}
						}
						{bone "fxsmoke2"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								64.9965	165.393	2.94641
							}
						}
						{bone "fxrotor1"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								64.9965	-148.697	2.94641
							}
						}
						{bone "fxfire4"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								64.9965	-78.3678	2.94641
							}
						}
					}
					{bone "top_wing_right"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-138.847	-70.2304	223.922
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/top_wing_right.ply"}
					}
					{bone "back_wing_right"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-140	-67.5	115
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/back_wing_right.ply"}
						{bone "wing_hb_right"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-283.857	-23.8029	-9.93365
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/wing_hb_right.ply"}
							{bone "hbs_wgr"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									-1.84158	-0.00119019	-15.0502
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/hbs_wgr.ply"}
								{bone "foresight_wgr"
									{Matrix34
										1	0.000102345	0
										0	-0.000136363	-1
										-0.000102345	1	-0.000136363
										34.6453	-5.35007	-9.15527e-05
									}
									{bone "wgr_barrels00"
										{Position -6.38293	-10.1052	0}
									}
									{bone "wgr_barrels01"
										{Position -6.38294	9.9975	0}
									}
									{bone "wgr_shell00"
										{Matrix34
											0	-1	0
											1	0	0
											0	0	1
											-28.6821	-13.3916	2.49094
										}
									}
									{bone "wgr_shell01"
										{Matrix34
											0	1	0
											-1	0	0
											0	0	1
											-28.6821	13.3835	2.49094
										}
									}
								}
							}
						}
						{bone "fxlight2"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-331.817	12.1134	7.97327
							}
						}
						{bone "fxrotor2"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-64.9965	-148.697	2.94641
							}
						}
						{bone "fxsmoke3"
							{Matrix34
								0	1	0
								-1	0	0
								0	0	1
								-64.9965	165.393	2.94641
							}
						}
						{bone "fxfire2"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-64.9965	-78.3678	2.94641
							}
						}
					}
					{bone "front_wing_right"
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							221.824	-128.048	132.049
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/thunderhawk_chassis/front_wing_right.ply"}
						{bone "fxlight1"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-53.2455	5.08127	-0.178787
							}
						}
					}
				}
				{bone "visor_driver"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	-312.5	194.828
					}
				}
				{bone "fxsmoke1"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						1.67847e-05	422.551	93.3681
					}
				}
				{bone "visor_around"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						1.80309e-05	100	325
					}
				}
				{bone "fxfire3"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						1.25885e-05	53.4704	278.03
					}
				}
				{bone "fxfire1"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	-260.152	196.24
					}
				}
				{bone "fxfire5"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						0	-151.956	84.7922
					}
				}
			}
			{bone "emit16"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					150	110	0
				}
			}
			{bone "emit15"
				{Position 495	60	0}
			}
			{bone "emit14"
				{Position 495	30	0}
			}
			{bone "emit13"
				{Position 495	0	0}
			}
			{bone "emit12"
				{Position 495	-30	0}
			}
			{bone "emit11"
				{Position 495	-60	0}
			}
			{bone "emit10"
				{Position 465	-60	0}
			}
			{bone "emit9"
				{Position 465	-30	0}
			}
			{bone "emit8"
				{Position 465	60	0}
			}
			{bone "emit7"
				{Position 465	30	0}
			}
			{bone "emit6"
				{Position 465	0	0}
			}
			{bone "emit5"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					180	-110	0
				}
			}
			{bone "emit4"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					150	-110	0
				}
			}
			{bone "emit3"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					120	-110	0
				}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					120	110	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					180	110	0
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_thunderhawk/Model/+base_vol.inc")
	
	%args_vol
)