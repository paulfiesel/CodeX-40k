
; // BUZZ: WARNING! This script alone increases RAM consumption in almost 1gb!
 
;	<<<<---------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Misc Defines - Accumulative Tag Counter ===============] >>
;	<<<<---------------------------------------------------------------------------------------------------------->>>>			 

(define "accumulation"	else tagged "%a" {tags add "%b"} {tags remove "%a"})

(define "clear_bullet_debug"
	{tags remove "bullet_debug_00"}
	{tags remove "bullet_debug_01"}
	{tags remove "bullet_debug_02"}
	{tags remove "bullet_debug_03"}
	{tags remove "bullet_debug_04"}
	{tags remove "bullet_debug_05"}
	{tags remove "bullet_debug_06"}
	{tags remove "bullet_debug_07"}
	{tags remove "bullet_debug_08"}
	{tags remove "bullet_debug_09"}
	{tags remove "bullet_debug_10"}
	{tags remove "bullet_debug_11"}
	{tags remove "bullet_debug_12"}
	{tags remove "bullet_debug_13"}
	{tags remove "bullet_debug_14"}
	{tags remove "bullet_debug_15"}
	{tags remove "bullet_debug_16"}
	{tags remove "bullet_debug_17"}
	{tags remove "bullet_debug_18"}
	{tags remove "bullet_debug_19"}
	{tags remove "bullet_debug_20"}
	{tags remove "bullet_debug_21"}
	{tags remove "bullet_debug_22"}
	{tags remove "bullet_debug_23"}
	{tags remove "bullet_debug_24"}
	{tags remove "bullet_debug_25"}
	{tags remove "bullet_debug_26"}
	{tags remove "bullet_debug_27"}
	{tags remove "bullet_debug_28"}
	{tags remove "bullet_debug_29"}
	{tags remove "bullet_debug_30"}
	{tags remove "bullet_debug_31"}
	{tags remove "bullet_debug_32"}
	{tags remove "bullet_debug_33"}
	{tags remove "bullet_debug_34"}
	{tags remove "bullet_debug_35"}
	{tags remove "bullet_debug_36"}
	{tags remove "bullet_debug_37"}
	{tags remove "bullet_debug_38"}
	{tags remove "bullet_debug_39"}
	{tags remove "bullet_debug_40"}
	{tags remove "bullet_debug_41"}
	{tags remove "bullet_debug_42"}
	{tags remove "bullet_debug_43"}
	{tags remove "bullet_debug_44"}
	{tags remove "bullet_debug_45"}
	{tags remove "bullet_debug_46"}
	{tags remove "bullet_debug_47"}
	{tags remove "bullet_debug_48"}
	{tags remove "bullet_debug_49"}
	{tags remove "bullet_debug_50"}
	{tags remove "bullet_debug_51"}
	{tags remove "bullet_debug_52"}
	{tags remove "bullet_debug_53"}
	{tags remove "bullet_debug_54"}
	{tags remove "bullet_debug_55"}
	{tags remove "bullet_debug_56"}
	{tags remove "bullet_debug_57"}
	{tags remove "bullet_debug_58"}
	{tags remove "bullet_debug_59"}
	{tags remove "bullet_debug_60"}
	{tags remove "bullet_debug_61"}
	{tags remove "bullet_debug_62"}
	{tags remove "bullet_debug_63"}
	{tags remove "bullet_debug_64"}
	{tags remove "bullet_debug_65"}
	{tags remove "bullet_debug_66"}
	{tags remove "bullet_debug_67"}
	{tags remove "bullet_debug_68"}
	{tags remove "bullet_debug_69"}
	{tags remove "bullet_debug_70"}
	{tags remove "bullet_debug_71"}
	{tags remove "bullet_debug_72"}
	{tags remove "bullet_debug_73"}
	{tags remove "bullet_debug_74"}
	{tags remove "bullet_debug_75"}
	{tags remove "bullet_debug_76"}
	{tags remove "bullet_debug_77"}
	{tags remove "bullet_debug_78"}
	{tags remove "bullet_debug_79"}
	{tags remove "bullet_debug_80"}
	{tags remove "bullet_debug_81"}
	{tags remove "bullet_debug_82"}
	{tags remove "bullet_debug_83"}
	{tags remove "bullet_debug_84"}
	{tags remove "bullet_debug_85"}
	{tags remove "bullet_debug_86"}
	{tags remove "bullet_debug_87"}
	{tags remove "bullet_debug_88"}
	{tags remove "bullet_debug_89"}
	{tags remove "bullet_debug_90"}
	{tags remove "bullet_debug_91"}
	{tags remove "bullet_debug_92"}
	{tags remove "bullet_debug_93"}
	{tags remove "bullet_debug_94"}
	{tags remove "bullet_debug_95"}
	{tags remove "bullet_debug_96"}
	{tags remove "bullet_debug_97"}
	{tags remove "bullet_debug_98"}
	{tags remove "bullet_debug_99"}
	{tags remove "bullet_debug_100"}
	{tags remove "bullet_debug_101"}
	{tags remove "bullet_debug_102"}
	{tags remove "bullet_debug_103"}
	{tags remove "bullet_debug_104"}
	{tags remove "bullet_debug_105"}
	{tags remove "bullet_debug_106"}
	{tags remove "bullet_debug_107"}
	{tags remove "bullet_debug_108"}
	{tags remove "bullet_debug_109"}
	{tags remove "bullet_debug_110"}
	{tags remove "bullet_debug_111"}
	{tags remove "bullet_debug_112"}
	{tags remove "bullet_debug_113"}
	{tags remove "bullet_debug_114"}
	{tags remove "bullet_debug_115"}
	{tags remove "bullet_debug_116"}
	{tags remove "bullet_debug_117"}
	{tags remove "bullet_debug_118"}
	{tags remove "bullet_debug_119"}
	{tags remove "bullet_debug_120"}
	{tags remove "bullet_debug_121"}
	{tags remove "bullet_debug_122"}
	{tags remove "bullet_debug_123"}
	{tags remove "bullet_debug_124"}
	{tags remove "bullet_debug_125"}
	{tags remove "bullet_debug_126"}
	{tags remove "bullet_debug_127"}
	{tags remove "bullet_debug_128"}
	{tags remove "bullet_debug_129"}
	{tags remove "bullet_debug_130"}
	{tags remove "bullet_debug_131"}
	{tags remove "bullet_debug_132"}
	{tags remove "bullet_debug_133"}
	{tags remove "bullet_debug_134"}
	{tags remove "bullet_debug_135"}
	{tags remove "bullet_debug_136"}
	{tags remove "bullet_debug_137"}
	{tags remove "bullet_debug_138"}
	{tags remove "bullet_debug_139"}
	{tags remove "bullet_debug_140"}
	{tags remove "bullet_debug_141"}
	{tags remove "bullet_debug_142"}
	{tags remove "bullet_debug_143"}
	{tags remove "bullet_debug_144"}
	{tags remove "bullet_debug_145"}
	{tags remove "bullet_debug_146"}
	{tags remove "bullet_debug_147"}
	{tags remove "bullet_debug_148"}
	{tags remove "bullet_debug_149"}
	{tags remove "bullet_debug_150"}
)	

