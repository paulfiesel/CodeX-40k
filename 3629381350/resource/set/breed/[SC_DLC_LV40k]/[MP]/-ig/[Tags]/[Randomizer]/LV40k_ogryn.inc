
; ================================================================================================================
; // Ogryns
; ================================================================================================================

(Define "Randomizer_LV40k_Ogryn_001"
	{tags add "SC_INF_Tag_Unit_Faction_Humans"}	{tags add "SC_INF_Tag_Unit_Faction_Imperial_Guard"}

	{Bone show "ogryn_arms"}
	{Bone show "ogryn_legs"}
	{Bone show "ogryn_torso"}
	
	{Bone show "ogryn_armor"}
	{Bone show "ogryn_pauldron_R"}
	{Bone show "ogryn_gauntlets"}
	{Bone show "ogryn_backpack"}
	
	; // Head
	{if rand 0.5	{Bone show "ogryn_head1"}
	else			{Bone show "ogryn_head1"}
	}
)
