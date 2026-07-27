
(include "SC_accuracy.inc")
(include "SC_slopes.inc")
(include "SC_armor_damage.inc")
(include "SC_burst_fire.inc")
(include "SC_fp_zoom_sights.inc")
(include "SC_recoil.inc")

; ----------------------------------------------------------------------------------------------------------------------------------- ;

(Define "SC_Weapon_Sniper"
	{special
		{mode aim}
		{PrepareTime %time}
		{PrepareCursor "aimed_shot"}
		{PrepareCursorScene "aimed_shot_scene"}
		{accuracy %acc_boost}
		{damage %dmg_mp}
	}
	{states
		{reload		"reload"}
		{unload		"unload"}
		{fire		"fire"	}
		{aim 		"aim"	}
		{can_aim	"can-aim-bolt"}
	}
	{ZeroingAccuracy 0.9 0.8 0.7 0.6 0.5}
)

(Define "SC_Weapon_Rocket_Launcher"
	{inventory
		{fsm "bazooka"}
	}
	{states
		{reload "reload-bazooka"}
		{unload "unload-bazooka"}
		{fire "fire-bazooka"}
		{aim "aim-bazooka"}
		{can_aim "can-aim-bazooka"}
	}
)

(define "SC_Weapon_%shoot_walking_Shoot_Walking"
	{tag "shoot_walking_manual"}
)	

(define "SC_Weapon_Can_AI_Shoot_Walking"
	{tag "shoot_walking shoot_walking_manual shoot_walking_ai"}
)	

(define "SC_Weapon_Cannot_Shoot_Walking"
	{inventory
		{fsm "bazooka"}
	}
	{states
		{fire "fire-bazooka"}
		{aim "aim-bazooka"}
		{can_aim "can-aim-bazooka"}
	}
)

(define "SC_Weapon_Smallarms"
	{tag "weapon bullet to_hand SC_weapon"} 
	{tag "cannot_lie"}

	{tag "%weaponCategory"}			; <- GEM animation tags (smg assaultrifle pistol rifle mgun bazooka)
	{tag "%weaponTag"}				; <- Tag towards "Stuff.inc" for custom behaviours / Add DLC tag as well.
	{tag "anm_%animationType"}		; <- SC Plataform custom human FSM Tag
	
	{healthDamage %healthDamage}
	
	{foresight "%aimbone"}
	{curve "%curve"}
	
	{inventory
		{size %invSize}
		{link_bone "gun_back"}
		{weight 100}
	}
	{mass %weight}	;kg unloaded

	{calibre %calibre}
	{rechargeTime %reloadSpeed}
	{recoveryTime (/ 60 %fireRate)}
	{range %minRange %maxRange}
	{speed %projectileSpeed}
	
	
	("SC_Weapon_Piercing_%armorPiercing" max_range(%maxRange) damage_mp(1.0))
	("SC_Weapon_Recoil_%recoilStrenght")
	("SC_Weapon_Burst_Fire_%fireMode")
	("SC_Weapon_%shoot_walking_Shoot_Walking")	; <- If empty will use default define - can shoot_walk.
	
	; // NEW PARAMS (PHASE 1)
	{SpreadTolerance 0.25}		;// AI needs to aim <x>%
	{aimingTolerance 1}
	{thirdpersonparams inherit "human default"}
	
	{AccuracyByMotionK 1.0}		; // needs further testing
)

















; ==================================================================================================================================== ;
; // GOH STUFF FOR REFERENCE
; ==================================================================================================================================== ;

; < =========== Weapon Tags =========== >

;	{tag "weapon rifle rifle_slap_melee bullet to_hand mountable shoot_walking_manual -shoot_walking"}

;	{tag "smg smg_shell weapon bullet to_hand auto_eject shoot_walking_manual -shoot_walking"}

;	{tag "weapon hmg_shell mgun bullet to_hand mountable -shoot_walking shoot_walking_manual auto_eject itemin2hands"}

;	{tag "weapon pistol bullet to_hand -shoot_walking -shoot_walking_ai shoot_walking_manual auto_eject"}
 
;	{tag "sniper -shoot_walking -shoot_walking_ai shoot_walking_manual auto_eject rifle_shell"}

; < =========== Weapon Variables =========== >

;	{FiringTimeout 2.5 0.5}
;	{LockFireDistanceTime 0.5}
;	{SpreadTolerance 0.3}			;// AI needs to aim 30%
;	{aimingTolerance 2}

;	{thirdpersonparams inherit "human default"}
;	{SyncedProjectiles 1} 			;// visually syncs decal/crater spawn in multiplayer
;	{AccuracyByMotionK 0.9}


;	{FiringTimeoutDistanceFactor
;		{0.25 0.0}	;35m
;		{0.75 1.0}	;105m
;	}

;	(define "penetration"
;		{projectileDamageTable {20 %0} {100 %1} {155 %2} {250 %3} {400 %4}}
;	)
;	("penetration" args 7 5 3 1 0)
	
;	(define "armor health"
;		{minimumDamageModifier (* 1.0 %damage)}
;	)
;	("armor health" damage(4))
