
(Include "../SC_Ammo.inc")

(define "SC_Ammo_Shell"
	{tag "ammo itemin2hands"}
	{mass %weight}
	{inventory
		{size %inv}
		{weight 100}
		{fsm "stuff"}
	}
)

; ================================================================================ ;
; // COMMON DEFINES
; ================================================================================ ;

(define "SC_Ammo_Shell_AP"
	{tag "apcbche pierce capped no_throw hasfiller all_ap std_ap"}
)

(define "SC_Ammo_Shell_APHE"
	{tag "pierce"}	
	{tag "apcbche capped hasfiller std_ap"}	
	
	{tag "all_he"} 	; // BUZZ: <- target selector...
	{tag "aphe"}	
	
	{cumulative %piercing}
;	// {detonationThickness %piercing}		
	{possibleDamageRadius 0.1}
)

(define "SC_Ammo_Shell_SMOKE"
	{tag "sm smoke no_throw"}
;	{tag "fg"}

	{detonationThickness 0.5}
)

(define "SC_Ammo_Shell_HE"
	{tag "he fg all_he"}
	{detonationThickness 0.5}
	{possibleDamageRadius 0.1}
)

(define "SC_Ammo_Shell_HEAT"
	{tag "no_throw"}
	{tag "heat heat_shell pierce fg all_he"}
	{cumulative 3}
)

; ================================================================================ ;
; // 20mm Autocannon Generic - [Light]
; ================================================================================ ;

(define "SC_Shell_20A_AP"
	("SC_Ammo_Shell" weight(1) inv(2 2))
	
	("SC_Ammo_Shell_AP")

	{tag "20to25 zenite no_throw auto size1"}		
	{view "howitzer_shell_auto"	{tail "shell_tracer_20_ap" "tail"}}
)

(define "SC_Shell_20A_APHE"
	("SC_Ammo_Shell" weight(1) inv(2 2))
	
	("SC_Ammo_Shell_APHE" piercing(0.5))

	{tag "20to25 zenite no_ricochet auto size1"}
	{view "howitzer_shell_auto"	{tail "shell_tracer_20_he" "tail"}}
	("SC_Ammo_Blast_Main"	energy(2.0) a1(0.25) a2(2.0) gradius(0.25))
)

; ================================================================================ ;
; // 30mm Autocannon Generic - [Light]
; ================================================================================ ;

(define "SC_Shell_30A_AP"
	("SC_Ammo_Shell" weight(2) inv(3 2))
	
	("SC_Ammo_Shell_AP")

	{tag "20to25 zenite no_throw auto size1"}		
	{view "howitzer_shell_auto"	{tail "shell_tracer_37_he" "tail"}}
)

(define "SC_Shell_30A_APHE"
	("SC_Ammo_Shell" weight(2) inv(3 2))
	("SC_Ammo_Shell_APHE" piercing(0.5))

	{tag "20to25 zenite no_throw auto size1 sc_fx_autocannon"}	
	{view "howitzer_shell_auto"	{tail "shell_tracer_37_he" "tail"}}
	("SC_Ammo_Blast_Main"	energy(2.0) a1(0.5) a2(2.0) gradius(0.25))
)

(define "SC_Shell_30A_HE"
	("SC_Ammo_Shell" weight(2) inv(3 2))
	("SC_Ammo_Shell_HE")
	
	{tag "20to25 no_throw auto size1 sc_fx_autocannon"}
	{view "howitzer_shell_auto"	{tail "shell_tracer_37_he" "tail"}}
	("SC_Ammo_Blast_Main"	energy(3.0) a1(0.5) a2(2.0) gradius(0.25))
)

; ================================================================================ ;
; // 40mm Autocannon Generic - [Medium]
; ================================================================================ ;

(define "SC_Shell_40A_AP"
	("SC_Ammo_Shell" weight(4) inv(4 2))
	("SC_Ammo_Shell_AP")

	{tag "37to40 no_throw zenite auto size2"}
	{view "howitzer_shell_37-50"	{tail "shell_tracer_eng_40_auto" "tail"}}
)

(define "SC_Shell_40A_APHE"
	("SC_Ammo_Shell" weight(4) inv(4 2))
	("SC_Ammo_Shell_APHE" piercing(0.5))

	{tag "37to40 no_throw zenite auto size2 sc_fx_autocannon"}
	{view "howitzer_shell_37-50"	{tail "shell_tracer_eng_40_auto" "tail"}}
	("SC_Ammo_Blast_Main"	energy(3.0) a1(0.5) a2(2.0) gradius(0.25))
)

