
; -------------------------------------------------------------------------------------- ;
; // General Small Arms
; -------------------------------------------------------------------------------------- ;

;  INFO: projectileDamageTable {x(Meters) y(Piercing)}

(define "SC_W_Armor_Health"	
	{minimumDamageModifier (* (* 1.0 %damage) %damage_mp)}
)

; // Regular smallarms
(define "SC_W_Penetration_Distance_0"	
;	{projectileDamageTable {20 %0} {100 %1} {155 %2} {250 %3} {400 %4}}
	{projectileDamageTable {(* %5 0.2) %0} {(* %5 1.0) %1} {(* %5 1.5) %2} {(* %5 2.0) %3} {(* %5 4.0) %4}}
)

; // Smallarms with increased close range piercing
(define "SC_W_Penetration_Distance_1"
;	{projectileDamageTable {10 %0} {50 %1} {100 %2} {155 %3} {250 %4}}
	{projectileDamageTable {(* %5 0.05) %0} {(* %5 0.4) %1} {(* %5 0.8) %2} {(* %5 1.25) %3} {(* %5 1.5) %4}}
)

; // Smallarms long range profile.
(define "SC_W_Penetration_Distance_2"	
;	{projectileDamageTable {0 %0} {50 %1} {100 %2} {150 %3} {200 %4}}
	{projectileDamageTable {0 %0} {(* %5 0.5) %1} {%5 %2} {(* %5 1.25) %3} {(* %5 1.8) %4}}	
)

; // Bazookas and Grenade Launchers - Improved Piercing on close range + more falloff
(define "SC_Penetration_Distance_3"
	{projectileDamageTable
		{(* 0.05 %range) (* 1.8 %piercing)} 
		{(* 0.25 %range) (* 1.5 %piercing)} 
		{(* 1.0 %range) (* 1.0 %piercing)} 	
		{(* 1.5 %range) (* 0.5 %piercing)} 	
		{(* 2.0 %range) (* 0.1 %piercing)}
	}
	("SC_W_Armor_Health" damage(%damage) damage_mp(%damage_mp))
)

; // Missiles and AT Long Range AT Systems - Consistent piercing values.
(define "SC_Penetration_Distance_4"
	{projectileDamageTable
		{(* 0.1 %range) (* 1.25 %piercing)} 		
		{(* 1.0 %range) (* 0.8 %piercing)}		
		{(* 2.0 %range) (* 0.5 %piercing)}
		{(* 2.2 %range) (* 0.2 %piercing)}
	}
	("SC_W_Armor_Health" damage(%damage) damage_mp(%damage_mp))
)

; ------------------------------------------------------------------------------------------------------------------------------------------------------------ ;


; // Dummy rounds
(define "SC_Weapon_Piercing_None"
	("SC_W_Penetration_Distance_0" args 1 1 1 1 0 %max_range) ("SC_W_Armor_Health" damage(0) damage_mp(0.0))	
	("standard_slope_no_multiplier")
)


