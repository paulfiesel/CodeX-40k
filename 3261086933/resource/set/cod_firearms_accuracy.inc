
;/*----------------------*/

	(define "velocity"				;// muzzle velocity in meters per second
		{speed (* 0.70 %mps)}
	)
	(define "fire rate"				;// rate of fire in rounds per minute 
		{recoveryTime (/ 60 (* %rpm 1.07))}
	)
	(define "reload time"			;// reload time for magazine or shell
		{rechargeTime %seconds}
	)
	(define "human health"
		{healthDamage (* 1.486 %damage)}
	)
	(define "armor health"
		{minimumDamageModifier (* 1.25 %damage)}
	)
	(define "penetration"
		{projectileDamageTable 	{20 %0} {100 %1} {155 %2} {250 %3} {400 %4}}
	)


;/*=========================Curves======================*/


 	(define "pistol_range"
		{spreading
			{radiusTable {0 0.02} {30 (* %globalaccuracy %r1)} {60 (* %globalaccuracy %r2)}}
		}
	)
	(define "smg_range"
		{spreading
			{radiusTable {0 0.02} {60 (* %globalaccuracy %r1)} {110 (* %globalaccuracy %r2)}}
		}
	)
 	(define "rifle_range"
		{spreading
			{radiusTable {0 0.05} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {120 (* %globalaccuracy %r3)}}
		}
	)
	(define "sniper_range"
		{spreading
			{radiusTable {0 0.02} {30 %r0} {60 (* %globalaccuracy %r1)} {95 (* %globalaccuracy %r2)} {120 (* %globalaccuracy %r3)} {130 (* %globalaccuracy %r3)} {180 5}}
		}
	)
	(define "mg_range"
		{spreading
			{radiusTable {0 0.04} {40 (* %globalaccuracy %r1)} {80 (* %globalaccuracy %r2)} {110 (* %globalaccuracy %r3)} {120 (* %globalaccuracy %r3)} {180 5}}
		}
	)

	(define "hmg_range"
		{spreading
			{radiusTable {0 0.03} {75 (* %globalaccuracy %r1)} {100 (* %globalaccuracy %r2)} {120 (* %globalaccuracy %r3)} {160 (* %globalaccuracy %r3)} {200 5}}
		}
	)


;/*----------------------*/

	(define "accuracy_rifle"
		("rifle_range"	r0(0.375) r1(0.75) r2(1.125) r3(1.50) globalaccuracy(1.00))
	)
	(define "accuracy_rifle_auto"
		("rifle_range"	r0(0.5) r1(1.0) r2(1.5) r3(2.00) globalaccuracy(1.1))
	)
	(define "accuracy_rifle_assault"
		("rifle_range"	r0(0.625) r1(1.25) r2(1.875) r3(2.50) globalaccuracy(1.2))
	)

;/*----------------------*/

	(define "accuracy_rifle_sniper"
		("sniper_range" r0(0.25) r1(0.5) r2(0.75) r3(1.0) globalaccuracy(1.00))
	)
	(define "accuracy_rifle_auto_sniper"
		("sniper_range" r0(0.375) r1(0.75) r2(1.125) r3(1.5) globalaccuracy(1.1))
	)
	(define "accuracy_rifle_at_sniper"
		("sniper_range" r0(0.3) r1(0.6) r2(0.9) r3(1.0) globalaccuracy(1.00))
	)

;/*----------------------*/

	(define "accuracy_shotgun"
		("rifle_range"	r0(0.2) r1(0.9) r2(1.25) r3(1.4) globalaccuracy(1.00))
	)

	(define "accuracy_pistol"
		("pistol_range"  r1(0.5) r2(1.0) globalaccuracy(1.00))
	)

	(define "accuracy_smg"
		("smg_range"  r1(1.0) r2(2.00) globalaccuracy(1.2))
	)

;/*----------------------*/

	(define "accuracy_mg"
		("mg_range" r1(0.5) r2(1.0) r3(1.5) globalaccuracy(1.15))
	)

	(define "accuracy_hmg"
		("hmg_range" r1(0.3) r2(0.8) r3(1.3) globalaccuracy(1.20))
	)
	
