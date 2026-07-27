{"massive_building_wall"
	{on spawn
		{set "broken" 0}
	}
	{on break_armor
		{if name "blast"
			{if min_energy 25
				{call "use_tex"}
			}
			{if volume "piece"
				{if min_energy 63
					{set "broken" 1}
					{call "try_break"}
				else min_energy 25
					{call "check_piece"}
					{call "try_break"}
				}
			}
		}
	}
	{on bullet_hit
	  {if not stuff "proj_pointer"
		{if stuff "shell"
			{call "use_tex"}
			{if volume "piece"
				{if stuff "fg"
					{bullet_detonate}
				else stuff "ap big"
					{set "broken" 1}
					{call "try_break"}
				else stuff "ap"
					{call "check_piece"}
					{call "try_break"}
				}
			}
		}
	  else stuff "usa_laser ammo"
		{spawn "proj_point_usa_laser_des" offset 0 0 5
			{tags add "laser_target"}
			{tags add "cwps_ground_attack"}

			(mod not "mp"{player 16})
		{delay 1 {delete}}}
	  else stuff "rus_laser ammo"
	    {spawn "proj_point_rus_laser_des" offset 0 0 5
			{tags add "laser_target"}
			{tags add "cwps_ground_attack"}

			(mod not "mp"{player 16})
			{delay 1 {delete}}}
	  }
	}
	{on "use_tex"
		{if not "use_tex"
			{set "use_tex" 1}
		}
	}
	{on "try_break"
		{impulse up 0.1 0.05 dir 0.1 0.05}
		{if "broken"
			{call "effects"}
			{call "cut_piece"}
		else volume "door"
			{call "cut_piece"}
		}
	}
	{on "cut_piece"
		{if volume "door"
			{tear "piece_big_wood" bone from_volume
				{impulse up 1 0.7 dir 1 0.3 no_position}
			}
		else
			{tear "piece_large_concrete" bone from_volume
				{impulse up 1 0.7 dir 1 0.3 no_position}
			}
		}
	}
	{on "check_piece"
		{if not "broken_3"
			{set "broken_3" 1}
		else
			{if not "broken_2"
				{set "broken_2" 1}
			else
				{if not "broken_1"
					{set "broken_1" 1}
				else
					{if not "broken"
						{set "broken" 1}
					}
				}
			}
		}
	}
}

{"garrison"
	(define "throw_garrison"
		{if volume "place%0"
			{if min_energy 2.5
				{with_linked_entity "%1" {call "throw_off_from_ladder"}}
				;{volumes "place%0" disable blast touch}
			}
		}
	)

	{on blast
		("throw_garrison" args 01 1)
		("throw_garrison" args 02 2)
		("throw_garrison" args 03 3)
		("throw_garrison" args 04 4)
		("throw_garrison" args 05 5)
		("throw_garrison" args 06 6)
		("throw_garrison" args 07 7)
		("throw_garrison" args 08 8)
		("throw_garrison" args 09 9)
		("throw_garrison" args 10 10)
		("throw_garrison" args 11 11)
		("throw_garrison" args 12 12)
		("throw_garrison" args 13 13)
		("throw_garrison" args 14 14)
		("throw_garrison" args 15 15)
		("throw_garrison" args 16 16)
		("throw_garrison" args 17 17)
		("throw_garrison" args 18 18)
		("throw_garrison" args 19 19)
		("throw_garrison" args 20 20)
		("throw_garrison" args 21 21)
		("throw_garrison" args 22 22)
		("throw_garrison" args 23 23)
		("throw_garrison" args 24 24)
		("throw_garrison" args 25 25)
		("throw_garrison" args 26 26)
		("throw_garrison" args 27 27)
		("throw_garrison" args 28 28)
		("throw_garrison" args 29 29)
		("throw_garrison" args 30 30)
	}
}

{"garrison garrison_large"
	{on blast
		("throw_garrison" args 31 31)
		("throw_garrison" args 32 32)
		("throw_garrison" args 33 33)
		("throw_garrison" args 34 34)
		("throw_garrison" args 35 35)
		("throw_garrison" args 36 36)
		("throw_garrison" args 37 37)
		("throw_garrison" args 38 38)
		("throw_garrison" args 39 39)
		("throw_garrison" args 40 40)
		("throw_garrison" args 41 41)
		("throw_garrison" args 42 42)
		("throw_garrison" args 43 43)
		("throw_garrison" args 44 44)
		("throw_garrison" args 45 45)
		("throw_garrison" args 46 46)
		("throw_garrison" args 47 47)
		("throw_garrison" args 48 48)
		("throw_garrison" args 49 49)
		("throw_garrison" args 50 50)
		("throw_garrison" args 51 51)
		("throw_garrison" args 52 52)
		("throw_garrison" args 53 53)
		("throw_garrison" args 54 54)
		("throw_garrison" args 55 55)
		("throw_garrison" args 56 56)
		("throw_garrison" args 57 57)
		("throw_garrison" args 58 58)
		("throw_garrison" args 59 59)
		("throw_garrison" args 60 60)
		("throw_garrison" args 61 61)
	}
}

