
; ========================================================================================================================================================================
; // THROWN/FLY
; ========================================================================================================================================================================

{sequence "stand_fly_forward_end"							{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_back_end" {smooth 0}					{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_tumble_back_end"						{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_back_far_end" {speed 0.8}				{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_tumble_back_far_end" {speed 0.8}		{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_tumble_forward_far_end" {speed 0.8}	{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}
{sequence "stand_fly_forward_far_end" {speed 0.8}			{events {1 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Thrown_Land"}}
}

{sequence "stand_fly_forward"
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_back" 	   {smooth 0}
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_tumble_back"
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_back_far" {speed 0.8}
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_tumble_back_far" {speed 0.8}
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_forward_far" {speed 0.8}
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}
{sequence "stand_fly_tumble_forward_far" {speed 0.8}
	{events {0 "SC_H_Request_Anm_Thrown_Fly"}}
}

; ========================================================================================================================================================================
; // DEATH BLASTED
; ========================================================================================================================================================================

{sequence "stand_die_back_4_blast"  		{movement} {smooth 0.1} {speed 0.8}	{events {31 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die_back_5_blast"  		{movement} {smooth 0.1} {speed 0.8} {events {34 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die_front_1_blast"  		{movement} {smooth 0.1} {speed 0.8} {events {30 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die_front_2_blast"  		{movement} {smooth 0.1} {speed 0.8} {events {32 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_back_1"     		{movement} {speed 0.8} {smooth 0.1} {events {30 "body_fall_heavy"} {60 "death_breathe"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_back_2_far" 		{movement} {speed 0.8} {smooth 0.1} {events {33 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_back_3_far" 		{movement} {speed 0.8} {smooth 0.1} {events {26 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_front_1"     	{movement} {speed 0.8} {smooth 0.1} {events {16 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_front_2"     	{movement} {speed 0.8} {smooth 0.1} {events {22 "body_fall_heavy"} {93 "body_fall_light"} {49 "death_breathe"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_front_3_far" 	{movement} {speed 0.7} {smooth 0.1} {events {31 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
{sequence "stand_die-force_front_4_far" 	{movement} {speed 0.7} {smooth 0.1} {events {32 "body_fall_heavy"}}
	{events {0 "SC_H_Request_Anm_Blast_Mask"}}
}
	
; ========================================================================================================================================================================
; // DEATH COMMON
; ========================================================================================================================================================================

;=================||Die and fall backward||	
{sequence "death/die_bwd/die_bwd_01"  }
{sequence "death/die_bwd/die_bwd_02"  }
{sequence "death/die_bwd/die_bwd_03a"  }
{sequence "death/die_bwd/die_bwd_03b"  }
{sequence "death/die_bwd/die_bwd_03c"  }
{sequence "death/die_bwd/die_bwd_03d"  }
{sequence "death/die_bwd/die_bwd_04a"  }
{sequence "death/die_bwd/die_bwd_04b"  }
{sequence "death/die_bwd/die_bwd_04c"  }
{sequence "death/die_bwd/die_bwd_05a"  }
{sequence "death/die_bwd/die_bwd_05b"  }
{sequence "death/die_bwd/die_bwd_05c"  }
{sequence "death/die_bwd/die_bwd_06"  }
{sequence "death/die_bwd/die_bwd_07a"  }
{sequence "death/die_bwd/die_bwd_07b"  }
{sequence "death/die_bwd/die_bwd_07c"  }
{sequence "death/die_bwd/die_bwd_07d"  }
{sequence "death/die_bwd/die_bwd_08"  }
{sequence "death/die_bwd/die_bwd_09a"  }
{sequence "death/die_bwd/die_bwd_09b"  }
{sequence "death/die_bwd/die_bwd_10"  }
{sequence "death/die_bwd/die_bwd_11a"  }
{sequence "death/die_bwd/die_bwd_11b"  }
{sequence "death/die_bwd/die_bwd_12"  }
{sequence "death/die_bwd/die_bwd_13"  }
{sequence "death/die_bwd/die_bwd_14a"  }
{sequence "death/die_bwd/die_bwd_14b"  }
{sequence "death/die_bwd/die_bwd_14c"  }
{sequence "death/die_bwd/die_bwd_14d"  }
{sequence "death/die_bwd/die_bwd_14e"  }
{sequence "death/die_bwd/die_bwd_15"  }
{sequence "death/die_bwd/die_bwd_16"  }

;=================||Die and fall forward||	
{sequence "death/die_fwd/die_fwd_01a"    }
{sequence "death/die_fwd/die_fwd_01b"    }
{sequence "death/die_fwd/die_fwd_01c"    }
{sequence "death/die_fwd/die_fwd_01d"    }
{sequence "death/die_fwd/die_fwd_02a"    }
{sequence "death/die_fwd/die_fwd_02b"    }
{sequence "death/die_fwd/die_fwd_03a"    }
{sequence "death/die_fwd/die_fwd_03b"    }
{sequence "death/die_fwd/die_fwd_04a"    }
{sequence "death/die_fwd/die_fwd_04b"    }
{sequence "death/die_fwd/die_fwd_05a"    }
{sequence "death/die_fwd/die_fwd_05b"    }
{sequence "death/die_fwd/die_fwd_05c"    }
{sequence "death/die_fwd/die_fwd_06"    }
{sequence "death/die_fwd/die_fwd_07"    }

;=================||Die and crouch||	
{sequence "death/die_crouch/die_crouch_01a"    }
{sequence "death/die_crouch/die_crouch_01b"    }
{sequence "death/die_crouch/die_crouch_01c"    }
{sequence "death/die_crouch/die_crouch_02"    }
{sequence "death/die_crouch/die_crouch_03"    }

;=================||Die long||	
{sequence "death/die_long/die_long_01"   }
{sequence "death/die_long/die_long_03"    }

;=================||Die prone||	
{sequence "death/die_prone/die_prone" {smooth 0.1}{speed 3.0}{movement} }

{sequence "stand_die_03" 				{file "death/die_long/die_long_01.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_04" 				{file "death/die_long/die_long_03.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_05" 				{file "death/die_bwd/die_bwd_04c.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_06"				{file "death/die_bwd/die_bwd_12.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_back_1" 			{file "death/die_bwd/die_bwd_05a.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_back_2" 			{file "death/die_bwd/die_bwd_14a.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_die_back_3" 			{file "death/die_bwd/die_bwd_08.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_die_back_4" 			{file "death/die_bwd/die_bwd_03c.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_back_5" 			{file "death/die_bwd/die_bwd_07a.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_die_front_1" 			{file "death/die_run/die_run_05.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_die_front_2" 			{file "death/die_fwd/die_fwd_01c.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_die_front_3" 			{file "death/die_run/die_run_02.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_die_front_4" 			{file "death/die_fwd/die_fwd_05b.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_scenic-die_front_1" 	{file "death/die_run/die_run_06.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_scenic-die_front_2" 	{file "death/die_fwd/die_fwd_03b.anm"} {movement}{speed 0.65}{smooth 0.06} }
{sequence "stand_scenic-die_back_1" 	{file "death/die_fwd/die_fwd_06.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "stand_scenic-die_back_2" 	{file "death/die_bwd/die_bwd_06.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "stand_die_spot" 				{file "death/die_bwd/die_bwd_02.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "stand_die_spot_1" 			{file "death/die_bwd/die_bwd_16.anm"} {movement}{speed 0.8}{smooth 0.06} }
{sequence "squat_die" 					{file "death/die_crouch/die_crouch_01a.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "squat_die_front" 			{file "death/die_crouch/die_crouch_01b.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "squat_die_back_1" 			{file "death/die_crouch/die_crouch_01c.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "squat_die_back_2" 			{file "death/die_crouch/die_crouch_02.anm"} {movement}{speed 0.7}{smooth 0.06} }
{sequence "squat_die_force-back" 			{file "death/die_crouch/die_crouch_03.anm"} {movement}{speed 0.7}{smooth 0.06} }

{sequence "stand_die_drowin" 				{events {1 "swim"} {224 "splash"} {144 "burn_scream"}}}
{sequence "stand_die_trench_1"				{speed 0.9} {smooth 0.1} {events {22 "body_fall_heavy"}}}
{sequence "stand_die_trench_2"				{speed 0.9} {smooth 0.1} {events {34 "body_fall_heavy"}}}
{sequence "stand_die_trench_3"				{speed 1.2} {events {29 "body_fall_light"} {40 "death_breathe"}}}
{sequence "stand_die_burn_1"				{speed 0.9} {smooth 0} {events {38 "leg_right"} {44 "burn_scream"} {48 "leg_left"} {61 "leg_right"} {80 "leg_left"} {89 "leg_right"} {102 "leg_left"} {115 "leg_right"} {128 "body_fall_heavy"} {288 "body_fall_light"}}}
{sequence "stand_die_burn_2"				{speed 0.9} {smooth 0} {events {38 "leg_right"} {44 "burn_scream"} {48 "leg_left"} {61 "leg_right"} {80 "leg_left"} {89 "leg_right"} {102 "leg_left"} {115 "leg_right"} {128 "body_fall_heavy"} {288 "body_fall_light"}}}

{sequence "lie_die_drowin" 	{events {1 "swim"} {130 "splash"} {75 "burn_scream"}}}
{sequence "lie_die" 		{movement}{speed 0.7}{smooth 0.06}{events {12 "body_fall_light"}} {file "death/die_prone/die_prone.anm"}}
{sequence "lie_die_burn" 	{movement} {events {1 "burn_scream"} {12 "body_fall_light"}}}
