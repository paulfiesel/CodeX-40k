
(Include "SC_DLC_HALO_em.inc")
(Include "SC_DLC_LV40k_em.inc")

{group "dead" actor dead
	(mod "mp" 			{limit 40})		;	// BUZZ: was 50
	(mod not "mp"		{limit 150})	;	// BUZZ: was 200
	{remove dissolve}
	{entity "human"}
	
	("Entities_LV40k_human")
}

{group "SC_troopers_s1" actor dead
	(mod "mp" 			{limit 25})		
	(mod not "mp"		{limit 50})	
	{remove dissolve}
	
	("Entities_LV40k_Troopers_S1")
}

{group "SC_troopers_s2" actor dead
	(mod "mp" 			{limit 25})		
	(mod not "mp"		{limit 50})	
	{remove dissolve}
	
	("Entities_LV40k_Troopers_S2")	
}

{group "SC_troopers_s3" actor dead
	(mod "mp" 			{limit 25})		
	(mod not "mp"		{limit 50})		
	{remove dissolve}
	
	("Entities_LV40k_Troopers_S3")	
}