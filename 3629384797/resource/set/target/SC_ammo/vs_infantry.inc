
;//	{"SC_bullet_plasma" {volume "SC_volume_armored"}}	; Plasma Projectile
;//	{"SC_ammo_melee"}
;//	{"SC_activator_target_human"}						; Dummy weapon activators for call-ins or animation states
;//	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	
; // BUZZ: "ready_for_shot" -> prioritizes the already loaded ammo type - for humans the current weapon in hands, will only used when equiped and will not switch to this weapon.
	
	
; --------------------------------------------------------------------------------------------------------------------------------------------------------------- ;

{human in_bush											; -TARGET CLASS-
	{"grenade SC_flashbang" {volume "SC_volume_armored"}}					; disables infantry for a brief period
	{"flame" {ready_for_shot}}												; ammo for flamethrowers
	
	{"SC_ammo_melee_vs_human"}												; Melee weapons effective against humans.
	{"ammo rocketlauncher heat_shell" {volume "SC_volume_armored_heavy"}}	; rocket launcher HEAT ammo
	{"ammo rocketlauncher fg" {ground}}										; rocket launcher HE ammo
	{"ammo rifle_grenade_at" {volume "SC_volume_armored_heavy"}}			; rifle grenade HEAT ammo
	{"ammo rifle_grenade" {ground}}											; rifle grenade HE ammo
	{"SC_bullet_plasma" {volume "SC_volume_armored"}}						; Plasma Projectile
	
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"ammo rocketlauncher SC_ammo_bullet_vs_Human" {ground}}		; bazooka class ammo - needs specific tag to target humans
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"shell wp" {ready_for_shot}}						; WP ammo (ONLY IF ALREADY LOADED)
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
;//		{"ammo rocketlauncher" {ground}}					; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_human"}						; Dummy weapon activators for call-ins or animation states
}

{human in_cover																; -TARGET CLASS-CLASS-
	{"grenade fg"}															; standard anti-personel grenades
	{"grenade SC_flashbang"}												; disables infantry for a brief period
	
	{"flame" {ready_for_shot}}												; ammo for flamethrowers
	
	{"ammo rocketlauncher fg" {ground}}										; rocket launcher HE ammo
	{"ammo rifle_grenade" {ground}}											; rifle grenade HE ammo
	{"ammo rifle_grenade_at" {volume "SC_volume_armored_heavy"}}			; rifle grenade HEAT ammo
	{"ammo rocketlauncher heat_shell" {volume "SC_volume_armored_heavy"}}	; rocket launcher HEAT ammo
	{"SC_bullet_plasma" {volume "SC_volume_armored"}}						; Plasma Projectile
	
	{"SC_ammo_melee_vs_human"}												; Melee weapons effective against humans.
	
	{"ammo rocketlauncher SC_ammo_bullet_vs_Human" {ground}}		; bazooka class ammo - needs specific tag to target humans
	
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	;{"grenade fg"}										; standard anti-personel grenades
	{"ammo rifle_grenade"}								; rifle grenade HE ammo
	{"shell wp" {ready_for_shot}}						; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
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
;//		{"ammo rocketlauncher"}								; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_human"}						; Dummy weapon activators for call-ins or animation states
}

{human																		; -TARGET CLASS-
	{"SC_ammo_melee_vs_human"}												; Melee weapons effective against humans.
	{"SC_bullet_plasma" {volume "SC_volume_armored"}}						; Plasma Projectile
	{"grenade SC_flashbang" {volume "SC_volume_armored"}}					; disables infantry for a brief period
	{"ammo rocketlauncher heat_shell" {volume "SC_volume_armored_heavy"}}	; rocket launcher HEAT ammo
	{"ammo rocketlauncher fg" {ground}}										; rocket launcher HE ammo
	{"ammo rifle_grenade_at" {volume "SC_volume_armored_heavy"}}			; rifle grenade HEAT ammo
	{"ammo rifle_grenade" {ground}}											; rifle grenade HE ammo
	
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers		// - BUZZ:  in the open has lower priority
	
	{"ammo rocketlauncher SC_ammo_bullet_vs_Human" {ground}}		; bazooka class ammo - needs specific tag to target humans
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"shell wp" {ready_for_shot}}						; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade at"}										; anti-tank grenades
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
;//		{"ammo rocketlauncher" {ground}}					; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_human"}						; Dummy weapon activators for call-ins or animation states
}

