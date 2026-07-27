  {if stuff "usa_laser ammo"
	{spawn "proj_point_usa_laser_des_ground" offset 0 0 0
	{tags add "usa_target_laser"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7} )
	{volumes disable contact}
	{delay 5 {delete}}}	
	else stuff "rus_laser_spot ammo"
	{spawn "proj_point_rus_laser_des_ground" offset 0 0 0 
	{tags add "laser_target"}
	{tags add "rus_target_laser"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7} )
	{delay 3 {delete}}}	
	else stuff "ground_antirad_usa ammo"
	{spawn "proj_point_usa_antirad_ground" offset 0 0 150
	{tags add "antirad_target"}
	{tags add "usa_target_antirad"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 2 {delete}}}	
	else stuff "ground_antirad_rus ammo"
	{spawn "proj_point_rus_antirad_ground" offset 0 0 150
	{tags add "antirad_target"}
	{tags add "rus_target_antirad"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 2 {delete}}}	
	else stuff "ground_laser_usa ammo"	
	{spawn "proj_point_usa_laser_des_ground" offset 0 0 0
	{tags add "usa_target_laser"}
	{tags add "cwps_ground_attack"}
	 
	(mod not "mp"{player 7}) 
	{volumes disable contact}
	{delay 5 {delete}}}	
    else stuff "ground_laser_rus ammo"
	{spawn "proj_point_rus_laser_des_ground" offset 0 0 0
	{tags add "rus_target_laser"}
	{tags add "cwps_ground_attack"}
	 
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}	
    else stuff "ground_ir_usa ammo"	
	{spawn "proj_point_usa_ir_ground" offset 0 0 0
	{tags add "ir_target"}
	{tags add "usa_target_ir"}
	{tags add "cwps_ground_attack"}
	 
	(mod not "mp"{player 7}) 
	{volumes disable contact}
	{delay 10 {delete}}}
	else stuff "ground_ir_rus ammo"	
	{spawn "proj_point_rus_ir_ground" offset 0 0 0
	{tags add "ir_target"}
	{tags add "rus_target_ir"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}	
	else stuff "ground_active_usa ammo"	
	{spawn "proj_point_usa_active_ground" offset 0 0 0 
	{tags add "active_target"}
	{tags add "usa_target_active"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}	
	else stuff "ground_active_rus ammo"
	{spawn "proj_point_rus_active_ground" offset 0 0 0
	{tags add "active_target"}
	{tags add "rus_target_active"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}
	else stuff "ground_other_usa ammo"
	{spawn "proj_point_usa_other_ground" offset 0 0 0
	{tags add "other_target"}
	{tags add "usa_target_other"}
	{tags add "cwps_ground_attack"}
	 
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}
	else stuff "ground_other_usa_far ammo"	
	{spawn "proj_point_usa_other_ground" offset 0 0 0 
	{tags add "ground_far"}
	{tags add "other_target"}
	{tags add "usa_target_other"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 25 {delete}}}
	else stuff "ground_other_rus ammo"
	{spawn "proj_point_rus_other_ground" offset 0 0 0
	{tags add "other_target"}
	{tags add "rus_target_other"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 7 {delete}}}
	else stuff "ground_other_rus ammo"	
	{spawn "proj_point_rus_other_ground" offset 0 0 0
	{tags add "other_target"}
	{tags add "rus_target_other"}
	{tags add "cwps_ground_attack"}
	
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}
	else stuff "ground_other_rus ammo"	
	{spawn "proj_point_rus_other_ground" offset 0 0 0
	{tags add "other_target"}
	{tags add "rus_target_other"}
	{tags add "cwps_ground_attack"}
	 
	(mod not "mp"{player 7})
	{volumes disable contact}
	{delay 10 {delete}}}
	else stuff "light"
}	