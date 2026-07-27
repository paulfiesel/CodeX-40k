
; ####################################################################################
; ########################## SC PLATAFORM MOD NATIONALITIES ##########################
; ####################################################################################
	
(define "phrase_voice_DLC_talks"
	{phrase
		{language "%1"}
		{voice %2}
		{sound "talk/%0/%1/%4/%3/v%2"}
		{text_dbg "(%1) %1/%4/%3/v%2"}
	}
)

(Include "SC_DLC_CODZ_phrases.inc")
(Include "SC_DLC_HALO_phrases.inc")
(Include "SC_DLC_LV40k_phrases.inc")
	
(define "SC_Plataform_Phrases"	
	("SC_DLC_CODZ_Phrases_%0"	args %0 %1)		
	("SC_DLC_HALO_Phrases_%0"	args %0 %1)		
	("SC_DLC_LV40k_Phrases_%0"	args %0 %1)
)