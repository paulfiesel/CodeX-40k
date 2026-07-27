
(include "../SC_slopes.inc")
(Include "../SC_armor_damage.inc")
(include "../SC_accuracy.inc")
(Include "../SC_burst_fire.inc")

(Define "SC_Guns_Mortar_Settings"
	{minRange %mRange}
	{aimtype curved}
	{cursor "ironsights/mortar"}
	
	{ZeroingAccuracy 0.8 0.7 0.65 0.6 0.5}
	{AimingTolerance 1.5}
	{SpreadTolerance 0.01}		;// Zeroing up to 1% needed before fire

	{unlimitedRangeTPC 0}
)

(Define "SC_Guns_Autocannon_Settings"
	{cursor "ironsights/aa"}
	
	{recoveryTime (/ 60 %fireRate)}
	("SC_Weapon_Burst_Fire_%fireMode")
	
	{parameters "he"
		(mod "mp" {unlimitedRangeTPC 1})	;// unrestricts range in TPC/FPC for shooting at aircraft
		{FalloffStrength 0}
	}
	{AimingTolerance 12}
	{SpreadTolerance 0.1}
)

(define "SC_Guns_Usable_By_Fauna"
	;//{tag "sc_weapon"} 
	;//{tag "weapon bullet to_hand"} 
	
	{tag "shoot_walking shoot_walking_manual shoot_walking_ai"}

	{inventory
		{fsm "smg"}
	}
	{states
		{reload		"reload"}
		{unload		"unload"}
		{fire		"fire"	}
		{aim 		"aim"	}
		{can_aim	"can-aim"}
	}
)

(define "SC_Guns_Cannon"
	{cursor "ironsights/tank2"}							;// rts cursor
	{cursorReloading "carbine_reload"}					;// rts reload cursor
	{crosshair "crosshair_tank"}						;// third person crosshair
	{crosshairReloading "crosshair_tank_reload"}		;// third person reload crosshair. 

	{tag "weapon build_in gun bullet tank_gun"}
	{calibre %calibre}
	
	{inventory
		{size 4 2}
		{weight 1000}
	}
	{mass 1000}
	{foresight "%aimbone"}								;// bone for muzzleflash fx
	
	{aimRange 15}									
	{maxRange 25}			
	
;//	{aimRange (* 0.86 %minRange) (* 0.86 %maxRange)}	;// Maximum fire range for AI. Expressed as {range 15 25} equals the same thing.
;//	{maxRange (* 1 %minRange) (* 1 %maxRange)}			;//	Maximum fire range for player in direct control.

	{range %minRange %maxRange}
	
	{rechargeTime %reloadSpeed}							;// Shell reload or full magazine reload in autoloaders 
	
	("SC_Weapon_Accuracy_Preset_%gunType")				; //SC Accuracy type (Available: Autocannon, Assault_Gun, Battlecannon, Artillery_1, Artillery_2, Tank_Destroyer, Rockets_1)
	
	{aimingTolerance 1}									;// Measure in degrees of IK error when AI is allowed to shoot
	{projectileDamageThreshold 1}						;// Damages lower than armor * threshold are ignored
	{LockFireDistanceTime 0}							;// Time that AIM is allowed to be out of range for before firing is disabled
	{SyncedProjectiles 1}								;// visually syncs decal/crater spawn in multiplayer
	{toplayerVignette ""}

	{FiringTimeout 0.5 0.1}								; delay between bursts
	{preloaded}
	
	{RicochetEnergyDamping		;// penetration reduction after ricochet (angle - damping multiplier)	
		{0 	1}
		{10	0.9}
		{25	0.7}
		{45 0.3}
		{60 0}
	}
	{OvermatchDamping			; [??] (angle - damping)
		{0 1}
		{30 1.1}
		{55	1.15}
		{60	1.45}
		{70	4}
		{90	6}
	}
	
	{SpreadTolerance 0.1}
	
	; // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~;
	
	{gravity (* 3.5 %gravity_mod)}	; // 3.5 is standard for direct fire tanks / use mod 4 or ++ for artillery
		
	; // BUZZ: Shell - Default Case.
	
	("SC_Gun_Penetration_APHE" range(%maxRange) damage(%armorDamage) piercing(%piercing))
	
	{healthDamage (* (* 0.5 %armorDamage) (* 0.5 %piercing))}	; // BUZZ: <- also APHE & HEAT.
	{speed %projectileSpeed}
	
	{parameters "apds"
		("SC_Gun_Penetration_APDS" range(%maxRange) damage(%armorDamage) piercing(%piercing))
		{healthDamage (* (* 0.5 %armorDamage) (* 3.0 %piercing))}
		{speed (* 1.5 %projectileSpeed)}
		
		{cursorReloading "gun_apds"}
	}
	{parameters "ap"
		("SC_Gun_Penetration_AP" range(%maxRange) damage(%armorDamage) piercing(%piercing))
		{healthDamage (* (* 0.5 %armorDamage) (* 2.0 %piercing))}
		{speed (* 1.25 %projectileSpeed)}
		
		{cursorReloading "gun_ap"}
	}
	{parameters "he"
		("SC_Gun_Penetration_HE" range(%maxRange) damage(%armorDamage) piercing(%piercing))
		{healthDamage (* (* 2.0 %armorDamage) (* 0.5 %piercing))}
		{speed (* 0.875 %projectileSpeed)}
		
		{cursorReloading "gun_he"}
		(mod "mp" {unlimitedRangeTPC 0})	;// restrict range in TPC/FPC in multiplayer only
	}
	{parameters "aphe"
		("SC_Gun_Penetration_APHE" range(%maxRange) damage(%armorDamage) piercing(%piercing))
		{speed (* 1.0 %projectileSpeed)}
		
		{cursorReloading "gun_heat"}
		{DisableRicochet} 	; // <- BUZZ: also explosive shells, disable so it doesnt spawn the FX twice. 
	}
	{parameters "heat"
		("SC_Gun_Penetration_APHE" range(%maxRange) damage(%armorDamage) piercing(%piercing))
		{speed (* 1.0 %projectileSpeed)}
		
		{cursorReloading "gun_heat"}
		(mod "mp" {unlimitedRangeTPC 0})	;// restrict range in TPC/FPC in multiplayer only
	}
)