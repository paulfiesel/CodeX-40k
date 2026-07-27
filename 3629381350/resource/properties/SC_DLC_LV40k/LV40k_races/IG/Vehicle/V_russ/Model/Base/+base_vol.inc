
{Volume "aux_turret2"
	{Polyhedron "aux_turret1.vol"}
	{Bone "sponson_r"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		64.0811	7.80972	-51.0058
	}
}
{Volume "aux_turret3"
	{Polyhedron "aux_turret2.vol"}
	{Bone "sponson_f"}
	{Position -5.10727	0.272819	-15.5441}
}
{Volume "aux_turret1"
	{Polyhedron "aux_turret3.vol"}
	{Bone "sponson_l"}
	{Matrix34
		0	-1	0
		1	0	0
		0	0	1
		-64.0811	7.80974	-51.0058
	}
}
{Volume "body1"
	{Polyhedron "body1.vol"}
	{Bone "body2"}
	{Position -14.1706	-47.1984	0}
}
{Volume "body2"
	{Polyhedron "body2.vol"}
	{Bone "body"}
	{Position 5.86257	0	37.4111}
}
{Volume "body3"
	{Polyhedron "body3.vol"}
	{Bone "body"}
	{Position -55.556	0	17.0655}
}
{Volume "body4"
	{Polyhedron "body4.vol"}
	{Bone "body"}
	{Position -0.925047	0	72.38}
}
{Volume "body5"
	{Polyhedron "body5.vol"}
	{Bone "body2"}
	{Position -14.1706	50.3268	0}
}
{Volume "engine"
	{Polyhedron "engine.vol"}
	{Bone "body"}
	{Position -55.556	0	53}
}
{Volume "trackleft"
	{Polyhedron "trackl.vol"}
	{Bone "trackl"}
	{Position 2.91177	0.916187	-36.88}
}
{Volume "trackright"
	{Polyhedron "trackr.vol"}
	{Bone "trackr"}
	{Position 2.91177	1.1278	-36.88}
}