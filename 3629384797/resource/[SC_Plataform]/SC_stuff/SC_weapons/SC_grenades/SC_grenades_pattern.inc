
; ================================================================================ ;
; // [SC] GRENADE DEFINES
; ================================================================================ ;

(Define "SC_Grenade_Blastwave_noblast"
	; [...]
)

(Define "SC_Grenade_Blastwave_noblast_fx"
	{damage blastwave	;// no blast damage. Used to ensure ground detonation fx are played
		{energy 0}
		{area 0.01 0.25}
		{ground_interaction_radius 1} ;// value is multiplied by 2nd value of area to determine is blast is close enough to ground to trigger terrain fx
	}
)

(Define "SC_Grenade_Blastwave_x1"
	{damage blastwave
		{energy (* (* 1.0 %blast) %blast_mp)} {area (* 1.0 %a1) (* 1.0 %a2)}
		{ground_interaction_radius 0.1}
	}
	{possibleDamageRadius 1}
)

(Define "SC_Grenade_Blastwave_x2"
	{damage blastwave
		{energy (* (* 1.0 %blast) %blast_mp)} {area (* 1.0 %a1) (* 1.0 %a2)}
		{ground_interaction_radius 0.1}
	}
	{damage add blastwave
		{energy (* (* 0.5 %blast) %blast_mp)} {area (* 1.5 %a1) (* 1.5 %a2)}
		{ground_interaction_radius 0} 
	}
	{possibleDamageRadius 1}
)

(Define "SC_Grenade_Blastwave_x3"
	{damage blastwave
		{energy (* (* 1.0 %blast) %blast_mp)} {area (* 1.0 %a1) (* 1.0 %a2)}
		{ground_interaction_radius 0.1}
	}
	{damage add blastwave
		{energy (* (* 0.5 %blast) %blast_mp)} {area (* 1.5 %a1) (* 1.5 %a2)}
		{ground_interaction_radius 0} 
	}
	{damage add blastwave
		{energy (* (* 0.25 %blast) %blast_mp)} {area (* 2.0 %a1) (* 2.0 %a2)}
		{ground_interaction_radius 0} 
	}
	{possibleDamageRadius 1}
)

(Define "SC_Grenade_Pattern"
	{from "pattern throwable"
		{tag "%t"}		
		{inventory {size %inv}}
		{entity "%entity"}
		{mass %mass}
		
		{throw
			{range %range}
			{startAngle %angle}
			{spreading %spread}	;//	{constantSpeed 12}
		}
		("SC_Grenade_Blastwave_%blastwave" blast(%blast) blast_mp(%blast_mp) a1(%a1) a2(%a2))
		%args
	}
)

; ================================================================================ ;
; // [SC] GRENADE PROFILES
; ================================================================================ ;

(Define "SC_Grenade_Generic"
	("SC_Grenade_Pattern" t(%t) inv(%inv) entity(%entity) mass(%mass) range(%range) angle(%angle) spread(%spread) blastwave(%blastwave) blast(%blast) a1(%a1) a2(%a2) blast_mp(%blast_mp)
		args()
	)
)

(Define "SC_Grenade_Impact"
	("SC_Grenade_Pattern" t(%t contact) inv(%inv) entity(%entity) mass(%mass) range(%range) angle(%angle) spread(%spread) blastwave(%blastwave) blast(%blast) a1(%a1) a2(%a2) blast_mp(%blast_mp)
		args()
	)
)

(Define "SC_Grenade_Timed"
	("SC_Grenade_Pattern" t(%t) inv(%inv) entity(%entity) mass(%mass) range(%range) angle(%angle) spread(%spread) blastwave(%blastwave) blast(%blast) a1(%a1) a2(%a2) blast_mp(%blast_mp)
		args({special {PrepareTime %prep_time} {PrepareCursor "%cursor"} {mode detonate}})
	)
)

; ================================================================================ ;
; // [SC] GRENADE PRESETS
; ================================================================================ ;

; // dummies so the game doesn't crash till i replace them

(Define "SC_Grenade_AP"			{from "pattern throwable"})
(Define "SC_Grenade_AT" 		{from "pattern throwable"})
(Define "SC_Grenade_HE_Charge" 	{from "pattern throwable"})
(Define "SC_Grenade_Dummy" 		{from "pattern throwable"})
(Define "SC_Grenade_Molotov" 	{from "pattern throwable"})


; // -------------------------------------------------------------- ANTI-TANK  --------------------------------------------------------------

(Define "SC_Grenade_AT"
	("SC_Grenade_%type" t(%size at %t) inv(%inv) mass(3.0) entity(%entity) range(%range) angle(%angle) spread(0.25)
		blastwave(x1) blast(5.0) blast_mp(%blast_mp) a1(0.25) a2(0.5)
		prep_time(%prep_time) cursor(grenade)
	)
)

(Define "SC_Grenade_Charge"
	("SC_Grenade_%type" t(%size SC_big_grenade at %t) inv(%inv) mass(6.0) entity(%entity) range(%range) angle(%angle) spread(0.05)
		blastwave(x1) blast(10.0) blast_mp(%blast_mp) a1(4) a2(7)
		prep_time(%prep_time) cursor(grenade)
	)
)

; // -------------------------------------------------------------- FRAG  --------------------------------------------------------------

(Define "SC_Grenade_Frag"
	("SC_Grenade_%type" t(%size fg %t) inv(%inv) mass(2.0) entity(%entity) range(%range) angle(%angle) spread(0.5)
		blastwave(x2) blast(2.0) blast_mp(%blast_mp) a1(3) a2(6)
		prep_time(%prep_time) cursor(grenade)
	)
)

; // -------------------------------------------------------------- PLASMA  --------------------------------------------------------------

; // Can damage tanks and deals additional damage against soldiers with armor.

(Define "SC_Grenade_Plasma"
	("SC_Grenade_%type" t(%size at SC_grenade_plasma %t) inv(%inv) mass(1.0) entity(%entity) range(%range) angle(%angle) spread(0.1)
		blastwave(x1) blast(4.0) blast_mp(%blast_mp) a1(3) a2(6)
		prep_time(%prep_time) cursor(grenade)
	)
)

; // -------------------------------------------------------------- SMOKE  --------------------------------------------------------------

(Define "SC_Grenade_Smoke"
	("SC_Grenade_Generic" t(smoke %t) inv(%inv) mass(0.5) entity(%entity) range(25) angle(50) spread(0.1) blastwave(noblast))
)

; // -------------------------------------------------------------- SPECIAL  --------------------------------------------------------------

(Define "SC_Grenade_Dummy_Generic"
	("SC_Grenade_%type" t(%t) inv(%inv) mass(2.0) entity(%entity) range(%range) angle(%angle) spread(%spread)
		blastwave(noblast_fx) 
		prep_time(%prep_time) cursor(grenade)
	)
)

; // -------------------------------------------------------------- INCENDIARY  --------------------------------------------------------------

(Define "SC_Grenade_Incendiary"
	("SC_Grenade_Impact" t(ic ap fire at %t) inv(%inv) mass(1.0) entity(%entity) range(32) angle(60) spread(0.8) blastwave(noblast_fx))
)

