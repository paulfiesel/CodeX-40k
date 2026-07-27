
; Vision abilities for use with sniper rifles and binoculars

(define "standard_vision"
	{"vision" mp_soldier}
)

(define "elite_vision"
	{"vision" human_elite}
)

(define "officer_vision"
	{"vision" mp_officer}
)

(define "elite_officer_vision"
	{"vision" mp_elite_officer}
)

(define "recon_vision"
	{"vision" human_recon}
)

(define "sniper_vision"
	{"telescope"}
	{"aimedshot"}
	{"vision" human_recon}
)

(define "binocular_vision"
	{"field_glass"}
	{"vision" human_elite}
)

(define "elite_sniper_vision"
	;{"field_glass"}
	{"vision" human_elite_IR_optic}
)