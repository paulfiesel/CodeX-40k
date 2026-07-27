
{car													; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty" {volume "body"}}				; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {volume "body"} {ready_for_shot}}	; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"zenite" {volume "body"} {ready_for_shot}}			; autocannon AP/APCR ammo
	{"shell all_he" {volume "body"}}					; cannon HE ammo
	{"all_he auto" {volume "body"}}						; auto cannon HE ammo
	{"shell std_ap" {volume "body"}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell hv_ap" {volume "body"} {ready_for_shot}}	; cannon high velocity AP ammo types (APCR, HVAP, APDS)
	{"shell heat_high" {volume "body"} {enable_for_user 0}}		; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {volume "body"} {ready_for_shot}}		; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {volume "body"} {enable_for_user 0}}	; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {volume "body"} {ready_for_shot}}		; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {volume "body"} {enable_for_user 0}}		; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {volume "body"} {ready_for_shot}}			; cannon HEAT ammo (penetration < 100mm) (ONLY IF ALREADY LOADED)
	
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade fg" {ground}}								; standard anti-personel grenades
	{"grenade ic" {volume "body"}}						; flame grenades (molotov)
	{"glass ic" {volume "body"}}						; flame shell (Ampulomet glass ball)
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"ptr" {volume "engine"}}							; anti-tank rifle ammo
	{"ptr" {volume "body"}}								; anti-tank rifle ammo
	
	{"ammo rifle_grenade_at" {volume "body"}}			; rifle grenade HEAT ammo
	{"ammo rifle_grenade" {volume "body"}}				; rifle grenade HE ammo
	{"hmgun" {volume "body"}}							; heavy machine gun (.50 cal, etc)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"small_arms" {volume "engine"}}					; bullet ammo (pistols, rifles, smgs, mgs)
	{"small_arms" {volume "body"}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"flame"}											; ammo for flamethrowers
	
	{"zenite"}											; autocannon AP/APCR ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{cannon_bullet											; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {enable_for_user 0}}			; bazooka class ammo (AI ONLY)

	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"flame"}											; ammo for flamethrowers
	
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm)(ONLY IF ALREADY LOADED)
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	;{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{cannon_zenite											; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {ready_for_shot}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {enable_for_user 0}}			; bazooka class ammo (AI ONLY)
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"flame"}											; ammo for flamethrowers
	
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm)(ONLY IF ALREADY LOADED)
	{"shell std_ap" {enable_for_ai 0}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	;{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{cannon_small											; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {ready_for_shot}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {enable_for_user 0}}			; bazooka class ammo (AI ONLY)
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"flame"}											; ammo for flamethrowers
	
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm)(ONLY IF ALREADY LOADED)
	{"shell std_ap" {enable_for_ai 0}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	;{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{cannon_big												; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {ready_for_shot}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {enable_for_user 0}}			; bazooka class ammo (AI ONLY)
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"flame"}											; ammo for flamethrowers
	
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm)(ONLY IF ALREADY LOADED)
	{"shell std_ap" {enable_for_ai 0}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
;//		{"shell hv_ap" {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS)
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	;{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{howitzer												; -TARGET CLASS-
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he arty"}								; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {ready_for_shot}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell all_he"}									; cannon HE ammo
	{"all_he auto"}										; auto cannon HE ammo
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"ammo rifle_grenade_at"}							; rifle grenade HEAT ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {enable_for_user 0}}			; bazooka class ammo (AI ONLY)
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"flame"}											; ammo for flamethrowers
	
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high" {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm)(ONLY IF ALREADY LOADED)
	{"shell std_ap" {enable_for_ai 0}}					; cannon standard AP ammo types (AP, APC, APBC, etc)
;//		{"shell hv_ap" {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS)
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	;{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"SC_medium_human_armor_piercing"}
	
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{airborne						
	{"shell aphe" {ready_for_shot}}						; cannon APHE ammo (and 85mm_52k)
	{"shell apcbche" {ready_for_shot}}					; cannon APHE ammo (flak 18/36)
	{"shell apcbche2" {ready_for_shot}}					; cannon apcbche ammo (flak 18/36 early ammo)
	{"all_he auto"}										; auto cannon HE ammo
	{"zenite" {ready_for_shot}}							; autocannon AP/APCR ammo
	{"shell all_he"}									; cannon HE ammo
	{"zenite"}											; autocannon AP/APCR ammo
	{"ptr" {enable_for_user 0}}							; anti-tank rifle ammo (AI ONLY)
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_activator_target_air"}
}