{SC_Target_Infantry_Suicide													; -TARGET CLASS-
	{"SC_bullet_plasma" {volume "SC_volume_armored"} {ready_for_shot}}		; Plasma Projectile
	{"grenade SC_flashbang" {volume "SC_volume_armored"}}					; disables infantry for a brief period
	{"ammo rocketlauncher fg" {ground}}										; rocket launcher HE ammo
	{"ammo rifle_grenade" {ground}}											; rifle grenade HE ammo
	
	{"small_arms" {ready_for_shot}}						; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"flame" {ready_for_shot}}							; ammo for flamethrowers
	
	{"mortar all_he"}									; HE mortar ammo
	{"shell all_he"}									; cannon HE ammo
	{"shell wp" {ready_for_shot}}						; WP ammo (ONLY IF ALREADY LOADED)
	{"all_he auto"}										; auto cannon HE ammo
	{"hmgun"}											; heavy machine gun (.50 cal, etc)
	{"small_arms"}										; bullet ammo (pistols, rifles, smgs, mgs)
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic"}										; flame grenades (molotov)
	{"glass ic"}										; flame shell (Ampulomet glass ball)
	{"grenade at"}										; anti-tank grenades
	{"shell heat_high" {enable_for_user 0}}				; cannon HEAT ammo (penetration > 150mm)
	{"shell heat_medium" {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm)
	{"shell heat_low" {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm)
	{"ptr"}												; anti-tank rifle ammo
	{"sharp_edge"}										; thrown knives
	{"rocketselector" {enable_for_user 0}}				; rocket artillery
	{"zenite"}											; autocannon AP/APCR ammo
	{"dynamite"}										; explosive charges
;//		{"ammo rocketlauncher" {ground}}					; bazooka class ammo
	{"light"}											; ammo for binoculars and other vision devices
	
;//	{"SC_ammo_melee"}
;//	{"SC_activator_target_human"}						; Dummy weapon activators for call-ins or animation states
}

{SC_Target_Creature												; -TARGET CLASS-
	{"SC_ammo_melee_vs_vehicle"}								; Melee weapons effective against humans.
	
	{"mortar all_he"}											; HE mortar ammo
	{"shell all_he arty"}										; cannon HE ammo for indirect firing artillery
	{"shell std_ap" {ready_for_shot}}							; cannon standard AP ammo types (AP, APC, APBC, etc)

	{"shell hv_ap" {ready_for_shot}}							; cannon high velocity AP ammo types (APCR, HVAP, APDS) (ONLY IF ALREADY LOADED)
	{"shell heat_medium" {ready_for_shot}}						; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell apcbche"}											; cannon apcbche ammo
	{"shell apcbche2"}											; cannon apcbche ammo (early ammo)
	{"shell aphebc2"}											; cannon aphebc ammo
	{"shell aphebc"}											; cannon aphebc ammo
	{"shell aphe"}												; cannon aphe ammo
	{"shell apbc"}												; cannon apbc ammo
	{"shell heat_low"}											; cannon HEAT ammo (penetration < 100mm)
	{"shell apcbc"}												; cannon apcbc ammo
	{"shell apche"}												; cannon apche ammo
	{"shell apc"}												; cannon apc ammo
	{"shell ap"}												; cannon ap ammo
	{"shell all_he"}											; cannon HE ammo
	
	{"all_he auto"}												; auto cannon HE ammo
	{"zenite"}													; autocannon AP/APCR ammo
	
	{"shell std_ap" }									; cannon standard AP ammo types (AP, APC, APBC, etc)
	{"shell hv_ap"  {ready_for_shot}}					; cannon high velocity AP ammo types (APCR, HVAP, APDS)
	{"shell heat_high"  {enable_for_user 0}}			; cannon HEAT ammo (penetration > 150mm) (AI ONLY)
	{"shell heat_high"  {ready_for_shot}}				; cannon HEAT ammo (penetration > 150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_medium"  {enable_for_user 0}}			; cannon HEAT ammo (penetration 100-150mm) (AI ONLY)
	{"shell heat_medium"  {ready_for_shot}}				; cannon HEAT ammo (penetration 100-150mm) (ONLY IF ALREADY LOADED)
	{"shell heat_low"  {enable_for_user 0}}				; cannon HEAT ammo (penetration < 100mm) (AI ONLY)
	{"shell heat_low"  {ready_for_shot}}				; cannon HEAT ammo (penetration < 100mm) (ONLY IF ALREADY LOADED)
	
	{"grenade at" }										; anti-tank grenades
	{"grenade fg"}										; standard anti-personel grenades
	{"grenade ic" }										; flame grenades (molotov)
	{"glass ic" }										; flame shell (Ampulomet glass ball)
	{"grenade SC_flashbang"}							; disables infantry for a brief period
	
	{"ammo rocketlauncher heat_shell"}								; rocket launcher HEAT ammo

	{"ptr" }														; anti-tank rifle ammo
	{"flame"}														; ammo for flamethrowers
	{"ammo rifle_grenade_at" {volume "SC_volume_armored_heavy"}}	; rifle grenade HEAT ammo
	{"ammo rifle_grenade"}											; rifle grenade HE ammo
	
	{"SC_ammo_melee_vs_human"}								; Melee weapons effective against humans.
	
	{"SC_bullet_plasma" {ready_for_shot}}					; Plasma Projectile
	{"hmgun" }												; heavy machine gun (.50 cal, etc)
	{"small_arms"}											; bullet ammo (pistols, rifles, smgs, mgs)
	{"small_arms"}											; bullet ammo (pistols, rifles, smgs, mgs)
	
	{"rocketselector"  {enable_for_user 0}}					; rocket artillery
	{"dynamite"}											; explosive charges
	{"light"}												; ammo for binoculars and other vision devices
	
	{"SC_ammo_melee"}
	{"SC_activator_target_human"}							; Dummy weapon activators for call-ins or animation states
}