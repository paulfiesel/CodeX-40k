

; ==================================================================================================== ;

; // -------------------------------------------- LASGUNS

; // BUZZ: Be in mind that the damage damping here is only additive. The main damage dealt by lasguns is defined in LV40k mod Interaction_Entity.
; // BUZZ: Lasguns have increased damage at close range, and lose effectiveness at range.

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	100(m)	|	20(d)	|
;		(Rifle Lasgun)
	
{curve "bullet_lasgun_rifle"			
	{0.05	2.00}		;// 5m		40d
	{0.6	1.00}		;// 60m		20d
	{1.0	0.50}		;// 100m	10d
}

; // BUZZ: hotshot has less falloff, but no distance bonuses whatsoever.

{curve "bullet_lasgun_hotshot"			
	{0.5	1.00}		;// 50m		20d
	{0.75	0.75}		;// 75m		15d
	{1.0	0.50}		;// 100m	10d
}


; ==================================================================================================== ;

; // -------------------------------------------- Meltagun

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	40(m)	|	2500(d)	|
;		(Bolter Rifle)
	
{curve "bullet_melta"			
	{0.20	1.0}		;// 24m		2500d
	{1.10	0.1}		;// 44m		250d
}



; ==================================================================================================== ;

; // -------------------------------------------- BOLTERS

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	120(m)	|	250(d)	|
;		(Bolter Rifle)
	
{curve "bullet_bolter"			
	{0.20	1.25}		;// 24m		312d
	{0.55	1.0}		;// 66m		250d
	{1.00	0.8}		;// 120m	200d
	{2.00	0.50}		;// 240m	100d
}


; ==================================================================================================== ;

; // BUZZ: All ork weapons have really high ROF values, so it's better not to ramp up their damage at close ranges. 

; // -------------------------------------------- ORK SLUGGA 

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	80(m)	|	125(d)	|
;		(Slugga Common)
	
{curve "bullet_slugga"		
	{0.1	1.0}		;// 8m		125d
	{0.3	0.8}		;// 24m		100
	{0.5	0.5}		;// 40m		62
	{1.0	0.35}		;// 80m		43d
}

; // -------------------------------------------- ORK SHOOTA REGULAR

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	100(m)	|	50(d)	|
;		(Shoota Common)
	
{curve "bullet_shoota"		
	{0.1	1.25}		;// 10m		112d
	{0.35	1.0}		;// 30m		90d
	{0.5	0.8}		;// 50m		72d
	{1.0	0.6}		;// 100m	54d
	{2.0	0.3}		;// 200m	27d
}

; // -------------------------------------------- ORK DEFFGUN DAKKA DEFFGUN

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	135(m)	|	150(d)	|
;		(Deffgun Dakka)
	
{curve "bullet_deffgun_dakka"		
	{0.25	1.25}		;// 33m		225d
	{0.5	1.0}		;// 68m		150d
	{1.0	0.75}		;// 135m	112d
	{2.0	0.5}		;// 270m	75d
}

; // -------------------------------------------- ORK SPECHUL SHOOTA [SHOTGUN]

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	65(m)	|	500(d)	|
;		(Spechul Shoota)
	
{curve "bullet_spechul_shoota"		
	{0.05	3.0}		;// 3.2m	1500d
	{0.1	2.0}		;// 6.5m	1000d
	{0.2	1.0}		;// 13m		500d
	{0.3	0.75}		;// 20m		375d
	{0.5	0.5}		;// 33m		250d
	{0.8	0.25}		;// 52m		125d
	{0.1	0.05}		;// 65m		25d
}


; ==================================================================================================== ;

; // BUZZ: Plasma weapons don't deal bonus damage in close range. 

; // -------------------------------------------- IMPERIUM PLASMA GUN

;							RANGE:		DAMAGE:
;		[REFERENCE]		|	100(m)	|	300(d)	|
;		(Plasmagun)
	
{curve "bullet_40k_plasmagun"		
	{0.25	1.0}		;// 25m		300d
	{0.6	0.8}		;// 60m		240d
	{1.0	0.5}		;// 100m	150d
	{1.5	0.3}		;// 150m	90d
}
