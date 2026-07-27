
(Define "Skeleton"
	{Skeleton
		{animation
			{sequence "close"			{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Mekgun/Animations/close"}}
			{sequence "fire"			{speed 0.4} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Mekgun/Animations/fire"}}
			
			{sequence "veh_idle_crew"	{speed 0.7} {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Mekgun/Animations/rot"}}
		}
		{bone revolute "basis"
			{parameters "wheelradius=0.6;"}
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "body"
				{parameters "ID=body;"}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/body.ply"}
				{bone "batterybox"
					{parameters "ID=body;"}
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/batterybox.ply"}
				}
				{bone "shield2"
					{parameters "ID=shield;"}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/shield2.ply"}
				}
				{bone revolute "turret"
					{parameters "ID=body;"}
					{Position -5.80194	0.0951999	10.3848}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/turret.ply"}
					{bone revolute "gun_rot"
						{parameters "ID=gun;"}
						{Matrix34
							1	0	0
							0	0	1
							0	-1	0
							1.10322	-0.00252809	24.6257
						}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/gun_rot.ply"}
						{bone "barrels01"
							{parameters "ID=gun;"}
							{Matrix34
								-1	0	0
								0	0	-1
								0	-1	0
								0.347455	-0.0105324	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/barrels01.ply"}
							{bone "barrels02"
								{parameters "ID=gun;"}
								{Matrix34
									1	0	0
									0	1	0
									0	0	1
									0	1.35824e-05	0
								}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/barrels02.ply"}
							}
							{bone "rot_anm"
								{parameters "ID=gun;"}
								{Position -12.9023	0.25767	-20.5754}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/rot_anm.ply"}
								{bone "fxlight6"
									{Matrix34
										-1	0	0
										0	1	0
										0	0	-1
										0.237236	-0.255128	-6.37152
									}
								}
							}
							{bone "foresight1"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									-71.1944	-0.0926652	-2.41278
								}
							}
							{bone "fxlight1"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									-45.6408	-0.0926658	-8.65251
								}
							}
							{bone "fxlight7"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									19.5608	-7.77462	-7.87151
								}
							}
							{bone "fxlight8"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									18.4737	4.92069	-10.7254
								}
							}
							{bone "fxlight2"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									-45.6408	-0.0926685	4.35835
								}
							}
							{bone "fxlight3"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									-57.0838	-0.0926665	-2.41278
								}
							}
							{bone "fxlight4"
								{Matrix34
									-1	0	0
									0	1	0
									0	0	-1
									17.2332	8.25646	-2.42794
								}
							}
							{bone "fire_anm2"
								{parameters "ID=gun;"}
								{Position -52.8693	0.13791	4.38012}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/fire_anm2.ply"}
							}
							{bone "cables"
								{parameters "ID=gun;"}
								{Position 0	0	0}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/cables.ply"}
							}
							{bone "fire_anm1"
								{parameters "ID=gun;"}
								{Position -52.9493	0.137933	-9.44888}
								{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/fire_anm1.ply"}
							}
						}
					}
					{bone "shield1"
						{parameters "ID=shield;"}
						{Position 5.80194	-0.0951999	-10.3848}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/shield1.ply"}
					}
					{bone "shield3"
						{parameters "ID=shield;"}
						{Position 5.80194	-0.0951999	-10.3848}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/shield3.ply"}
					}
					{bone "commander"
						{Position 4.49822	-20.3246	13.9602}
					}
					{bone "visor2"
						{Position 21.9506	-20.5081	35.7329}
					}
				}
				{bone "pivot_front"
					{bone "suspension_l1"
						{Position 16.5371	20.162	12.5404}
						{bone revolute "wheelleft"
							{parameters "ID=wheelleft;Radius=0.8;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0.0738449	-1.88218	-0.0972652
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/wheelleft.ply"}
						}
					}
					{bone "suspension_r1"
						{Position 16.5371	-19.9796	12.5404}
						{bone revolute "wheelright"
							{parameters "ID=wheelright;Radius=0.8;"}
							{Matrix34
								-1	0	0
								0	0	1
								0	1	0
								0.0738449	2.47959	-0.0972662
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/wheelright.ply"}
						}
					}
					{bone "fxtracer1"
						{Position 16.5371	-19.9796	2.30457}
					}
					{bone "fxtracel1"
						{Position 16.5371	20.162	2.30457}
					}
				}
				{bone "gunner"
					{Position -40.6693	-10.6512	0}
				}
				{bone "charger"
					{Position -42.5	15.4892	0}
				}
				{bone "standl"
					{parameters "ID=body;"}
					{Position -17.5	8.5	6.30174}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/standl.ply"}
				}
				{bone "standr"
					{parameters "ID=body;"}
					{Position -17.5	-8.5	6.30174}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/mekgun_chassis/standr.ply"}
				}
				{bone "visor"
					{Position -17.5099	0	75}
				}
			}
			{bone "emit1"
				{Position -50	15	0}
			}
			{bone "emit2"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-25	35	0
				}
			}
			{bone "emit3"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-25	-35	0
				}
			}
			{bone "emit4"
				{Position -50	-15	0}
			}
			{bone "driver1"
				{Position -50	0	0}
			}
			{bone "driver3"
				{Position -12.7562	-23.8317	0}
			}
			{bone "driver2"
				{Position -6.62795	19.7763	0}
			}
		}
	}
	
	(Include "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_Mekgun/Model/Base/+base_vol.inc")
	
	%args_vol
)