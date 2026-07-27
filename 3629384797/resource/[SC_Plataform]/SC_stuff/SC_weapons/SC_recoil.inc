
(define "SC_W_Recoil"
	{recoil
		{shoot {%x1 0.25} {0 %y1}}			; pitch / +- random and yaw / +- random, per shot, degree
		{maxAngle 8 8}						; max recoil angle (pitch/yaw), degree
		{restoreTime 0.3 0.005}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
		{restoreDelay 0.15}					; delay before restore, sec
	}
)

(define "SC_Weapon_Recoil_Very_Low"		("SC_W_Recoil" x1(0.25) y1(0.35)))
(define "SC_Weapon_Recoil_Low"			("SC_W_Recoil" x1(0.35) y1(0.45)))
(define "SC_Weapon_Recoil_Medium"		("SC_W_Recoil" x1(0.40) y1(0.50)))
(define "SC_Weapon_Recoil_Significant"	("SC_W_Recoil" x1(0.45) y1(0.55)))
(define "SC_Weapon_Recoil_High"			("SC_W_Recoil" x1(0.50) y1(0.60)))
(define "SC_Weapon_Recoil_Harsh"		("SC_W_Recoil" x1(0.55) y1(0.65)))
(define "SC_Weapon_Recoil_Heavy"		("SC_W_Recoil" x1(0.80) y1(0.90)))
(define "SC_Weapon_Recoil_Extreme"		("SC_W_Recoil" x1(1.00) y1(1.10)))

(define "SC_Weapon_Recoil_Burst_x2"		("SC_W_Recoil" x1(0.15) y1(0.30)))
(define "SC_Weapon_Recoil_Burst_x3"		("SC_W_Recoil" x1(0.10) y1(0.25)))