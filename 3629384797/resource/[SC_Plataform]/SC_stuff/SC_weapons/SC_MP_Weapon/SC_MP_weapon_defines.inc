
; ////////// OLD
(Define "SC_MP_Weapon"
	{actor 
		(include "/properties/stuff_weapon.ext")
		{Extension "%mdl_path"}
		{extender "stuff"
			{item "%stuff_set"}
		}
		{nogroupmesh 1}
	}
)

; //////////// NEW METHOD
(Define "SC_MP_Weapon_Entity"
	{actor 
		(include "/properties/stuff_weapon.ext")
		{Extension %mdl}
		{extender "stuff"
			{item "%stuff"}
		}
		{nogroupmesh 1}
	}
)