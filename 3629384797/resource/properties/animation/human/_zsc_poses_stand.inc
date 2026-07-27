
; // Replace blends with sequences for smooth transition and to register events.

; ========================================================================================================================================================================
; // MGUN
; ========================================================================================================================================================================

{blend "pose_stand_fire_mgun_down"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_mgun_down_1"	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 		
{blend "pose_stand_fire_mgun_up"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_mgun_up_1"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 

; // Mask
; {blend "pose_stand_fire_mgun_down_mask"		{pose "[ASV_LV]/stand_fire_mgun_down_1" begin}}
; {blend "pose_stand_fire_mgun_up_mask"			{pose "[ASV_LV]/stand_fire_mgun_up_1" begin}}

; {blend "pose_stand_fire_mgun_down_1_mask"		{pose "[ASV_LV]/stand_fire_mgun_down_1" begin}}
; {blend "pose_stand_fire_mgun_up_1_mask"		{pose "[ASV_LV]/stand_fire_mgun_up_1" begin}}

{sequence "pose_stand_fire_mgun_down_mask" 		{file "[ASV_LV]/stand_fire_mgun_down_1"}	{speed 0.08} {smooth 0.085}	{events {1 "sc_test_idle"}}}
{sequence "pose_stand_fire_mgun_up_mask"  		{file  "[ASV_LV]/stand_fire_mgun_up_1"}		{speed 0.08} {smooth 0.085}	{events {1 "sc_test_idle"}}}

{sequence "pose_stand_fire_mgun_down_1_mask" 	{file "[ASV_LV]/stand_fire_mgun_down_1"}	{speed 0.08} {smooth 0.085}	{events {1 "sc_test_idle"}}}
{sequence "pose_stand_fire_mgun_up_1_mask"  	{file  "[ASV_LV]/stand_fire_mgun_up_1"}		{speed 0.08} {smooth 0.085}	{events {1 "sc_test_idle"}}}


; ========================================================================================================================================================================
; // PISTOL
; ========================================================================================================================================================================

{blend "pose_stand_fire_pistol_down"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_pistol_up"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 	
{blend "pose_stand_fire_pistol_down_1"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_pistol_up_1"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_pistol_down_2"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_pistol_up_2"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 

; // Mask
; {blend "pose_stand_fire_pistol_down_mask" 	{pose "weapon\anim_pistol_stand_shoot_01_down" begin}}
; {blend "pose_stand_fire_pistol_up_mask"  		{pose  "weapon\anim_pistol_stand_shoot_01_up" begin}}

{sequence "pose_stand_fire_pistol_down_mask" 	{file "weapon\anim_pistol_stand_shoot_01_down"}	{speed 0.1} {smooth 0.1}	{events {1 "sc_test_idle"}}}
{sequence "pose_stand_fire_pistol_up_mask"  	{file  "weapon\anim_pistol_stand_shoot_01_up"}	{speed 0.1} {smooth 0.1}	{events {1 "sc_test_idle"}}}

; ========================================================================================================================================================================
; // GUN GENERIC
; ========================================================================================================================================================================

{blend "pose_stand_fire_gun_up_1"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_gun_down_1"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_gun_up"					{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_gun_down"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_gun_short_up"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_gun_short_down"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_rifle_up"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_fire_rifle_down"				{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_rifle_up"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_rifle_down"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_gun_up"			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_gun_down"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_gun_down_1"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_assault-fire_gun_up_1"		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 

; // Mask
{blend "pose_stand_fire_gun_up_mask" 			{pose "[ASV_LV]\stand_fire_gun_up" begin}}
{blend "pose_stand_fire_gun_down_mask" 			{pose "[ASV_LV]\stand_fire_gun_down" begin}}

{sequence "pose_stand_fire_rifle_up_mask"		{file "[SC]/stand_idle_rifle_up"}	{smooth 0.2} {speed 0.6}}
{sequence "pose_stand_fire_rifle_down_mask"		{file "[SC]/stand_idle_rifle_down"}	{smooth 0.2} {speed 0.6}}

; ========================================================================================================================================================================
; // POSES GENERIC
; ========================================================================================================================================================================

;{sequence "stand_flag"}
;{blend "pose_stand_pistol_up" 	{pose "stand_take_pistol_up_end" end}}
;{blend "pose_stand_empty_1" 	{pose "stand_idle_empty_1" begin}}
;{blend "pose_stand_strap_1" 	{pose "weapon\anim_stand_take_empty_start_01" begin}}
;{blend "pose_stand_1hand" 		{pose "walk_1hand" begin}}
;{blend "pose_stand_2hand" 		{pose "walk_2hand" begin}}
;{blend "pose_stand_corpse" 	{pose "stand_drop_corpse" begin}}
;{blend "pose_stand_flag" 		{pose "stand_flag" end}}
;{blend "pose_stand_down" 		{pose "stand_down" begin}}
;{blend "pose_stand_gun_down" 	{pose "stand_take_gun_down" end}}
;{blend "pose_stand_giveup_1" 	{pose "stand_giveup_1" end}}
;{blend "pose_stand_giveup_2" 	{pose "stand_giveup_2" end}}

{blend "pose_stand_1hand" 		{pose "walk_1hand" begin}}
{blend "pose_stand_2hand" 		{pose "walk_2hand" begin}}
{blend "pose_stand_corpse" 		{pose "stand_drop_corpse" begin}}
{blend "pose_stand_flag" 		{pose "stand_flag" end}}
{blend "pose_stand_giveup_1" 	{pose "stand_giveup_1" end}}
{blend "pose_stand_giveup_2" 	{pose "stand_giveup_2" end}}

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

{blend "stand_flag" 			{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_down" 		{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_pistol_up" 	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_empty_1" 	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_strap_1" 	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_bazooka" 	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 
{blend "pose_stand_gun_down" 	{pose "/[SC_Plataform]/SC_animations/human/z_dummy" end}} 


; // Mask
{blend "pose_stand_down_Mask" 		{pose "stand_down" begin}}
{blend "pose_stand_empty_1_Mask" 	{pose "stand_idle_empty_1" begin}}
{blend "pose_stand_strap_1_Mask" 	{pose "weapon\anim_stand_take_empty_start_01" begin}}

{sequence "stand_flag_mask" {file "stand_flag"}}


; {blend "pose_stand_bazooka_Mask" 	{pose "weapon\anim_bazooka_stand_shoot_all" begin}}

{sequence "pose_stand_bazooka_Mask" {file "weapon\anim_bazooka_stand_shoot_all"} {speed 0.06} {smooth 0.05}	{events {1 "sc_test_idle"}}}