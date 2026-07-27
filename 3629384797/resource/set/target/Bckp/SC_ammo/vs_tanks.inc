
{tank_light												;-TARGET CLASS-
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"mortar all_he" {volume "engine"}}					; HE mortar ammo
	{"mortar all_he"}									; HE mortar ammo
	{"shell aphe 150to152" {volume "body"} {ready_for_shot}}	; cannon aphe ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	{"shell aphebc 150to152" {volume "body"} {ready_for_shot}}	; cannon aphebc ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	{"shell all_he arty"}										; cannon HE ammo for indirect firing artillery
	{"shell all_he 122to128" {volume "body"} {ready_for_shot}}	; cannon HE 122-128mm ammo (ONLY IF ALREADY LOADED)
	{"shell all_he 88to105" {volume "body"} {ready_for_shot}}	; cannon HE 88-105mm ammo (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm) (ONLY IF ALREADY LOADED)
	{"shell std_ap"}									; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm) 
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	{"shell hv_ap"}										; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)
	
	{"SC_ammo_melee_vs_vehicle"}
	{"SC_bullet_anti_tank"}
	
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo 
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"		{volume "engine"}}
	
	{"hmgun" {volume "mover"}}							; heavy machine gun (.50 cal, etc)
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"ptr" {volume "body"}}								; anti-tank rifle ammo
	{"ptr"}												; anti-tank rifle ammo
	{"ammo rifle_grenade_at" {volume "body"}}			; rifle grenade HEAT ammo
	{"flame" {volume "engine"}}							; ammo for flamethrowers
	{"flame"}											; ammo for flamethrowers
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic" {volume "engine"}}					; flame grenades (molotov)
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg" {volume "grenade_fg_target"}}			; standard anti-personel grenades
	{"all_he auto" {disable}}							; auto cannon HE ammo
	{"shell all_he"}									; cannon HE ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{tank_medium											;-TARGET CLASS-
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"big mortar all_he"}								; 120mm HE mortar ammo
	{"mortar all_he" {volume "engine"}}					; HE mortar ammo
	{"mortar all_he"}									; HE mortar ammo
	{"shell aphe 150to152" {volume "body"} {ready_for_shot}}	; cannon aphe ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	{"shell aphebc 150to152" {volume "body"} {ready_for_shot}}	; cannon aphebc ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	{"shell all_he 122to128" {volume "body"} {ready_for_shot}}	; cannon HE 122-128mm ammo (ONLY IF ALREADY LOADED)
	{"shell heat_medium stuh"}									; cannon HEAT ammo (penetration 100-150mm)
	{"shell all_he arty" {volume "turret"}}					; cannon HE ammo for indirect firing artillery
	{"shell all_he arty"}									; cannon HE ammo for indirect firing artillery
	{"shell apcbche"}									; cannon apcbche ammo
	{"shell apcbche2"}									; cannon apcbche ammo (early ammo)
	{"shell aphebc2"}									; cannon aphebc ammo
	{"shell aphebc"}									; cannon aphebc ammo
	{"shell aphe"}										; cannon aphe ammo
	{"shell apbc"}										; cannon apbc ammo
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	{"shell apcbc"}										; cannon apcbc ammo
	{"shell apche"}										; cannon apche ammo
	{"shell apc"}										; cannon apc ammo
	{"shell ap"}										; cannon ap ammo
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm)
	{"shell hv_ap"}										; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)
	
	{"SC_ammo_melee_vs_vehicle"}
	{"SC_bullet_anti_tank"}
	
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo 
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"		{volume "engine"}}
	
	{"ptr" {volume "mover"}}							; anti-tank rifle ammo
	{"ptr" {volume "body"}}								; anti-tank rifle ammo
	{"ammo rifle_grenade_at" {volume "body"}}			; rifle grenade HEAT ammo
	{"flame" {volume "engine"}}							; ammo for flamethrowers
	{"flame"}											; ammo for flamethrowers
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic" {volume "engine"}}					; flame grenades (molotov)
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg" {volume "grenade_fg_target"}}			; standard anti-personel grenades
	{"all_he auto" {disable}}							; auto cannon HE ammo
	{"shell all_he"}									; cannon HE ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{tank_heavy												;-TARGET CLASS-
	{"SC_super_shell"}									; All-round super destructive shell.
	
	{"big mortar all_he"}								; 120mm HE mortar ammo
	{"mortar all_he" {volume "engine"}}					; HE mortar ammo
	{"mortar all_he"}									; HE mortar ammo
	
	{"shell aphe 150to152" {volume "body"} {ready_for_shot}}	; cannon aphe ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	{"shell aphebc 150to152" {volume "body"} {ready_for_shot}}	; cannon aphebc ammo for indirect firing artillery (ONLY IF ALREADY LOADED)
	
; //	{"shell all_he 122to128" {volume "body"} {ready_for_shot}}	; cannon HE 122-128mm ammo (ONLY IF ALREADY LOADED)
	
	{"shell heat_medium stuh"}							; cannon HEAT ammo (penetration 100-150mm)

	{"zenite" {volume "mover"}}							; autocannon AP/APCR ammo
	{"shell hv_ap" {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell apcbche"}									; cannon apcbche ammo
	{"shell apcbche2"}									; cannon apcbche ammo (early ammo)
	{"shell aphebc2"}									; cannon aphebc ammo
	{"shell aphebc"}									; cannon aphebc ammo
	{"shell aphe"}										; cannon aphe ammo
	{"shell apbc"}										; cannon apbc ammo
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	{"shell apcbc"}										; cannon apcbc ammo
	{"shell apche"}										; cannon apche ammo
	{"shell apc"}										; cannon apc ammo
	{"shell ap"}										; cannon ap ammo
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm)
	{"shell hv_ap"}										; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)
	
	{"shell all_he arty" {volume "turret"}}				; cannon HE ammo for indirect firing artillery
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	
	{"SC_ammo_melee_vs_vehicle"}
	{"SC_bullet_anti_tank"}
	
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo 
	
	{"SC_veryhigh_human_armor_piercing"	{volume "engine"}}
	{"SC_high_human_armor_piercing"		{volume "engine"}}
	
	{"ptr" {volume "mover"}}							; anti-tank rifle ammo
	{"ammo rifle_grenade_at" {volume "body"}}			; rifle grenade HEAT ammo
	{"flame" {volume "engine"}}							; ammo for flamethrowers
	{"flame"}											; ammo for flamethrowers
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic" {volume "engine"}}					; flame grenades (molotov)
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg" {volume "grenade_fg_target"}}			; standard anti-personel grenades
	{"all_he auto" {disable}}							; auto cannon HE ammo
	{"shell all_he"}									; cannon HE ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}