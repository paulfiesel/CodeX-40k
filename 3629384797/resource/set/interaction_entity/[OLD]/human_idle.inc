{on "select_idle"
	(define "select_idle_stand_2hands"
		{if rand 1
			{set_idle_animation "stand_look_around_gun" "stand_look_around_gun_1"} ; this will pick a random animation from the list
		}
	)
	(define "select_idle_empty_or_gun"
		{if rand %probability
			{if no_stuff
				{set_idle_animation %no_gun}
			else stuff "smallitemin1hand"		;// ITEM_IN_1HAND_SMALL (throwables, binocs, tools, headwear)
				{set_idle_animation %no_gun}
			else stuff "itemin1hand"			;// ITEM_IN_1HAND (radios, mine detector, fuel cans, medkit)
				{set_idle_animation %no_gun}
			else stuff "pistol weapon"			;// WEAPON_PISTOL
				{set_idle_animation %no_gun}
			else stuff "rocketlauncher weapon"	;// WEAPON_BAZOOKA
				; do nothing
			else
				{set_idle_animation %with_gun}
			}
		}
	)
	{if in_cover						;// cover types: "none" "look_left" "look_right" "look_2way" "snipe_cover" "squat_lie" "hide_stand" "hide_squat" "open_lie" "bush_stand" "bush_squat" "bush_lie" "terrain_lie"
		{if cover_type "look_left"		;// prevents idles overwriting standing human peaking around corner animations
			; do nothing
		else cover_type "look_right"
			; do nothing
		else cover_type "look_2way"
			; do nothing

		else standing
			{if no_stuff
				{if cover_type "hide_stand"
					{set_idle_animation "idle_cover_stand_hide"}
				else
					{set_idle_animation "idle_cover_stand_empty"}
				}
			else stuff "smallitemin1hand"		;// ITEM_IN_1HAND_SMALL (throwables, binocs, tools, headwear)
				{if cover_type "hide_stand"
					{set_idle_animation "idle_cover_stand_hide"}
				else
					{set_idle_animation "idle_cover_stand_empty"}
				}
			else stuff "itemin1hand"			;// ITEM_IN_1HAND (radios, mine detector, fuel cans, medkit)
				{if cover_type "hide_stand"
					{set_idle_animation "idle_cover_stand_hide"}
				else
					{set_idle_animation "idle_cover_stand_empty"}
				}
			else stuff "pistol weapon"			;// WEAPON_PISTOL
				{if cover_type "hide_stand"
					{set_idle_animation "idle_cover_stand_hide"}
				else
					{set_idle_animation "idle_cover_stand_empty"}
				}
			else stuff "rocketlauncher weapon"	;// WEAPON_BAZOOKA
				; do nothing

			else
				{if cover_type "hide_stand"
					{set_idle_animation "stand_look_around_gun"}
				else
					{set_idle_animation "idle_cover_stand"}
				}
			}
		else squatting
			{if cover_type "hide_squat"
				{set_idle_animation "idle_crouch_gun"}
			else stuff "smallitemin1hand"		;// ITEM_IN_1HAND_SMALL (throwables, binocs, tools, headwear)
				{set_idle_animation "idle_crouch_empty"}
			else stuff "itemin1hand"			;// ITEM_IN_1HAND (radios, mine detector, fuel cans, medkit)
				{set_idle_animation "idle_crouch_empty"}
			else stuff "pistol weapon"			;// WEAPON_PISTOL
				{set_idle_animation "idle_crouch_empty"}
			else stuff "rocketlauncher weapon"	;// WEAPON_BAZOOKA
				; do nothing
			else
				{set_idle_animation "idle_cover_crouch"}
			}
		else lying
			("select_idle_empty_or_gun" probability(0.5) no_gun("idle_lie_empty") with_gun("idle_lie_gun"))
		}


	;// not in cover
	else standing
		{if idle_low_health
			;{set_idle_animation "stand_low_health"}
		else stuff "mgun weapon"			;// WEAPON_MGUN
			("select_idle_stand_2hands")
		else stuff "smg weapon"				;// WEAPON_SMG
			("select_idle_stand_2hands")
		else stuff "rifle weapon"			;// WEAPON_RIFLE
			("select_idle_stand_2hands")
		else stuff "flame_thrower weapon"	;// WEAPON_FLAME_THROWER
			("select_idle_stand_2hands")
		else stuff "smallitemin1hand"		;// ITEM_IN_1HAND_SMALL (throwables, binocs, tools, headwear)
			{if rand 0.7
				{set_idle_animation "stand_idle_1hand"}
			}
		else stuff "itemin1hand"			;// ITEM_IN_1HAND (radios, mine detector, fuel cans, medkit)
			{if rand 0.1
				{set_idle_animation "stand_idle_1hand"}
			}
		else stuff "rocketlauncher weapon"	;// WEAPON_BAZOOKA
			; do nothing
		else stuff "pistol weapon"			;// WEAPON_PISTOL
			; do nothing
		else stuff "itemin2hands"			;// ITEM_IN_2HANDS (boxes, barrels, repair kits, shells)
			; do nothing
		else stuff "human"					;// ITEM_CORPSE
			; do nothing
		else stuff "flag"					;// ITEM_FLAG
			; do nothing
		else
			{if rand 0.7
				{if hold_strap				; item that is meant to be held on the shoulder, i.e. a rifle
					{set_idle_animation "stand_idle_strap_1" "stand_idle_strap_2" "stand_idle_strap_3" "stand_idle_strap_4"}
				else
					{set_idle_animation "stand_idle_empty_1" "stand_idle_empty_2" "stand_idle_empty_3" "stand_idle_empty_4"}
				}
			}
		}
	else squatting
		("select_idle_empty_or_gun" probability(0.5) no_gun("idle_crouch_empty") with_gun("idle_crouch_gun"))
	else lying
		("select_idle_empty_or_gun" probability(0.5) no_gun("idle_lie_empty") with_gun("idle_lie_gun"))
	else swimming
		("select_idle_empty_or_gun" probability(1) no_gun("swim_on_the_spot_empty") with_gun("swim_gun"))
	}
}