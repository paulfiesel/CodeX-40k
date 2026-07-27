
; <<<<	===================	SC Infantry Generic: Damage Defines	===================	>>>>

(define "human_health"
	{health_damage_count %c
		{effects "" "hit" "damage" "die" "die"}
	}
)

(define "human_health_x"
	{health_damage_count (* %x %c)
		{effects "" "hit" "damage" "die" "die"}
	}
)

; <<<<	===================	SC Infantry Generic: Bloodsparks	===================	>>>>

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Small_ON_BONE"
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Medium_ON_BONE"
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Big_ON_BONE"
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Very_Big_ON_BONE"
)

; ///////////////////////////////////////////////////////////////////////////////////////////// ;

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Small"
	{ìf rand 0.5 {spawn "bloodsparks01"}
	else{spawn "bloodsparks02"}
	}
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Medium"
	{spawn "bloodsparks_big"}
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Big"
	{spawn "blood_hit_very_big"}
)

(Define "SC_Infantry_Generic_Define_Spawn_Blood_Hit_Very_Big"
	{spawn "bloodsparks_big-medium"}
)

; <<<<	===================	SC Infantry Generic: DLC Extensions	===================	>>>>

(Define "SC_Infantry_Generic_Define_Blast_Hit_Interaction"

	; // SC Plataform Interaction
	(Include "SC_inf_damage_blast_hit.inc")
	
	; // DLC Interaction
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_LV40k/LV40k_infantry_generic/LV40k_inf_damage_blast_hit.inc")
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_Halo/HALO_infantry_generic/HALO_inf_damage_blast_hit.inc")
)

(Define "SC_Infantry_Generic_Define_Bullet_Hit_Interaction"

	; // SC Plataform Interaction
	(Include "SC_inf_damage_bullet_hit.inc")
	
	; // DLC Interaction
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_LV40k/LV40k_infantry_generic/LV40k_inf_damage_bullet_hit.inc")
	(Include "/set/interaction_entity/SC_Plataform/SC_DLC/SC_Halo/HALO_infantry_generic/HALO_inf_damage_bullet_hit.inc")
)
