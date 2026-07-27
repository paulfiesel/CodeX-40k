
; ========================================================================================================================================================================
; // STANDING IDLE POSING
; ========================================================================================================================================================================

{sequence "stand_look_around_gun"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_look_around_gun_1"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_look_around_gun_2"		{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}

{sequence "stand_idle_1hand"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_empty_1" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_empty_2" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_empty_3" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_empty_4" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_strap_1" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_strap_2" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "stand_idle_strap_3" 			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}

; // Mask
{sequence "stand_look_around_gun_mask"		{file "idle\gun"}		{speed 1} {smooth 0.05} {resume}}
{sequence "stand_idle_1hand_mask"			{file "idle\empty"} 	{speed 0.8}{smooth 0.1}{resume}}

{sequence "stand_idle_empty_1_mask" 		{file "idle\empty"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_2_mask" 		{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_3_mask" 		{file "idle\empty\idle_empty_02.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_empty_4_mask" 		{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_strap_1_mask" 		{file "idle\empty\idle_empty_02.anm"} 	{speed 0.5}{smooth 0.2}}
{sequence "stand_idle_strap_2_mask" 		{file "idle\empty\idle_empty_03.anm"} 	{speed 0.8}{smooth 0.2}}
{sequence "stand_idle_strap_3_mask" 		{file "idle\empty\idle_empty_01.anm"} 	{speed 0.8}{smooth 0.2}}

{sequence "stand_idle_empty_for_pose" 		{file "idle\empty"} {speed 0.3} {smooth 0.006}}

; ========================================================================================================================================================================
; // SQUAT IDLE POSING
; ========================================================================================================================================================================

{sequence "idle_crouch_empty"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}};	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "idle_crouch_gun"				{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}};	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}

; // MASK
{sequence "idle_crouch_empty_mask"		{file "idle\empty_crouch"}	{speed 0.8}{smooth 0.2}}
{sequence "idle_crouch_gun_mask"		{file "idle\gun_crouch"}	{speed 0.8}{smooth 0.2}}

; ========================================================================================================================================================================
; // PRONE IDLE POSING
; ========================================================================================================================================================================

{sequence "idle_lie_empty"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}};	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}
{sequence "idle_lie_gun"			{file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}};	{events {0 "SC_H_Request_Anm_Look_Around_Gun"}}}

; // MASK
{sequence "idle_lie_empty_mask"		{file "idle_lie_empty"}		{speed 1.5}{smooth 0.2}}
{sequence "idle_lie_gun_mask"		{file "idle_lie_gun"}		{speed 1.5}{smooth 0.2}}