{"tree"
	{inflammation_time 10}
	{on spawn
		{mtl_enable_skin 0}
		{view hide "shadow_fall"}
		{call "update_texmod"}
		{call "flora_tags_setup"}
	}
	(define "stir"
		{if not tagged "bare"
			{if not "started"
				{mtl_enable_skin 1}
				{ani_play "stir" 0.6 %params}
				{set "started" 1}
			}
			{if not burned
				{start_sound "push/tree_crown"}
			}
		}
	)
	{on "stir"
		{if effector "human" ;// effector human carries over when interacted by human held weapons like AT launchers and grenades
			{if stuff ""	;// will trigger snowfall when hit by human held weapons that also trigger stir
				{call "snow_fall"}
			}
		else effector "cannon"
			;do nothing
		else effector "stuff"
			;do nothing
		else
			{call "snow_fall"}
		}
		("stir" params(loop resume callback))
	}
	{on overlap begin
		{if not fallen
			{if effector "throwable"
				{tags add "throwable"}
			else
				{set "overlap" 1}
				{call "stir"}
			}
		}
	}
	{on overlap end
		{set "overlap" 0}
		{delay 0.2
			{call "stir_end"}
		}
	}
	{on animation_end "stir"
		{call "stir_end"}
	}
	{on "stir_end"
		{if not "overlap"
			{if "started"
				{set "started" 0}
				{ani_stop "stir"}
				{mtl_enable_skin 0}
			}
		}
	}
	{on bullet_hit overload
		{if volume "crown"
			{spawn "tree_hit_small"}
		}
		{inherited}
		{if volume "bole"
			{if stuff "bullet_fx"
				; do nothing
			else stuff "flame"
				; do nothing
			else stuff "flare"
				; do nothing
			else stuff "rifle_grenade_at" ;has HEAT tag
				{call "stir"}
			else stuff "fg"
				{if stuff "auto"
					; do nothing
				else stuff "size1"
					;{call "start_fall"}
				else stuff "size2"
					{call "obliterate"}
				else stuff "size3"
					{call "obliterate"}
				else stuff "size4"
					{call "obliterate"}
				else stuff "size5"
					{call "obliterate"}
				else stuff "big" ; //rockets / big mortar
					{call "obliterate"}
				else
					{call "stir"}
				}
			else stuff "all_ap"
				{if stuff "size2"
					{call "stir"}
				else stuff "size3"
					{call "obliterate"}
				else stuff "size4"
					{call "obliterate"}
				else
					{call "stir"}
				}
			else
				{call "stir"}
			}
		}
		{if stuff "hesh_type_dmg"
				{spawn "cw_cumulative_frestrict" inv_normal}
			else stuff "cm_type_dmg cm"
				{spawn "rpg_restrictor" inv_normal}
			}
	}
	{on "obliterate"
		{call "start_fall"}
	}
	{on blast
		{if volume "crown"
			{call "stir"}
		else min_energy 2.5
			{call "start_fall"}
			{call "stir"}
		else min_energy 1
			{call "stir"}
		}
	}
	{on contact
		{if effector "human"
			{call "stir"}
		else effector "vehicle"
			{call "stir"}
		}
		{if effector "tank"
			{call "start_fall"}
		else effector "airborne"
			{call "start_fall"}
		}

	}
	{on "snow_fall"
		{if tagged "snow"
			{burn volume "crown" fx "snow_hit_tree_continuous" time 0.5 fake}
			{delay 1
				{call "tex_switch_snow"}
				{tags remove "snow"}
				{tags add "barewin"}
			}
		}
	}
	{on "tex_switch_snow"}

	{on "start_fall"
		{start_sound "push/tree_bole"}
		{volumes "bole" disable contact obstacle}
		{volumes "crown" enable blast}
		{call "detach_human"}
		{pillar_fall}
		{call "regenerate"}
	}
	{on "fallen"
		{tags add "fallen"}
		{volumes "crown" enable overlap visible}
		{volumes "crown" disable contact}
		;{start_sound "crush/medium/tree"}
		{call "update_wind"}
	}
	{on "burn"
		{if not burned
			{fire volume "crown" radius 1.5 time 30 heating 0.3}
			{burn volume "crown" fx "smoke_dead_tree" time 32 1}
			{start_sound "fire/tree/"}
			{tags add "burned"}
			{if tagged "bare"
				{tags remove "bare"}
				{delay 5 {tex_mod "burned"}}
			else tagged "barewin"
				{tags remove "barewin"}
				{delay 5 {tex_mod "burned"}}
			else tagged "snow"
				{tags remove "snow"}
				{delay 5 {tex_mod "win0"}}
				{delay 10 {tex_mod "burned"}}
			else tagged "aut"
				{tags remove "aut"}
				{delay 5 {tex_mod "bare"}}
				{delay 10 {tex_mod "burned"}}
			else
				{delay 3 {tex_mod "aut"}}
				{delay 7 {tex_mod "bare"}}
				{delay 10 {tex_mod "burned"}}
			}
			{call "update_crown_visibility"}
		}
		{call "regenerate"}
	}
	(define "set_crown_visible"
		{volumes "crown" %0 visible}
		{update_visibility_patch}
	)
	{on "update_crown_visibility"
		{if burned
			("set_crown_visible" args disable)
		else tagged "bare"
			("set_crown_visible" args disable)
		else fallen
			("set_crown_visible" args enable)
		}
	}
	{on "update_wind"
		{if tagged "bare"
			{depend_on_wind 1}
		else fallen
			{depend_on_wind 1}
		else
			{depend_on_wind 1}
		}
	}
	{on "update_texmod"
		{call "update_crown_visibility"}
		{call "update_wind"}
	}
	{on "texmod_changed"
		{call "update_texmod"}
	}
	{on "regenerate"
		{if flora_regenerate
			{delay 140
				{set "crown_fall" 0}
				{burn stop_retry}
				{volumes "bole" enable contact blast}
				{volumes "crown" disable contact}
				{tex_mod reset}
				{pillar_up}
				{scale from 0.1 to 1 time 10}
				{call "update_visibility_10_sec"}
			}
		}
	}
	{on "plant"
		{scale from 0.1 to 1 time 10}
		{call "update_visibility_10_sec"}
	}
	{on "update_visibility_10_sec"
		{delay 4	{update_visibility_patch}}
		{delay 7	{update_visibility_patch}}
		{delay 10	{update_visibility_patch}}
	}
	{on "flora_tags_setup"
		;// clear tags
		{tags remove "bare"}
		{tags remove "barewin"}
		{tags remove "aut"}
		{tags remove "snow"}

		;// add tags based on current tex_mod
		{if tex_mod "bare" "bare1" "broken" "burned" "_burned1" "_burned3" "empty" "dry"
			{tags add "bare"}
			("set_crown_visible" args disable)
		else tex_mod "win0"
			{tags add "barewin"}
			("set_crown_visible" args disable)
		else tex_mod "aut" "aut1" "aut2" "aut3" "aut4" "autlate" "autlate1" "autlate2" "autlate3"
			{tags add "aut"}
			("set_crown_visible" args enable)
		else tex_mod "win" "win1" "win2"
			{tags add "snow"}
		else
			("set_crown_visible" args enable)
		}
	}
	{on "detach_human"			;// detaches garrisoned humans from building before deleting structure
		(define "drop_human"
			{with_linked_entity "%0" {call "throw_off_from_ship"}}
		)
		("drop_human" args 1)
		("drop_human" args 2)
		("drop_human" args 3)
		("drop_human" args 4)
		("drop_human" args 5)
	}
}