; // Small arms calibers
(define "SC_Weapon_Piercing_Smallarms_T1"
	("SC_W_Penetration_Distance_0" args 5 3 2 1 0 %max_range) ("SC_W_Armor_Health" damage(1) damage_mp(%damage_mp))		; <- 9mm Low caliber pistols and SMGs 
	("ap_7_62_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T2"
	("SC_W_Penetration_Distance_1" args 9 5 3 1 0 %max_range) ("SC_W_Armor_Health" damage(4) damage_mp(%damage_mp))		; <- Assault Rifles 7.62mm (AK47)
	("ap_7_62_slope_multiplier")
)


; // Heavy calibers
(define "SC_Weapon_Piercing_Smallarms_T3"
	("SC_W_Penetration_Distance_1" args 15 9 5 3 0 %max_range) ("SC_W_Armor_Health" damage(8) damage_mp(%damage_mp))		; <- Machine Guns 7.92mm (MG42)
	("ap_7_62_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T4"
	("SC_W_Penetration_Distance_1" args 22 12 9 5 0 %max_range) ("SC_W_Armor_Health" damage(12) damage_mp(%damage_mp))		; <- Machine Guns .30cal 
	("ap_7_62_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T5"
	("SC_W_Penetration_Distance_2" args 32 24 16 8 0 %max_range) ("SC_W_Armor_Health" damage(15) damage_mp(%damage_mp))		; <- Heavy Machine Guns .50cal
	("ap_12_slope_multiplier") 
)


; // Bigger Calibers
(define "SC_Weapon_Piercing_Smallarms_T6"
	("SC_W_Penetration_Distance_2" args 42 31 21 12 0 %max_range)		("SC_W_Armor_Health" damage(30) damage_mp(%damage_mp))		; <- 40k hellgun
	("ap_12_slope_multiplier") 
)
(define "SC_Weapon_Piercing_Smallarms_T7"
	("SC_W_Penetration_Distance_2" args 52 38 28 21 0 %max_range)		("SC_W_Armor_Health" damage(50) damage_mp(%damage_mp))		; <- 40k Boltgun
	("ap_12_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T8"
	("SC_W_Penetration_Distance_2" args 64 49 36 24 0 %max_range)		("SC_W_Armor_Health" damage(75) damage_mp(%damage_mp))		; <- 40k Assault Cannons
	("at_rifle_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T9"
	("SC_W_Penetration_Distance_2" args 75 58 42 32 0 %max_range)		("SC_W_Armor_Health" damage(100) damage_mp(%damage_mp))		; <- 40k Plasmagun / 40k Boltgun Krak Rounds
	("at_rifle_slope_multiplier")
)
(define "SC_Weapon_Piercing_Smallarms_T10"
	("SC_W_Penetration_Distance_2" args 87 62 55 36 0 %max_range)		("SC_W_Armor_Health" damage(160) damage_mp(%damage_mp))		; <- 40k Autocannons
	("at_rifle_slope_multiplier") 
)


; // Grenade Launchers 
(define "SC_Weapon_Piercing_Grenade_HE_T1"
	("SC_Penetration_Distance_3" range(%max_range) piercing(40) damage(200) damage_mp(%damage_mp))		; <- Regular 40mm grenades
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_Grenade_HE_T2"
	("SC_Penetration_Distance_3" range(%max_range) piercing(40) damage(400) damage_mp(%damage_mp))		; <- Regular 40mm grenades
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_Grenade_AT_T1"
	("SC_Penetration_Distance_3" range(%max_range) piercing(60) damage(400) damage_mp(%damage_mp))		; <- 40mm AT Grenades
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_Grenade_AT_T2"
	("SC_Penetration_Distance_3" range(%max_range) piercing(80) damage(600) damage_mp(%damage_mp))		; <- 50mm AT Grenades
	("standard_slope_no_multiplier") 
)


; // Long range AT Smallarms - PTR/Lasers (Mostly for SCI-FI mods)
(define "SC_Weapon_Piercing_AT_T1"
	("SC_Penetration_Distance_4" range(%max_range) piercing(125) damage(600) damage_mp(%damage_mp))	 ; <- 40k Shoulder Lascannon
	("at_rifle_slope_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T2"
	("SC_Penetration_Distance_4" range(%max_range) piercing(150) damage(900) damage_mp(%damage_mp))	 ; <- 40k Tyranid Venom Cannon
	("at_rifle_slope_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T3"
	("SC_Penetration_Distance_4" range(%max_range) piercing(175) damage(1200) damage_mp(%damage_mp))		
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T4"
	("SC_Penetration_Distance_4" range(%max_range) piercing(200) damage(1500) damage_mp(%damage_mp))		
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T5"
	("SC_Penetration_Distance_4" range(%max_range) piercing(250) damage(1800) damage_mp(%damage_mp))		
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T6"
	("SC_Penetration_Distance_4" range(%max_range) piercing(300) damage(2100) damage_mp(%damage_mp))		
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_AT_T7"
	("SC_Penetration_Distance_4" range(%max_range) piercing(350) damage(2400) damage_mp(%damage_mp))		
	("standard_slope_no_multiplier") 
)


; // Bazookas
(define "SC_Weapon_Piercing_Bazooka_T1"
	("SC_Penetration_Distance_3" range(%max_range) piercing(80) damage(500) damage_mp(%damage_mp))		; <- Panzerfaust
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T2"
	("SC_Penetration_Distance_3" range(%max_range) piercing(100) damage(750) damage_mp(%damage_mp))	; <- M1 bazooka, panzershreck
	("standard_slope_no_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T3"
	("SC_Penetration_Distance_3" range(%max_range) piercing(125) damage(1000) damage_mp(%damage_mp))	; <- Soviet RPG7
	("ap_slope_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T4"
	("SC_Penetration_Distance_3" range(%max_range) piercing(160) damage(1200) damage_mp(%damage_mp))	; <- Javelin
	("ap_slope_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T5"
	("SC_Penetration_Distance_3" range(%max_range) piercing(200) damage(1500) damage_mp(%damage_mp))	
	("ap_slope_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T6"
	("SC_Penetration_Distance_3" range(%max_range) piercing(250) damage(1800) damage_mp(%damage_mp))	
	("ap_slope_multiplier") 
)
(define "SC_Weapon_Piercing_Bazooka_T7"
	("SC_Penetration_Distance_3" range(%max_range) piercing(300) damage(2000) damage_mp(%damage_mp))	
	("ap_slope_multiplier") 
)

; -------------------------------------------------------------------------------------- ;
; // Guns Cannons
; -------------------------------------------------------------------------------------- ;

; // BUZZ: use for super anti-tank non-explosive shells (Vanquisher - Shadowsword Volcano)

(define "SC_Gun_Penetration_APDS"
	{projectileDamageTable
		{(* 0.02 %range) (* 2.5 %piercing)} 	
		{(* 0.2 %range) (* 1.75 %piercing)} 	
		{(* 0.5 %range) (* 1.0 %piercing)} 		
		{(* 1.0 %range) (* 0.5 %piercing)} 
		{(* 1.25 %range) (* 0.25 %piercing)}	
		{(* 1.5 %range) (* 0.1 %piercing)}	
	}
	{minimumDamageModifier (* 3.0 %damage)}
	("ap_slope_multiplier") 
)

; // BUZZ: standard AT shells

(define "SC_Gun_Penetration_AP"
	{projectileDamageTable
		{(* 0.04 %range) (* 2.0 %piercing)} 	
		{(* 1.0 %range) (* 1.0 %piercing)} 		
		{(* 1.5 %range) (* 0.5 %piercing)} 
		{(* 2.0 %range) (* 0.1 %piercing)} 	
	}
	{minimumDamageModifier (* 2.0 %damage)}
	("ap_slope_multiplier") 
)

; // BUZZ: use for HEAT & APHE - All-round explosive shells with anti-armor capabilities (Most autocannons in the mod use those kinds of shells)

(define "SC_Gun_Penetration_APHE"
	{projectileDamageTable
		{(* 0.04 %range) (* 1.5 %piercing)} 
		{(* 0.2 %range) (* 1.25 %piercing)} 
		{(* 0.5 %range) (* 1.0 %piercing)} 
		{(* 1.0 %range) (* 0.8 %piercing)} 	
		{(* 1.5 %range) (* 0.4 %piercing)} 	
		{(* 2.0 %range) (* 0.1 %piercing)}		
	}
	{minimumDamageModifier (* 1.5 %damage)}
	("standard_slope_no_multiplier") 
)

; // BUZZ: standard HE shells

(define "SC_Gun_Penetration_HE"
	{projectileDamageTable
		{(* 0.1 %range) (* 1.0 %piercing)} 	
		{(* 0.4 %range) (* 0.8 %piercing)} 	
		{(* 0.8 %range) (* 0.6 %piercing)} 	
		{(* 1.2 %range) (* 0.3 %piercing)} 	
		{(* 2.0 %range) (* 0.1 %piercing)}		
	}
	{minimumDamageModifier (* 1.0 %damage)}
	("standard_slope_no_multiplier") 
)
