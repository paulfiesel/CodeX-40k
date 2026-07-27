
{sequence "stand_look_around_gun"
	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}
	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}
}

{sequence "stand_look_around_gun_1"	
	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}
	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}
}

{sequence "stand_look_around_gun_2"		
	{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}
	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}
}

; // Mask
{sequence "stand_look_around_gun_mask"	
	{file "idle\gun"}
	{speed 1} {smooth 0.05} {resume}
}


; NOT YET DONE 
			
{sequence "stand_idle_1hand"			{file "idle\empty\idle_empty_01.anm"} 	{speed 0.8}{smooth 0.1}{resume}}
{sequence "stand_idle_empty_1" 			{file "idle\empty\idle_empty_02.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_2" 			{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_3" 			{file "idle\empty\idle_empty_02.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_4" 			{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_strap_1" 			{file "idle\empty\idle_empty_02.anm"} 	{speed 0.5}{smooth 0.2}}
{sequence "stand_idle_strap_2" 			{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_strap_3" 			{file "idle\empty\idle_empty_01.anm"} 	{speed 0.8}{smooth 0.2}}
