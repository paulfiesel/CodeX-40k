
; ===============================================================================================================]
; // Smallarms
; ===============================================================================================================]

(define "spreading_semi_low"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.6}
		{BurstAccuracy 100 90.0 85.0 75.0 70.0 65.0 60.0 55.0}
	}
)

(define "spreading_semi_high"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.6}
		{BurstAccuracy 100 90.0 80.0 70.0 60.0 50.0 40.0 30.0}
	}
)

(define "spreading_low"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.5}
		{BurstAccuracy 100 99.0 95.0 90.0 85.0 80.0 75.0 70.0}
	}
)
(define "spreading_low_boost"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.25}
		{BurstAccuracy 100 99.0 95.0 90.0 85.0 80.0}
	}
)
(define "spreading_medium"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.5}
		{BurstAccuracy 100 95.0 90.0 85.0 80.0 75.0 70.0 65.0}
	}
)
(define "spreading_medium_boost"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.25}
		{BurstAccuracy 100 95.0 90.0 85.0 80.0 75.0}
	}
)

(define "spreading_low"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.5}
		{BurstAccuracy 100 99.0 95.0 90.0 85.0 80.0 75.0 70.0}
	}
)
(define "spreading_high"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.5}
		{BurstAccuracy 100 90.0 85.0 80.0 75.0 70.0 65.0 60.0}
	}
)
(define "spreading_high_boost"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.25}
		{BurstAccuracy 100 90.0 85.0 80.0 75.0 70.0}
	}
)

(define "spreading_medium_mgun"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.5}
		{BurstAccuracy 100 90.0 85.0 80.0 75.0 70.0 65.0 60.0 55.0 50.0}
	}
)

(define "spreading_high_mgun"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 1.0}
		{BurstAccuracy 100 85.0 80.0 75.0 70.0 65.0 60.0 55.0 50.0 45.0}
	}
)

(define "spreading_reverse_high"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.55}
		{BurstAccuracy 100 105 110 115 120 130 135 140 145 150 155 160 170 175 185 190 200 210 215 220 225 230 240 245 250 260 270 275 280 290 300 305 310 320 330 345 350}
	}
)

(define "spreading_reverse_low"
	{spreading 1
		{SpreadPower	1}
		{BurstRecoveryTime 0.55}
		{BurstAccuracy 100 105 110 115 120 130 135 140 145 150 155 160 170 175 185 190 200 210 215 220 225 230 240 245 250}
	}
)

; --------------------------------------------------------------

; // BUZZ: For shotguns, smgs, pistols and grenade launchers.

(define "SC_W_Accuracy_1_Short_Range" 
	{spreading 
		{radiusTable {0 0} {20 %r1} {40 %r2} {60 %r3} {90 %r4}}
	}		
)

; // BUZZ: For rifles and machine guns.

(define "SC_W_Accuracy_2_Medium_Range" 
	{spreading 
		{radiusTable {0 0} {40 %r1} {80 %r2} {95 %r3} {120 %r4}}
	}		
)

; // BUZZ: For sniper rifles and DMRs.

(define "SC_W_Accuracy_3_Long_Range" 
	{spreading 
		{radiusTable {0 0} {50 %r1} {125 %r2} {150 %r3} {200 %r4}}
	}		
)

; // BUZZ: For tank mounted or towed guns.

(define "SC_W_Accuracy_4_Cannon_250m" 
	{spreading 
		{radiusTable {0 0} {50 %r1} {100 %r2} {150 %r3} {200 %r4} {250 %r5}}
	}		
)

; ===============================================================================================================]
; // Cannons / Mounted Guns
; ===============================================================================================================]

(define "spreading_tank_direct"	
	{SpreadTolerance 0.60}		;// Zeroing up to 60% needed before fire
	{ZeroingAccuracy 0.8 0.65 0.55 0.5 0.45}
	{spreading {SpreadXYRatio 0.4}}
	{spreading 1 {SpreadPower 1}}						;//	Skews the distribution of shells more biased toward the centre (>1) or away (<1)
)

(define "spreading_tank_indirect"
	{SpreadTolerance 0.75}		;// Zeroing up to 75% needed before fire
	{ZeroingAccuracy 0.8 0.65 0.55 0.5 0.45}
	{spreading {SpreadXYRatio 1}}
)


; --------------------------------------------------------------

(define "SC_Weapon_Accuracy_Preset_Autocannon"	
	("SC_W_Accuracy_4_Cannon_250m" r1(1.0) r2(2.0) r3(2.5) r4(2.75) r5(3.15))
	("spreading_high_mgun")
)

(define "SC_Weapon_Accuracy_Preset_Battlecannon"	
	("SC_W_Accuracy_4_Cannon_250m" r1(0.5) r2(1.0) r3(1.25) r4(1.75) r5(2.0))
	("spreading_tank_direct")
)

(define "SC_Weapon_Accuracy_Preset_Tank_Destroyer"	
	("SC_W_Accuracy_4_Cannon_250m" r1(0.4) r2(0.8) r3(0.9) r4(1.25) r5(1.5))
	("spreading_tank_direct")
)

(define "SC_Weapon_Accuracy_Preset_Assault_Gun"	
	("SC_W_Accuracy_4_Cannon_250m" r1(1.0) r2(2.0) r3(2.5) r4(3.5) r5(5.0))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Rockets_1"	
	("SC_W_Accuracy_4_Cannon_250m" r1(1.0) r2(2.0) r3(3.0) r4(4.5) r5(6.25))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Artillery_1"	
	("SC_W_Accuracy_4_Cannon_250m" r1(0.8) r2(1.85) r3(2.5) r4(3.5) r5(5.0))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Artillery_2"	
	("SC_W_Accuracy_4_Cannon_250m" r1(1.5) r2(2.0) r3(3.25) r4(4.5) r5(6.0))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Artillery_3"	
	("SC_W_Accuracy_4_Cannon_250m" r1(2.0) r2(2.5) r3(5.0) r4(6.0) r5(8.0))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Mortar_1"	
	("SC_W_Accuracy_4_Cannon_250m" r1(2.0) r2(4.0) r3(6.0) r4(8.0) r5(10.0))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Mortar_2"	
	("SC_W_Accuracy_4_Cannon_250m" r1(3.0) r2(4.5) r3(7.0) r4(9.0) r5(11.5))
	("spreading_tank_indirect")
)

(define "SC_Weapon_Accuracy_Preset_Mortar_3"	
	("SC_W_Accuracy_4_Cannon_250m" r1(3.5) r2(5.5) r3(9.0) r4(10.5) r5(13.5))
	("spreading_tank_indirect")
)

; ===============================================================================================================]
; // DLC Accuracy
; ===============================================================================================================]

(Include "DLC_accuracy/LV40k_accuracy.inc")
(Include "DLC_accuracy/HALO_accuracy.inc")