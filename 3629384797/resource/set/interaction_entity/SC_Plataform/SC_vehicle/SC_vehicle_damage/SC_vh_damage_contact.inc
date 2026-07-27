
(Include "SC_vh_damage_contact/SC_vh_contact_melee.inc")
(Include "SC_vh_damage_contact/SC_vh_contact_slicer.inc")

; <<<<	=================== SC VH Contact: Spawn ===================	>>>>

(Define "SC_VH_Contact_Define_Spawn"
	("SC_VH_Melee_Damage_Define_Spawn_Event")
	("SC_VH_Slicer_Damage_Define_Spawn_Event")
)

; <<<<	=================== SC VH Contact: Effectors ===================	>>>>

(Define "SC_VH_Contact_Define_Get"
	("SC_VH_Melee_Damage_Define_Contact")
	("SC_VH_Slicer_Damage_Define_Contact")
)