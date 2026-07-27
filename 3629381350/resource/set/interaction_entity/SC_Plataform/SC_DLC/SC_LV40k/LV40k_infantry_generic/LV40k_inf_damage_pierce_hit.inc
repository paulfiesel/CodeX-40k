	
;	<<<< ------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Damage System: LV40k Bullet Hit Interaction ===============] >>
;	<<<<-------------------------------------------------------------------------------->>>>			 

else stuff "tyr_devourer_ammo"
	{bullet_detonate}
	{Call "SC_INF_Call_DLC_LV40k_Devourer_Worm_Effect"}
	
else stuff "tyr_spinefists_ammo"
	{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}

else stuff "bolter_ammo hellfire"
	{Call "SC_INF_Call_DLC_LV40k_Poison_T1_Effect"}
	{if tagged "sc_inf_tag_unit_faction_xenos"	("SC_INF_Contact_Damage" d_normal(2500))}
