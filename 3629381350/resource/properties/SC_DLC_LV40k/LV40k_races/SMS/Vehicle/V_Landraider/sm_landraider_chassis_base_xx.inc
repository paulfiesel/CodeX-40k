
(Define "Skeleton"
	{Skeleton
		{bone revolute "basis"
			{limits -0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "repos"
				{position -80 0 0}

				{bone "wheelsl"
					{parameters "wheelsL;"}
					{Position 86.1146	0	39.3701}
					{bone "fxtracel2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-78.7402	74.4862	-27.5591
						}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							86.6142	74.4862	-27.5591
						}
					}
					{bone "fxtracel3"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-19.7476	74.4862	-27.5591
						}
					}
					{bone "trackl"
						{parameters "ID=trackRight;"}
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-13.3629	76.6829	9.58943
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/trackl.ply"}
					}
					{bone prizmatic "suspension_l2"
						{limits -0.4 0.1}
						{Position 97.6324	76.6829	-22.3967}
						{bone revolute "wheell2"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l3"
						{limits -0.3 0.5}
						{Position 67.3445	76.6829	-22.3967}
						{bone revolute "wheell3"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l4"
						{limits -0.3 0.5}
						{Position 33.4267	76.6829	-22.3967}
						{bone revolute "wheell4"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l5"
						{limits -0.3 0.5}
						{Position -3.21361	76.6829	-22.3967}
						{bone revolute "wheell5"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l6"
						{limits -0.3 0.5}
						{Position -40.0808	76.6829	-22.3967}
						{bone revolute "wheell6"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l7"
						{limits -0.3 0.5}
						{Position -76.4942	76.6829	-22.3967}
						{bone revolute "wheell7"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_l8"
						{limits -0.4 0.1}
						{Position -109.845	76.6829	-21.7161}
						{bone revolute "wheell8"	{parameters "ID=trackright;Radius=0.41;"}}
					}
				}
				{bone "wheelsr"
					{parameters "wheelsR;"}
					{Position 86.1146	0	39.3701}
					{bone "fxtracer2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-78.7402	-74.574	-27.5591
						}
					}
					{bone "fxtracer1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							86.6142	-74.574	-27.5591
						}
					}
					{bone "fxtracer3"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-19.7476	-74.574	-27.5591
						}
					}
					{bone "trackr"
						{parameters "ID=trackRight;"}
						{Matrix34
							0	1	0
							-1	0	0
							0	0	1
							-13.3629	-76.8812	9.58943
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/trackr.ply"}
					}
					{bone prizmatic "suspension_r2"
						{limits -0.4 0.1}
						{Position 97.6324	-76.8811	-22.3967}
						{bone revolute "wheelr2"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r3"
						{limits -0.3 0.5}
						{Position 67.3445	-76.8812	-22.3967}
						{bone revolute "wheelr3"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r4"
						{limits -0.3 0.5}
						{Position 33.4267	-76.8812	-22.3967}
						{bone revolute "wheelr4"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r5"
						{limits -0.3 0.5}
						{Position -3.21359	-76.8812	-22.3967}
						{bone revolute "wheelr5"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r6"
						{limits -0.3 0.5}
						{Position -40.0808	-76.8812	-22.3967}
						{bone revolute "wheelr6"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r7"
						{limits -0.3 0.5}
						{Position -76.4942	-76.8812	-22.3967}
						{bone revolute "wheelr7"	{parameters "ID=trackright;Radius=0.41;"}}
					}
					{bone prizmatic "suspension_r8"
						{limits -0.4 0.1}
						{Position -109.845	-76.8812	-21.7161}
						{bone revolute "wheelr8"	{parameters "ID=trackright;Radius=0.41;"}}
					}
				}				
				{bone "body"
					{parameters "ID=body;"}
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						75.485	0	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/body.ply"}
				
					{Bone "Role"		;{}
						%args_role
					}
					{bone "hatch1"
						{Position -28.9248	50.7955	135.375}
						{bone revolute "pintle_lr"
							{parameters "ID=body;"}
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								0	0	0
							}
					;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/pintle_lr.ply"}
							{bone "gunner"
								{Position 2	-0.064106	-27}
							}
							{bone revolute "gun_rot_pintle"
								{Matrix34
									1	0	0
									0	0	1
									0	-1	0
									26.6846	-0.0641174	4.16579
								}
								{bone "lr_pintle"
									{parameters "ID=body;"}
									{Matrix34
										1	0	0
										0	0	-1
										0	1	0
										0	0	0
									}
							;//		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/lr_pintle.ply"}
									{bone "fxshell_pintle1"
										{Matrix34
											0	-1	0
											1	0	0
											0	0	1
											-0.909592	-3.47045	6.20445
										}
									}
									{bone "foresight_pintle"
										{Position 11.6221	0	5.28375}
									}
									{bone "fxshell_pintle2"
										{Matrix34
											0	1	0
											-1	0	0
											0	0	1
											-0.909592	3.70703	6.20445
										}
									}
								}
							}
						}
						{bone "hatch1b"
							{parameters "ID=body;"}
							{Position -17.8004	0.00546837	0.161697}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hatch1b.ply"}
						}
						{bone "hatch1a"
							{parameters "ID=body;"}
							{Position 17.8004	0.00547791	0.161697}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hatch1a.ply"}
						}
					}
					{bone "landraider_interior"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/landraider_interior.ply"}
					}
					{bone "frontdoor_up"
						{parameters "ID=body;"}
						{Position -0.126049	-98.6768	84.0514}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/frontdoor_up.ply"}
					}
					{bone "frontdoor_bot"
						{parameters "ID=body;"}
						{Position 0	-118.699	12.5472}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/frontdoor_bot.ply"}
					}
					{bone "landraider_smokelaunchers"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/landraider_smokelaunchers.ply"}
						
						{bone "fxsmoke_shot1"	{bone "smoke_shot1"}
							{Matrix34
								-0.573577	-0.819152	0
								0.819152	-0.573577	0
								0	0	1
								63.1963	-63.2522	136.438
							}
						}
						{bone "fxsmoke_shot2"	{bone "smoke_shot2"}
							{Matrix34
								0.573577	-0.819152	0
								0.819152	0.573577	0
								0	0	1
								86.0199	-63.2274	136.438
							}
						}
						{bone "fxsmoke_shot3"	{bone "smoke_shot3"}
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								74.436	-65.7519	137.807
							}
						}
						{bone "fxsmoke_shot4"	{bone "smoke_shot4"}
							{Matrix34
								0.573577	-0.819152	0
								0.819152	0.573577	0
								0	0	1
								-65.1009	-63.2274	136.438
							}
						}
						{bone "fxsmoke_shot5"	{bone "smoke_shot5"}
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								-76.6848	-65.7519	137.807
							}
						}
						{bone "fxsmoke_shot6"	{bone "smoke_shot6"}
							{Matrix34
								-0.573577	-0.819152	0
								0.819152	-0.573577	0
								0	0	1
								-87.9245	-63.2522	136.438
							}
						}
					}
					{bone "LR_radar"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/details_radar.ply"}		{visibility 0}
					}
					{bone "LR_antenna"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/details_antenna.ply"}
					}
					{bone "LR_lights"
						{parameters "ID=body;"}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/details_lights.ply"}
						{bone "headlightf"
							{Matrix34
								0	-1	0
								1	0	0
								0	0	1
								12.9941	10.9784	133.194
							}
						}
					}
					{bone "hkm_rot"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							38.7125	42.3596	130.555
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/hkm_rot.ply"}
						{bone "weapon_hkm"
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								-0.372772	-0.402229	7.09573
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/weapon_hkm.ply"}
							{bone "foresight_hkm"
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									14.934	1.05273	-2.00956
								}
							}
						}
					}
					{bone "visor_around"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	75.485	175
						}
					}
					{bone "headlightr1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-72.8783	-91.504	113.665
						}
					}
					{bone "headlightr2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-84.5167	-91.504	113.665
						}
					}
					{bone "fxlightred1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-66.5438	-89.7991	112.417
						}
					}
					{bone "fxlightred2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-66.5438	-89.7991	115.374
						}
					}
					{bone "fxlightgreen1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-61.7801	-90.6449	114.58
						}
					}
					{bone "fxlightgreen2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							61.619	-90.6449	114.58
						}
					}
					{bone "headlightl2"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							83.9378	-91.504	113.665
						}
					}
					{bone "fxlightred3"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							66.4156	-89.7991	115.374
						}
					}
					{bone "fxlightred4"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							66.4156	-89.7991	112.417
						}
					}
					{bone "headlightl1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							72.2995	-91.504	113.665
						}
					}
					{bone "engine"
						{parameters "ID=engine;"}
						{Position 0.00701652	139.64	77.5068}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/landraider_chassis/engine.ply"}
						{bone "fxsmoke1"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								16.3756	3.5566	50.1144
							}
						}
						{bone "fxsmoke2"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								33.3717	3.5566	50.1144
							}
						}
						{bone "fxsmoke3"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-16.2742	3.5566	50.1144
							}
						}
						{bone "fxsmoke4"
							{Matrix34
								0	0	1
								1	0	0
								0	1	0
								-33.2703	3.5566	50.1144
							}
						}
					}
					{bone "backlightr"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-77.4375	159.588	106.644
						}
					}
					{bone "backlightl"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							77.4375	159.588	106.644
						}
					}
					{bone "fx_fire1"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	142.347	98.2598
						}
					}
					{bone "fx_fire3"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-30.4147	51.3335	138.538
						}
					}
					{bone "fx_fire4"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							13.1579	-57.2233	90.2599
						}
					}
					{bone "fx_fire5"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	-44.8275	43.75
						}
					}
					{bone "fx_fire6"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							0	75.485	65.625
						}
					}
					{bone "passenger19"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							32.8125	69.1304	15.3125
						}
					}
					{bone "passenger18"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							10.9375	69.1304	15.3125
						}
					}
					{bone "passenger17"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-10.9375	69.1304	15.3125
						}
					}
					{bone "passenger16"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-32.8125	69.1304	15.3125
						}
					}
					{bone "passenger15"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							32.8125	30.9872	15.3125
						}
					}
					{bone "passenger14"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							10.9375	30.9872	15.3125
						}
					}
					{bone "passenger13"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-10.9375	30.9872	15.3125
						}
					}
					{bone "passenger12"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-32.8125	30.9872	15.3125
						}
					}
					{bone "passenger11"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							32.8125	-12.7628	15.3125
						}
					}
					{bone "passenger10"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							10.9375	-12.7628	15.3125
						}
					}
					{bone "passenger09"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-10.9375	-12.7628	15.3125
						}
					}
					{bone "passenger08"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-32.8125	-12.7628	15.3125
						}
					}
					{bone "passenger07"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							32.8125	-51.9613	15.3125
						}
					}
					{bone "passenger06"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							10.9375	-51.9613	15.3125
						}
					}
					{bone "passenger05"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-10.9375	-51.9613	15.3125
						}
					}
					{bone "passenger04"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-32.8125	-51.9613	15.3125
						}
					}
					{bone "passenger03"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							32.8125	-90.3976	15.3125
						}
					}
					{bone "passenger02"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							10.9375	-90.3976	15.3125
						}
					}
					{bone "passenger01"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-10.9375	-90.3976	15.3125
						}
					}
					{bone "passenger00"
						{Matrix34
							0	-1	0
							1	0	0
							0	0	1
							-32.8125	-90.3976	15.3125
						}
					}
				}
				{bone "emit6"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						32.4572	-182.43	0
					}
				}
				{bone "emit5"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						32.4572	182.43	0
					}
				}
				{bone "emit_enter2"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						265	0	0
					}
				}
				{bone "emit_enter3"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						265	35	0
					}
				}
				{bone "emit_enter1"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						265	-35	0
					}
				}
				{bone "emit9"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						11.586	182.43	0
					}
				}
				{bone "emit10"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						11.586	-182.43	0
					}
				}
				{bone "emit_enter4"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						252.8	-22.5	0
					}
				}
				{bone "emit_enter5"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						252.8	22.5	0
					}
				}
				{bone "emit_enter6"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						252.8	0	0
					}
				}
				{bone "emit_enter7"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						275	-17.5	0
					}
				}
				{bone "emit_enter8"
					{Matrix34
						-1	0	0
						0	-1	0
						0	0	1
						275	17.5	0
					}
				}
				{bone "emit_exit1"
					{Position 265	-35	0}
				}
				{bone "emit_exit2"
					{Position 265	0	0}
				}
				{bone "emit_exit3"
					{Position 265	35	0}
				}
				{bone "emit_exit4"
					{Position 252.8	-22.5	0}
				}
				{bone "emit_exit5"
					{Position 252.8	22.5	0}
				}
				{bone "emit_exit6"
					{Position 252.8	0	0}
				}
				{bone "emit_exit7"
					{Position 275	-17.5	0}
				}
				{bone "emit_exit8"
					{Position 275	17.5	0}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_Landraider/Model/base/+base_vol.inc")
	
	%args_vol
)