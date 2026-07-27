
{sequence "run_slow_down"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Slow"}}}
{sequence "run_slow_down_1"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Run_Slow"}}}
{sequence "run_slow_gun_up"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "run_slow_empty_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "run_slow_strap_up"	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "run_slow_down_mask"		{file "locomotion\jog_gun_down"}{speed 0.3} {resume} {events {15 "leg_left"} {36 "leg_right"}}}
{sequence "run_slow_down_1_mask"	{file "locomotion\jog_gun_down"}{speed 0.3} {resume} {events {15 "leg_left"} {36 "leg_right"}}}
{sequence "run_slow_gun_up_mask"	{file "locomotion\jog_gun_up"}{speed 0.3} {resume}}
{sequence "run_slow_empty_up_mask"	{file "locomotion\anim_run_empty_up.anm"}{speed 0.8} {resume}}
{sequence "run_slow_strap_up_mask"	{file "locomotion\anim_run_empty_up.anm"}{speed 0.3} {resume}}
