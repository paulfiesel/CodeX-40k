{ZClipVisibility 0}

(define "body_vol"
	{Volume "%0"
		{tags "body"}
		{able {visible %1}}
	}
)

(define "roof_vol"
	{Volume "%0"
		{tags "roof"}
		{able {visible %1}}
	}
)

(define "declare_fire_volume"
	{Volume "fire%0"
		{able clear}
		{tags "fire"}
	}
	{Volume "smoke%0"
		{able clear}
		{tags "fire"}
	}
)

(define "declare_fire_volumes"
	{props "burning_old"}
	("declare_fire_volume" args 0)	("declare_fire_volume" args 1)
	("declare_fire_volume" args 2)	("declare_fire_volume" args 3)
	("declare_fire_volume" args 4)	("declare_fire_volume" args 5)
	("declare_fire_volume" args 6)	("declare_fire_volume" args 7)
	("declare_fire_volume" args 8)	("declare_fire_volume" args 9)
)

(define "armor_construction"
	{armor
		{setting "body"
			;{threshold {pierce {koef 1}}}
			{threshold {pierce {calibre 20}}}
			{ray_cast_thickness}
			{volumes "body*"}
			{volumes "box*"}
			{volumes "wire*"}
			{volumes "wires*"}
			{volumes "floor*"}
			{volumes "wood*"}
		}
		{setting "roof"
			;{threshold {pierce {koef 1}}}
			{threshold {pierce {calibre 20}}}
			{ray_cast_thickness}
			{volumes "roof*"}
		}
	}
)

(define "blast_protection"
	{armor
		{setting "body"
			{threshold {blast {value %dmg}}}
		}
		{setting "roof"
			{threshold {blast {value %dmg}}}
		}
	}
)

(define "frag_grenade_protection"
	("blast_protection" dmg(6))
)
(define "armor_fragile" ; Grenade can blow them up
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 10}}
				{blast {value 2}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 10}}
				{blast {value 2}}
			}
		}
	}
)
(define "armor_light"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 37}}
				{blast {value 5}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 37}}
				{blast {value 5}}
			}
		}
	}
)
(define "armor_medium" ; 57mm HE will break
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 57}}
				{blast {value 8}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 57}}
				{blast {value 7}}
			}
		}
	}
)
(define "armor_75mm" ; 75mm HE will break
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 75}}
				{blast {value 11}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 75}}
				{blast {value 10}}
			}
		}
	}
)
(define "armor_heavy"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 85}}
				{blast {value 22}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 85}}
				{blast {value 24}}
			}
		}
	}
)
(define "armor_bunker_medium" ; 105mm HE will break
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 85}}
				{blast {value 35}}
			}
		}
		{setting "roof"
			{threshold 
				{pierce {calibre 85}}
				{blast {value 35}}
			}
		}
	}
)
(define "armor_sandbag_woodbeam"
	("armor_construction")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 10}}
				{blast {value 5}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 10}}
				{blast {value 5}}
			}
		}
	}
)

(define "armor_adjustable"
	{armor
		{setting "body"
			{threshold
				{blast 
					{value %thresh_fg}
				}
				{pierce
					{value %thresh_ap}
					{calibre %calibre}
				}
			}
		}
		{setting "roof"
			{threshold {blast {value 5}}}
		}
	}
)

(define "armor_house_wood"
	("armor_light")
)
(define "armor_house_wood_heavy"
	("armor_heavy")
)
(define "armor_house_concrete_light"
	("armor_medium")
)
(define "armor_house_concrete"
	("armor_medium")
)


(define "armor_hedgehog"
	("armor_adjustable" thresh_fg(20) thresh_ap(80) calibre(57)) ; 35fg = 105mm HE and up
)

(define "armor_dragontooth"
	("armor_adjustable" thresh_fg(13) thresh_ap(60) calibre(37))
)

(define "armor_stack"
	("armor_adjustable" thresh_fg(10) thresh_ap(15) calibre(12))
)

(define "armor_glass"
	("armor_adjustable" thresh_fg(10) thresh_ap(15) calibre(0))
)

(define "armor_sandbag"
	("armor_adjustable" thresh_fg(10) thresh_ap(15) calibre(10))
)

(define "armor_post"
	("armor_construction")
	("armor_use_volume_thickness")
	{armor
		{setting "body"
			{threshold
				{blast {value 5}}
			}
		}
	}
)

(define "armor_wires"
	("armor_light")
)

(define "armor_fence_wood"
	("armor_construction")
	("armor_use_volume_thickness")
	{armor
		{setting "body"
			{threshold
				{pierce {calibre 10}}
				{blast {value 4.75}}
			}
		}
		{setting "roof"
			{threshold
				{pierce {calibre 10}}
				{blast {value 4.75}}
			}
		}
	}
)

(define "armor_fabric"
	("armor_fence_wood")
)

(define "armor_use_volume_thickness"
	{armor
		{setting "body"
			{ray_cast_thickness 0}
		}
		{setting "roof"
			{ray_cast_thickness 0}
		}
	}
)

(define "armor_disable_damage_acc"
	{armor
		{setting "body"
			{disable_damage_acc}
		}
		{setting "roof"
			{disable_damage_acc}
		}
	}
)

(include "texmod.inc")

("armor_medium")