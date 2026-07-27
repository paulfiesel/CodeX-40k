
;	<<<< ------------------------------------------------------------------------------------->>>>			 
;	<< [=============== SC Plataform Interaction Entity: Talk Triggers Defines ===============] >>
;	<<<<-------------------------------------------------------------------------------------->>>>			 

; <<<<	===================	SC Human Talk: Check Effector And Add ME a Tag	===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector"
	{With_effector	
		{if prop "%effector"
			{if %check
				{With_effector
					{if rand %freq
						{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
							{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
							{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
							{Talk "%talk"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
						}
						{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk")
						else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk")
						else prop "vehicle"							{Talk "%talk"}
						}
					}
				}
			}
		}
	}
)

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_Check_Effector_x2_rand"
	{With_effector	
		{if prop "%effector"
			{if %check
				{With_effector
					{if rand %freq1
						{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
							{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
							{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
							{Talk "%talk1"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
						}
						{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk1")
						else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk1")
						else prop "vehicle"							{Talk "%talk1"}
						}
						
					else rand %freq2
						{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
							{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
							{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
							{Talk "%talk2"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
						}
						{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk2")
						else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk2")
						else prop "vehicle"							{Talk "%talk2"}
						}
					}
				}
			}
		}
	}
)

; <<<<	===================	SC Human Talk: Check and Add EFFECTOR a Tag	===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector"
	{With_effector	
		{if prop "%effector" 
			{if %check
				{if rand %freq
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk")
					else prop "vehicle"							{Talk "%talk"}
					}
				}
			}
		}
	}
)

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x2_rand"
	{With_effector	
		{if prop "%effector" 
			{if %check
				{if rand %freq1
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk1"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk1")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk1")
					else prop "vehicle"							{Talk "%talk1"}
					}
						
				else rand %freq2
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk2"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk2")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk2")
					else prop "vehicle"							{Talk "%talk2"}
					}
				}
			}
		}
	}
)

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Effector_x3_rand"
	{With_effector	
		{if prop "%effector" 
			{if %check
				{if rand %freq1
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk1"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk1")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk1")
					else prop "vehicle"							{Talk "%talk1"}
					}
						
				else rand %freq2
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk2"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk2")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk2")
					else prop "vehicle"							{Talk "%talk2"}
					}

				
				else rand %freq3
					{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
						{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
						{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
						{Talk "%talk3"} {tags add "%tag_op"} {delay (* %d 7) {tags remove "%tag_op"}}
					}
					{if prop "SC_plataform_prop_troopers_main"	("SC_M_Talk_Define_V_%talk3")
					else prop "SC_prop_walker_tank"				("SC_M_Talk_Define_V_%talk3")
					else prop "vehicle"							{Talk "%talk3"}
					}
				}
			}
		}
	}
)

; <<<<	===================	SC Human Talk: Check ME and Add ME a Tag	===================	>>>>

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Me"
	{Kill_Delay "SC_INF_Talk_Delay_OP_%tag_op"} 
	{if not tagged "%tag_op" {tags add "%tag_op"} {delay (* %d 4) "SC_INF_Talk_Delay_OP_%tag_op" {tags remove "%tag_op"}}}
	
	{if rand %freq
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk")
		else prop "vehicle"								{Talk "%talk"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk"} 
			}
		}
	}
)

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_x2_rand"
	{Kill_Delay "SC_INF_Talk_Delay_OP_%tag_op"} 
	{if not tagged "%tag_op" {tags add "%tag_op"} {delay (* %d 4) "SC_INF_Talk_Delay_OP_%tag_op" {tags remove "%tag_op"}}}
	
	{if rand %freq1
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk1")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk1")
		else prop "vehicle"								{Talk "%talk1"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk1"} 
			}
		}
		
	else rand %freq2
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk2")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk2")
		else prop "vehicle"								{Talk "%talk2"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk2"} 
			}
		}
	}
)

(Define "SC_INF_Talk_Trigger_Define_Add_Talk_To_Me_x3_rand"
	{Kill_Delay "SC_INF_Talk_Delay_OP_%tag_op"} 
	{if not tagged "%tag_op" {tags add "%tag_op"} {delay (* %d 4) "SC_INF_Talk_Delay_OP_%tag_op" {tags remove "%tag_op"}}}
	
	{if rand %freq1
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk1")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk1")
		else prop "vehicle"								{Talk "%talk1"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk1"} 
			}
		}
		
	else rand %freq2
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk2")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk2")
		else prop "vehicle"								{Talk "%talk2"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk2"} 
			}
		}
		
	else rand %freq3
		{if prop "SC_plataform_prop_troopers_main"		("SC_M_Talk_Define_V_%talk3")
		else prop "SC_prop_walker_tank"					("SC_M_Talk_Define_V_%talk3")
		else prop "vehicle"								{Talk "%talk3"} 
		else
			{if not tagged "SC_INF_Talk_Trigger_Tag_Is_Talking"	
				{tags add "SC_INF_Talk_Trigger_Tag_Is_Talking"}
				{Delay %d {Tags remove "SC_INF_Talk_Trigger_Tag_Is_Talking"}}
				{Talk "%talk3"} 
			}
		}
	}
)

