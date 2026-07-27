
(Define "Skeleton"
	{Skeleton
		{Extension "/properties/SC_DLC_LV40k/LV40k_races/IG/Vehicle/V_artillery/animations/anm.ext"}

		{bone "basis"
			{Orientation
				1	0	0
				0	-1	0
				0	0	1
			}		
			{bone "body"
				{parameters "ID=body;"}
				{Position 0.675419	-2.35558e-05	8.82213}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/body.ply"}
				{bone "standf"
					{parameters "ID=body;"}
					{Position 14.4072	-0.11424	-3.60471}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standf.ply"}
				}
				{bone "sw_aim_v"
					{parameters "ID=body;"}
					{Position -20.751	6.23528	12.0589}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/sw_aim_v.ply"}
				}
				{bone "standf_steer"
					{parameters "ID=body;"}
					{Position 19.6443	-0.212629	3.15638}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standf_steer.ply"}
				}
				{bone "standr"
					{parameters "ID=body;"}
					{Position -17.0908	-9.19139	4.65878}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standr.ply"}
					{bone "standl_steer"
						{parameters "ID=body;"}
						{Position -20.0659	-16.0033	5.38391}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standl_steer.ply"}
					}
					{bone "standr_fix"
						{parameters "ID=body;"}
						{Position -20.0659	-16.0033	-9.77439}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standr_fix.ply"}
					}
				}
				{bone "standl"
					{parameters "ID=body;"}
					{Position -17.0907	9.19141	4.65878}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standl.ply"}
					{bone "standr_steer"
						{parameters "ID=body;"}
						{Position -20.0659	16.0032	5.38393}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standr_steer.ply"}
					}
					{bone "standl_fix"
						{parameters "ID=body;"}
						{Position -20.0659	16.0033	-9.77439}
						{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/standl_fix.ply"}
					}
				}
				{bone "sw_aim_h"
					{parameters "ID=body;"}
					{Matrix34
						0.469472	-0.882948	0
						0.882948	0.469472	0
						0	0	1
						-20.8412	-6.10172	12.059
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/sw_aim_h.ply"}
				}
				{bone "role"
					{Position -0.675419	2.35558e-05	-8.82213}
					
					%args_role
					
					{bone "visor1"
						{Position 6.81132	0	45.2425}
					}
				}
				{bone "gunner"
					{Position -24.9722	-8.55178	-8.82213}
				}
				{bone "charger2"
					{Position -45.8077	-18.7843	-8.82213}
				}
				{bone "charger"
					{Position -29.7647	8.86972	-8.82213}
				}
				{bone "commander"
					{Position -57.6079	26.6413	-8.82213}
				}
				{bone "visor2"
					{Position -7.17542	2.35558e-05	56.1779}
				}
				{bone "fx_artillery1"
					{Position -23.2325	-13.932	10.9459}
				}
			}
			{bone "wheels"
				{parameters "ID=body;"}
				{Position 0.675419	-2.35558e-05	8.82213}
				{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/wheels.ply"}
				{bone "wheell"
					{parameters "ID=wheelleft;"}
					{Matrix34
						0	-1	0
						0	0	-1
						1	0	0
						0.0831851	16.4246	-1.23978e-05
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/wheell.ply"}
				}
				{bone "wheelr"
					{parameters "ID=wheelright;"}
					{Matrix34
						0	-1	0
						0	0	-1
						1	0	0
						0.0831828	-16.4245	-1.23978e-05
					}
					{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/ig_artillery/wheelr.ply"}
				}
			}
			{bone "driver4"
				{Position -26.1998	-20.6056	0}
			}
			{bone "driver3"
				{Position -49.913	18.7846	0}
			}
			{bone "driver2"
				{Position -49.913	-18.7843	0}
			}
			{bone "driver1"
				{Position -26.1998	20.6056	0}
			}
		}
	}
	
	(Include "/properties/SC_DLC_LV40k/LV40k_races/IG/vehicle/V_artillery/Model/base/+base_vol.inc")
	
	%args_vol
)