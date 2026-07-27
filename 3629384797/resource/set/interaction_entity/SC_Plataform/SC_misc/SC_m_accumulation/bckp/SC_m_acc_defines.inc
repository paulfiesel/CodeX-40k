
; // BUZZ: WARNING! This script alone greatly increases RAM consumption.
; // BUZZ: It has been optimized as per the new update, you can check the old version for comparision in the "bckp" folder.
 
;	<<<<---------------------------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC PLATAFORM Interaction Entity: Misc Defines - Accumulative Tag Counter ===============] >>
;	<<<<---------------------------------------------------------------------------------------------------------->>>>			 

(define "accumulation"	else tagged "%a" {tags add "%b"} {tags remove "%a"})

(define "SC_M_Acc_Define_Counter_100"
	{if tagged "%tag_10"
		{if tagged "%tag_x10"	{tags remove "%tag_10"}{tags remove "%tag_x10"}{Call_synced "%do"} ; must be synced
		else tagged "%tag_x9"	{tags remove "%tag_10"}{tags remove "%tag_x9"}{tags add "%tag_x10"}
		else tagged "%tag_x8"	{tags remove "%tag_10"}{tags remove "%tag_x8"}{tags add "%tag_x9"}
		else tagged "%tag_x7"	{tags remove "%tag_10"}{tags remove "%tag_x7"}{tags add "%tag_x8"}
		else tagged "%tag_x6"	{tags remove "%tag_10"}{tags remove "%tag_x6"}{tags add "%tag_x7"}
		else tagged "%tag_x5"	{tags remove "%tag_10"}{tags remove "%tag_x5"}{tags add "%tag_x6"}
		else tagged "%tag_x4"	{tags remove "%tag_10"}{tags remove "%tag_x4"}{tags add "%tag_x5"}
		else tagged "%tag_x3"	{tags remove "%tag_10"}{tags remove "%tag_x3"}{tags add "%tag_x4"}
		else tagged "%tag_x2"	{tags remove "%tag_10"}{tags remove "%tag_x2"}{tags add "%tag_x3"}
		else tagged "%tag_x1"	{tags remove "%tag_10"}{tags remove "%tag_x1"}{tags add "%tag_x2"}
		else					{tags remove "%tag_10"}{tags add "%tag_x1"}
		}
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

(define "SC_M_Acc_Define_Counter_150"
	{if tagged "%tag_10"
		{if tagged "%tag_x15"	{tags remove "%tag_10"}{tags remove "%tag_x15"}{Call_synced "%do"} ; must be synced
		else tagged "%tag_x14"	{tags remove "%tag_10"}{tags remove "%tag_x14"}{tags add "%tag_x15"}
		else tagged "%tag_x13"	{tags remove "%tag_10"}{tags remove "%tag_x13"}{tags add "%tag_x14"}
		else tagged "%tag_x12"	{tags remove "%tag_10"}{tags remove "%tag_x12"}{tags add "%tag_x13"}
		else tagged "%tag_x11"	{tags remove "%tag_10"}{tags remove "%tag_x11"}{tags add "%tag_x12"}
		else tagged "%tag_x10"	{tags remove "%tag_10"}{tags remove "%tag_x10"}{tags add "%tag_x11"}
		else tagged "%tag_x9"	{tags remove "%tag_10"}{tags remove "%tag_x9"}{tags add "%tag_x10"}
		else tagged "%tag_x8"	{tags remove "%tag_10"}{tags remove "%tag_x8"}{tags add "%tag_x9"}
		else tagged "%tag_x7"	{tags remove "%tag_10"}{tags remove "%tag_x7"}{tags add "%tag_x8"}
		else tagged "%tag_x6"	{tags remove "%tag_10"}{tags remove "%tag_x6"}{tags add "%tag_x7"}
		else tagged "%tag_x5"	{tags remove "%tag_10"}{tags remove "%tag_x5"}{tags add "%tag_x6"}
		else tagged "%tag_x4"	{tags remove "%tag_10"}{tags remove "%tag_x4"}{tags add "%tag_x5"}
		else tagged "%tag_x3"	{tags remove "%tag_10"}{tags remove "%tag_x3"}{tags add "%tag_x4"}
		else tagged "%tag_x2"	{tags remove "%tag_10"}{tags remove "%tag_x2"}{tags add "%tag_x3"}
		else tagged "%tag_x1"	{tags remove "%tag_10"}{tags remove "%tag_x1"}{tags add "%tag_x2"}
		else					{tags remove "%tag_10"}{tags add "%tag_x1"}
		}
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

(define "SC_M_Acc_Define_Counter_200"
	{if tagged "%tag_10"
		{if tagged "%tag_x20"	{tags remove "%tag_10"}{tags remove "%tag_x20"}{Call_synced "%do"} ; must be synced
		else tagged "%tag_x19"	{tags remove "%tag_10"}{tags remove "%tag_x19"}{tags add "%tag_x20"}
		else tagged "%tag_x18"	{tags remove "%tag_10"}{tags remove "%tag_x18"}{tags add "%tag_x19"}
		else tagged "%tag_x17"	{tags remove "%tag_10"}{tags remove "%tag_x17"}{tags add "%tag_x18"}
		else tagged "%tag_x16"	{tags remove "%tag_10"}{tags remove "%tag_x16"}{tags add "%tag_x17"}
		else tagged "%tag_x15"	{tags remove "%tag_10"}{tags remove "%tag_x15"}{tags add "%tag_x16"}
		else tagged "%tag_x14"	{tags remove "%tag_10"}{tags remove "%tag_x14"}{tags add "%tag_x15"}
		else tagged "%tag_x13"	{tags remove "%tag_10"}{tags remove "%tag_x13"}{tags add "%tag_x14"}
		else tagged "%tag_x12"	{tags remove "%tag_10"}{tags remove "%tag_x12"}{tags add "%tag_x13"}
		else tagged "%tag_x11"	{tags remove "%tag_10"}{tags remove "%tag_x11"}{tags add "%tag_x12"}
		else tagged "%tag_x10"	{tags remove "%tag_10"}{tags remove "%tag_x10"}{tags add "%tag_x11"}
		else tagged "%tag_x9"	{tags remove "%tag_10"}{tags remove "%tag_x9"}{tags add "%tag_x10"}
		else tagged "%tag_x8"	{tags remove "%tag_10"}{tags remove "%tag_x8"}{tags add "%tag_x9"}
		else tagged "%tag_x7"	{tags remove "%tag_10"}{tags remove "%tag_x7"}{tags add "%tag_x8"}
		else tagged "%tag_x6"	{tags remove "%tag_10"}{tags remove "%tag_x6"}{tags add "%tag_x7"}
		else tagged "%tag_x5"	{tags remove "%tag_10"}{tags remove "%tag_x5"}{tags add "%tag_x6"}
		else tagged "%tag_x4"	{tags remove "%tag_10"}{tags remove "%tag_x4"}{tags add "%tag_x5"}
		else tagged "%tag_x3"	{tags remove "%tag_10"}{tags remove "%tag_x3"}{tags add "%tag_x4"}
		else tagged "%tag_x2"	{tags remove "%tag_10"}{tags remove "%tag_x2"}{tags add "%tag_x3"}
		else tagged "%tag_x1"	{tags remove "%tag_10"}{tags remove "%tag_x1"}{tags add "%tag_x2"}
		else					{tags remove "%tag_10"}{tags add "%tag_x1"}
		}
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
	("SC_M_Acc_Define_Counter_%end" tag(%tag) delay(%delay) do(%do))
)
	
(define "SC_M_Acc_Define_Deal_x00")
	