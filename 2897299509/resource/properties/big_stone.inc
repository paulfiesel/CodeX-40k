{collider "construction"}
{obstacleID "unbreakable"}
{props "concrete" "cornered" "parts" "construction" "no_destroyed_stamp"}	
{mass 1000}

{Volume "rock"
	{thickness 1000}
}
{Volume "body1"
	{tags "body"}
	{thickness 1000}
}
{Volume "body"
	{tags "body"}
	{thickness 1000}
}
	{armor
		{setting "body"
			{ray_cast_thickness 0}
		}
	}
	{armor
		{setting "body"
			{threshold {pierce {calibre 12}}}
			{ray_cast_thickness}
			{volumes "body*"}
		}
	}
	{armor
		{setting "body"
			{threshold  
				{blast {value 10}}
			}
			{durability 
				{blast {value 25}}
				{pierce {value 50}}			
			}
		}
	}

{lodclass "decor_medium"}