
;	<<<< ----------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Infantry Generic: Panel Control Abilities ===============] >>
;	<<<<------------------------------------------------------------------------------>>>>			 

(Include "SC_INF_abilities/SC_ab_LV40k_ork_mekboy.inc")
(Include "SC_INF_abilities/SC_ab_LV40k_ork_waaagh.inc")
(Include "SC_INF_abilities/SC_ab_LV40k_ork_warboss.inc")
(Include "SC_INF_abilities/SC_ab_LV40k_tyr_synapse_1.inc")
;//(Include "SC_INF_abilities/SC_ab_LV40k_tyr_synapse_2.inc")
	
; <<<<	===================	SC Human: Events	===================	>>>>	

(Define "SC_INF_Abilities_Define_Spawn_Event"
	("SC_AB_Spawn_Ork_Mekboy")
	("SC_AB_Spawn_Ork_Waaagh")
	("SC_AB_Spawn_Ork_Warboss")
	("SC_AB_Spawn_Tyr_Synapse_1")
	;//("SC_AB_Spawn_Tyr_Synapse_2")
)

(Define "SC_INF_Abilities_Define_Contact"
	("SC_AB_Contact_Ork_Waaagh")
	("SC_AB_Contact_Ork_Warboss")
	("SC_AB_Contact_Tyr_Synapse_1")
	;//("SC_AB_Contact_Tyr_Synapse_2")
)

(Define "SC_INF_Abilities_Define_Die"
	("SC_AB_Die_Ork_Mekboy")
	("SC_AB_Die_Ork_Waaagh")
	("SC_AB_Die_Ork_Warboss")
	("SC_AB_Die_Tyr_Synapse_1")
	;//("SC_AB_Die_Tyr_Synapse_2")
)

(Define "SC_INF_Abilities_Define_Fire_Hand_Right"
	("SC_AB_Fire_Hand_Right_Ork_Waaagh")
)