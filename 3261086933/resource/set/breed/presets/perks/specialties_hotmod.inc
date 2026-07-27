
; Presets for health and stamina levels

(include "/set/breed/presets/perks/skills_hotmod.inc")


;/*=========== Unique Presets Begin ===========*/


(define "tdf"
	{"health_regeneration" "300%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}			;// This means soldiers are revivable at veterancy 0
	("standard_vision")
	{"speed" 0.90}
)

(define "gaoyuan"
	{"health_regeneration" "300%"}
	{"stamina" "400%"}
	{"stamina_regeneration" "300%"}
	{"speed" 1.1}
)


(define "stealth"
	{"stealth"}
)


(define "spetsnaz"			;// Soviet Spetsnaz
	{"speed" 1}
	{"health_regeneration" "150%"}
	{"telescope"}
	{"vision" human_elite}
	{"aimedshot"}			;// Silenced Nagant Pistol
)

(define "spetsnaz_sso"			;// Soviet Spetsnaz
	{"health_regeneration" "100%"}
	{"telescope"}
	{"stealth"}	
	{"vision" human_elite}
	{"aimedshot"}			;// Silenced Nagant Pistol
)

(define "sas"			;// Soviet Spetsnaz
	{"speed" 1.2}
	{"health_regeneration" "150%"}
	{"telescope"}
	{"vision" human_elite}
	{"aimedshot"}			;// Silenced Nagant Pistol
)

(define "150th"			;// Soviet Spetsnaz
	{"speed" 1.1}
	{"health_regeneration" "50%"}
	{"stamina_regeneration" "100%"}
	{"stamina" "100%"}				;// Silenced Nagant Pistol
)


(define "assault"			;// Soviet Spetsnaz
	{"speed" 1.1}
	{"stamina_regeneration" "200%"}
	{"stamina" "200%"}			;// Silenced Nagant Pistol
)



(define "pathfinder"			;// Soviet Spetsnaz
	{"stamina_regeneration" "200%"}
	{"telescope"}
	{"vision" human_elite}
	{"stealth"}	
	{"aimedshot"}			;// Silenced Nagant Pistol
)

(define "british"			;// Soviet Spetsnaz
	{"health_regeneration" "60%"}	
{"aimedshot"}	;// Silenced Nagant Pistol
)


(define "hurmo"			
	{"telescope"}
	{"stamina" "120%"}	
)

(define "specialforces"			;// US Special Forces
	{"stealth"}
	{"speed" 1.2}
	{"stamina" "300%"}
	{"stamina_regeneration" "200%"}
	("recon_vision")			
)

(define "boss"			;// 
	{"stealth"}
	{"speed" 2.0}
	{"stamina" "600%"}
	{"stamina_regeneration" "300%"}
	{"health_regeneration" "600%"}
	
)

(define "seals"			;// US Navy SEALs
	{"stealth"}
	{"stamina" "300%"}
	{"stamina_regeneration" "200%"}
	{"aimedshot"}			
)

(define "kor"			;// US Navy SEALs
	{"stealth"}
	{"stamina" "300%"}
	{"stamina_regeneration" "200%"}
	{"aimedshot"}	
	{"vision" human_elite}		
)


(define "azov"			;// US Navy SEALs
	{"stealth"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"aimedshot"}			
)

(define "114dv"			;// US Navy SEALs
	{"stamina" "400%"}
	{"stamina_regeneration" "350%"}
	{"health_regeneration" "10%"}
	{"aimedshot"}			
	{"vision" human_elite}
)

(define "vostok"			;// US Navy SEALs
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}	
	{"health_regeneration" "100%"}	
)

(define "80dv"			;// US Navy SEALs
	{"health_regeneration" "50%"}
	{"aimedshot"}
	{"stealth"}	
	{"vision" human_elite}
)

(define "spd"			;// US Navy SEALs
	{"health_regeneration" "25%"}		
	{"stealth"}
)

(define "110dv"			;// US Navy SEALs
	{"health_regeneration" "50%"}
	{"aimedshot"}
	{"vision" human_elite}
)

(define "100dv"			;// US Navy SEALs
	{"health_regeneration" "25%"}
	{"aimedshot"}			
)

(define "106dv"			;// US Navy SEALs
	{"stamina" "300%"}
	{"stamina_regeneration" "150%"}
	{"speed" 1.1}
)

(define "sniper"		;// Snipers
	{"stealth"}
	{"stamina" "300%"}
	{"speed" 1.20}
)

(define "airborne"		;// US 82nd Airborne, Polish Powietrznodesantowa
	{"speed" 1.15}
	{"stamina" "250%"}
)

(define "cavalry"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "200%"}
	{"vision" human_recon}		
)

(define "cavalry_e"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "250%"}
	{"vision" human_recon}		
)

(define "cavalry_rsta"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "300%"}
	{"vision" human_elite}	
)

(define "rangers"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "200%"}
)

(define "ranger"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "200%"}
)

(define "rangere"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"stamina" "250%"}
	{"vision" human_elite}	
)

(define "jager"	;// West German Jager light infantry
	{"speed" 1.1}
	{"stamina" "300%"}
	{"stamina_regeneration" "15%"}
)

(define "pzgren"	;// West German Panzergrenadiers
	{"stamina" "150%"}
	{"stamina_regeneration" "15%"}
	{"health_regeneration" "20%"}	
)

