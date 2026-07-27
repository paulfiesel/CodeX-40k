
; ======================== WEAPON PRICING ========================]

(Define "IGC_None" 						{cost (+ %cost1 %cost2  0)})

(Define "IGC_Autopistol"				{cost (+ %cost1 %cost2  0)})	; FREE
(Define "IGC_Laspistol" 				{cost (+ %cost1 %cost2  0)})	; FREE

(Define "IGC_Autogun" 					{cost (+ %cost1 %cost2  1.0)})
(Define "IGC_Lasgun" 					{cost (+ %cost1 %cost2  2.0)})

(Define "IGC_Grenade_Launcher" 			{cost (+ %cost1 %cost2  5.0)})
(Define "IGC_Plasmagun" 				{cost (+ %cost1 %cost2  5.0)})

; ================================================ SOLDIER PRICING ================================================

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 0] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "IGC_Conscript"				
	("sc_inf_tier1"		period(early) side(IGC))	
	("IGC_%wpn" cost1(2.0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 1] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "IGC_Regular"				
	("sc_inf_tier2"		period(early) side(IGC))	
	("IGC_%wpn" cost1(3.0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 2] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "IGC_Veteran"				
	("sc_inf_tier3"		period(early) side(IGC))	
	("IGC_%wpn" cost1(5.0) cost2(0))
)		

; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ [TIER 4] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "IGC_Stormtrooper"				
	("sc_inf_tier5"		period(early) side(IGC))	
	("IGC_%wpn" cost1(15.0) cost2(0))
)		

; ======================== BREED INFANTRY ========================]