;/*----------------------*/	Laser +20%accuracy 激光瞄具提升20%的精度

	(define "accuracy_rifle_laser"
		("rifle_range"	r0(0.375) r1(0.75) r2(1.125) r3(1.50) globalaccuracy(0.8))
	)
	(define "accuracy_rifle_auto_laser"
		("rifle_range"	r0(0.5) r1(1.0) r2(1.5) r3(2.00) globalaccuracy(0.88))
	)
	(define "accuracy_rifle_assault_laser"
		("rifle_range"	r0(0.625) r1(1.25) r2(1.875) r3(2.50) globalaccuracy(0.96))
	)
	
;/*----------------------*/

	(define "accuracy_rifle_sniper_laser"
		("sniper_range" r0(0.25) r1(0.5) r2(0.75) r3(1.0) globalaccuracy(0.8))
	)
	(define "accuracy_rifle_auto_sniper_laser"
		("sniper_range" r0(0.375) r1(0.75) r2(1.125) r3(1.5) globalaccuracy(0.88))
	)
	(define "accuracy_rifle_at_sniper_laser"
		("sniper_range" r0(0.3) r1(0.6) r2(0.9) r3(1.0) globalaccuracy(0.8))
	)
	
;/*----------------------*/

	(define "accuracy_shotgun_laser"
		("rifle_range"	r0(0.2) r1(0.9) r2(1.25) r3(1.4) globalaccuracy(0.8))
	)
	
	(define "accuracy_smg_laser"
		("smg_range"  r1(1.0) r2(2.00) globalaccuracy(0.96))
	)
	
	(define "accuracy_mg_laser"
		("mg_range" r1(0.5) r2(1.0) r3(1.5) globalaccuracy(0.92))
	)
	
	(define "accuracy_pistol_laser"
		("pistol_range"  r1(0.5) r2(1.0) globalaccuracy(0.8))
	)

