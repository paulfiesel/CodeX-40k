
;	<<<< -------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Defines for Troopers ===============] >>
;	<<<<--------------------------------------------------------------------------------------->>>>			 

; <<<<	===================	SC Trooper: A.I Related Configurations	===================	>>>>

(define "SC_TP_Main_Define_Chassis_Disable"
	{chassis_work 0}		
	{drop_orders}
)

(define "SC_TP_Main_Define_Chassis_Enable"
	{chassis_work 1}
)

; // --------------------> Disable AI

(define "SC_TP_Main_Define_AI_Disable"
	{Auto_Operatable 0}
	{drop_orders}
	{Reset_manual_control}
	{chassis_work 0}		
	{drop_orders}

)
(define "SC_TP_Main_Define_AI_Enable"
	{Auto_Operatable 1}
	{chassis_work 1}		
)

; <<<<	===================	SC Trooper: Weaponry Configurations	===================	>>>>

(Define "SC_TP_Main_Define_IKs_Disable"
	{ik_enable "aim_v" 0}
	{ik_enable "aim_h" 0}
	{ik_enable "aux1_aim_h" 0}
	{ik_enable "aux1_aim_v" 0}
	{ik_enable "aux2_aim_h" 0}
	{ik_enable "aux2_aim_v" 0}
	{ik_enable "aux3_aim_h" 0}
	{ik_enable "aux3_aim_v" 0}
)
	
(Define "SC_TP_Main_Define_IKs_Enable"
	{ik_enable "aim_v" 1}
	{ik_enable "aim_h" 1}
	{ik_enable "aux1_aim_h" 1}
	{ik_enable "aux1_aim_v" 1}
	{ik_enable "aux2_aim_h" 1}
	{ik_enable "aux2_aim_v" 1}
	{ik_enable "aux3_aim_h" 1}
	{ik_enable "aux3_aim_v" 1}
)
	
; // --------------------> Disable Weapons

(define "SC_TP_Main_Define_Weaponry_Disable_All_Melee"
	{weapon_work "Melee" 0}
	{weapon_work "Melee1" 0}
	{weapon_work "Melee2" 0}
	{weapon_work "Melee3" 0}
	{weapon_work "Melee4" 0}
	{weapon_work "Melee5" 0}
)

(define "SC_TP_Main_Define_Weaponry_Disable_All_Ranged"
	{weapon_work "Weapon" 0}
	{weapon_work "Weapon1" 0}
	{weapon_work "Weapon2" 0}
	{weapon_work "Weapon3" 0}
	{weapon_work "Weapon4" 0}
	{weapon_work "Weapon5" 0}
)

(define "SC_TP_Main_Define_Weaponry_Disable_Everything"
	("SC_TP_Main_Define_Weaponry_Disable_All_Melee")
	("SC_TP_Main_Define_Weaponry_Disable_All_Ranged")
)

; // --------------------> Enable Weapons

(define "SC_TP_Main_Define_Weaponry_Enable_All_Melee"
	{if not tagged "AI_force_ranged"
		{weapon_work "Melee" 1}
		{weapon_work "Melee1" 1}
		{weapon_work "Melee2" 1}
		{weapon_work "Melee3" 1}
		{weapon_work "Melee4" 1}
		{weapon_work "Melee5" 1}
	}
)

(define "SC_TP_Main_Define_Weaponry_Enable_All_Ranged"
	{if not tagged "AI_force_melee"
		{weapon_work "Weapon" 1}
		{weapon_work "Weapon1" 1}
		{weapon_work "Weapon2" 1}
		{weapon_work "Weapon3" 1}
		{weapon_work "Weapon4" 1}
		{weapon_work "Weapon5" 1}
	}
)

(define "SC_TP_Main_Define_Weaponry_Enable_Everything"
	("SC_TP_Main_Define_Weaponry_Enable_All_Melee")
	("SC_TP_Main_Define_Weaponry_Enable_All_Ranged")
)