{armoredcar_l											; -TARGET CLASS-
	{"mortar all_he" {volume "engine"}}					; HE mortar ammo
	{"mortar all_he"}									; HE mortar ammo
	{"shell aphe 150to152" {volume "body"} {ready_for_shot}}	; cannon aphe ammo for indirect firing artillery
	{"shell aphebc 150to152" {volume "body"} {ready_for_shot}}	; cannon aphebc ammo for indirect firing artillery
	{"shell all_he arty" {volume "body"}}						; cannon HE ammo for indirect firing artillery
	{"shell all_he 122to128" {volume "body"} {ready_for_shot}}	; cannon HE 122-128mm ammo (ONLY IF ALREADY LOADED)
	{"shell all_he 88to105" {volume "body"} {ready_for_shot}}	; cannon HE 88-105mm ammo (ONLY IF ALREADY LOADED)
	{"shell all_he 75to76" {volume "body"} {ready_for_shot}}	; cannon HE 75-76mm ammo (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm) (ONLY IF ALREADY LOADED)
	{"shell std_ap"}									; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm) 
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	{"shell hv_ap"}										; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)

	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo 
	{"ammo rocketlauncher"}								; bazooka class ammo 
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"SC_ammo_melee_vs_vehicle"}
	
	{"hmgun" {volume "body"}}							; heavy machine gun (.50 cal, etc)
	{"ptr" {volume "body"}}								; anti-tank rifle ammo
	{"ptr"}												; anti-tank rifle ammo
	{"ammo rifle_grenade_at " {volume "body"}}			; rifle grenade HEAT ammo
	{"flame" {volume "engine"}}							; ammo for flamethrowers
	{"flame"}											; ammo for flamethrowers
	{"grenade at" {volume "body"}}						; anti-tank grenades
	{"grenade ic" {volume "engine"}}					; flame grenades (molotov)
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade fg" {volume "grenade_fg_target"}}			; standard anti-personel grenades
	{"shell hv_ap" {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"all_he auto" {disable}}							; auto cannon HE ammo
	{"shell all_he"}									; cannon HE ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"small_arms" {volume "wheel"}}						; bullet ammo (pistols, rifles, smgs, mgs)
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}

{armoredcar												; -TARGET CLASS- Armored cars with bullet resistant tires	
	{"mortar all_he" {volume "engine"}}					; HE mortar ammo
	{"mortar all_he"}									; HE mortar ammo
	{"shell aphe 150to152" {volume "body"} {ready_for_shot}}	; cannon aphe ammo for indirect firing artillery
	{"shell aphebc 150to152" {volume "body"} {ready_for_shot}}	; cannon aphebc ammo for indirect firing artillery
	{"shell all_he arty" {volume "body"}}						; cannon HE ammo for indirect firing artillery
	{"shell all_he 122to128" {volume "body"} {ready_for_shot}}	; cannon HE 122-128mm ammo (ONLY IF ALREADY LOADED)
	{"shell all_he 88to105" {volume "body"} {ready_for_shot}}	; cannon HE 88-105mm ammo (ONLY IF ALREADY LOADED)
	{"shell all_he 75to76" {volume "body"} {ready_for_shot}}	; cannon HE 75-76mm ammo (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low" {ready_for_shot}}					; cannon HEAT ammo (penetration < 100mm) (ONLY IF ALREADY LOADED)
	{"shell std_ap"}									; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell heat_medium"}								; cannon HEAT ammo (penetration 100-150mm) 
	{"shell heat_low"}									; cannon HEAT ammo (penetration < 100mm)
	{"shell hv_ap"}										; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_high"}									; cannon HEAT ammo (penetration > 150mm)

	{"zenite"}											; autocannon AP/APCR ammo
	{"zenite apcr"}										; autocannon AP/APCR ammo
	{"ammo rocketlauncher" {volume "body"}}				; bazooka class ammo 
	{"ammo rocketlauncher"}								; bazooka class ammo 
	{"hmgun" {volume "body"}}							; heavy machine gun (.50 cal, etc)
	
	{"SC_veryhigh_human_armor_piercing"}
	{"SC_high_human_armor_piercing"}
	
	{"SC_ammo_melee_vs_vehicle"}
	
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
	{"shell hv_ap" {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"all_he auto" {disable}}							; auto cannon HE ammo
	{"shell all_he"}									; cannon HE ammo
	{"rocketselector" {volume "body"} {enable_for_user 0}}	; rocket artillery
	{"dynamite"}										; explosive charges
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_vehicle"}
}