;/*====================  Bullet Damage  ==================*/
;			根据弹药类型区分伤害的定义

	(define "5_45x39_bullet_damage"
		("human health" damage(64.4))			; Normal
		{parameters "ap"					; 7N24 AP bullets
			("human health" damage(55))
			("armor health" damage(8))
			("penetration" args 16 14.4 11.7 7.1 0)
		}
	)
	(define "5_56x45_bullet_damage"
		("human health" damage(42))			; Normal
		{parameters "ap"					; M995 AP bullets
			("human health" damage(48.5))
			("armor health" damage(3))
			("penetration" args 6 4.5 3 1.5 0)
		}
	)
	(define "5_8x42_bullet_damage"
		("human health" damage(59.7))			; Normal
		{parameters "ap"					; DVC-12 AP bullets
			("human health" damage(65.5))
			("armor health" damage(12))
			("penetration" args 17 14 10 5 0)
		}
	)
	(define "7_62x25_bullet_damage"
		("human health" damage(42.75))		; Normal
		{parameters "ap"					; P-41
			("human health" damage(60))
			("armor health" damage(4))
			("penetration" args 8 6 4 2 0)
		}
	)
	(define "7_62x39_bullet_damage"
		("human health" damage(54))			; Normal
		{parameters "ap"					; 7N23 AP bullets
			("human health" damage(76))
			("armor health" damage(12))
			("penetration" args 24 18 12 6 3)
		}
		{parameters "api"					; BZ API bullets
			("human health" damage(76))
			("armor health" damage(12))
			("penetration" args 24 18 12 6 3)
		}
	)
	(define "7_62x51_bullet_damage"
		("human health" damage(36))			; Normal
		{parameters "ap"					; M61 AP bullets
			("human health" damage(64.8))
			("armor health" damage(7.5))
			("penetration" args 15 12 7 4 3)
		}
		{parameters "apds"					; M948 APDS bullets
			("human health" damage(72))
			("armor health" damage(10))
			("penetration" args 20 19 15 9 6)
			{cursorReloading "gun_apds"}
		}
	)
	(define "7_62x54_bullet_damage"
		("human health" damage(42))			; Normal
		{parameters "ap"					; 7N14 AP bullets
			("armor health" damage(9))
			("penetration" args 18 14 9 3 0)
		}
		{parameters "ap1"					; 7N26 AP bullets
			("armor health" damage(10))
			("penetration" args 20 16 10 4 0)
		}
		{parameters "ap2"					; 7N37 AP bullets
			("armor health" damage(12.5))
			("penetration" args 25 19 11 5 1)
		}
	)
	(define "7_92x57_bullet_damage"
		("human health" damage(70))			; Normal
		{parameters "ap"					; SmK
			("human health" damage(80))
			("armor health" damage(9))
			("penetration" args 18 8.8 5.3 2 0) 
		}
		{parameters "ap2"					; SmK(H)
			("human health" damage(80))
			("armor health" damage(13))
			{cursorReloading "gun_ap"}
			("penetration" args 25.9 12.7 7.7 3 0)
		}
	)
	(define "8_6x70_bullet_damage"
		("human health" damage(84))			; Normal
		("armor health" damage(12.5))
		{parameters "ap"					; .338LW
			("human health" damage(64.8))
			("penetration" args 25 20 14 7 0)
		}
	)
	(define "9x18_bullet_damage"
		("human health" damage(36))			; Normal
		{parameters "pstl"					; P
			("human health" damage(31.5))
		}
		{parameters "ap1"					; 7N16
			("human health" damage(42))
		}
		{parameters "ap2"					; 7N25
			("human health" damage(48))
			("armor health" damage(8))
			("penetration" args 8 6 4 1 0) 
		}
	)
	(define "9x19_bullet_damage"
		("human health" damage(32.5))		; Normal
		{parameters "ae"					; .41 AE
			("human health" damage(38))
		}
		{parameters "acp"					; .45 ACP
			("human health" damage(42))
		}
		{parameters "auto"					; 10mm AUTO
			("human health" damage(72))
		}
		{parameters "ap"					;
			("human health" damage(49))
			("armor health" damage(9))
			("penetration" args 9 7 5 2 0) 
		}
	)
	(define "9x39_bullet_damage"
		("human health" damage(48.5))		; Normal
		{parameters "ap"					; SP-6
			("human health" damage(65.5))
			("armor health" damage(4))
			("penetration" args 8 6 4 2 0)
		}
	)
	(define "12_7x55_bullet_damage"
		("human health" damage(90))			; Normal
		("armor health" damage(32))
		{parameters "ap"					; PS-12B			
			("human health" damage(141))
			("penetration" args 32 24 16 8 4)
		}
	)
	(define "25x59_bullet_damage"
		("human health" damage(102))		; Normal
		("armor health" damage(40))
		("penetration" args 40 36 28 18 6)
		{parameters "exp"					
			("human health" damage(141))
		}
	)


