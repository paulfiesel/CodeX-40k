
(Define "Predator_W_Autocannon"
	{bone "gun"
		{parameters "ID=gun;"}
		{animation
			{sequence "repair" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_autocannon_b.anm"} {speed -0.8}}
			{sequence "break" {file "/properties/SC_DLC_LV40k/LV40k_races/SMS/Vehicle/V_Rhino/Animations/Predator/gun_autocannon_b.anm"} {speed 0.8}}
		}
		{Matrix34
			1	0	0
			0	0	-1
			0	1	0
			11.5758	0	-1.52588e-05
		}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/w_autocannon.ply"}
		{bone "w_ac_barrel"
			{parameters "ID=gun;"}
			{Position 39.1875	2.99813	-5.17083}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/predator/w_ac_barrel.ply"}
			{bone "foresight_predator_destructor"
				{Position
					48.8336	-0.0593319	0.202873
				}
			}
		}
		{bone "fx_predator_ac"
			{Position 13.3425	22.2382	-4.97472}
		}
	}
)