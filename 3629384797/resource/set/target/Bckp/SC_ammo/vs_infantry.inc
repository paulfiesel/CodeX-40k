
{human in_bush											; -TARGET CLASS-
	{"SC_ammo_melee_vs_human"}
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	
	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	{"SC_bullet_plasma" {volume "SC_volume_armored"}}	; Plasma Projectile
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo shell wp" {ground}{ready_for_shot}}			; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade at"}										; anti-tank grenades
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
	{"ammo rocketlauncher" {ground}}					; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	
	{"SC_activator_target_human"}
}

{human in_cover											; -TARGET CLASS-
	{"grenade fg"}										; standard anti-personel grenades
	
	{"SC_ammo_melee_vs_human"}
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	
	{"SC_bullet_plasma" {volume "SC_volume_armored"}}	; Plasma Projectile
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo shell wp" {ready_for_shot}}					; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	
	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade at"}										; anti-tank grenades
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
	{"ammo rocketlauncher"}								; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	
	{"SC_activator_target_human"}
}

(Define "Light_Infantry_Target"		; <- Shared with Human and Infantry_Small
	{"SC_ammo_melee_vs_human"}
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	
	{"SC_bullet_plasma"		{volume "SC_volume_armored"}}				; Plasma Projectile
	{"ammo rocketlauncher"	{volume "SC_volume_armored_heavy"}}			; bazooka class ammo
	{"ammo rocketlauncher"	{volume "SC_volume_armored_shield_heavy"}}	; bazooka class ammo
	
	{"grenade SC_flashbang" {volume "SC_volume_armored_shield_heavy"}}	;  disables infantry for a brief period
	{"grenade SC_flashbang" {volume "SC_volume_armored_heavy"}}			;  disables infantry for a brief period
	{"grenade SC_flashbang" {volume "SC_volume_armored_medium"}}		;  disables infantry for a brief period
	
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo shell wp" {ready_for_shot}}					; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	
	{"grenade at"}										; anti-tank grenades
	
	{"grenade SC_flashbang"}							;  disables infantry for a brief period
	
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"ammo rocketlauncher" {ground}}					; bazooka class ammo

	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	
	{"SC_activator_target_human"}
)	

{human							
	("Light_Infantry_Target")
}

{SC_Target_Infantry_Small		
	("Light_Infantry_Target")
}

(Define "Heavy_Infantry_Target"		; <- Shared with Infantry_Big and Infantry_Med
	{"SC_ammo_melee_vs_human"}
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo shell wp" {ready_for_shot}}					; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo

	{"grenade at" {volume "SC_volume_armored_shield_heavy"}}		; anti-tank grenades
	{"grenade at" {volume "SC_volume_armored_heavy"}}				; anti-tank grenades
	
	{"SC_bullet_plasma"						{volume "SC_volume_armored"}}				; Plasma Projectile
	{"SC_veryhigh_human_armor_piercing"		{volume "SC_volume_armored"}}
	
	{"ammo rocketlauncher" {volume "SC_volume_armored_heavy"}}			; bazooka class ammo
	{"ammo rocketlauncher" {volume "SC_volume_armored_shield_heavy"}}	; bazooka class ammo
	{"ammo rifle_grenade_at" {volume "SC_volume_armored"}}				; rifle grenade HEAT ammo
	{"hmgun" {volume "SC_volume_armored"}}								; heavy machine gun (.50 cal, etc)
	{"zenite" {volume "SC_volume_armored"}}								; autocannon AP/APCR ammo
	{"ptr" {volume "SC_volume_armored"}}								; anti-tank rifle ammo

	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	{"SC_high_human_armor_piercing"}
	{"SC_medium_human_armor_piercing"}
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"grenade at"}										; anti-tank grenades
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	
	{"SC_super_shell"}									; All-round super destructive shell.
				
	{"ammo rocketlauncher"}								; bazooka class ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"zenite"}											; autocannon AP/APCR ammo
	{"ptr"}												; anti-tank rifle ammo

	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_human"}
)

{SC_Target_Infantry_Med		
	("Heavy_Infantry_Target")
}

{SC_Target_Infantry_Big		
	("Heavy_Infantry_Target")
}

; // Use with Humanoid suicide bomber units.
{human_ignore_melee										; -TARGET CLASS-
	{"SC_super_shell"}									; All-round super destructive shell.
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo shell wp" {ready_for_shot}}					; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade at"}										; anti-tank grenades
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
	{"ammo rocketlauncher" {ground}}					; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
}

; // Treat creatures as vehicles - Melee "vs. Infantry" priority is disabled against them.

{SC_Target_Creature_Small								
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	{"mortar all_he"}									; HE mortar ammo
				
	{"grenade at"}										; anti-tank grenades
	
	{"flame"}											; ammo for flamethrowers
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_bullet_anti_tank"}
	{"ammo rocketlauncher"		{volume "SC_volume_armored"}}	; bazooka class ammo 
	{"ammo rifle_grenade"}										; rifle grenade HE ammo
	{"ammo rifle_grenade_at"	{volume "SC_volume_armored"}}	; rifle grenade HEAT ammo
	
	{"SC_veryhigh_human_armor_piercing"}
	{"ptr"}												; anti-tank rifle ammo
	
	{"SC_high_human_armor_piercing"}
	{"SC_medium_human_armor_piercing"}
	
	{"grenade ic" }										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg"}										; standard anti-personel grenades
	
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"ammo rocketlauncher"}			; bazooka class ammo 
	{"ammo rifle_grenade_at"}		; rifle grenade HEAT ammo
	
	{"rocketselector"}									; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{SC_Target_Creature_Med									
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	{"mortar all_he"}									; HE mortar ammo
			
	{"grenade at"}										; anti-tank grenades
	
	{"SC_bullet_anti_tank"}
	{"ammo rocketlauncher"}								; bazooka class ammo 
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	
	{"flame"}											; ammo for flamethrowers
	
	{"SC_ammo_melee_vs_vehicle"}
									
	{"SC_veryhigh_human_armor_piercing"}
	{"ptr"}												; anti-tank rifle ammo
	
	{"SC_high_human_armor_piercing"}
	{"SC_medium_human_armor_piercing"}
	{"SC_low_human_armor_piercing"}
	
	{"hmgun" {volume "head"}}							; heavy machine gun (.50 cal, etc)
	{"small_arms" {volume "head"}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"grenade ic" }										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg"}										; standard anti-personel grenades
	{"rocketselector"}									; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{SC_Target_Creature_Big									
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	{"mortar all_he"}									; HE mortar ammo
			
	{"grenade at"}										; anti-tank grenades
	
	{"grenade ic"}										; anti-tank grenades
	
	{"SC_bullet_anti_tank"}
	{"ammo rocketlauncher"}								; bazooka class ammo 
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	
	{"flame"}											; ammo for flamethrowers
	
	{"SC_ammo_melee_vs_vehicle"}
									
	{"SC_veryhigh_human_armor_piercing"}
	{"ptr"}												; anti-tank rifle ammo
	
	{"SC_high_human_armor_piercing"}
	{"SC_medium_human_armor_piercing"}
	
	{"hmgun" {volume "head"}}							; heavy machine gun (.50 cal, etc)
	{"small_arms" {volume "head"}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
;	{"grenade at"}										; anti-tank grenades
;	{"grenade ic" }										; flame grenades (molotov)
;	{"glass ic"}										; flame shell (Ampulomet glass ball)
;	{"grenade fg"}										; standard anti-personel grenades
;	{"rocketselector"}									; rocket artillery
;	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}
