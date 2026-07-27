
(Define "CT_Heavy_AC"
	{bone "armored_hatch"
		{parameters "ID=turret;"}
		{Position -6.31286	-11.3222	-55.3386}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/armored_hatch.ply"}
		
		{bone "autocannon"
			{parameters "ID=gun;"}
			{Position 4.03693	0.144203	69.6607}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/autocannon.ply"}
			{bone "autocannon_barrel"
				{parameters "ID=gun;"}
				{Position 29.2389	-8.24411	1.89056}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/autocannon_barrel.ply"}
				{bone "foresight_ac"
					{Position 18.2148	0	0}
				}
			}
			{bone "fxshell_ac"
				{Matrix34
					0	-1	0
					1	0	0
					0	0	1
					2.65221	-14.7681	-3.56113
				}
			}
		}
		{bone "fx_optic3"
			{Position 6.96755	-7.04483	74.865}
		}
		{bone "fx_optic2"
			{Position 7.35628	-8.53385	75.4849}
		}
		{bone "fx_optic1"
			{Position 7.12722	-6.64392	75.9432}
		}
	}
)

(Define "CT_Heavy_AS2"
	{bone "armored_hatch"
		{parameters "ID=turret;"}
		{Position -6.31286	-11.3222	-55.3386}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/armored_hatch.ply"}
		
		{bone "assaultcannons"
			{parameters "ID=gun;"}
			{Position 4.03693	0.144203	69.6607}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/assaultcannons.ply"}
			{bone "as2_barrel00"
				{parameters "ID=gun;"}
				{Position 18.4292	-4.22482	0.839912}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/as2_barrel00.ply"}
			}
			{bone "as2_barrel01"
				{parameters "ID=gun;"}
				{Position 18.4292	-8.78909	0.840195}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/taurox_chassis/as2_barrel01.ply"}
			}
			{bone "foresight_as2"
				{Position 29.471	-6.52981	1.03275}
				{bone "barrel_as2_01"
					{Position -4.10583	2.29969	-0.130478}
				}
				{bone "barrel_as2_00"
					{Position -4.10583	-2.28347	-0.130478}
				}
				{bone "fxshell_as2"
					{Matrix34
						0	-1	0
						1	0	0
						0	0	1
						-26.8188	-8.23831	-4.59387
					}
				}
			}
		}
	}
)