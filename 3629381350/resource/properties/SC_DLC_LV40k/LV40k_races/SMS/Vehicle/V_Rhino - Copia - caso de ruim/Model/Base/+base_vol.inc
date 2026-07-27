
{Volume "engine"
	{Box 39.3701 39.3701 34.4488}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		-6.58035e-05	-31.7523	36.9094
	}
}
{Volume "fuel"
	{Box 29.5276 39.3701 9.84252}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		0	19.685	24.6063
	}
}
{Volume "ammo"
	{Box 59.0551 39.3701 24.6063}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		0	19.685	57.8887
	}
}

{Volume "body1"
	{Polyhedron "body1.vol"}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		0	0	9.84252
	}
}
{Volume "body2"
	{Polyhedron "body2.vol"}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		-48.4843	0	9.84252
	}
}
{Volume "body3"
	{Polyhedron "body3.vol"}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		48.4757	0	9.84252
	}
}
{Volume "body4"
	{Polyhedron "body4.vol"}
	{Bone "body"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		0	0	9.84252
	}
}
{Volume "trackleft1"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell1"}
	{Position 0	0	0.0135474}
}
{Volume "trackleft2"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell2"}
	{Position 0	0	0.0132918}
}
{Volume "trackleft3"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell3"}
	{Position 1.14441e-05	0	0.0130477}
}
{Volume "trackleft4"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell4"}
	{Position 0	0	0.0127769}
}
{Volume "trackleft5"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell5"}
	{Position 2.28882e-05	0	0.0124183}
}
{Volume "trackleft6"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell6"}
	{Matrix34
		1	0	0
		0	1	0
		0	0	1
		1.98113e-05	0	0.0122886
	}
}
{Volume "trackleft7"
	{Cylinder 9.7898 9.54724}
	{Bone "wheell7"}
	{Matrix34
		1	0	0
		0	1	0
		0	0	1
		0	1.32507e-05	0.0137725
	}
}
{Volume "trackleft"
	{Polyhedron "trackleft.vol"}
	{Bone "wheelsl"}
	{Position 4.43666	48.2283	-22.0265}
}
{Volume "trackright1"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr1"}
	{Position 0	0	-0.0146356}
}
{Volume "trackright2"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr2"}
	{Matrix34
		1	0	0
		0	1	0
		0	0	1
		0	1.498e-05	-0.0149598
	}
}
{Volume "trackright3"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr3"}
	{Matrix34
		1	0	0
		0	1	0
		0	0	1
		0	0	-0.0151963
	}
}
{Volume "trackright4"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr4"}
	{Matrix34
		1	0	0
		0	1	0
		0	0	1
		0	1.59337e-05	-0.0155244
	}
}
{Volume "trackright5"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr5"}
	{Position 0	0	-0.0138383}
}
{Volume "trackright6"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr6"}
	{Position 0	0	-0.01401}
}
{Volume "trackright7"
	{Cylinder 9.7898 9.54724}
	{Bone "wheelr7"}
	{Position 0	0	-0.0143075}
}
{Volume "trackright"
	{Polyhedron "trackright.vol"}
	{Bone "wheelsr"}
	{Position 4.43642	-48.2284	-22.0265}
}