(define "SC_M_Acc_Define_Counter"
	{Kill_delay "%tag_delay"}
	{delay %delay "%tag_delay"	
		("clear_%tag")
	}
	{if tagged "%tag_%end"	
		("clear_%tag")	{Call_synced "%do"} ; must be synced
		
	("accumulation" a(%tag_149) b(%tag_150))
	("accumulation" a(%tag_148) b(%tag_149)) 
	("accumulation" a(%tag_147) b(%tag_148)) 
	("accumulation" a(%tag_146) b(%tag_147)) 
	("accumulation" a(%tag_145) b(%tag_146)) 
	("accumulation" a(%tag_144) b(%tag_145))
	("accumulation" a(%tag_143) b(%tag_144))
	("accumulation" a(%tag_142) b(%tag_143))
	("accumulation" a(%tag_141) b(%tag_142))
	("accumulation" a(%tag_140) b(%tag_141)) 
	("accumulation" a(%tag_139) b(%tag_140)) 
	("accumulation" a(%tag_138) b(%tag_139))
	("accumulation" a(%tag_137) b(%tag_138)) 
	("accumulation" a(%tag_136) b(%tag_137))
	("accumulation" a(%tag_135) b(%tag_136))
	("accumulation" a(%tag_134) b(%tag_135)) 
	("accumulation" a(%tag_133) b(%tag_134))
	("accumulation" a(%tag_132) b(%tag_133))
	("accumulation" a(%tag_131) b(%tag_132)) 
	("accumulation" a(%tag_130) b(%tag_131))
	("accumulation" a(%tag_129) b(%tag_130))
	("accumulation" a(%tag_128) b(%tag_129)) 
	("accumulation" a(%tag_127) b(%tag_128)) 
	("accumulation" a(%tag_126) b(%tag_127)) 
	("accumulation" a(%tag_125) b(%tag_126)) 
	("accumulation" a(%tag_124) b(%tag_125))
	("accumulation" a(%tag_123) b(%tag_124))
	("accumulation" a(%tag_122) b(%tag_123))
	("accumulation" a(%tag_121) b(%tag_122))
	("accumulation" a(%tag_120) b(%tag_121))
	("accumulation" a(%tag_119) b(%tag_120)) 
	("accumulation" a(%tag_118) b(%tag_119))
	("accumulation" a(%tag_117) b(%tag_118)) 
	("accumulation" a(%tag_116) b(%tag_117))
	("accumulation" a(%tag_115) b(%tag_116))
	("accumulation" a(%tag_114) b(%tag_115)) 
	("accumulation" a(%tag_113) b(%tag_114))
	("accumulation" a(%tag_112) b(%tag_113))
	("accumulation" a(%tag_111) b(%tag_112)) 
	("accumulation" a(%tag_110) b(%tag_111))
	("accumulation" a(%tag_109) b(%tag_110))
	("accumulation" a(%tag_108) b(%tag_109)) 
	("accumulation" a(%tag_107) b(%tag_108)) 
	("accumulation" a(%tag_106) b(%tag_107)) 
	("accumulation" a(%tag_105) b(%tag_106)) 
	("accumulation" a(%tag_104) b(%tag_105))
	("accumulation" a(%tag_103) b(%tag_104))
	("accumulation" a(%tag_102) b(%tag_103))
	("accumulation" a(%tag_101) b(%tag_102))
	("accumulation" a(%tag_100) b(%tag_101))
	("accumulation" a(%tag_99) b(%tag_100))
	("accumulation" a(%tag_98) b(%tag_99)) 
	("accumulation" a(%tag_97) b(%tag_98)) 
	("accumulation" a(%tag_96) b(%tag_97)) 
	("accumulation" a(%tag_95) b(%tag_96)) 
	("accumulation" a(%tag_94) b(%tag_95))
	("accumulation" a(%tag_93) b(%tag_94))
	("accumulation" a(%tag_92) b(%tag_93))
	("accumulation" a(%tag_91) b(%tag_92))
	("accumulation" a(%tag_90) b(%tag_91))
	("accumulation" a(%tag_89) b(%tag_90))
	("accumulation" a(%tag_88) b(%tag_89)) 
	("accumulation" a(%tag_87) b(%tag_88)) 
	("accumulation" a(%tag_86) b(%tag_87)) 
	("accumulation" a(%tag_85) b(%tag_86)) 
	("accumulation" a(%tag_84) b(%tag_85))
	("accumulation" a(%tag_83) b(%tag_84))
	("accumulation" a(%tag_82) b(%tag_83))
	("accumulation" a(%tag_81) b(%tag_82))
	("accumulation" a(%tag_80) b(%tag_81))
	("accumulation" a(%tag_79) b(%tag_80))
	("accumulation" a(%tag_78) b(%tag_79)) 
	("accumulation" a(%tag_77) b(%tag_78)) 
	("accumulation" a(%tag_76) b(%tag_77)) 
	("accumulation" a(%tag_75) b(%tag_76)) 
	("accumulation" a(%tag_74) b(%tag_75))
	("accumulation" a(%tag_73) b(%tag_74))
	("accumulation" a(%tag_72) b(%tag_73))
	("accumulation" a(%tag_71) b(%tag_72))
	("accumulation" a(%tag_70) b(%tag_71))
	("accumulation" a(%tag_69) b(%tag_70))
	("accumulation" a(%tag_68) b(%tag_69)) 
	("accumulation" a(%tag_67) b(%tag_68)) 
	("accumulation" a(%tag_66) b(%tag_67)) 
	("accumulation" a(%tag_65) b(%tag_66)) 
	("accumulation" a(%tag_64) b(%tag_65))
	("accumulation" a(%tag_63) b(%tag_64))
	("accumulation" a(%tag_62) b(%tag_63))
	("accumulation" a(%tag_61) b(%tag_62))
	("accumulation" a(%tag_60) b(%tag_61))	
	("accumulation" a(%tag_59) b(%tag_60))
	("accumulation" a(%tag_58) b(%tag_59)) 
	("accumulation" a(%tag_57) b(%tag_58)) 
	("accumulation" a(%tag_56) b(%tag_57)) 
	("accumulation" a(%tag_55) b(%tag_56)) 
	("accumulation" a(%tag_54) b(%tag_55))
	("accumulation" a(%tag_53) b(%tag_54))
	("accumulation" a(%tag_52) b(%tag_53))
	("accumulation" a(%tag_51) b(%tag_52))
	("accumulation" a(%tag_50) b(%tag_51))
	("accumulation" a(%tag_49) b(%tag_50))
	("accumulation" a(%tag_48) b(%tag_49)) 
	("accumulation" a(%tag_47) b(%tag_48)) 
	("accumulation" a(%tag_46) b(%tag_47)) 
	("accumulation" a(%tag_45) b(%tag_46)) 
	("accumulation" a(%tag_44) b(%tag_45))
	("accumulation" a(%tag_43) b(%tag_44))
	("accumulation" a(%tag_42) b(%tag_43))
	("accumulation" a(%tag_41) b(%tag_42))
	("accumulation" a(%tag_40) b(%tag_41)) 
	("accumulation" a(%tag_39) b(%tag_40)) 
	("accumulation" a(%tag_38) b(%tag_39))
	("accumulation" a(%tag_37) b(%tag_38)) 
	("accumulation" a(%tag_36) b(%tag_37))
	("accumulation" a(%tag_35) b(%tag_36))
	("accumulation" a(%tag_34) b(%tag_35)) 
	("accumulation" a(%tag_33) b(%tag_34))
	("accumulation" a(%tag_32) b(%tag_33))
	("accumulation" a(%tag_31) b(%tag_32)) 
	("accumulation" a(%tag_30) b(%tag_31))
	("accumulation" a(%tag_29) b(%tag_30))
	("accumulation" a(%tag_28) b(%tag_29)) 
	("accumulation" a(%tag_27) b(%tag_28)) 
	("accumulation" a(%tag_26) b(%tag_27)) 
	("accumulation" a(%tag_25) b(%tag_26)) 
	("accumulation" a(%tag_24) b(%tag_25))
	("accumulation" a(%tag_23) b(%tag_24))
	("accumulation" a(%tag_22) b(%tag_23))
	("accumulation" a(%tag_21) b(%tag_22))
	("accumulation" a(%tag_20) b(%tag_21))
	("accumulation" a(%tag_19) b(%tag_20)) 
	("accumulation" a(%tag_18) b(%tag_19))
	("accumulation" a(%tag_17) b(%tag_18)) 
	("accumulation" a(%tag_16) b(%tag_17))
	("accumulation" a(%tag_15) b(%tag_16))
	("accumulation" a(%tag_14) b(%tag_15)) 
	("accumulation" a(%tag_13) b(%tag_14))
	("accumulation" a(%tag_12) b(%tag_13))
	("accumulation" a(%tag_11) b(%tag_12)) 
	("accumulation" a(%tag_10) b(%tag_11))
	("accumulation" a(%tag_09) b(%tag_10))
	("accumulation" a(%tag_08) b(%tag_09)) 
	("accumulation" a(%tag_07) b(%tag_08)) 
	("accumulation" a(%tag_06) b(%tag_07)) 
	("accumulation" a(%tag_05) b(%tag_06)) 
	("accumulation" a(%tag_04) b(%tag_05))
	("accumulation" a(%tag_03) b(%tag_04))
	("accumulation" a(%tag_02) b(%tag_03))
	("accumulation" a(%tag_01) b(%tag_02))
	("accumulation" a(%tag_00) b(%tag_01))		
	else 
		{tags add "%tag_00"}
	}
)

