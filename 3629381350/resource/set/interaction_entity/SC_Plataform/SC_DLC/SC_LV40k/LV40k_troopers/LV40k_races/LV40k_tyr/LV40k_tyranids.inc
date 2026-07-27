
(Define "LV40k_Tyranids_Spawn"
	{tags add "SC_INF_Tag_Unit_Faction_Tyranids"}
	{tags add "SC_INF_Tag_Unit_Faction_Xenos"}
)

(Include "LV40k_tyr_carnifex.inc")
(Include "LV40k_tyr_genesteeler.inc")
(Include "LV40k_tyr_lictor.inc")

(Include "LV40k_tyr_hivetyrant.inc")
(Include "LV40k_tyr_hiveguard.inc")
(Include "LV40k_tyr_hormagaunt.inc")
(Include "LV40k_tyr_ripperswarm.inc")
(Include "LV40k_tyr_exocrine.inc")
(Include "LV40k_tyr_sporemine.inc")
(Include "LV40k_tyr_hivenode.inc")
(Include "LV40k_tyr_tervigon_tyrannofex.inc")
(Include "LV40k_tyr_swarmlord.inc")
(Include "LV40k_tyr_warrior.inc")
(Include "LV40k_tyr_pyrovore_biovore.inc")

{"Tyr_micetic_spore"
	{On spawn
		{Ani_Play "Drop" 0.5 callback}
	}
	{On animation_end "Drop"
		{If tagged "Big"
			{blastwave c4 10 r0 0.5 r1 8.0 position}	; // BUZZ: blast on emerge area to clear small obstacles like sandbags... or food!
			{spawn "exp_spore_mine_acid" "basis" x}
			
			{Bone hide "Basis"}
			
			; // Poison cloud around drop area
			{add_view "fx_tyr_smoke_wp_venomthrope_s1" "smoke1" "basis"}
			{view start "smoke1"}
			
			{Delay 0.5		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 3.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 6.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 9.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			{Delay 12.0		{Spawn "lv40k_aura_Tyr_Venomthrope" offset 0 0 0}}
			
			{delay 16
				{view stop "smoke1"}
			}
			{delay 21
				{hide 1}
			}
		else
			{spawn "exp_spore_mine_acid" "basis" x}
			
			{Bone hide "Basis"}
			
			{delay 2
				{hide 1}
			}
		}
	}
}