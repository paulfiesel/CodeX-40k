
; ================================================================================ ;
; // COMMON DEFINES
; ================================================================================ ;

(Define "SC_Ammo_Inventory_Slots"		; usage example: ("SC_Ammo_Inventory_Slots" size(2 1) mass(0.03) w(1) amount(100))
	{inventory
		{weight %w}
		{block %amount}
		{size %size}
		{fsm "belt"}
	}
	{mass %mass}
)

; ================================================================================ ;
; // MELEE TAGS 
; ================================================================================ ;

(Define "SC_Ammo_Melee_High_Priority"
	{tag "SC_ammo_melee_vs_human"}	
	{tag "SC_ammo_melee_vs_vehicle"}
	{tag "SC_ammo_melee"}
	("SC_Ammo_Inventory_Slots" size(1 1) mass(0.001) w(1) amount(100))
)

(Define "SC_Ammo_Melee_No_Priority"	
	{tag "SC_ammo_melee"}
	("SC_Ammo_Inventory_Slots" size(1 1) mass(0.001) w(1) amount(100))
)

(Define "SC_Ammo_Melee_Priority_VS_Human"	
	{tag "SC_ammo_melee_vs_human"}
	{tag "SC_ammo_melee"}
	("SC_Ammo_Inventory_Slots" size(1 1) mass(0.001) w(1) amount(100))
)

(Define "SC_Ammo_Melee_Priority_VS_Vehicle"	
	{tag "SC_ammo_melee_vs_vehicle"}
	{tag "SC_ammo_melee"}
	("SC_Ammo_Inventory_Slots" size(1 1) mass(0.001) w(1) amount(100))
)

; ================================================================================ ;
; // BULLET PIERCING TAGS (FOR HUMAN/ARMOR SC PLATAFORM DAMAGE CODE)
; ================================================================================ ;

; // If you don't use any of these tags, the code will use level "VeryLow" as default.

(Define "SC_Ammo_Human_Armor_Pierce_VeryLow"	{Tag "SC_verylow_human_armor_piercing"})	; <- No bonus damage, default. Will not do damage against medium and heavy armor.
(Define "SC_Ammo_Human_Armor_Pierce_Low"		{Tag "SC_low_human_armor_piercing"})		; <- Adds small damage bonus against infantry. Will not do damage heavy armor.
(Define "SC_Ammo_Human_Armor_Pierce_Medium"		{Tag "SC_medium_human_armor_piercing"})		; <- Adds medium damage bonus against heavy infantry, AI will use it to target light vehicles
(Define "SC_Ammo_Human_Armor_Pierce_High"		{Tag "SC_high_human_armor_piercing"})		; <- Adds high damage bonus against heavy infantry, AI will use it to target Armored Cars and Cannons.
(Define "SC_Ammo_Human_Armor_Pierce_VeryHigh"	{Tag "SC_veryhigh_human_armor_piercing"})	; <- Adds very high damage bonus against heavy infantry, AI will use it to target Light and Medium Tanks. 

; ================================================================================ ;
; // AMMO TYPE (FOR SPECIAL INTERACTION CODE)
; ================================================================================ ;

(define "SC_Ammo_Bullet"			{tag "bullet small_arms stackable pierce"})	;	~~~~~~~~~~~~ <- Regular small arms, no special interactions
(define "SC_Ammo_Bullet_AT"			("SC_Ammo_Bullet")	{tag "SC_bullet_anti_tank"});	~~~~~~~~ <- Allows usage against heavy vehicles.
(define "SC_Ammo_Bullet_Plasma"		("SC_Ammo_Bullet")	{tag "SC_bullet_plasma"})	;	~~~~~~~~ <- Plasma weapons deal additional damage against armored infantry and vehicles, increase AI targeting priority.
(define "SC_Ammo_Bullet_Laser"		("SC_Ammo_Bullet")	{tag "SC_bullet_laser"})	;	~~~~~~~~ <- Adds laser interaction tag, (this is WIP No special interaction yet)
(Define "SC_Ammo_Flamer"			{tag "flame"})	;	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ <- Flamethrower dummy bullet tag, does nothing special yet.

; ================================================================================ ;
; // AMMO BLAST DEFINES
; ================================================================================ ;

