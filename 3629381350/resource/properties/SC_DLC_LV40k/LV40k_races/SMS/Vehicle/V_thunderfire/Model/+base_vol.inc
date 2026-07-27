
{Volume "gun"
	{Cylinder 5.5 21.5}
	{Bone "gun_rot"}
	{Matrix34
		0	-1.25	0
		0	0	-1.25
		1.25	0	0
		25.8172	9.14029	7.05111e-05
	}
}
{Volume "body"
	{Cylinder 12 2.5}
	{Bone "body"}
	{Matrix34
		1.25	0	0
		0	1.25	0
		0	0	1.25
		-4.68885	0	-2.37919
	}
}
{Volume "body1"
	{Box 34 24.5 3}
	{Bone "body"}
	{Matrix34
		1.25	0	0
		0	1.25	0
		0	0	1.25
		0	-1.63975e-05	-5.8167
	}
}
{Volume "body2"
	{Box 11 16 11.5}
	{Bone "turret"}
	{Matrix34
		1.25	0	0
		0	1.25	0
		0	0	1.25
		-0.163676	-1.81794e-05	7.79156
	}
}
{Volume "body3"
	{Box 24.5 20 14.5}
	{Bone "gun_rot"}
	{Matrix34
		1.25	0	0
		0	0	-1.25
		0	1.25	0
		-3.11596	10.6046	7.43704e-05
	}
}
{Volume "trackleft"
	{Polyhedron "trackleft.vol"}
	{Bone "trackl"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		19.5462	3.57628e-05	-3.34327e-05
	}
}
{Volume "trackright"
	{Polyhedron "trackright.vol"}
	{Bone "trackr"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		-19.5465	3.74716e-05	-3.8093e-05
	}
}