{"tree win_shake"
	{on "tex_switch_snow" overload
		{tex_mod "win0"}
	}
}

{"tree destructable"
	{on blast overload
		{if min_energy 9
			{call "obliterate"}
		else min_energy 2.5
			{call "start_fall"}
			{call "stir"}
		else min_energy 1
			{call "stir"}
		}
	}
	{on "obliterate" overload
		{call "disable_volumes"}
		{call "detach_human"}
		{delay_ex 0
			{call_synced "set_skeleton_local"}
		}
	}
	{on "set_skeleton_local"
		(define "cut_part_delete"
			{delay_ex 0
				{tear "piece_medium_wood" bone %0
					{hide %1}
				}
			}
		)
		("cut_part_delete" args "stem" 0.05)
		("cut_part_delete" args "branches" 0.05)


		{burn volume "bole" fx "tree_obliterate_bole" time 0.1 fake even_law}
		{burn volume "bole" fx "tree_obliterate_bole" time 0.1 fake even_law}
		{burn volume "bole" fx "tree_obliterate_bole" time 0.1 fake even_law}

		{spawn "tree_obliterate_bole_base2" "root" x}

		{if tagged "snow"
			{burn volume "crown" fx "tree_obliterate_crown_snow" time 0.5 fake}
			{burn volume "crown" fx "tree_obliterate_crown_snow" time 0.5 fake}
		else tagged "aut"
			{burn volume "crown" fx "tree_obliterate_crown_leaves_aut" time 0.5 fake}
			{burn volume "crown" fx "tree_obliterate_crown_leaves_aut" time 0.5 fake}
			{burn volume "crown" fx "tree_obliterate_crown_leaves_aut" time 0.5 fake}
		else tagged "bare"
			{burn volume "crown" fx "tree_obliterate_crown_bare" time 0.5 fake}
			{burn volume "crown" fx "tree_obliterate_crown_bare" time 0.5 fake}
		else tagged "barewin"
			{burn volume "crown" fx "tree_obliterate_crown_bare_win" time 0.5 fake}
			{burn volume "crown" fx "tree_obliterate_crown_snow_barewin" time 0.5 fake}
		else tagged "burned"
			; do nothing
		else
			{burn volume "crown" fx "tree_obliterate_crown_leaves" time 0.5 fake even_law}
			{burn volume "crown" fx "tree_obliterate_crown_leaves" time 0.5 fake even_law}
			{burn volume "crown" fx "tree_obliterate_crown_leaves" time 0.5 fake even_law}
		}

		{delay 0 ;// allows time for crater to spawn
			{if terrain_fx "snow"
				{spawn "stump_shed_medium" "root" x constrain_after_dir random_orientation {tex_mod "win"}}
			else terrain_fx "ice"
				{spawn "stump_shed_medium" "root" x constrain_after_dir random_orientation {tex_mod "win"}}
			else
				{spawn "stump_shed_medium" "root" x constrain_after_dir random_orientation}
			}
		}

		{delay 0.5
			{spawn "burned_spot_round2"		scale 0.5 no_position random_orientation}
			{spawn "pleten_wood"			no_position random_orientation}
		}
		{delay 1
			{delete}
		}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
}


{"tree bare"
	{inflammation_time 6}
	{on spawn
		{tags add "bare"}
	}
	{on "flora_tags_setup" overload
		{tags remove "barewin"}
		{tags remove "aut"}
		{tags remove "snow"}
	}
}

{"tree large"
	{on blast overload
		{if min_energy 13
			{call "start_fall"}
		else min_energy 2
			{call "stir"}
		}
	}
	{on contact overload
		{call "stir"}
	}
}

{"tree large destructable"
	{on blast overload
		{if min_energy 13
			{call "obliterate"}
		else min_energy 9
			{call "start_fall"}
		else min_energy 2
			{call "stir"}
		}
	}
}

{"burn_bole"	;// for trees without crown volumes
	{on "burn" overload
		{if not burned
			{fire volume "bole" time 30 heating 0.3}
			{burn volume "bole" fx "smoke_dead_tree" time 32 1}
			{fire volume "base" time 30 heating 0.3}
			{burn volume "base" fx "smoke_dead_tree" time 32 1}
			{start_sound "fire/tree/"}
			{tags add "burned"}
			{if tagged "bare"
				{tags remove "bare"}
				;{tex_morph "_burned1" 16 "_burned3" 16}
			else
				;{tex_morph "_burned0" 11 "_burned1" 11 "_burned3" 10}
			}
			{delay 5 {tex_mod "burned"}}
			{call "update_crown_visibility"}
		}
		{call "regenerate"}
	}
}

{"burn_bole2"	;// for trees without crown volumes and two trunks (base/boles)
	{on "burn" overload
		{if not burned
			{fire volume "bole1" time 30 heating 0.3}
			{burn volume "bole1" fx "smoke_dead_tree" time 32 1}
			{fire volume "bole2" time 30 heating 0.3}
			{burn volume "bole2" fx "smoke_dead_tree" time 32 1}
			{fire volume "base1" time 30 heating 0.3}
			{burn volume "base1" fx "smoke_dead_tree" time 32 1}
			{fire volume "base2" time 30 heating 0.3}
			{burn volume "base2" fx "smoke_dead_tree" time 32 1}
			{start_sound "fire/tree/"}
			{tags add "burned"}
			{if tagged "bare"
				{tags remove "bare"}
				;{tex_morph "_burned1" 16 "_burned3" 16}
			else
				;{tex_morph "_burned0" 11 "_burned1" 11 "_burned3" 10}
			}
			{delay 5 {tex_mod "burned"}}
			{call "update_crown_visibility"}
		}
		{call "regenerate"}
	}
}

{"bush"
	{inflammation_time 5}
	{on "burn" overload
		{if not burned
			{fire volume "crown" radius 1.0 time 20 heating 0.25}
			{burn volume "crown" fx "smoke_dead_bush" time 22 1}
			{start_sound "fire/bush/"}
			{tags add "burned"}
			{if prop "corn"
				{spawn "fire_mark_2" random_orientation} ;// does not exist
			}
			{if tagged "bare"
				{tags remove "bare"}
				;{tex_morph "_burned1" 10 "_burned3" 10}
			else tagged "snow"
				;{tex_morph "_burned1" 10 "_burned3" 10}
			else
				;{tex_morph "_burned0" 6 "_burned1" 6 "_burned3" 6}
			}
			{delay 5 {tex_mod "burned"}}
			{delay 22
				{call "burn_end"}
			}
			{call "update_crown_visibility"}
			{call "regenerate"}
		}
	}
	{on "stir" overload
		{if effector "vehicle"
			{call "snow_fall"}
		}
		{if fogged
			("stir" params(loop resume fake callback))
		else
			("stir" params(loop resume callback))
		}
	}
	{on blast
		{if min_energy 1.75
			{call "blast_change"}
		}
	}
	{on "blast_change"
		{if not "crown_fall"
			{if not burned
				{set "crown_fall" 1}
				{if tagged "bare"
					{tex_morph "_burned1" 0.3 "_burned3" 0.3}
				else tagged "snow"
					{tex_morph "_win0" 2}
				else
					{tex_morph "_burned0" 0.2 "_burned1" 0.2 "_burned3" 0.2}
					{tags add "bare"}
				}
				{if tagged "snow"
					{spawn "snow_hit_small" no_position}
				else not tagged "bare"
					{spawn "tree_hit_big"}
				}
				{call "regenerate"}
				{call "update_crown_visibility"}
			}
		}
	}
}

{"bush generic5"
	{on "flora_tags_setup" overload
		{tags remove "bare"}
		{tags remove "snow"}
		{if tex_mod "bare" "bare1" "broken" "burned" "_burned1" "win2" "win3" "_burned3" "empty" "dry"
			{tags add "bare"}
			("set_crown_visible" args disable)
		else tex_mod "win" "win1"
			{tags add "snow"}
		else
			("set_crown_visible" args enable)
		}
	}
}

{"bush grass"
	{on "flora_tags_setup" overload
		{tags remove "bare"}
		{tags remove "snow"}
		{if tex_mod "bare1" "broken" "burned" "_burned1" "_burned3" "empty"
			{tags add "bare"}
			("set_crown_visible" args disable)
		else tex_mod "win" "win1" "win2" "win3"
			{tags add "snow"}
		else
			("set_crown_visible" args enable)
		}
	}
}

{"bush rus"
	{on "flora_tags_setup" overload
		{tags remove "bare"}
		{tags remove "snow"}
		{if tex_mod "bare1" "broken" "_burned1" "_burned3" "empty" "3" "dry"
			{tags add "bare"}
			("set_crown_visible" args disable)
		else tex_mod "win" "win1" "win2" "win3"
			{tags add "snow"}
		else
			("set_crown_visible" args enable)
		}
	}
}



{"wheat"
	{inflammation_time 2}
	{on "burn" overload
		{if not burned
			{fire radius 1.0 time 6 heating 0.3}
			{burn volume "crown" fx "smoke_dead_tree" time 6 1}
			{start_sound "fire/bush/"}
			{tags add "burned"}
			{if tagged "bare"
				{tags remove "bare"}
				;{tex_morph "_burned1" 3 "_burned3" 3}
			else
				;{tex_morph "_burned0" 2 "_burned1" 2 "_burned3" 2}
			}
			{delay 5 {tex_mod "burned"}}
			{delay 6
				{call "burn_end"}
			}
			{call "update_crown_visibility"}
		}
		{call "regenerate"}
	}
}

{"cornfield"
	{on overlap begin
		{if effector "tank"
			{call "crush"}
		else effector "armored_car"
			{call "crush"}
		else effector "car"
			{call "crush"}
		else effector "airborne"
			{call "crush"}
		}
	}
	{on "crush" overload
		{if not tagged "crushed"
			{set_skeleton "_x"}
			{tags add "crushed"}
			{spawn "tree_hit_big" "root"}
			{start_sound "push/tree_crown"}
			;{tex_mod "dead"}
			{volumes disable visible bullet contact blast touch overlap}
		}
	}
}


;{"delete_after_burn"
;	{on "burn_end"
;		{hide 2}
;	}
;}

{"delete_after_burn stamp"
	{on "burn_end"
		{spawn "burn_grass1"} ;// does not exist
	}
}

{"delete_after_blast"
	{on blast
		{if min_energy 0.8
			{hide 0.6}
		}
	}
}

{"no_wind"
	{on "update_wind" overload
		{depend_on_wind 0}
	}
}

{"invisible_crown"
	{on "update_crown_visibility" overload
		("set_crown_visible" args disable)
	}
}

{"cabbage"
	{inflammation_time 10000}
	{on bullet_hit overload
		{if rand 0.2
			{call "crush"}
		else
			{if rand 0.3
				{spawn "tree_hit_small"}
			}
		}
	}
	{on blast_hit
		{if min_energy 1
			{call "crush"}
		else
			{impulse up 2 1 dir 2 1}
		}
	}
	{on contact
		{if effector "human"
			{volumes "crown" disable contact}
			{if rand 0.3
				{call "crush"}
			}
			{delay 0.5
				{volumes "crown" enable contact}
			}
		else
			{call "crush"}
		}
	}
	{on "crush"
		{spawn "tree_hit_small"}
		{delay 0.2
			{spawn "cabbage_destroy1" no_position no_normal} ;// does not exist
		}
		{hide 0.3}
	}
}

{"tree normal_light"
	{on spawn
		{use_local_light 0}
	}
}

{"stack_bush"
	{on spawn
		{use_local_light 0}
	}
}

{"wind_has_foliage"
	{on spawn
		{depend_on_wind 1}
		{wind_detail_bending}
	}
}

{"tree foliage"
	(define "foliage"
		{add_view "foliage" "foliage" "foliage%0"}
	)
	{on spawn
		("foliage" args 00) ("foliage" args 01) ("foliage" args 02) ("foliage" args 03) ("foliage" args 04)
		("foliage" args 05) ("foliage" args 06) ("foliage" args 07) ("foliage" args 08) ("foliage" args 09)
		("foliage" args 10) ("foliage" args 11) ("foliage" args 12) ("foliage" args 13) ("foliage" args 14)
		("foliage" args 15) ("foliage" args 16) ("foliage" args 17) ("foliage" args 18) ("foliage" args 19)
		("foliage" args 20) ("foliage" args 21) ("foliage" args 22) ("foliage" args 23) ("foliage" args 24)
		("foliage" args 25) ("foliage" args 26) ("foliage" args 27) ("foliage" args 28) ("foliage" args 29)
		("foliage" args 30) ("foliage" args 31) ("foliage" args 32) ("foliage" args 33) ("foliage" args 34)
		("foliage" args 35) ("foliage" args 36) ("foliage" args 37) ("foliage" args 38) ("foliage" args 39)
		("foliage" args 40) ("foliage" args 41) ("foliage" args 42) ("foliage" args 43) ("foliage" args 44)
		("foliage" args 45) ("foliage" args 46) ("foliage" args 47) ("foliage" args 48) ("foliage" args 49)
	}
}

{"hedgerow"
	{on break_armor
		{if volume "body"
			{if name "blast"
				{call "change_model"}
			}
		}
	}
	{on "change_model"
		{if not "sliced"
			{tags add "crushed"}
			{set "sliced" 1}
			;{call "disable_volumes"}
			{with_linked_entity "attach1" {call "blast_change"}}
			{with_linked_entity "attach2" {call "blast_change"}}
			{with_linked_entity "attach3" {call "blast_change"}}
			{with_linked_entity "attach4" {call "blast_change"}}
			{with_linked_entity "attach5" {call "blast_change"}}
			{delay_ex 0
				{call_synced "change_model_synced"}
			}
		}
	}
	{on "change_model_synced"
		{call_synced "set_skeleton_local"}
		;{call "disable_volumes"}
		{delay 0
			;{volumes "body" enable contact bullet blast visible}
			;{restore_volume_states} ; restore volume ables from .def file
			{update_visibility_patch}
		}
	}
	{on "set_skeleton_local"
		{set_skeleton "_x" local}
	}
	{on "break"
		{call "change_model"}
	}
	{on "disable_volumes"
		{volumes disable visible bullet contact blast touch}
	}
}