(Define "SC_Ammo_Blast_Main"
	{damage blastwave
		{energy (* 1.0 %energy)}
		{area (* 1.0 %a1) (* 1.0 %a2)}
		{ground_interaction_radius (* 0.1 %gradius)} ;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

(Define "SC_Ammo_Blast_Add"
	{damage add blastwave
		{energy (* 1.0 %energy)}
		{area (* 1.0 %a1) (* 1.0 %a2)}
		{ground_interaction_radius (* 0.1 %gradius)} ;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

; ================================================================================ ;
; // AMMO BLAST PRESETS
; ================================================================================ ;

; cumulative: how much can the shell penetrate in the armor on piercing
; detonation thickness: max piercing thickness, if more than given threshold it will automatically detonate the shell

; // [HE] GRENADE LAUNCHER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SC_Ammo_Grenade_Launcher_HE"
	{tag "grenade size%size"} 			; <- FX Tags // "grenade" is also target (Max 4 sizes for this combination of tags)
	{tag "rifle_grenade fg"} 			; <- target tags
	{tag "dropboxed distributable"}		; <- in-game interaction tags
	{tag "ammo"}						; <- engine logic tags 
	{cumulative 0.8}
)

(Define "SC_Ammo_Blast_Grenade_Launcher_HE_S1"
	("SC_Ammo_Grenade_Launcher_HE" size(1))
	("SC_Ammo_Blast_Main"	energy(2.5) a1(1.2) a2(3.0) gradius(0.05))
	{detonationThickness 0.25}
)

(Define "SC_Ammo_Blast_Grenade_Launcher_HE_S2"
	("SC_Ammo_Grenade_Launcher_HE" size(2))
	("SC_Ammo_Blast_Main"	energy(5.0) a1(1.2) a2(3.0) gradius(0.1))
	{detonationThickness 0.25}
)

(Define "SC_Ammo_Blast_Grenade_Launcher_HE_S3"
	("SC_Ammo_Grenade_Launcher_HE" size(2))
	("SC_Ammo_Blast_Main"	energy(7.0) a1(0.5) a2(1.0) gradius(0.15))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(1.5) a2(5.0) gradius(0.1))
	{detonationThickness 0.25}
)

; // [AT] GRENADE LAUNCHER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; // BUZZ: use same blast values as HE but 50%...

(Define "SC_Ammo_Grenade_Launcher_AT"
	{tag "%size heat"} 					; <- FX Tags 
	{tag "rifle_grenade_at"} 			; <- target tags
	{tag "dropboxed distributable"}		; <- in-game interaction tags
	{tag "ammo pierce"}					; <- engine logic tags 
	{cumulative 1.5}					; <- 1.5 value is standard in vanilla AT grenade launchers
)

(Define "SC_Ammo_Blast_Grenade_Launcher_AT_S1"
	("SC_Ammo_Grenade_Launcher_AT" size(50to57))
	("SC_Ammo_Blast_Main"	energy(1.5) a1(0.5) a2(1.5) gradius(0.05))
)

(Define "SC_Ammo_Blast_Grenade_Launcher_AT_S2"
	("SC_Ammo_Grenade_Launcher_AT" size(50to57))
	("SC_Ammo_Blast_Main"	energy(3.0) a1(1.0) a2(2.5) gradius(0.1))
)

(Define "SC_Ammo_Blast_Grenade_Launcher_AT_S3"
	("SC_Ammo_Grenade_Launcher_AT" size(50to57))
	("SC_Ammo_Blast_Main"	energy(5.0) a1(1.5) a2(3.0) gradius(0.1))
	("SC_Ammo_Blast_Add"	energy(2.0) a1(3.0) a2(6.0) gradius(0.05))
)

; // [HE] ROCKET LAUNCHER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SC_Ammo_Rocket_Launcher_HE"
	{tag "shell all_he fg rocketlauncher size%size"}	; <- FX Tags // "rocketlauncher" is also target (Max 2 sizes for this combination of tags)
	{tag "dropboxed"}									; <- in-game interaction tags
	{tag "ammo pierce no_ricochet"}						; <- engine logic tags 
)

(Define "SC_Ammo_Rocket_Launcher_HEAT"
	{tag "heat_shell rocketlauncher size%size"}			; <- FX Tags // "rocketlauncher" is also target (Max 2 sizes for this combination of tags)
	{tag "dropboxed"}									; <- in-game interaction tags
	{tag "ammo pierce no_ricochet"}						; <- engine logic tags 
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HE_S2"
	("SC_Ammo_Rocket_Launcher_HE" size(1))
	("SC_Ammo_Blast_Main"	energy(3.5) a1(2.0) a2(4.0) gradius(0.2))
	{cumulative 1.0}
	{detonationThickness 0.25}
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HE_S3"
	("SC_Ammo_Rocket_Launcher_HE" size(2))
	("SC_Ammo_Blast_Main"	energy(5.0) a1(2.5) a2(5.5) gradius(0.25))
	{cumulative 2.0}
	{detonationThickness 0.25}
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HE_S4"
	("SC_Ammo_Rocket_Launcher_HE" size(2))
	("SC_Ammo_Blast_Main"	energy(9.0) a1(0.5) a2(2.0) gradius(0.25))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(2.0) a2(8.0) gradius(0.125))
	{cumulative 3.0}
	{detonationThickness 0.25}
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HE_S5"
	("SC_Ammo_Rocket_Launcher_HE" size(2))
	("SC_Ammo_Blast_Main"	energy(13.5) a1(0.5) a2(2.0) gradius(0.25))
	("SC_Ammo_Blast_Add"	energy(4.0) a1(2.0) a2(8.0) gradius(0.125))
	{cumulative 4.0}
	{detonationThickness 0.25}
)


; // [HEAT] ROCKET LAUNCHER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(Define "SC_Ammo_Blast_Rocket_Launcher_HEAT_S2"
	("SC_Ammo_Rocket_Launcher_HEAT" size(1))
	("SC_Ammo_Blast_Main"	energy(4.0) a1(0.25) a2(0.5) gradius(0.15))
	("SC_Ammo_Blast_Add"	energy(2.0) a1(0.5) a2(2.0) gradius(0.125))
	{cumulative 3.0}
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HEAT_S3"
	("SC_Ammo_Rocket_Launcher_HEAT" size(2))
	("SC_Ammo_Blast_Main"	energy(5.0) a1(0.25) a2(0.5) gradius(0.15))
	("SC_Ammo_Blast_Add"	energy(2.5) a1(0.5) a2(1.5) gradius(0.125))
	{cumulative 4.0}
)

(Define "SC_Ammo_Blast_Rocket_Launcher_HEAT_S4"
	("SC_Ammo_Rocket_Launcher_HEAT" size(2))
	("SC_Ammo_Blast_Main"	energy(6.0) a1(0.25) a2(0.5) gradius(0.2))
	("SC_Ammo_Blast_Add"	energy(3.0) a1(0.5) a2(1.0) gradius(0.15))
	{cumulative 5.0}
)

