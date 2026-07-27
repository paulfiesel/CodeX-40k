
(Define "Ork_Sponsons_Base"
	{bone "ork_predator_side_gun_r_base"
		{parameters "id=aux_turret1;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_r_base.ply"}
		
		{bone "Visor6"
			{Position 8.94992	-75.9335	70.8312}
		}
		{bone revolute "aux_turret1"
			{parameters "id=aux_turret1;"}
			{Position 2.26379	-76.3756	61.8864}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_r_gun_rot.ply"}
			
			(include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_Rhino/Model/base_rhino/Ork_Predator/%R/healthy/healthy.inc")
			("%R")
		}
	}
	{bone "ork_predator_side_gun_l_base"
		{parameters "id=aux_turret2;"}
		{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_l_base.ply"}
		
		{bone "Visor5"
			{Position 8.94991	75.8249	70.8311}
		}
		{bone revolute "aux_turret2"
			{parameters "id=aux_turret2;"}
			{Position 2.40513	75.8714	61.8865}
			{VolumeView "/entity/[+SC_DLC_LV40k]/+Models/vehicles/rhino_chassis/ork_looted_predator/ork_predator_side_gun_l_gun_rot.ply"}
			
			(include "/properties/SC_DLC_LV40k/LV40k_races/SMS/vehicle/V_Rhino/Model/base_rhino/Ork_Predator/%L/healthy/healthy.inc")
			("%L")
		}
	}
)