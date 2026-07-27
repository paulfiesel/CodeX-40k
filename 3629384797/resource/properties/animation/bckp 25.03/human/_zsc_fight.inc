
{smooth 0.2}

; ========================================================================================================================================================================
; // ATTACK
; ========================================================================================================================================================================

{sequence "stand_bayonet_stab"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_front_knife"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_front_club_begin"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_club_finish"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_kick_lying_begin"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}

{sequence "fight_hit_right_hand"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_hit_left_hand"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_straight_hit_rhand"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_straight_hit_lhand"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_upper-cut_rhand"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}
{sequence "fight_body-hit_rhand"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_60f.anm"} {events {60 ""}}}

; // Mask
{sequence "stand_bayonet_stab_Mask"				{file "stand_bayonet_stab.anm"}			{speed 3} {dynamicSpeed {90 120 4}}}
{sequence "fight_front_knife_Mask"				{file "fight_front_knife.anm"}			{movement}}
{sequence "fight_front_club_begin_Mask"			{file "fight_front_club_begin.anm"}		{speed 1.2} {dynamicSpeed {0 2 0.25} {10 12 0.2}}}
{sequence "fight_club_finish_Mask"				{file "fight_club_finish.anm"}}
{sequence "fight_kick_lying_begin_Mask"			{file "fight_kick_lying_begin.anm"}		{dynamicSpeed {11.5 12 0.05}}}

{sequence "fight_hit_right_hand_Mask"			{file "fight_hit_right_hand.anm"}		{speed 2} {dynamicSpeed {0 10 0.8} {16 20 0.4}}}
{sequence "fight_hit_left_hand_Mask"			{file "fight_hit_left_hand.anm"}		{speed 2}  {dynamicSpeed {0 10 0.8} {15 16 0.08}}}
{sequence "fight_straight_hit_rhand_Mask"		{file "fight_straight_hit_rhand.anm"}	{speed 2}  {dynamicSpeed {0 10 0.8} {16 20 0.4}}}
{sequence "fight_straight_hit_lhand_Mask"		{file "fight_straight_hit_lhand.anm"}	{speed 2}  {dynamicSpeed {0 10 0.8} {15 16 0.08}}}
{sequence "fight_upper-cut_rhand_Mask"			{file "fight_upper-cut_rhand.anm"}		{speed 2}  {dynamicSpeed {0 10 0.8} {16 20 0.4}}}
{sequence "fight_body-hit_rhand_Mask"			{file "fight_body-hit_rhand.anm"}		{speed 3.0} {dynamicSpeed {0 1 0.08} {16 20 0.2}}}

; ========================================================================================================================================================================
; // STAGGER
; ========================================================================================================================================================================

{sequence "stand_after_straight_hit"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "stand_after_hit"						{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "stand_after_hit_1"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "stand_after_body-hit"				{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "step_back_after_hit"					{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "step_back_after_hit_1"  				{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "step_back_after_body-hit"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}
{sequence "step_back_after_body-hit_1"			{file "/[SC_Plataform]/SC_animations/human/z_dummy_30f.anm"} {events {0 "SC_H_Request_Anm_Squat_From_Stand"}}}

; // Mask
{sequence "stand_after_straight_hit_Mask"		{file "stand_after_straight_hit.anm"}}	
{sequence "stand_after_hit_Mask"				{file "stand_after_hit.anm"}				{speed 0.85}  {dynamicSpeed {10 11 0.09}}}
{sequence "stand_after_hit_1_Mask"				{file "stand_after_hit_1.anm"}				{speed 0.85}  {dynamicSpeed {10 11 0.09}}}
{sequence "stand_after_body-hit_Mask"			{file "stand_after_body-hit.anm"}			{dynamicSpeed {9 10 0.12}}}
{sequence "step_back_after_hit_Mask"			{file "step_back_after_hit.anm"}			{movement}}
{sequence "step_back_after_hit_1_Mask"  		{file "step_back_after_hit_1.anm"}			{movement}}
{sequence "step_back_after_body-hit_Mask"		{file "step_back_after_body-hit.anm"}		{movement} {dynamicSpeed {34 35 0.15}}}
{sequence "step_back_after_body-hit_1_Mask"		{file "step_back_after_body-hit_1.anm"}		{movement} {dynamicSpeed {34 35 0.15}}}
