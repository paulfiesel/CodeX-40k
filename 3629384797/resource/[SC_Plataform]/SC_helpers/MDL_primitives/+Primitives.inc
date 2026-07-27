
(define "Volume_Box"
	{Volume "body"
		{box %Xsize %Ysize %Zsize} 	
		{Bone "%bone"}
		{Matrix34
			1	0	0
			0	1	0
			0	0	1
			%Xpos	%Ypos	%Zpos 			; -2	0	-2
		}
	}
)

(define "Volume_Sphere"
	{Volume "body"
		{Sphere %size} 	
		{Bone "%bone"}
		{Matrix34
			1	0	0
			0	1	0
			0	0	1
			%Xpos	%Ypos	%Zpos 			; -2	0	-2
		}
	}
)

(define "Volume_Cylinder"
	{Volume "body"
		{Cylinder %Radius %Height} 	
		{Bone "%bone"}
		{Matrix34
	;		1	0	0
	;		0	1	0
	;		0	0	1
			
			0	0	-1
			0	1	0
			1	0	0

			%Xpos	%Ypos	%Zpos 			; -2	0	-2
		}
	}
)