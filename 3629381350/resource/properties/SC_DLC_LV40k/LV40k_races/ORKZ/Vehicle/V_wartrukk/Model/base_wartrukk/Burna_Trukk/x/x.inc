
(Define "Burna_Trukk"
	{bone "burna_tank"
		{parameters "ID=body;"}
		{Matrix34
			0	1	0
			-1	0	0
			0	0	1
			-4.64875	-5.21654	-43.5242
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/Burna_Trukk/burna_tank.ply"}
		{bone "burna_gun_skinned_mesh"
			{parameters "ID=gun;"}
			{Position 6.78833	-46.1208	55.6931}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/Burna_Trukk/burna_gun_skinned_mesh.ply"}
		}
	}
	{bone revolute "turret"
		{parameters "ID=turret;"}
		{animation
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Animations/turret_b.anm"} {speed 0.6}}
		}
		{Position 18.1453	6.82751	-5.46275}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/turret.ply"}
		{bone revolute "gun_rot"
			{parameters "ID=gun;"}
			{animation
				{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/Orkz/Vehicle/V_wartrukk/Animations/gun_b.anm"} {speed 0.6}}
			}
			{Matrix34
				1	0	0
				0	0	1
				0	-1	0
				16.6871	-0.44583	13.4902
			}
			{bone "burna_bone"
				{Orientation
					0	-0.087156	-0.996195
					-1	0	0
					0	0.996195	-0.087156
				}
				{bone "foresight_burna"
					{Matrix34
						0	-1	0
						0.996195	0	0.0871553
						-0.0871553	0	0.996195
						-1.86648	-28.6435	8.2427
					}
				}
			}
		}
		{bone "visor_gunner"
			{Position 16.2645	2.81056	24.7321}
		}
		{bone "fxfire4"
			{Matrix34
				0	0	1
				0	1	0
				-1	0	0
				0.580734	-0.0747318	-2.63371
			}
		}
		{bone "commander"
			{Position -5.66802	0.421346	6.23001}
		}
	}
	{bone "assaulttrukk_front"
		{parameters "ID=body;"}
		{Position 0.538009	15.446	-44.1071}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/Burna_Trukk/assaulttrukk_front.ply"}
		{bone "assaulttrukk_details2"
			{parameters "ID=body;"}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/Vehicles/Wartrukk_Chassis/Burna_Trukk/assaulttrukk_details2.ply"}
		}
	}
)