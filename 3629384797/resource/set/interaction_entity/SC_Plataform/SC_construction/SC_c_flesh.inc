
{"SC_Flesh_Structure"
	{on blast
		{if volume "body"
			{if min_energy 3 ;0.5
				{if rand 0.6
					{call_synced "stage1"}
				else
					{call_synced "stage2"}
				}
			else min_energy 1.6 ;0.5
				{if rand 0.4
					{call_synced "stage1"}
				else rand 0.4
					{call_synced "stage2"}
				}
			}
		}
	}
	{on break_armor
		 {if volume "body"
		 	{call "stage2"}
		 }
	}
	{on contact
		{if can_crush
			{volumes disable contact}
			{if effector "tank"
				{if not "stage1"
					{call "stage1"}
				else rand 0.5
					{delay 0.5
						{call_synced "stage2"}
					}
				}
			else
				{if not effector "cannon"
					{call "stage1"}
				}
			}
		else effector "air_part"
			{if min_speed 5
				{call "stage2"}
			}
		}
	}
	{on bullet_hit
		{if stuff "shell"
			{if stuff "fg"
				{if stuff "big"
					{call "stage2"}
				}
			}
		}
	}
	{on "stage1"
		{Call "stage2"}
	}
	{on "stage2"
		{if not "stage2"
			{set "stage1" 1}
			{set "stage2" 1}
			{Delete}
			{if prop "small"
				{spawn "bloodexp_big" "basis" x}
				{Delete}
			}
		}
	}
	{on "change_model"
	}
	{on "cut_pieces"
	}
}