(define "SC_Shell_40A_HE"
	("SC_Ammo_Shell" weight(4) inv(4 2))
	("SC_Ammo_Shell_HE")
	
	{tag "37to40 no_throw auto size2 sc_fx_autocannon"}
	{view "howitzer_shell_37-50"	{tail "shell_tracer_eng_40_auto" "tail"}}
	("SC_Ammo_Blast_Main"	energy(4.0) a1(0.5) a2(3.0) gradius(0.25))
)

; ================================================================================ ;
; // 50mm Autocannon Generic - [Heavy] 
; ================================================================================ ;

(define "SC_Shell_50A_AP"
	("SC_Ammo_Shell" weight(6) inv(4 2))
	("SC_Ammo_Shell_AP")

	{tag "shell size1 50to57_he_filler"}
	{view "howitzer_shell_50-75_small"	{tail "shell_tracer_50l_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(1.0) a1(1.0) a2(2.0) gradius(0))
)

(define "SC_Shell_50A_APHE"
	("SC_Ammo_Shell" weight(6) inv(4 2))
	("SC_Ammo_Shell_APHE" piercing(0.5))
	
	{tag "shell size1 50to57_he_filler"}
	{view "howitzer_shell_50-75_small"	{tail "shell_tracer_37-57_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(3.0) a1(1) a2(3) gradius(0.5))
	("SC_Ammo_Blast_Add"	energy(1.5) a1(2) a2(5) gradius(0))
)

(define "SC_Shell_50A_HE"
	("SC_Ammo_Shell" weight(6) inv(4 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size1 50to57 no_throw"}
	{view "howitzer_shell_50-75_small"	{tail "shell_tracer_37-57_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(4.5) a1(2) a2(3) gradius(0.5))
	("SC_Ammo_Blast_Add"	energy(2.0) a1(3) a2(5) gradius(0))
	("SC_Ammo_Blast_Add"	energy(1.0) a1(4) a2(6.5) gradius(0))
)

(define "SC_Shell_50A_SMOKE"
	("SC_Ammo_Shell" weight(3) inv(4 2))
	
	("SC_Ammo_Shell_SMOKE")
	
	{tag "shell 50to57 no_throw smoke_size1"}
	{view "howitzer_shell_50-75_small"	{tail "shell_tracer_37-57_he" "tail"}}
)

; ================================================================================ ;
; // 75mm Generic
; ================================================================================ ;

(define "SC_Shell_75_AP"
	("SC_Ammo_Shell" weight(10) inv(5 1))
	
	("SC_Ammo_Shell_AP")

	{tag "shell size2 75to76_he_filler"}
	{view "howitzer_shell_50-75"	{tail "shell_tracer_75_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(1.2) a1(1.0) a2(2.0) gradius(0))
)

(define "SC_Shell_75_APHE"
	("SC_Ammo_Shell" weight(10) inv(5 1))
	
	("SC_Ammo_Shell_APHE" piercing(0.75))

	{tag "shell size2 75to76_he_filler"}
	{view "howitzer_shell_50-75"	{tail "shell_tracer_75_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(2.4) a1(1) a2(3) gradius(0.5))
	("SC_Ammo_Blast_Add"	energy(1.5) a1(2) a2(5) gradius(0))
)

(define "SC_Shell_75_HE"
	("SC_Ammo_Shell" weight(10) inv(5 1))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size2 75to76 no_throw"}
	{view "howitzer_shell_50-75_lv"	{tail "shell_tracer_75-88_he_long" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(5.5) a1(2) a2(4) gradius(0.5))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(3) a2(6) gradius(0))
	("SC_Ammo_Blast_Add"	energy(1.5) a1(4) a2(8) gradius(0))
)

(define "SC_Shell_75_HEAT"
	("SC_Ammo_Shell" weight(10) inv(5 1))
	
	("SC_Ammo_Shell_HEAT")

	{tag "shell size2 size2_heat_shell heat_low"}
	{view "howitzer_shell_50-75"	{tail "shell_tracer_75-88_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(4.0) a1(2) a2(3) gradius(0.15))
	("SC_Ammo_Blast_Add"	energy(2.5) a1(3) a2(6) gradius(0))
)


(define "SC_Shell_75_SMOKE"
	("SC_Ammo_Shell" weight(5) inv(5 1))
	
	("SC_Ammo_Shell_SMOKE")
	
	{tag "shell 75to76 no_throw smoke_size2"}
	{view "howitzer_shell_50-75_lv"	{tail "shell_tracer_75-88_he_long" "tail"}}
)

; ================================================================================ ;
; // 105mm Generic
; ================================================================================ ;

(define "SC_Shell_105_AP"
	("SC_Ammo_Shell" weight(15) inv(5 2))
	
	("SC_Ammo_Shell_AP")

	{tag "shell size2 88to105"}
	{view "howitzer_shell_88-100"	{tail "shell_tracer_usa_90_t15_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(1.2) a1(1.2) a2(2.4) gradius(0))
)

(define "SC_Shell_105_APHE"
	("SC_Ammo_Shell" weight(15) inv(5 2))
	
	("SC_Ammo_Shell_APHE" piercing(1.0))

	{tag "shell size2 88to105"}
	{view "howitzer_shell_88-100"	{tail "shell_tracer_usa_90_t15_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(6.5)	a1(2) a2(4)	gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(3) a2(6)	gradius(0))
)

(define "SC_Shell_105_HE"
	("SC_Ammo_Shell" weight(15) inv(5 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size3 88to105 arty no_throw"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he_long" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(14.0)	a1(3) a2(5)	gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(7.5) 	a1(4) a2(7)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(4.0)		a1(5) a2(9)	gradius(0))
)

(define "SC_Shell_105_HEAT"
	("SC_Ammo_Shell" weight(15) inv(5 2))
	
	("SC_Ammo_Shell_HEAT")

	{tag "shell size3 size3_heat_shell heat_medium"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_usa_105_heat" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(11.5)	a1(3) a2(4) gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(6.0)		a1(4) a2(6) gradius(0))
)

(define "SC_Shell_105_SMOKE"
	("SC_Ammo_Shell" weight(7.5) inv(5 2))
	
	("SC_Ammo_Shell_SMOKE")

	{tag "shell smoke_size3"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he_long" "tail"}}
)

; ================================================================================ ;
; // 120mm Generic
; ================================================================================ ;

(define "SC_Shell_120_AP"
	("SC_Ammo_Shell" weight(20) inv(6 1))
	
	("SC_Ammo_Shell_AP")

	{tag "shell size3 122to128"}
	{view "howitzer_shell_105-150"	{tail "shell_tracer_rus_122_ap" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(2.0) a1(1.2) a2(2.4) gradius(0))
)

(define "SC_Shell_120_APHE"
	("SC_Ammo_Shell" weight(20) inv(6 1))
	
	("SC_Ammo_Shell_APHE" piercing(1.1))

	{tag "shell size3 122to128"}
	{view "howitzer_shell_105-150"		{tail "shell_tracer_rus_122_ap" "tail"}}

	("SC_Ammo_Blast_Main"	energy(8.0)	a1(3) a2(5)		gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(5.0) a1(4.5) a2(7.5)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(3.5) a1(6.0) a2(8.5)	gradius(0))
)

(define "SC_Shell_120_HE"
	("SC_Ammo_Shell" weight(20) inv(6 1))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size3 122to128 arty no_throw"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(18)	a1(3.5) a2(6)		gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(11.0) a1(5.0) a2(9)		gradius(0))
	("SC_Ammo_Blast_Add"	energy(6.0) a1(7.5) a2(12)		gradius(0))
)

(define "SC_Shell_120_HEAT"
	("SC_Ammo_Shell" weight(20) inv(6 1))
	
	("SC_Ammo_Shell_HEAT")

	{tag "shell size3 size3_heat_shell heat_medium"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(14.5)	a1(4) a2(5.5) gradius(1.25))
	("SC_Ammo_Blast_Add"	energy(7.0)		a1(5) a2(8) gradius(0))
)

(define "SC_Shell_120_SMOKE"
	("SC_Ammo_Shell" weight(10) inv(6 1))
	
	("SC_Ammo_Shell_SMOKE")

	{tag "shell smoke_size4"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}
)


; ================================================================================ ;
; // 155mm Generic
; ================================================================================ ;

(define "SC_Shell_155_AP"
	("SC_Ammo_Shell" weight(50) inv(6 2))
	
	("SC_Ammo_Shell_AP")

	{tag "shell size4 150to152"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(3.0) a1(1.6) a2(2.4) gradius(0))
)

(define "SC_Shell_155_APHE"
	("SC_Ammo_Shell" weight(50) inv(6 2))
	
	("SC_Ammo_Shell_APHE" piercing(1.2))

	{tag "shell size4 150to152"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(10)	a1(4) a2(6)	gradius(0.6))
	("SC_Ammo_Blast_Add"	energy(6.5) a1(5) a2(7)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(7) a2(9)	gradius(0))
)

(define "SC_Shell_155_HE"
	("SC_Ammo_Shell" weight(50) inv(6 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size4 150to152 arty"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_100-152_he" "tail"}}

	("SC_Ammo_Blast_Main"	energy(20)	a1(6) a2(8)		gradius(0.6))
	("SC_Ammo_Blast_Add"	energy(13.5) a1(7) a2(10)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(8.0) a1(8) a2(12)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(4.0) a1(9) a2(16)	gradius(0))
)

(define "SC_Shell_155_HEAT"
	("SC_Ammo_Shell" weight(50) inv(6 2))
	
	("SC_Ammo_Shell_HEAT")

	{tag "shell size4 size4_heat_shell heat_high"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_150_heat" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(15)		a1(5) a2(7) gradius(0.6))
	("SC_Ammo_Blast_Add"	energy(11.0)	a1(6) a2(9) gradius(0))
	("SC_Ammo_Blast_Add"	energy(8.0)		a1(7) a2(11) gradius(0))
)

; ================================================================================ ;
; // 200mm Generic
; ================================================================================ ;

(define "SC_Shell_200_AP"
	("SC_Ammo_Shell" weight(80) inv(7 1))
	
	("SC_Ammo_Shell_AP")

	{tag "shell size4 150to152"}
	{view "howitzer_shell_105-150_lv"	{tail "shell_tracer_150_heat" "tail"}}

	("SC_Ammo_Blast_Main"	energy(5.0) a1(1.9) a2(2.5) gradius(0))
)

(define "SC_Shell_200_HE"
	("SC_Ammo_Shell" weight(80) inv(7 1))
	
	("SC_Ammo_Shell_HE")
	
	{tag "shell size5 150to152 arty"}
	{view "howitzer_shell_200"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(30)		a1(8) a2(10)	gradius(0.6))
	("SC_Ammo_Blast_Add"	energy(22.0)	a1(9) a2(11.5)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(12.5)	a1(10) a2(14)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(8.0)		a1(11) a2(16.5)	gradius(0))
)

; ================================================================================ ;
; // 300mm Generic
; ================================================================================ ;

(define "SC_Shell_300_HE"
	("SC_Ammo_Shell" weight(80) inv(8 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "bomb size2 he fg"}
	{tag "SC_super_shell"} ; // <- TARGET TAGS
	
	{view "howitzer_shell_200"	{tail "shell_tracer_100-152_he" "tail"}}
	
	("SC_Ammo_Blast_Main"	energy(60)		a1(3) a2(6)		gradius(0.6))
	("SC_Ammo_Blast_Add"	energy(36.0)	a1(8) a2(12)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(21.5)	a1(12) a2(18)	gradius(0))
	("SC_Ammo_Blast_Add"	energy(11.0)	a1(16) a2(30.5)	gradius(0))
)

; ================================================================================ ;
; // 40cm MAXIMUM Generic
; ================================================================================ ;

(define "SC_Shell_400_HE"
	("SC_Ammo_Shell" weight(200) inv(8 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "bomb size3 he fg"}
	{tag "SC_super_shell"} ; // <- TARGET TAGS
	
	{view "howitzer_shell_200"	{tail "shell_tracer_100-152_he" "tail"}}

	("SC_Ammo_Blast_Main"	energy(75)		a1(3) a2(9)			gradius(0.8))
	("SC_Ammo_Blast_Add"	energy(45.0)	a1(9) a2(16)		gradius(0))
	("SC_Ammo_Blast_Add"	energy(25.0)	a1(16) a2(24)		gradius(0))
	("SC_Ammo_Blast_Add"	energy(15.0)	a1(16) a2(40)		gradius(0))
)

(define "SC_Shell_400_HEAT"
	("SC_Ammo_Shell" weight(200) inv(8 2))
	
	("SC_Ammo_Shell_HE")
	
	{tag "bomb size3 he fg"}
	{tag "SC_super_shell"} ; // <- TARGET TAGS
	
	{view "howitzer_shell_200"	{tail "shell_tracer_100-152_he" "tail"}}

	("SC_Ammo_Blast_Main"	energy(200)		a1(3) a2(5)			gradius(0.8))
	("SC_Ammo_Blast_Main"	energy(125)		a1(5) a2(10)		gradius(0.8))
	("SC_Ammo_Blast_Main"	energy(75)		a1(7) a2(15)		gradius(0.8))
	("SC_Ammo_Blast_Add"	energy(45.0)	a1(9) a2(20)		gradius(0))
	("SC_Ammo_Blast_Add"	energy(25.0)	a1(16) a2(24)		gradius(0))
	("SC_Ammo_Blast_Add"	energy(15.0)	a1(16) a2(40)		gradius(0))
)
