
{"LV40k_Tyr_Flesh_Structure"
	{on blast
		{if volume "body"
			{if prop "small"
				{if min_energy 3 	{if rand 0.5	{call_synced "stage2"}}}
			else prop "big" 
				{if min_energy 6 	{if rand 0.5	{call_synced "stage2"}}}
			else prop "very_big"
				{if min_energy 10 	{if rand 0.8	{call_synced "stage2"}}}
			}
		}
	}
	{on break_armor
		 {if volume "body"	{call "stage2"}}
	}
	{on contact
		{if can_crush
			{if not prop "very_big"
				{volumes disable contact}
				{if effector "tank"
					{delay 0.5	{call_synced "stage2"}}
				else
					{if not effector "cannon"	{call "stage2"}}
				}
			}
		else effector "air_part"
			{if min_speed 5	{call "stage2"}}
		}
	}
	{on bullet_hit
		{if stuff "shell"
			{if stuff "fg"
				{if stuff "big"
					{if not prop "very_big"
						{call "stage2"}
					}
				}
			}
		}
	}
	{on "stage2"
		{if not "stage2"
			{set "stage2" 1}
			{Delete}
			{if prop "small"
				{spawn "bloodexp_big" "basis" x}
				{Delete}
			}
			{if prop "big"
				{spawn "bloodsparks_energo_death" "basis" x}
				{Delete}
			}
			{if prop "very_big"
				{spawn "bloodsparks_energo_death" "basis" x}
				{spawn "bloodsparks_dust_1" "basis" x}
				{spawn "bloodsparks_bigest-g" "basis" x}
				{Delete}
			}
		}
	}
	{on "change_model"
	}
	{on "cut_pieces"
	}
}

{"LV40k_Tyr_Captower"
	{on spawn
		{ani_play "unfold_l" 0.6 callback}
		
		{add_view "smoke_plague_med" "fx" "basis"}
		{view start "fx"}
		
		{If not tagged "roots_spawned"
			{tags add "roots_spawned"}
			{spawn "captower_roots" "basis" x}
		}
		{Call "spawn_poison"}
	}
	{on "spawn_poison"
		{Delay 10.0
			{Spawn "lv40k_aura_tyr_captower" "basis" x}
			{Call "spawn_poison"}
		}
	}
	{on animation_end "unfold_l"
		{ani_play "idle_l" 0.6 loop}
	}
}


{"LV40k_Tyr_Generator"
	{on spawn
		{ani_play "creation" 0.6 callback}
		
		{add_view "smoke_plague_med" "fx" "basis"}
		{view start "fx"}
		
		{If not tagged "roots_spawned"
			{tags add "roots_spawned"}
			{spawn "captower_roots" "basis" x scale 1.62}
		}
		{Call "spawn_poison"}
	}
	{on "spawn_poison"
		{Delay 10.0
			{Spawn "lv40k_aura_tyr_generator" "basis" x}
			{Call "spawn_poison"}
		}
	}
	{on animation_end "creation"
		{ani_play "idle1_gen" 0.6 loop}
	}
}