;/*====================Slope Multiplier==================*/


	(define "ap_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		0.96		0.0637	}
			{5		0.96297		0.0637	}
			{10		0.98297		0.0637	}
			{15		1.00066		0.0969	}
			{20		1.0361		0.13561	}
			{25		1.1116		0.16164	}
			{30		1.2195		0.19702	}
			{35		1.3771		0.22546	}
			{40		1.6263		0.26313	}
			{45		2.0033		0.34717	}
			{50		2.6447		0.57353	}
			{55		3.231		0.69075	}
			{60		4.0708		0.81826	}
			{65		6.2655		0.9192	}
			{70		8.6492		1.00539	}
			{75		13.7512		1.074	}
			{80		21.8713		1.17973	}
			{85		34.4862		1.28631	}
			{90		99.0000		0.00000	}
		}
	)
	(define "ap_7_62_slope_multiplier"	;	7.62mm - 8mm bullets, MG, rifles
		{overmatchCalibre
			{0		1			0.00	}
			{10		1.037		0.01	}
			{20		1.10		0.02	}
			{30		1.435		0.15	}
			{40		2.19		0.10	}
			{45		2.79		0.12	}
			{50		3.86		0.12	}
			{60		6.23		0.15	}
			{65		7.70		0.15	}
			{70		9.93		0.15	}
			{75		14.3		0.17	}
			{80		22.9		0.17	}
			{85		62.7		0.242	}
			{90		99.0000		0.00000	}
		}
	)
	(define "ap_12_slope_multiplier"	;	12.7mm bullets, HMG
		{overmatchCalibre
			{0		1			0.00	}
			{20		1.24		-0.015	}
			{30		1.59		0.015	}
			{40		1.885		0.11	}
			{45		2.395		0.15	}
			{50		3.32		0.14	}
			{60		5.43		0.185	}
			{65		6.78		0.192	}
			{70		8.85		0.193	}
			{75		12.75		0.21	}
			{80		22.17		0.245	}
			{85		69.6		0.36	}
			{90		99.0000		0.00000	}
		}
	)
	
	(define "ap_25_slope_multiplier"	;use for AP and for any other Projectiles not specifically defined below
		{overmatchCalibre
			{0		0.1			0.0637	}
			{10		1.00066		0.0969	}
			{15		1.0361		0.13561	}
			{20		1.1116		0.16164	}
			{25		1.2195		0.19702	}
			{30		1.3771		0.22546	}
			{40		1.6263		0.26313	}
			{65		2.0033		0.34717	}
			{70		2.6447		0.57353	}
			{80		8.6492		1.00539	}
			{85		21.8713		1.17973	}
			{90		99.0000		0.00000	}
		}
	)

	(define "apcr_slope_multiplier"	;use for APCR & HVAP Projectiles 76mm Caliber or below
		{overmatchFixed
			{0  1.00	}
			{10	1.01	}
			{10	1.03	}
			{15	1.07	}
			{20	1.13	}
			{25	1.23	}
			{30	1.36	}
			{35	1.59	}
			{40	1.90	}
			{45	2.28	}
			{50	2.78	}
			{55	3.41	}
			{60	4.23	}
			{65	5.29	}
			{70	6.69	}
			{75	8.52	}
			{80	10.93	}
			{85	14.15	}
			{90 99		}
		}
	)



	(define "sway_pistol"
		{swayparams
			{bounds -0.25 0.2 -0.35 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0}						; sway speed coef
		}
	)
	(define "sway_smg"
		{swayparams
			{bounds -0.25 0.2 -0.35 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0.1}						; sway speed coef
		}
	)
	(define "sway_rifle"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0}						; sway speed coef
		}
	)
	(define "sway_mg"
		{swayparams
			{bounds -0.3 0.2 -0.4 0.3}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0}						; sway speed coef
		}
	)
	(define "sway_sniper"
		{swayparams
			{bounds -0.35 0.25 -0.45 0.35}		; x -> negativeYaw, y -> positiveYaw, z -> negativePitch, w -> positive Pitch (in degree)
			{speed 0}						; sway speed coef
		}
	)


