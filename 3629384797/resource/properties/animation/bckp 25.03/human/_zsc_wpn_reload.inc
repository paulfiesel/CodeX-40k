
{sequence "stand_reload_rifle"			{file "stand_reload_rifle.anm"} {speed 2} {events {4 "open_bolt"} {32 "close_bolt"}}}
{sequence "stand_reload_piat" 			{speed 1}}
{sequence "stand_reload_mgun" 			{speed 0.8}} ;{file "weapon\anim_mg_stand_reload_up.anm"} @note: commented out because of diff wep speeds.
{sequence "stand_reload_gun" 			{file "weapon\anim_smg_stand_reload_up.anm"}{speed 1} {smooth 0.2} {events {1 "open_bolt"} {2 "close_bolt"}}}
{sequence "stand_reload_pistol"			{file "weapon\anim_pistol_stand_reload_01_up.anm"}{speed 1} {smooth 0.2}}
{sequence "stand_reload_bazooka" 		{speed 0.35}}