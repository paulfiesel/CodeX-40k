
{Volume "barrel"
	{Cylinder 12 80}
	{Bone "barrels01"}
	{Matrix34
		0	0	1
		0	1	0
		-1	0	0
		-18.6845	0.00252713	-4.09139
	}
}
{Volume "body1"
	{Box 35 27.5 5.94718}
	{Bone "body"}
	{Matrix34
		0.992546	0	0.121869
		0	1	0
		-0.121869	0	0.992546
		-0.50199	0	7.3786
	}
}
{Volume "body2"
	{Cylinder 9 25}
	{Bone "turret"}
	{Position 0	0	8.90712}
}
{Volume "body3"
	{Polyhedron "body3.vol"}
	{Bone "body"}
	{Position 4.67129	5.99944	20.7011}
}
{Volume "body4"
	{Polyhedron "body4.vol"}
	{Bone "body"}
	{Position 4.67129	-6.02625	20.7011}
}
{Volume "shield1"
	{Polyhedron "shield1.vol"}
	{Bone "shield2"}
	{Position 24.5937	0.0756149	15.7446}
}
{Volume "shield2"
	{Polyhedron "shield2.vol"}
	{Bone "shield3"}
	{Position 0.671678	-19.0852	25.8693}
}
{Volume "shield3"
	{Polyhedron "shield3.vol"}
	{Bone "shield1"}
	{Position 3.4032	-7.98583	28.6455}
}
{Volume "shield4"
	{Polyhedron "shield4.vol"}
	{Bone "shield3"}
	{Position 12.7495	-21.288	37.1488}
}
{Volume "shield5"
	{Polyhedron "shield5.vol"}
	{Bone "shield1"}
	{Position 3.4032	7.96503	28.6455}
}
{Volume "wheelleft"
	{Cylinder 12.5 14}
	{Bone "wheelleft"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0.073855	0.0972587	0.220227
	}
}
{Volume "wheelright"
	{Cylinder 12.5 14}
	{Bone "wheelright"}
	{Matrix34
		-1	0	0
		0	1	0
		0	0	-1
		0.0738531	0.0972546	-0.500001
	}
}
