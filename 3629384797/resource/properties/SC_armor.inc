
; ~~~~~~~~~~~~ // SC PLATAFORM - increased health values


(define "armoredcar_tier1"
	("general_durability" body(175) engine(150) turret(150) mantlet(100) gun(150) track(150) ammo(120))
	("basic_armor" args 15)
)
(define "armoredcar_tier2"
	("general_durability" body(200) engine(150) turret(150) mantlet(125) gun(150) track(150) ammo(120))
	("basic_armor" args 15)
)
(define "tankette_tier1"
	("general_durability" body(175) engine(150) turret(150) mantlet(100) gun(150) track(150) ammo(120))
	("basic_armor" args 15)
)


(define "armor_carried_cannon" ;// MGs and mortars
	("cannon_durability" body(150) gun(150) wheel(100) shield(150))
	("cannon_thickness" args 6)
)
(define "armor_light_cannon"  ;// 37-47mm, autocannons, Nebelwerfer
	("cannon_durability" body(150) gun(150) wheel(100) shield(200))
	("cannon_thickness" args 6)
)
(define "armor_medium_cannon" ;// 50-100mm
	("cannon_durability" body(175) gun(150) wheel(100) shield(250))
	("cannon_thickness" args 6)
)
(define "armor_heavy_cannon" ;// howitzers, big towed guns
	("cannon_durability" body(200) gun(150) wheel(100) shield(300))
	("cannon_thickness" args 8)
	("body" repair(90))
)


(define "recon_tier1"
	("plane_durability" body(75) engine(50) propeller(50) wing(50) wheel(75) part(75))
)
(define "recon_tier2"
	("plane_durability" body(75) engine(50) propeller(50) wing(70) wheel(75) part(75))
)
(define "fighter_tier1"
	("plane_durability" body(100) engine(50) propeller(50) wing(80) wheel(100) part(100))
)
(define "fighter_tier2"
	("plane_durability" body(175) engine(75) propeller(50) wing(125) wheel(100) part(100))
)

; ==================================================================================================================================
; // SC PLATAFORM 
; ==================================================================================================================================

(define "tank_light_tier1"
	("general_durability" body(300) engine(100) turret(200) mantlet(350) gun(100) track(150) ammo(100))
	("basic_armor" args 15)
)
(define "tank_light_tier2"
	("general_durability" body(400) engine(200) turret(300) mantlet(450) gun(200) track(250) ammo(200))
	("basic_armor" args 15)
)

; --------------------------------------------------------------------------------------------------------------------------------------------

(define "tank_medium_tier1"
	("general_durability" body(600) engine(250) turret(400) mantlet(550) gun(250) track(350) ammo(250))
	("basic_armor" args 20)
)
(define "tank_medium_tier2"
	("general_durability" body(700) engine(300) turret(500) mantlet(650) gun(300) track(450) ammo(300))
	("basic_armor" args 25)
)
(define "tank_medium_tier3"
	("general_durability" body(800) engine(350) turret(600) mantlet(750) gun(350) track(550) ammo(350))
	("basic_armor" args 30)
)

; --------------------------------------------------------------------------------------------------------------------------------------------

(define "tank_heavy_tier1"
	("general_durability" body(1000) engine(500) turret(700) mantlet(900) gun(500) track(600) ammo(500))
	("basic_armor" args 40)
)
(define "tank_heavy_tier2"
	("general_durability" body(1250) engine(600) turret(800) mantlet(1100) gun(600) track(700) ammo(600))
	("basic_armor" args 45)
)
(define "tank_heavy_tier3"
	("general_durability" body(1500) engine(700) turret(900) mantlet(1300) gun(700) track(800) ammo(700))
	("basic_armor" args 50)
)
(define "tank_heavy_tier4"
	("general_durability" body(2000) engine(800) turret(1000) mantlet(1400) gun(800) track(900) ammo(800))
	("basic_armor" args 55)
)

; --------------------------------------------------------------------------------------------------------------------------------------------

(define "tank_behemoth_tier1"	; // <- REFERENCE: BATTLEWAGON
	("general_durability" body(2500) engine(900) turret(1100) mantlet(1800) gun(900) track(1500) ammo(900))
	("basic_armor" args 60)
)
(define "tank_behemoth_tier2"	; // <- REFERENCE: BANEBLADE/LAND-RAIDER
	("general_durability" body(3000) engine(1000) turret(1200) mantlet(2000) gun(1000) track(1800) ammo(1000))
	("basic_armor" args 70)
)
(define "tank_behemoth_tier3"	; // <- REFERENCE: KNIGHT/GORKANAUTS
	("general_durability" body(4000) engine(1250) turret(1500) mantlet(2400) gun(1250) track(2100) ammo(1200))
	("basic_armor" args 80)
)
(define "tank_behemoth_tier4"	; // <- REFERENCE: STOMPA/REAVER
	("general_durability" body(5000) engine(1500) turret(2000) mantlet(2500) gun(1500) track(2500) ammo(1500))
	("basic_armor" args 100)
)
