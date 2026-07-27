
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_Chimera/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}
			{bone "emit1"
				{Position -91.5649	-13.3575	0}
			}
			{bone "emit2"
				{Position -101.501	-2.10161	0}
			}
			{bone "emit3"
				{Position -88.5827	9.62633	0}
			}
			{bone "emit4"
				{Position -75.841	-14.7638	0}
			}
			{bone "emit5"
				{Position -74.0496	-0.185793	0}
			}
			{bone "emit6"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					-1.02997e-05	78.7402	0
				}
			}
			{bone "emit7"
				{Matrix34
					0	1	0
					-1	0	0
					0	0	1
					-1.02997e-05	-78.7402	0
				}
			}
			{bone "body_tracks"
				{Position 0	0	0}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/body_tracks.ply"}
				{bone "trackr"
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/trackr.ply"}
				}
				{bone "trackl"
					{Position 0	0	0}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/trackl.ply"}
				}
				{bone "fxtracer3"
					{Position -45.2497	-42.7322	0}
				}
				{bone "fxtracer2"
					{Position -28.6694	-42.7322	0}
				}
				{bone "fxtracer1"
					{Position 31.1541	-42.7322	0}
				}
				{bone "fxtracel3"
					{Position -45.2497	43.4811	0}
				}
				{bone "fxtracel2"
					{Position -28.6694	43.4811	0}
				}
				{bone "fxtracel1"
					{Position 31.1541	43.4811	0}
				}
			}
			{bone "body"
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/body.ply"}
				
				{bone "Role"	
					%args_role
				}
				{bone "backdoor"
					{Position -67.3593	12.7663	45.0216}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/backdoor.ply"}
				}
				{bone "visor_driver"
					{Position 68.5369	-12.8103	45.7672}
				}
				{bone "visor_around"
					{Position 0	0	118.11}
				}
				{bone "fxfire4"
					{Position 22.6489	-7.65472	60.6809}
				}
				{bone "fxfire3"
					{Position -33.3575	-7.65472	41.4649}
				}
				{bone "fxfire1"
					{Position 50.3893	-7.65472	28.7935}
				}
				{bone "fxheadlight2"
					{Position -68.9023	-28.668	46.6231}
				}
				{bone "fxheadlight1"
					{Position -68.9023	28.6614	46.6231}
				}
				{bone "interior"
					{parameters "ID=body;"}
					{Position -1.65676	-1.09237	11.0733}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/interior.ply"}
				}
				{bone "lasguns"
					{Matrix34
						0	1	0
						-1	0	0
						0	0	1
						0	-0.0076983	0
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/lasguns.ply"}
					
					{bone revolute "rot_lasl1"	{Speed 0.009} {limits -45 45}
						{Position 26.7689	5.76152	56.8232}
						{bone revolute "las_l1"	{Speed 0.009} {limits -12 16}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_l1.ply"}
							{bone "foresight_lasl1"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.1199	2.63902	0.0188141
								}
							}
						}
					}
					{bone revolute "rot_lasl2"	{Speed 0.009} {limits -45 45}
						{Position 26.7891	29.6853	56.6968}
						{bone revolute "las_l2"	{Speed 0.009} {limits -12 16}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_l2.ply"}
							{bone "foresight_lasl2"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.0996	1.60282	0.060955
								}
							}
						}
					}
					{bone revolute "rot_lasl3"	{Speed 0.009} {limits -45 45}
						{Position 26.7244	52.6414	56.7797}
						{bone revolute "las_l3"	{Speed 0.009} {limits -12 16}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_l3.ply"}
							{bone "foresight_lasl3"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.1644	2.68249	0
								}
							}
						}
					}
					{bone revolute "rot_lasr1"	{Speed 0.009} {limits -45 45}
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-26.7545	5.76153	56.8232
						}
						{bone revolute "las_r1"	{Speed 0.009} {limits -12 16}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_r1.ply"}
							{bone "foresight_lasr1"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.1158	2.63901	-0.0188103
								}
							}
						}
					}
					{bone revolute "rot_lasr2"	{Speed 0.009} {limits -45 45}
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-26.7757	29.6853	56.6968
						}
						{bone revolute "las_r2"	{Speed 0.009} {limits -12 16}
							{Matrix34
								1	0	0
								0	0	1
								0	-1	0
								0	0	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_r2.ply"}
							{bone "foresight_lasr2"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.0945	1.60283	-0.0609512
								}
							}
						}
					}
					{bone revolute "rot_lasr3"	{Speed 0.009} {limits -45 45}
						{Matrix34
							-1	0	0
							0	-1	0
							0	0	1
							-26.711	52.6413	56.7797
						}
						{bone revolute "las_r3"	{Speed 0.009} {limits -12 16}
							{Orientation
								1	0	0
								0	0	1
								0	-1	0
							}
							{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/chimera_chassis/las_r3.ply"}
							{bone "foresight_lasr3"
								{Matrix34
									0.984808	0.173648	0
									0	0	-1
									-0.173648	0.984808	0
									22.1593	2.68249	3.05176e-05
								}
							}
						}
					}
				}
				{bone "dozer_bone"
					{Position 88.5827	0	29.5276}
				}
			}
		}
	}
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_chimera/Model/base/+base_vol.inc")
	
	%args_vol
)