(define "SC_M_Acc_Define_Deal_x100"
	("SC_M_Acc_Define_Deal_x90" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x90"
	("SC_M_Acc_Define_Deal_x80" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x80"
	("SC_M_Acc_Define_Deal_x75" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x75"
	("SC_M_Acc_Define_Deal_x50" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x25" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x60"
	("SC_M_Acc_Define_Deal_x50" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x50"
	("SC_M_Acc_Define_Deal_x25" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x25" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x40"
	("SC_M_Acc_Define_Deal_x30" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x35"
	("SC_M_Acc_Define_Deal_x30" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x30"
	("SC_M_Acc_Define_Deal_x25" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x25"
	("SC_M_Acc_Define_Deal_x20" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x20"
	("SC_M_Acc_Define_Deal_x15" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x15"
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x12"
	("SC_M_Acc_Define_Deal_x10" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x02" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x10"
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x09"
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x04" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x08"
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x03" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x07"
	("SC_M_Acc_Define_Deal_x05" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x02" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x06"
	("SC_M_Acc_Define_Deal_x03" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x02" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x05"
	("SC_M_Acc_Define_Deal_x03" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x02" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x04"
	("SC_M_Acc_Define_Deal_x03" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x01" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x03"
	("SC_M_Acc_Define_Deal_x02" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x01" tag(%tag) delay(%delay) end(%end) do(%do))
)

(define "SC_M_Acc_Define_Deal_x02"
	("SC_M_Acc_Define_Deal_x01" tag(%tag) delay(%delay) end(%end) do(%do))
	("SC_M_Acc_Define_Deal_x01" tag(%tag) delay(%delay) end(%end) do(%do))
)
	
(define "SC_M_Acc_Define_Deal_x01"
	("SC_M_Acc_Define_Counter" tag(%tag) delay(%delay) end(%end) do(%do))
)
	
(define "SC_M_Acc_Define_Deal_x00")
	