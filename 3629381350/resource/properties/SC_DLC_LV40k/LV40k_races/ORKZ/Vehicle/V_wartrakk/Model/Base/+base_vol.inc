
{Volume "body"
	{Polyhedron "body.vol"}
	{Bone "body"}
	{Position -10.8637	-1.12635	-0.629799}
}
{Volume "engine"
	{Box 14.641 20.7598 15.748}
	{Bone "body"}
	{Matrix34
		0.999977	0	0.00682826
		0	1	0
		-0.00682826	0	0.999977
		16.0643	-1.08762	-2.24396
	}
}
{Volume "fuel"
	{Polyhedron "fuel.vol"}
	{Bone "body"}
	{Position -43.4451	-1.20602	-3.3273}
}
{Volume "gun1"
	{Cylinder 6.08086 31.4961}
	{Bone "bomb_chukka"}
	{Matrix34
		0	-1	0
		0	0	-1
		1	0	0
		16.0916	-0.490727	0
	}
}
{Volume "gun2"
	{Box 39.3701 16.2402 6.88976}
	{Bone "aux_big_shootas"}
	{Position 9.19312	0	3.44488}
}
{Volume "trackleft1"
	{Cylinder 7.87104 12.7953}
	{Bone "wheell1"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		-1.03255e-05	1.24101e-05	-3.83455
	}
}
{Volume "trackleft2"
	{Cylinder 7.87104 12.7953}
	{Bone "wheell2"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0	1.14564e-05	-3.83457
	}
}
{Volume "trackleft3"
	{Cylinder 7.87104 12.7953}
	{Bone "wheell3"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		-0.000128581	0	-6.04969
	}
}
{Volume "trackleft"
	{Polyhedron "trackleft.vol"}
	{Bone "wheelsl"}
	{Position 6.27988	35.7428	4.76837e-05}
}
{Volume "trackright1"
	{Cylinder 7.87104 12.7953}
	{Bone "wheelr1"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0	0	3.97369
	}
}
{Volume "trackright2"
	{Cylinder 7.87104 12.7953}
	{Bone "wheelr2"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0	0	3.97369
	}
}
{Volume "trackright3"
	{Cylinder 7.87104 12.7953}
	{Bone "wheelr3"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0	0	6.18884
	}
}
{Volume "trackright"
	{Polyhedron "trackright.vol"}
	{Bone "wheelsr"}
	{Position 6.27988	-20.0686	4.76837e-05}
}
