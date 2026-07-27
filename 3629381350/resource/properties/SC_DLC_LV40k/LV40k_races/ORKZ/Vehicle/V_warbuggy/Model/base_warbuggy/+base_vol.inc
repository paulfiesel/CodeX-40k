
{Volume "body"
	{Box 76.7717 46.2598 5.90551}
	{Bone "body"}
	{Position 2.91581	0	14.7638}
}
{Volume "engine"
	{Box 31.4961 33.4646 19.685}
	{Bone "engine"}
	{Matrix34
		0	-1	0
		0	0	-1
		1	0	0
		7.87402	6.35726	-4.71937
	}
}
{Volume "gun"
	{Cylinder 6.88976 14.7638}
	{Bone "gun_rot"}
	{Matrix34
		0	-1	0
		0	0	-1
		1	0	0
		-1.7266	2.89656	0
	}
}
{Volume "shield1"
	{Polyhedron "shield1.vol"}
	{Bone "shields"}
	{Position 45.0084	0.7038	22.9998}
}
{Volume "shield2"
	{Polyhedron "shield2.vol"}
	{Bone "shields"}
	{Position -23.6165	23.8008	30.499}
}
{Volume "shield3"
	{Polyhedron "shield3.vol"}
	{Bone "shields"}
	{Position 23.5499	22.5292	25.2553}
}
{Volume "shield4"
	{Polyhedron "shield4.vol"}
	{Bone "shields"}
	{Position 23.5499	-22.8827	24.573}
}
{Volume "shield5"
	{Polyhedron "shield5.vol"}
	{Bone "shields"}
	{Position -23.6165	-24.3568	29.5956}
}
{Volume "turret"
	{Cylinder 4.92126 32.4803}
	{Bone "turret"}
	{Matrix34
		0.95751	0	-0.288399
		0	1	0
		0.288399	0	0.95751
		3.75289	0.91676	11.4842
	}
}
{Volume "wheelleft1"
	{Cylinder 11.811 11.2205}
	{Bone "wheelleft1"}
	{Matrix34
		-1	0	0
		0	-1	0
		0	0	1
		0	0	-0.150502
	}
}
{Volume "wheelleft2"
	{Cylinder 14.7638 13.2874}
	{Bone "wheelleft2"}
	{Matrix34
		-1	0	0
		0	-1	0
		0	0	1
		0	0	-3.01287
	}
}
{Volume "wheelright1"
	{Cylinder 11.811 11.2205}
	{Bone "wheelright1"}
	{Matrix34
		-1	0	0
		0	-1	0
		0	0	1
		0	0	0.186776
	}
}
{Volume "wheelright2"
	{Cylinder 14.7638 13.2874}
	{Bone "wheelright2"}
	{Matrix34
		-1	0	0
		0	-1	0
		0	0	1
		0	0	2.99096
	}
}
