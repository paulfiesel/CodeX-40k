
; ========================================================================================================================================================================
; // STAND
; ========================================================================================================================================================================

{smooth 0.025}

{sequence "stand_reload_rifle"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "stand_reload_piat"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "stand_reload_mgun"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "stand_reload_gun"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "stand_reload_pistol"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "stand_reload_bazooka"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}

{sequence "stand_reload_rifle_mask"		{file "stand_reload_rifle.anm"} {speed 0.5} {events {4 "open_bolt"} {32 "close_bolt"}}}
{sequence "stand_reload_piat_mask" 		{file "stand_reload_piat"} {speed 1}}
{sequence "stand_reload_mgun_mask" 		{file "stand_reload_mgun"} {speed 0.8}} ;{file "weapon\anim_mg_stand_reload_up.anm"} @note: commented out because of diff wep speeds.
{sequence "stand_reload_gun_mask" 		{file "weapon\anim_smg_stand_reload_up.anm"} {speed 1} {smooth 0.2} {events {1 "open_bolt"} {2 "close_bolt"}}}
{sequence "stand_reload_pistol_mask"	{file "weapon\anim_pistol_stand_reload_01_up.anm"}{speed 1} {smooth 0.2}}
{sequence "stand_reload_bazooka_mask" 	{file "stand_reload_bazooka"} {speed 1}}

; ========================================================================================================================================================================
; // SQUAT
; ========================================================================================================================================================================

{sequence "squat_reload_gun"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "squat_reload_piat"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "squat_reload_pistol"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "squat_reload_bazooka"		{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "squat_reload_rifle"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "squat_reload_mgun"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}

{sequence "squat_reload_gun_mask"		{file "weapon\anim_smg_crouch_reload.anm"}{speed 0.8} {smooth 0.1}}
{sequence "squat_reload_piat_mask"		{file "squat_reload_piat"} {speed 1}}
{sequence "squat_reload_pistol_mask"	{file "weapon\anim_pistol_crouch_reload_01_all.anm"}{speed 1}}
{sequence "squat_reload_bazooka_mask"	{file "squat_reload_bazooka"} {speed 1}}
{sequence "squat_reload_rifle_mask"		{file "weapon\anim_smg_crouch_reload.anm"}{speed 0.7}}
{sequence "squat_reload_mgun_mask" 		{file "squat_reload_gun.anm"} {speed 1}}

; ========================================================================================================================================================================
; // LIE / PRONE
; ========================================================================================================================================================================

{sequence "lie_reload_rifle"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "lie_reload_gun"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "lie_reload_mgun"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "lie_reload_bazooka"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "lie_reload_piat"				{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}
{sequence "lie_reload_pistol"			{resume} {file "/[SC_Plataform]/SC_animations/human/z_dummy_1f.anm"}	{events {0 "SC_H_Request_Anm_Reload"} {1 ""}} {Speed 0.6}}

{sequence "lie_reload_rifle_mask"		{file "weapon\lie_reload_gun"}{speed 0.8} {dynamicSpeed {0 10 0.6} {10 15 0.3}}}
{sequence "lie_reload_gun_mask" 		{file "weapon\lie_reload_gun"}{speed 1} {smooth 0.5}}
{sequence "lie_reload_mgun_mask" 		{file "weapon\anim_mg_lie_reload_01.anm"}{speed 1}{smooth 0.1} {dynamicSpeed {0 10 0.6} {10 15 0.3} {25 27 0.2}}}
{sequence "lie_reload_bazooka_mask" 	{file "lie_reload_bazooka"} {speed 1} {smooth 0}}
{sequence "lie_reload_piat_mask" 		{file "lie_reload_piat"} {speed 1}}
{sequence "lie_reload_pistol_mask" 		{file "weapon\anim_pistol_lie_reload_01.anm"}	{speed 1}{dynamicSpeed {0 10 0.6} {10 15 0.3}}}
