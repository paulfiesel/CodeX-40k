
; // ARGUMENTS THAT CAN BE ADDED LATER... 

;	{FiringTimeoutDistanceFactor
;		{0.25 0.0}	;35m
;		{0.75 1.0}	;105m
;	}
;	{FiringTimeout 2.5 0.5}


(define "SC_W_Burst_Fire"
	{burst
		;{min 1}			; min burst shots in automatic mode
		;{noaiming}			; no aiming during burst
		{short %sh1 %sh2}	; short burst shots on long distance, rand (+-)shots
		{long %lg1 %lg2}	; long burst shots on short distance, rand (+-)shots
		{rangeKoef %k}		; rangeKoef * aimRange = max long burst distance
	}
)

(define "SC_W_Burst_Fire_X0"
	{tag "burst_x%m"}
	{burst
		{min %m}			; min burst shots in automatic mode
		;{noaiming}			; no aiming during burst
		{short %sh1 %sh2}	; short burst shots on long distance, rand (+-)shots
		{long %lg1 %lg2}	; long burst shots on short distance, rand (+-)shots
		{rangeKoef %k}		; rangeKoef * aimRange = max long burst distance
	}
)

; ================================= VOLLEY Fire

(define "SC_Weapon_Burst_Fire_Volley_Auto_v1"		
	{Automatic}
	{FiringTimeout 1.0 0.5}
	("SC_W_Burst_Fire"		sh1(5) sh2(1) lg1(8) lg2(3) k(0.3))
)

; ================================= AUTO MODE

(define "SC_Weapon_Burst_Fire_Auto_v1"		; // Assault rifles
	{Automatic}
	{FiringTimeout 1.0 0.5}
	("SC_W_Burst_Fire"		sh1(5) sh2(1) lg1(8) lg2(3) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Auto_v2"		; // SMGs
	{Automatic}
	{FiringTimeout 1.2 0.6}
	("SC_W_Burst_Fire"		sh1(12) sh2(2) lg1(5) lg2(1) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Auto_v3"		; // Machine Guns
	{Automatic}
	{FiringTimeout 0.5 0.25}
	("SC_W_Burst_Fire"		sh1(20) sh2(2) lg1(10) lg2(1) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Auto_v4"		; // Auto Marksman-Rifle 
	{Automatic}
	{FiringTimeout 1.0 0.5}
	("SC_W_Burst_Fire"		sh1(2) sh2(1) lg1(3) lg2(1) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Auto_v5"		; // Volley-Fire 
	{Automatic}
	{FiringTimeout 1.5 0.5}
	("SC_W_Burst_Fire"		sh1(8) sh2(4) lg1(5) lg2(2) k(0.4))
)

(define "SC_Weapon_Burst_Fire_Auto_v6"		; // Miniguns
	{Automatic}
	("SC_W_Burst_Fire"		sh1(72) sh2(8) lg1(48) lg2(16) k(0.8))
	{FiringTimeout 1.0 0.5}
)

; ================================= BURST MODE

(define "SC_Weapon_Burst_Fire_Burst_x2"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(2) sh2(0) lg1(2) lg2(0) k(0.2) m(2))
	{FiringTimeout 0.5 0.25}
)

(define "SC_Weapon_Burst_Fire_Burst_x3"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(3) sh2(0) lg1(3) lg2(0) k(0.3) m(3))
	{FiringTimeout 0.5 0.25}
)

(define "SC_Weapon_Burst_Fire_Burst_x4"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(4) sh2(0) lg1(4) lg2(0) k(0.3) m(4))
)

(define "SC_Weapon_Burst_Fire_Burst_x5"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(5) sh2(0) lg1(5) lg2(0) k(0.3) m(5))
)

(define "SC_Weapon_Burst_Fire_Burst_x6"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(6) sh2(0) lg1(6) lg2(0) k(0.3) m(6))
)

(define "SC_Weapon_Burst_Fire_Burst_x8"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(8) sh2(0) lg1(8) lg2(0) k(0.3) m(8))
)

(define "SC_Weapon_Burst_Fire_Burst_x12"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(12) sh2(0) lg1(12) lg2(0) k(0.35) m(8))
)

(define "SC_Weapon_Burst_Fire_Burst_x18"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(18) sh2(0) lg1(18) lg2(0) k(0.5) m(18))
)

(define "SC_Weapon_Burst_Fire_Burst_x20"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(20) sh2(0) lg1(20) lg2(0) k(0.4) m(20))
)

(define "SC_Weapon_Burst_Fire_Burst_x40"	
	{Automatic_ai}
	("SC_W_Burst_Fire_X0"	sh1(40) sh2(0) lg1(16) lg2(0) k(0.6) m(40))
)

; ================================= SEMI MODE

(define "SC_Weapon_Burst_Fire_Semi_v1"	; // Semi Automatic Rifle
	{Automatic_ai}
	("SC_W_Burst_Fire"		sh1(3) sh2(1) lg1(4) lg2(1) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Semi_v2"	; // Slow Firing Marksman Rifle
	{Automatic_ai}
	("SC_W_Burst_Fire"		sh1(2) sh2(2) lg1(4) lg2(1) k(0.4))
)

(define "SC_Weapon_Burst_Fire_Semi_v3"	; // Pistols
	{Automatic_ai}
	("SC_W_Burst_Fire"		sh1(4) sh2(4) lg1(2) lg2(1) k(0.3))
)

(define "SC_Weapon_Burst_Fire_Semi_v4"	; // Single Shot Launchers
	{Automatic_ai}
	("SC_W_Burst_Fire"		sh1(1) sh2(1) lg1(1) lg2(1) k(0.1))
)