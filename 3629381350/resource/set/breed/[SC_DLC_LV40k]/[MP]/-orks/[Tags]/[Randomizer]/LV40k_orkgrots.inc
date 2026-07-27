
; ================================================================================================================
; // SHOOTA BOY REGULAR 
; ================================================================================================================

(Define "Randomizer_LV40k_Orkgrot_001"	

	; // BASIC PARTS
	{bone show "orkgrot_body"}
	{bone show "orkgrot_detail_1"}
	
	{if rand 0.5 {bone show "orkgrot_detail_2"}}
	{if rand 0.5 {bone show "orkgrot_detail_3"}}
	
	{if rand 0.12	{bone show "orkgrot_helmet_1"}	{bone hide "orkgrot_body"}	{bone show "orkgrot_body_no_ears"}
	else  rand 0.12	{bone show "orkgrot_helmet_2"}	{bone hide "orkgrot_body"}	{bone show "orkgrot_body_no_ears"}
	else  rand 0.12	{bone show "orkgrot_helmet_3"}	{bone hide "orkgrot_body"}	{bone show "orkgrot_body_no_ears"}
	else  rand 0.12	{bone show "orkgrot_helmet_4"}	
	else  rand 0.12	{bone show "orkgrot_helmet_5"}	
	else  rand 0.12	{bone show "orkgrot_helmet_6"}		
	else  rand 0.12	{bone show "orkgrot_helmet_7"}	
	else  rand 0.12	{bone show "orkgrot_helmet_8"}	
	else		
		{bone show "orkgrot_helmet_8"}	
	}
)
