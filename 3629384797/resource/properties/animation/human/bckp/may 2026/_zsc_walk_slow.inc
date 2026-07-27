
; walk
{sequence "walk_gun_up" 	{file "locomotion\walk_up"}					{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "walk_down"		{file "locomotion\walk_down"}				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}	{events {0 "SC_H_Request_Anm_Walk_Spot"}}}	
{sequence "walk_empty_up" 	{file "locomotion\anim_walk_empty_up.anm"}	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "walk_strap_up" 	{file "locomotion\anim_walk_empty_up.anm"}	{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "walk_1hand" 		{file "locomotion\anim_walk_1hand.anm"}		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}
{sequence "walk_2hand" 		{file "locomotion\anim_walk_2hand.anm"}		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy.anm"}}

; // Mask
{sequence "walk_gun_up_mask" 		{file "locomotion\walk_up"}					{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}
{sequence "walk_down_mask"			{file "locomotion\walk_down"}				{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}
{sequence "walk_empty_up_mask" 		{file "locomotion\anim_walk_empty_up.anm"}	{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}
{sequence "walk_strap_up_mask" 		{file "locomotion\anim_walk_empty_up.anm"}	{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}
{sequence "walk_1hand_mask" 		{file "locomotion\anim_walk_1hand.anm"}		{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}
{sequence "walk_2hand_mask" 		{file "locomotion\anim_walk_2hand.anm"}		{speed 0.3} {resume}{events {6 "leg_left"} {31 "leg_right"}}}



; // TO BE REPLACED
{sequence "walk_corpse"		{speed 0.4} {resume}{events {20 "leg_left"}{47 "leg_right"}}}
{sequence "corpse_move" 	{speed 0.4} {resume}}
