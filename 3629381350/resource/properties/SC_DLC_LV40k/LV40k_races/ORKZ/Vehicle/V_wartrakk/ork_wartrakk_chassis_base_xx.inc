
(Define "Skeleton"
	{Skeleton
		{bone revolute "basis"
			{limits -0 0}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "camera_artillery"
				{Position 0	0	600}
			}
			{bone "emit3"
				{Position -78.7402	0	0}
			}
			{bone "emit2"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					0	-63.7992	0
				}
			}
			{bone "emit1"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					0	63.8084	0
				}
			}
			{Bone "Resize"
				{Matrix34
					0.9	0	0
					0	0.9	0
					0	0	0.9	
					0	0	0
				}
				{bone "wheelsr"
					{parameters "wheelsR;"}
					{Position 0	0	-4.76837e-05}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheelsr.ply"}
					{bone "trackr"
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/trackr.ply"}
					}
					{bone revolute "wheelr1"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							40.1966	-29.5211	24.1659
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheelr1.ply"}
					}
					{bone revolute "wheelr2"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							33.1981	-29.5211	9.35353
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheelr2.ply"}
					}
					{bone revolute "wheelr3"
						{parameters "ID=trackright;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-31.7919	-31.7362	10.2647
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheelr3.ply"}
					}
					{bone "fxtracer1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							33.6387	-29.5211	4.92131
						}
					}
					{bone "fxtracer2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-31.7919	-31.7362	4.92131
						}
					}
				}
				{bone "wheelsl"
					{parameters "wheelsL;"}
					{Position 0	0	-4.76837e-05}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheelsl.ply"}
					{bone "trackl"
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/trackl.ply"}
					}
					{bone revolute "wheell1"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							40.1966	29.4942	24.1659
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheell1.ply"}
					}
					{bone revolute "wheell2"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							33.1981	29.4942	9.35352
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheell2.ply"}
					}
					{bone revolute "wheell3"
						{parameters "ID=trackleft;Radius=0.41;"}
						{Matrix34
							-1	0	0
							0	0	1
							0	1	0
							-31.792	31.7093	10.2647
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/wheell3.ply"}
					}
					{bone "fxtracel1"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							33.6387	29.4942	4.92131
						}
					}
					{bone "fxtracel2"
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-31.792	31.7093	4.92131
						}
					}
				}
				{bone "body"
					{parameters "ID=body;"}
					{Position 10.3018	1.08762	26.8109}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/body.ply"}
					{bone "fxfire3"
						{Position -10.3018	-1.08762	-4.45453}
					}
					{bone "fxfire4"
						{Position -40.7692	-1.08762	2.06428}
					}
					{bone "visor"
						{Position -10.3018	-1.08762	51.9293}
					}
					{bone "fxfire1"
						{Position 21.4528	-1.08762	4.26631}
					}
					{bone revolute "aux_turret"		; // RESIZED!
						{Matrix34
							1.11	0	0
							0	1.11	0
							0	0	1.11
							9.61821	-0.9106	19.24
						}
						{bone revolute "aux_turret_rot"
							{Orientation
								1	0	0
								0	0	1
								0	-1	0
							}
							{bone "aux_big_shootas"
								{parameters "ID=auxturret1;"}
								{Matrix34
									1	0	0
									0	0	-1
									0	1	0
									0	0	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/aux_big_shootas.ply"}
								{bone "foresight3"
									{Position 32.6184	0	3.49228}
								}
								{bone "barrel00"
									{Position 31.6793	5.15809	3.49228}
								}
								{bone "barrel01"
									{Position 31.6793	-5.11018	3.49228}
								}
								{bone "fxshell01"
									{Matrix34
										0	-1	0
										1	0	0
										0	0	1
										-4.0128	-8.44413	4.86475
									}
								}
								{bone "fxshell00"
									{Matrix34
										0	1	0
										-1	0	0
										0	0	1
										-4.0128	8.41574	4.86475
									}
								}
							}
						}
					}
					{bone "main_gun_res"	; // RESIZED!
						{Matrix34
							1.11	0	0
							0	1.11	0
							0	0	1.11
							0	0	0
						}
						{bone revolute "main_gun"
							{Position 27.485	-1.08762	-11.4538}
							{bone revolute "bomb_chukka"
								{parameters "ID=gun;"}
								{Orientation
									1	0	0
									0	0	1
									0	-1	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/wartrakk_chassis/bomb_chukka.ply"}
								{bone "foresight2"
									{Matrix34
										1	0	0
										0	0	-1
										0	1	0
										32.6991	-0.636774	0
									}
								}
							}
						}
					}
					{bone "driver"		; // RESIZED!
						{Matrix34
							1.11	0	0
							0	1.11	0
							0	0	1.11
							-18.4475	-1.08762	-2.90403
						}
					}
					{bone "fxsmoke00"
						{Matrix34
							-0.819152	0	0.573576
							0	-1	0
							0.573576	0	0.819152
							-59.7013	-19.7876	7.02104
						}
					}
					{bone "fxsmoke01"
						{Matrix34
							-0.766045	0	0.642788
							0	-1	0
							0.642788	0	0.766045
							-55.2087	-24.1512	9.23712
						}
					}
					{bone "fxsmoke02"
						{Matrix34
							-0.642787	0	0.766045
							0	-1	0
							0.766045	0	0.642787
							-55.386	24.5275	11.4114
						}
					}
					{bone "fxsmoke03"
						{Matrix34
							-0.766045	0	0.642788
							0	-1	0
							0.642788	0	0.766045
							-56.783	18.2317	8.08475
						}
					}
				}
			}
		}
	}

	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrakk/Model/Base/+base_vol.inc")
	
	%args_vol
)