{"garrison pavlov"
	{on blast
		("throw_garrison" args 62 62) ;// only pavlov house more than 61
		("throw_garrison" args 63 63)
		("throw_garrison" args 64 64)
		("throw_garrison" args 65 65)
		("throw_garrison" args 66 66)
		("throw_garrison" args 67 67)
		("throw_garrison" args 68 68)
		("throw_garrison" args 69 69)
		("throw_garrison" args 70 70)
		("throw_garrison" args 71 71)
		("throw_garrison" args 72 72)
		("throw_garrison" args 73 73)
		("throw_garrison" args 74 74)
		("throw_garrison" args 75 75)
		("throw_garrison" args 76 76)
		("throw_garrison" args 77 77)
		("throw_garrison" args 78 78)
		("throw_garrison" args 79 79)
		("throw_garrison" args 80 80)
		("throw_garrison" args 81 81)
		("throw_garrison" args 82 82)
		("throw_garrison" args 83 83)
		("throw_garrison" args 84 84)
		("throw_garrison" args 85 85)
		("throw_garrison" args 86 86)
		("throw_garrison" args 87 87)
		("throw_garrison" args 88 88)
		("throw_garrison" args 89 89)
		("throw_garrison" args 90 90)
		("throw_garrison" args 91 91)
		("throw_garrison" args 92 92)
		("throw_garrison" args 93 93)
		("throw_garrison" args 94 94)
		("throw_garrison" args 95 95)
		("throw_garrison" args 96 96)
		("throw_garrison" args 97 97)
		("throw_garrison" args 98 98)
		("throw_garrison" args 99 99)
		("throw_garrison" args 100 100)
		("throw_garrison" args 101 101)
		("throw_garrison" args 102 102)
		("throw_garrison" args 103 103)
		("throw_garrison" args 104 104)
	}
}

{"massive_building"
	{on spawn
		{set "first_stage" 1}		;for effects spawn in "construction"
		{set "destroyed_stamp" 1}   ;
	}
	{on bullet_hit
		{if stuff "shell"
			{if "sliced_end"
				{if stuff "big shell"
					{if volume "roof"
						{call "use_tex"}
					}
				}
			}
			{if stuff "fg"
				{bullet_detonate}
			else stuff "ap"
				{if not "sliced"
					{call "change_model"}
					{delay_ex 0.15
						{blastwave c4 0.79 r0 1 r1 2 position}
					}
				}
			}
		}
	}
	{on "use_tex"
		{if not "use_tex"
			{set "use_tex" 1}
			{call "effects"}
		}
	}
	{on blast
		{if "sliced_end"
			{if volume "roof"
				{if min_energy 0.5
					{call "use_tex"}
				}
			}
		}
	}
	{on break_armor
		{if name "blast"
			{if min_energy 40
				{if not "sliced"
					{call "change_model"}
					{call "effects"}
					{delay_ex 0.15
						{blastwave c4 1.5 r0 1 r1 2 position}
					}
				else
					{call "try_roof_break"}
				}
			}
		}
	}
	{on "change_model"
		{set "sliced" 1}
		{delay 0 ; prevent trace bullet into freed volumes after SetSkeleton
			{call "break_windows"}
			{set_skeleton "_x"}
			{ani_play "crush1"}
			{call "update_fx"}
			{set "first_stage" 1}
			(define "cut_wall"
				{tear "temple_wall_concrete" bone "wall%0"}
			)
			("cut_wall" args 0	)	("cut_wall" args 1	)
			("cut_wall" args 2	)	("cut_wall" args 3	)
			("cut_wall" args 4	)	("cut_wall" args 5	)
			("cut_wall" args 6	)	("cut_wall" args 7	)
			("cut_wall" args 8	)	("cut_wall" args 9	)
			("cut_wall" args 10	)	("cut_wall" args 11	)
			{set "sliced_end" 1}
		}
	}
	{on "try_roof_break"
		{if "sliced_end"
			{call "check_roof"}
			{if "roof_broken"
				{set "last_stage" 1}
				{call "effects"}
				{call "use_tex"}
				{call "cut_big_pieces"}
				{ani_play "crush2"}
				{volumes disable bullet contact blast visible}
			}
		}
	}
	{on "check_roof"
		{if not "roof_broken_3"
			{set "roof_broken_3" 1}
		else
			{if not "roof_broken_2"
				{set "roof_broken_2" 1}
			else
				{if not "roof_broken_1"
					{set "roof_broken_1" 1}
				else
					{if not "roof_broken"
						{set "roof_broken" 1}
					}
				}
			}
		}
	}
	{on "cut_big_pieces"
		(define "cut_big_piece"
			{tear "piece_large_concrete" bone "piece_big%0"
				{impulse up 1 0.7 dir 1 0.3 no_position}
			}
		)
		("cut_big_piece" args 1)
		("cut_big_piece" args 2)
		("cut_big_piece" args 3)
	}
}

{"windmill"
	{on spawn
		{ani_play "propeller" loop}
		{ani_play "propeller1" loop}
		{ani_play "propeller2" loop}
		{ani_play "propeller3" loop}
		{ani_play "propeller4" loop}
		{ani_play "propeller5" loop}
		{ani_play "propeller6" loop}
		{ani_play "propeller7" loop}
		{ani_play "propeller8" loop}
		{ani_play "propeller9" loop}
		{ani_play "propeller10" loop}
	}
}