(define "pzgrene"	;// West German Panzergrenadiers
	{"health" "300%"}
	{"health_regeneration" "60%"}	
	{"stamina_regeneration" "30%"}
)

(define "paratrooper"	;// Soviet VDV
	{"speed" 1.1}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
)

(define "paratrooper_lrs"	;// Soviet VDV
	{"speed" 1.1}
	{"stamina" "300%"}
	{"stamina_regeneration" "250%"}
	{"vision" human_elite}		
)

(define "paratroopere"	;// Soviet VDV
	{"speed" 1.2}
	{"stamina" "250%"}
	{"stamina_regeneration" "200%"}
)

(define "guards"		;// Soviet Guards
	{"health_regeneration" "15%"}
)

(define "marines"	;// Marines, VMF, Desantowa
	{"health_regeneration" "45%"}
	{"stamina_regeneration" "125%"}
)

(define "marinese"	;// Marines, VMF, Desantowa
	{"health_regeneration" "60%"}
	{"stamina_regeneration" "175%"}
)

(define "basic"			;// Reservists & Conscripts with only basic training
	{"speed" 0.9}
	{"stamina" "90%"}
)

(define "border"			;// KGB Border Troops, relatively skilled but poorly equipped
	{"stealth"}
	{"speed" 1.1}
	{"stamina" "150%"}
	{"telescope"}
	{"vision" human_elite}
)

(define "recon"		;// recon soldiers
	{"stealth"}
	{"speed" 1.1}
	{"stamina" "175%"}
	{"stamina_regeneration" "110%"}
	("recon_vision")
)

(define "fsb"		;// 
	{"stamina" "350%"}
	{"stamina_regeneration" "300%"}
)

(define "azov3"		;// 
	{"stamina" "250%"}
	{"stamina_regeneration" "200%"}
	{"aimedshot"}
)

(define "aeng"		
	{"speed" 1.1}
	{"stamina" "250%"}
)

(define "militia"	
	{"stealth"}
)

(define "stoz"	
	{"speed" 1.1}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
)

(define "ildu"		
	{"health_regeneration" "150%"}
)

(define "47th"		
	{"health_regeneration" "15%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "150%"}
)

(define "211th"		
	{"health_regeneration" "15%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "150%"}
	{"vision" human_elite}
	{"aimedshot"}
	{"stealth"}
)

(define "21th"		
	{"health_regeneration" "250%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
)

(define "53th"		
	{"stamina" "155%"}
	{"stamina_regeneration" "150%"}
)

(define "93th"		
	{"stamina" "225%"}
	{"stamina_regeneration" "200%"}
	{"speed" 1.05}
)

(define "72th"
	{"health_regeneration" "250%"}
	{"stamina" "125%"}
	{"health_regeneration" "15%"}		
	{"stamina" "175%"}
	{"stamina_regeneration" "110%"}
)

(define "48th"
	{"health_regeneration" "275%"}
	{"stamina" "155%"}
	{"health_regeneration" "25%"}		
	{"stamina" "200%"}
	{"stamina_regeneration" "130%"}
)

(define "25th"		
	{"stamina" "325%"}
	{"stamina_regeneration" "240%"}
	{"speed" 1.1}
	{"aimedshot"}
)

(define "82th"		
	{"health_regeneration" "300%"}
	{"stamina" "250%"}
	{"stamina_regeneration" "200%"}
	{"aimedshot"}
	{"speed" 0.85}
    {"vision" human_elite}
)

(define "redbanner"		
	{"health" "400%"}
	{"health_regeneration" "150%"}
	{"speed" 0.9}	
)

(define "redbanner_lv3"		
	{"health" "400%"}
	{"health_regeneration" "150%"}
	{"speed" 0.9}	
)

(define "redbanner_lv4"		
	{"health" "450%"}
	{"health_regeneration" "175%"}
	{"speed" 0.9}	
)

(define "airborne"		;// US 82nd Airborne, Polish Powietrznodesantowa
	{"speed" 1.15}
	{"stamina" "250%"}
)

(define "guncrew"				;// Gun crew Tier 1
	("skilled_gun")
)

(define "guncrew_2"				;// Gun crew Tier 2 - USMC, VDV etc
	("expert_gun")
)

(define "guncrew_3"				;// Gun crew Tier 3 - Rangers, Spetsnaz, Specops, etc
	("elite_gun")
)

(define "crewman"				;// Vehicle crew Tier 1
	("skilled_repair")
	("skilled_gun")
)

(define "crewman_2"			;// Vehicle crew Tier 2 - USMC, VDV etc
	("skilled_repair")
	("expert_gun")
)

(define "crewman_3"			;// Vehicle crew Tier 3 - Rangers, Spetsnaz, Specops, etc
	("skilled_repair")
	("elite_gun")
)

(define "tankman"				;// Tank crew vanilla
	("skilled_repair")
	("elite_gun")
)

(define "vehicleman"			;// Vehicle crew vanilla
	("skilled_repair")
	("skilled_gun")
)

(define "rozpoznawczy"		;// Polish 'Batalion Dywersyjno-Rozpoznawczy' Reconaissance and Diversion Battalion
	{"stealth"}
	{"speed" 1.2}
	{"stamina" "175%"}
	{"stamina_regeneration" "125%"}
	("recon_vision")
)

(define "szturmowy"		;// Polish 'Samodzielny Batalion Szturmowy' Independent Assault Battalion
	{"health_regeneration" "125%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "125%"}
)

;/*=========== Unique Presets End ===========*/