;/*====================	Recoil	==================*/
;			L=low-12% N=normal-- H=high+12%	S=super+30%
;			不同护木影响后坐力和散步权重±12%

	(define "recoil_rifle_semi"
		{recoil
			{shoot {(* 0.75 (%0 1 %1)) (* 0.25 (%0 1 %1))} {(* 0.02 (%0 1 %1)) (* 0.4 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 7 (%0 1 %1)) (* 7 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.45 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.175}					; delay before restore, sec
		}
	)
	
	(define "recoil_rifle_semi_l"
		("recoil_rifle_semi" args - 0.12)
	)
	(define "recoil_rifle_semi_n"
		("recoil_rifle_semi" args * 1)
	)
	(define "recoil_rifle_semi_h"
		("recoil_rifle_semi" args + 0.12)
	)
	(define "recoil_rifle_semi_s"
		("recoil_rifle_semi" args + 0.3)
	)

;/*------------------------------------*/

	(define "recoil_rifle_assault"
		{recoil
			{shoot {(* 0.55 (%0 1 %1)) (* 0.2 (%0 1 %1))} {(* 0.02 (%0 1 %1)) (* 0.42 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 8 (%0 1 %1)) (* 8 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.3 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.125}					; delay before restore, sec
		}
	)
	
	(define "recoil_rifle_assault_l"
		("recoil_rifle_assault" args - 0.12)
	)
	(define "recoil_rifle_assault_n"
		("recoil_rifle_assault" args * 1)
	)
	(define "recoil_rifle_assault_h"
		("recoil_rifle_assault" args + 0.12)
	)
	(define "recoil_rifle_assault_s"
		("recoil_rifle_assault" args + 0.3)
	)

;/*------------------------------------*/

	(define "recoil_sniper"
		{recoil
			{shoot {(* 1.35 (%0 1 %1)) (* 0.25 (%0 1 %1))} {0 (* 0.75 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 7.5 (%0 1 %1)) (* 7.5 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.00 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

	(define "recoil_sniper_l"
		("recoil_sniper" args - 0.12)
	)
	(define "recoil_sniper_n"
		("recoil_sniper" args * 1)
	)
	(define "recoil_sniper_h"
		("recoil_sniper" args + 0.12)
	)
	(define "recoil_sniper_s"
		("recoil_sniper" args + 0.3)
	)

	(define "recoil_sniper_bolt"
		("recoil_sniper" args + 0.12)
	)
	
	(define "recoil_sniper_semi"
		("recoil_sniper" args + 0.3)
	)

	
;/*------------------------------------*/

	(define "recoil_shotgun"
		{recoil
			{shoot {(* 2.5 (%0 1 %1)) (* 0.75 (%0 1 %1))} {(* 0.25 (%0 1 %1)) (* 0.5 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 9 (%0 1 %1)) (* 9 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.00 0.25}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)
	
	(define "recoil_shotgun_l"
		("recoil_shotgun" args - 0.12)
	)
	(define "recoil_shotgun_n"
		("recoil_shotgun" args * 1)
	)
	(define "recoil_shotgun_h"
		("recoil_shotgun" args + 0.12)
	)
	(define "recoil_shotgun_s"
		("recoil_shotgun" args + 0.3)
	)

	;/*------------------------------------*/

	(define "recoil_pistol"
		{recoil
			{shoot {(* 0.4 (%0 1 %1)) (* 0.15 (%0 1 %1))} {0 (* 0.45 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 5 (%0 1 %1)) (* 5 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.01}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)
	
	(define "recoil_pistol_l"
		("recoil_pistol" args - 0.12)
	)
	(define "recoil_pistol_n"
		("recoil_pistol" args * 1)
	)
	(define "recoil_pistol_h"
		("recoil_pistol" args + 0.12)
	)

	;/*------------------------------------*/

	(define "recoil_smg"
		{recoil
			{shoot {(* 0.325 (%0 1 %1)) (* 0.15 (%0 1 %1))} {(* 0.05 (%0 1 %1)) (* 0.25 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 6 (%0 1 %1)) (* 6 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.15 0.004}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.1}					; delay before restore, sec
		}
	)

	(define "recoil_smg_l"
		("recoil_smg" args - 0.12)
	)
	(define "recoil_smg_n"
		("recoil_smg" args * 1)
	)
	(define "recoil_smg_h"
		("recoil_smg" args + 0.12)
	)
	(define "recoil_smg_s"
		("recoil_smg" args + 0.3)
	)

	;/*------------------------------------*/
	
	(define "recoil_mg"
		{recoil
			{shoot {(* 0.45 (%0 1 %1)) (* 0.22 (%0 1 %1))} {(* 0.04 (%0 1 %1)) (* 0.52 (%0 1 %1))}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle (* 8 (%0 1 %1)) (* 8 (%0 1 %1))}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.25 0.002}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.10}					; delay before restore, sec
		}
	)
	
	(define "recoil_mg_l"
		("recoil_mg" args - 0.12)
	)
	(define "recoil_mg_n"
		("recoil_mg" args * 1)
	)
	(define "recoil_mg_h"
		("recoil_mg" args + 0.12)
	)
	(define "recoil_mg_s"
		("recoil_mg" args + 0.3)
	)

	(define "recoil_hmg"
		("recoil_mg" args + 0.12)
	)
	
;/*------------------------------------*/

	(define "recoil_rifle_bolt"
		{recoil
			{shoot {0.90 0.25} {0 0.60}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 7 7}						; max recoil angle (pitch/yaw), degree
			{restoreTime 0.5 0.025}				; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)

;/*------------------------------------*/
	
	(define "recoil_sniper_at"
		{recoil
			{shoot {2.50 0.75} {1 0.75}}		; pitch / +- random and yaw / +- random, per shot, degree
			{maxAngle 10 10}						; max recoil angle (pitch/yaw), degree
			{restoreTime 1.10 0.025}			; recoil restore time, first -> minimum time, second -> additional time per shot, sec
			{restoreDelay 0.2}					; delay before restore, sec
		}
	)