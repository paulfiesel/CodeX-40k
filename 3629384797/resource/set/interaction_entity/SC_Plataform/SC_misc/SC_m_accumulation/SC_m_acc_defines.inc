
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

(define "SC_M_Acc_Define_Counter_250"
	{if tagged "%tag_10"
		{if tagged "%tag_x25"	{tags remove "%tag_10"}{tags remove "%tag_x25"}{Call_synced "%do"} ; must be synced
		else tagged "%tag_x24"	{tags remove "%tag_10"}{tags remove "%tag_x24"}{tags add "%tag_x25"}
		else tagged "%tag_x23"	{tags remove "%tag_10"}{tags remove "%tag_x23"}{tags add "%tag_x24"}
		else tagged "%tag_x22"	{tags remove "%tag_10"}{tags remove "%tag_x22"}{tags add "%tag_x23"}
		else tagged "%tag_x21"	{tags remove "%tag_10"}{tags remove "%tag_x21"}{tags add "%tag_x22"}
		else tagged "%tag_x20"	{tags remove "%tag_10"}{tags remove "%tag_x20"}{tags add "%tag_x21"}
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

(define "SC_M_Acc_Define_Counter_300"
	{if tagged "%tag_10"
		{if tagged "%tag_x30"	{tags remove "%tag_10"}{tags remove "%tag_x30"}{Call_synced "%do"} ; must be synced
		
		else tagged "%tag_x29"	{tags remove "%tag_10"}{tags remove "%tag_x29"}{tags add "%tag_x30"}
		else tagged "%tag_x28"	{tags remove "%tag_10"}{tags remove "%tag_x28"}{tags add "%tag_x29"}
		else tagged "%tag_x27"	{tags remove "%tag_10"}{tags remove "%tag_x27"}{tags add "%tag_x28"}
		else tagged "%tag_x26"	{tags remove "%tag_10"}{tags remove "%tag_x26"}{tags add "%tag_x27"}
		else tagged "%tag_x25"	{tags remove "%tag_10"}{tags remove "%tag_x25"}{tags add "%tag_x26"}
		
		else tagged "%tag_x24"	{tags remove "%tag_10"}{tags remove "%tag_x24"}{tags add "%tag_x25"}
		else tagged "%tag_x23"	{tags remove "%tag_10"}{tags remove "%tag_x23"}{tags add "%tag_x24"}
		else tagged "%tag_x22"	{tags remove "%tag_10"}{tags remove "%tag_x22"}{tags add "%tag_x23"}
		else tagged "%tag_x21"	{tags remove "%tag_10"}{tags remove "%tag_x21"}{tags add "%tag_x22"}
		else tagged "%tag_x20"	{tags remove "%tag_10"}{tags remove "%tag_x20"}{tags add "%tag_x21"}
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

(define "SC_M_Acc_Define_Counter_400"
	{if tagged "%tag_10"
		{if tagged "%tag_x40"	{tags remove "%tag_10"}{tags remove "%tag_x40"}{Call_synced "%do"} ; must be synced
		
		else tagged "%tag_x39"	{tags remove "%tag_10"}{tags remove "%tag_x39"}{tags add "%tag_x40"}
		else tagged "%tag_x38"	{tags remove "%tag_10"}{tags remove "%tag_x38"}{tags add "%tag_x39"}
		else tagged "%tag_x37"	{tags remove "%tag_10"}{tags remove "%tag_x37"}{tags add "%tag_x38"}
		else tagged "%tag_x36"	{tags remove "%tag_10"}{tags remove "%tag_x36"}{tags add "%tag_x37"}
		else tagged "%tag_x35"	{tags remove "%tag_10"}{tags remove "%tag_x35"}{tags add "%tag_x36"}
		else tagged "%tag_x34"	{tags remove "%tag_10"}{tags remove "%tag_x34"}{tags add "%tag_x35"}
		else tagged "%tag_x33"	{tags remove "%tag_10"}{tags remove "%tag_x33"}{tags add "%tag_x34"}
		else tagged "%tag_x32"	{tags remove "%tag_10"}{tags remove "%tag_x32"}{tags add "%tag_x33"}
		else tagged "%tag_x31"	{tags remove "%tag_10"}{tags remove "%tag_x31"}{tags add "%tag_x32"}
		else tagged "%tag_x30"	{tags remove "%tag_10"}{tags remove "%tag_x30"}{tags add "%tag_x31"}
		
		else tagged "%tag_x29"	{tags remove "%tag_10"}{tags remove "%tag_x29"}{tags add "%tag_x30"}
		else tagged "%tag_x28"	{tags remove "%tag_10"}{tags remove "%tag_x28"}{tags add "%tag_x29"}
		else tagged "%tag_x27"	{tags remove "%tag_10"}{tags remove "%tag_x27"}{tags add "%tag_x28"}
		else tagged "%tag_x26"	{tags remove "%tag_10"}{tags remove "%tag_x26"}{tags add "%tag_x27"}
		else tagged "%tag_x25"	{tags remove "%tag_10"}{tags remove "%tag_x25"}{tags add "%tag_x26"}
		else tagged "%tag_x24"	{tags remove "%tag_10"}{tags remove "%tag_x24"}{tags add "%tag_x25"}
		else tagged "%tag_x23"	{tags remove "%tag_10"}{tags remove "%tag_x23"}{tags add "%tag_x24"}
		else tagged "%tag_x22"	{tags remove "%tag_10"}{tags remove "%tag_x22"}{tags add "%tag_x23"}
		else tagged "%tag_x21"	{tags remove "%tag_10"}{tags remove "%tag_x21"}{tags add "%tag_x22"}
		else tagged "%tag_x20"	{tags remove "%tag_10"}{tags remove "%tag_x20"}{tags add "%tag_x21"}
		
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

(define "SC_M_Acc_Define_Counter_500"
	{if tagged "%tag_10"
		{if tagged "%tag_x50"	{tags remove "%tag_10"}{tags remove "%tag_x50"}{Call_synced "%do"} ; must be synced
		
		else tagged "%tag_x49"	{tags remove "%tag_10"}{tags remove "%tag_x49"}{tags add "%tag_x50"}
		else tagged "%tag_x48"	{tags remove "%tag_10"}{tags remove "%tag_x48"}{tags add "%tag_x49"}
		else tagged "%tag_x47"	{tags remove "%tag_10"}{tags remove "%tag_x47"}{tags add "%tag_x48"}
		else tagged "%tag_x46"	{tags remove "%tag_10"}{tags remove "%tag_x46"}{tags add "%tag_x47"}
		else tagged "%tag_x45"	{tags remove "%tag_10"}{tags remove "%tag_x45"}{tags add "%tag_x46"}
		else tagged "%tag_x44"	{tags remove "%tag_10"}{tags remove "%tag_x44"}{tags add "%tag_x45"}
		else tagged "%tag_x43"	{tags remove "%tag_10"}{tags remove "%tag_x43"}{tags add "%tag_x44"}
		else tagged "%tag_x42"	{tags remove "%tag_10"}{tags remove "%tag_x42"}{tags add "%tag_x43"}
		else tagged "%tag_x41"	{tags remove "%tag_10"}{tags remove "%tag_x41"}{tags add "%tag_x42"}
		else tagged "%tag_x40"	{tags remove "%tag_10"}{tags remove "%tag_x40"}{tags add "%tag_x41"}
		
		else tagged "%tag_x39"	{tags remove "%tag_10"}{tags remove "%tag_x39"}{tags add "%tag_x40"}
		else tagged "%tag_x38"	{tags remove "%tag_10"}{tags remove "%tag_x38"}{tags add "%tag_x39"}
		else tagged "%tag_x37"	{tags remove "%tag_10"}{tags remove "%tag_x37"}{tags add "%tag_x38"}
		else tagged "%tag_x36"	{tags remove "%tag_10"}{tags remove "%tag_x36"}{tags add "%tag_x37"}
		else tagged "%tag_x35"	{tags remove "%tag_10"}{tags remove "%tag_x35"}{tags add "%tag_x36"}
		else tagged "%tag_x34"	{tags remove "%tag_10"}{tags remove "%tag_x34"}{tags add "%tag_x35"}
		else tagged "%tag_x33"	{tags remove "%tag_10"}{tags remove "%tag_x33"}{tags add "%tag_x34"}
		else tagged "%tag_x32"	{tags remove "%tag_10"}{tags remove "%tag_x32"}{tags add "%tag_x33"}
		else tagged "%tag_x31"	{tags remove "%tag_10"}{tags remove "%tag_x31"}{tags add "%tag_x32"}
		else tagged "%tag_x30"	{tags remove "%tag_10"}{tags remove "%tag_x30"}{tags add "%tag_x31"}
		
		else tagged "%tag_x29"	{tags remove "%tag_10"}{tags remove "%tag_x29"}{tags add "%tag_x30"}
		else tagged "%tag_x28"	{tags remove "%tag_10"}{tags remove "%tag_x28"}{tags add "%tag_x29"}
		else tagged "%tag_x27"	{tags remove "%tag_10"}{tags remove "%tag_x27"}{tags add "%tag_x28"}
		else tagged "%tag_x26"	{tags remove "%tag_10"}{tags remove "%tag_x26"}{tags add "%tag_x27"}
		else tagged "%tag_x25"	{tags remove "%tag_10"}{tags remove "%tag_x25"}{tags add "%tag_x26"}
		else tagged "%tag_x24"	{tags remove "%tag_10"}{tags remove "%tag_x24"}{tags add "%tag_x25"}
		else tagged "%tag_x23"	{tags remove "%tag_10"}{tags remove "%tag_x23"}{tags add "%tag_x24"}
		else tagged "%tag_x22"	{tags remove "%tag_10"}{tags remove "%tag_x22"}{tags add "%tag_x23"}
		else tagged "%tag_x21"	{tags remove "%tag_10"}{tags remove "%tag_x21"}{tags add "%tag_x22"}
		else tagged "%tag_x20"	{tags remove "%tag_10"}{tags remove "%tag_x20"}{tags add "%tag_x21"}
		
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

(define "SC_M_Acc_Define_Add_Calls"
	{on "SC_TP_EXP_Call_Clear_Tags_%tag"
		{tags remove "%tag_x50"}
		{tags remove "%tag_x49"}
		{tags remove "%tag_x48"}
		{tags remove "%tag_x47"}
		{tags remove "%tag_x46"}
		{tags remove "%tag_x45"}
		{tags remove "%tag_x44"}
		{tags remove "%tag_x43"}
		{tags remove "%tag_x42"}
		{tags remove "%tag_x41"}
		{tags remove "%tag_x40"}
		{tags remove "%tag_x39"}
		{tags remove "%tag_x38"}
		{tags remove "%tag_x37"}
		{tags remove "%tag_x36"}
		{tags remove "%tag_x35"}
		{tags remove "%tag_x34"}
		{tags remove "%tag_x33"}
		{tags remove "%tag_x32"}
		{tags remove "%tag_x31"}
		{tags remove "%tag_x30"}
		{tags remove "%tag_x29"}
		{tags remove "%tag_x28"}
		{tags remove "%tag_x27"}
		{tags remove "%tag_x26"}
		{tags remove "%tag_x25"}
		{tags remove "%tag_x24"}
		{tags remove "%tag_x23"}
		{tags remove "%tag_x22"}
		{tags remove "%tag_x21"}
		{tags remove "%tag_x20"}
		{tags remove "%tag_x19"}
		{tags remove "%tag_x18"}
		{tags remove "%tag_x17"}
		{tags remove "%tag_x16"}
		{tags remove "%tag_x15"}
		{tags remove "%tag_x14"}
		{tags remove "%tag_x13"}
		{tags remove "%tag_x12"}
		{tags remove "%tag_x11"}
		{tags remove "%tag_x10"}
		{tags remove "%tag_x9"}
		{tags remove "%tag_x8"}
		{tags remove "%tag_x7"}
		{tags remove "%tag_x6"}
		{tags remove "%tag_x5"}
		{tags remove "%tag_x4"}
		{tags remove "%tag_x3"}
		{tags remove "%tag_x2"}
		{tags remove "%tag_x1"}
		{tags remove "%tag_10"}
		{tags remove "%tag_09"}
		{tags remove "%tag_08"}
		{tags remove "%tag_07"}
		{tags remove "%tag_06"}
		{tags remove "%tag_05"}
		{tags remove "%tag_04"}
		{tags remove "%tag_03"}
		{tags remove "%tag_02"}
		{tags remove "%tag_01"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x500"
		{Call "SC_M_Acc_Define_Deal_%tag_x250"}
		{Call "SC_M_Acc_Define_Deal_%tag_x250"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x450"
		{Call "SC_M_Acc_Define_Deal_%tag_x200"}
		{Call "SC_M_Acc_Define_Deal_%tag_x250"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x400"
		{Call "SC_M_Acc_Define_Deal_%tag_x200"}
		{Call "SC_M_Acc_Define_Deal_%tag_x200"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x350"
		{Call "SC_M_Acc_Define_Deal_%tag_x300"}
		{Call "SC_M_Acc_Define_Deal_%tag_x50"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x300"
		{Call "SC_M_Acc_Define_Deal_%tag_x200"}
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x250"
		{Call "SC_M_Acc_Define_Deal_%tag_x200"}
		{Call "SC_M_Acc_Define_Deal_%tag_x50"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x200"
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x175"
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
		{Call "SC_M_Acc_Define_Deal_%tag_x75"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x150"
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
		{Call "SC_M_Acc_Define_Deal_%tag_x50"}
	}
	
	{on "SC_M_Acc_Define_Deal_%tag_x125"
		{Call "SC_M_Acc_Define_Deal_%tag_x25"}
		{Call "SC_M_Acc_Define_Deal_%tag_x100"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x100"
		{Call "SC_M_Acc_Define_Deal_%tag_x90"}
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x90"
		{Call "SC_M_Acc_Define_Deal_%tag_x80"}
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x80"
		{Call "SC_M_Acc_Define_Deal_%tag_x75"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x75"
		{Call "SC_M_Acc_Define_Deal_%tag_x50"}
		{Call "SC_M_Acc_Define_Deal_%tag_x25"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x60"
		{Call "SC_M_Acc_Define_Deal_%tag_x50"}
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x50"
		{Call "SC_M_Acc_Define_Deal_%tag_x25"}
		{Call "SC_M_Acc_Define_Deal_%tag_x25"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x45"
		{Call "SC_M_Acc_Define_Deal_%tag_x40"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x40"
		{Call "SC_M_Acc_Define_Deal_%tag_x30"}
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x35"
		{Call "SC_M_Acc_Define_Deal_%tag_x30"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x30"
		{Call "SC_M_Acc_Define_Deal_%tag_x25"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x25"
		{Call "SC_M_Acc_Define_Deal_%tag_x20"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x20"
		{Call "SC_M_Acc_Define_Deal_%tag_x15"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x15"
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x12"
		{Call "SC_M_Acc_Define_Deal_%tag_x10"}
		{Call "SC_M_Acc_Define_Deal_%tag_x02"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x10"
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x09"
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
		{Call "SC_M_Acc_Define_Deal_%tag_x04"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x08"
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
		{Call "SC_M_Acc_Define_Deal_%tag_x03"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x07"
		{Call "SC_M_Acc_Define_Deal_%tag_x05"}
		{Call "SC_M_Acc_Define_Deal_%tag_x02"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x06"
		{Call "SC_M_Acc_Define_Deal_%tag_x03"}
		{Call "SC_M_Acc_Define_Deal_%tag_x02"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x05"
		{Call "SC_M_Acc_Define_Deal_%tag_x03"}
		{Call "SC_M_Acc_Define_Deal_%tag_x02"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x04"
		{Call "SC_M_Acc_Define_Deal_%tag_x03"}
		{Call "SC_M_Acc_Define_Deal_%tag_x01"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x03"
		{Call "SC_M_Acc_Define_Deal_%tag_x02"}
		{Call "SC_M_Acc_Define_Deal_%tag_x01"}
	}

	{on "SC_M_Acc_Define_Deal_%tag_x02"
		{Call "SC_M_Acc_Define_Deal_%tag_x01"}
		{Call "SC_M_Acc_Define_Deal_%tag_x01"}
	}
)