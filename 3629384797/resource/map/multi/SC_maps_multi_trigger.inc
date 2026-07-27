
;	<<<< ---------------------------------------------------------- >>>> 
;	<< [=============== Battle Triggers Essentials ===============] >>
;	<<<< ---------------------------------------------------------- >>>>

; // BUZZ: This must be directly attached to "<mission>.mi" files.
; // BUZZ: The trigger scripts attached to this file are essential to run the mod.
; // BUZZ: Reminder, this is placed inside {trigger <%>}

; <<<<	===================	Triggers: 40k Music	===================	>>>>

(Include "SC_dlc_music.inc")

; <<<<	===================	Triggers: Teams	===================	>>>>

{"sc/add_player_team_tags"	
	{condition
	}
	{actions	
		(define "side_selector"
			{"if"
				{condition
					{type entities}
			;//		{selector
					;//	{type human}
					;//	{state "not dead"}
			;//		}
					{selector
						{source advanced}
						{group
							{include
								{team 
									{team "%0"}
								}
							}
							{exclude
								{tag
									{tag team%1}
								}
								{state
									{state linked}
								}
							}
						}
					}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{include
								{team 
									{team "%0"}
								}
							}
							{exclude
								{tag
									{tag team%1}
								}
								{state
									{state linked}
								}
							}
						}
					}
					{tag_add team%1}
				}
			}
		)			
		(define "team_selector"
			{"if"
				{condition
					{type entities}
			;//		{selector
					;//	{type human}
					;//	{state "not dead"}
			;//		}
					{selector
						{source advanced}
						{group
							{include
								{player 
									{player "%0"}
								}
							}
							{exclude
								{tag
									{tag team%0}
								}
								{state
									{state linked}
								}
							}
						}
					}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{include
								{player 
									{player "%0"}
								}
							}
							{exclude
								{tag
									{tag team%0}
								}
								{state
									{state linked}
								}
							}
						}
					}
					{tag_add team%0}
				}
			}
		)			
;//		("side_selector" args a 0)
;//		("side_selector" args b 1)
;//		("side_selector" args c 2)
;//		("side_selector" args d 3)
		
		("team_selector" args 0)
		("team_selector" args 1)
		("team_selector" args 2)
		("team_selector" args 3)
		("team_selector" args 4)
		("team_selector" args 5)
		("team_selector" args 6)
		("team_selector" args 7)
		("team_selector" args 8)
		("team_selector" args 9)
		("team_selector" args 10)
		("team_selector" args 11)
		("team_selector" args 12)
		("team_selector" args 13)
		("team_selector" args 14)
		("team_selector" args 15)
		("team_selector" args 16)
		("team_selector" args 17)
		{"trigger"
			{name "sc/add_player_team_tags"}
		}
	}
}

; <<<<	===================	Triggers: Melee	===================	>>>>

{"sc/AI_melee_sprint"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{include
							{prop
								{prop SC_plataform_prop_misc_melee}
							}
							{tag
								{tag _SC_inf_tag_bot_unit}
							}
						}
						{exclude
							{state
								{state dead}
							}
							{tag
								{tag exploded}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"actor_state"
			{selector
				{source advanced}
				{group
					{include
						{prop
							{prop SC_plataform_prop_misc_melee}
						}
						{tag
							{tag _SC_inf_tag_bot_unit}
						}
					}
					{exclude
						{state
							{state dead}
						}
						{tag
							{tag exploded}
						}
						{tag
							{tag sc_tp_request_tag_is_aiming}
						}
					}
				}
			}
		;//	{drop orders}
			{movement
				{speed normal}
			}
		}
		{"actor_state"
			{selector
				{source advanced}
				{group
					{include
						{prop
							{prop SC_plataform_prop_misc_melee}
						}
						{tag
							{tag sc_tp_request_tag_is_aiming}
						}	
						{tag
							{tag _SC_inf_tag_bot_unit}
						}
					}
					{exclude
						{state
							{state dead}
						}
						{tag
							{tag exploded}
						}
					}
				}
			}
		;//	{drop orders}
			{movement
				{speed fast}
			}
		}
		{"delay"
			{time 6}
		}
		{"trigger"
			{name "sc/AI_melee_sprint"}
		}
	}
}

{"sc/melee_stance"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{include
							{prop
								{prop SC_plataform_prop_misc_melee}
							}
						}
						{exclude
							{state
								{state dead}
							}
							{tag
								{tag exploded}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"actor_state"
			{selector
				{source advanced}
				{group
					{include
						{tag
							{tag SC_M_Melee_Tag_melee_stance}
						}
					}
					{exclude
						{state
							{state dead}
						}
						{tag
							{tag exploded}
						}
					}
				}
			}
			{control AI}
			{fire_mode open}
			{move_mode free}
			{ai_move
				{mode enable}
			}
		}
		{"actor_state"
			{selector
				{source advanced}
				{group
					{include
						{tag
							{tag SC_M_Melee_Tag_ranged_stance}
						}	
					}
					{exclude
						{state
							{state dead}
						}
						{tag
							{tag exploded}
						}
					}
				}
			}
			{control AI}
			{fire_mode open}
			{move_mode hold}
			{ai_move
				{mode enable}
			}
		}
		{"delay"
			{time 0.1}
		}
		{"trigger"
			{name "sc/melee_stance"}
		}
	}
}

; <<<<	===================	Triggers: Call-ins That Spawn Units	===================	>>>>

{"sc/call_in_entity"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{state
								{state operatable}
							}
							{prop
								{prop sc_plataform_prop_mp_callin}
							}
						}
						{exclude
							{tag
								{tag _sc_call_in_player}
							}
							{tag
								{tag _sc_call_in_bot}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"delay"
			{time 0.1}
		}
		{"actor_state"
			{selector
				{source advanced}
				{group
					{select
						{zone
							{zone "global"}
						}
					}
					{include
						{prop
							{prop sc_plataform_prop_mp_callin}
						}
						{state
							{state user_control}
						}
					}
					{exclude
						{tag
							{tag _sc_call_in_player}
						}
					}
				}
			}
			{control user}
			{fire_mode hold}
			{move_mode hold}
			{ai_move
				{mode disable}
			}
		}
		{"entity_state"
			{selector
				{source advanced}
				{group
					{select
						{zone
							{zone "global"}
						}
					}
					{include
						{prop
							{prop sc_plataform_prop_mp_callin}
						}
						{state
							{state user_control}
						}
					}
					{exclude
						{tag
							{tag _sc_call_in_player}
						}
					}
				}
			}
			{tag_add _sc_call_in_player}
		}
		{"actor_state"
			{selector
				{source advanced}
				{group
					{select
						{zone
							{zone "global"}
						}
					}
					{include
						{prop
							{prop sc_plataform_prop_mp_callin}
						}
					}
					{exclude
						{tag
							{tag _sc_call_in_bot}
						}
						{state
							{state user_control}
						}
					}
				}
			}
			{control AI}
			{fire_mode hold}
			{move_mode hold}
			{ai_move
				{mode disable}
			}
		}
		{"entity_state"
			{selector
				{source advanced}
				{group
					{select
						{zone
							{zone "global"}
						}
					}
					{include
						{prop
							{prop sc_plataform_prop_mp_callin}
						}
					}
					{exclude
						{tag
							{tag _sc_call_in_bot}
						}
						{state
							{state user_control}
						}
					}
				}
			}
			{tag_add _sc_call_in_bot}
		}
		{"trigger"
			{name "sc/call_in_entity"}
		}
	}
}
{"sc/call_in_spawn_human"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{prop
								{prop human}
							}
							{tag
								{tag "sc_call-in_spawn"}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"delay"
			{time 0.1}
		}
		{"actor_state"
			{selector
				{source advanced}
				{group
					{select
						{zone
							{zone "global"}
						}
					}
					{include
						{prop
							{prop human}
						}
						{tag
							{tag "sc_call-in_spawn_user"}
						}
					}
					{exclude
						{state
							{state user_control}
						}
					}
				}
			}
			{control user}
			{fire_mode open}
			{move_mode hold}
		}
		{"trigger"
			{name "sc/call_in_spawn_human"}
		}
	}
}
{##"sc/call_in_ai_use"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
							{tag
								{tag _sc_call_in_bot}
							}
						}
						{include
							{state
								{state operatable}
							}
							{prop
								{prop sc_plataform_prop_mp_callin_spawn_troops}
							}
						}
						{exclude
							{tag
								{tag sc_mp_cll_tag_unit_activated}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"delay"
			{time 10}
		}
		(Define "sc/call_in_ai_use_effect"
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{tag
								{tag _sc_call_in_bot}
							}
							{zone
								{zone "%zone"}
							}
						}
						{include
							{state
								{state operatable}
							}
							{prop
								{prop sc_plataform_prop_mp_callin_spawn_troops}
							}
							{zone
								{zone "%zone"}
							}
						}
						{exclude
							{tag
								{tag sc_mp_cll_tag_unit_activated}
							}
							{tag
								{tag _sc_call_in_player}
							}
						}
					}
				}
				{effect sc_mp_cll_call_activate}
			}
		)
		("sc/call_in_ai_use_effect" zone(base_a))
		("sc/call_in_ai_use_effect" zone(base_b))
		
		("sc/call_in_ai_use_effect" zone(f0))
		
		("sc/call_in_ai_use_effect" zone(f1))
		("sc/call_in_ai_use_effect" zone(f1_1))
		("sc/call_in_ai_use_effect" zone(f1_2))
		("sc/call_in_ai_use_effect" zone(f1_3))
		
		("sc/call_in_ai_use_effect" zone(f2))
		("sc/call_in_ai_use_effect" zone(f2_1))
		("sc/call_in_ai_use_effect" zone(f2_2))
		("sc/call_in_ai_use_effect" zone(f2_3))
		
		("sc/call_in_ai_use_effect" zone(f3))
		("sc/call_in_ai_use_effect" zone(f3_1))
		("sc/call_in_ai_use_effect" zone(f3_2))
		("sc/call_in_ai_use_effect" zone(f3_3))
		
		("sc/call_in_ai_use_effect" zone(f4))
		("sc/call_in_ai_use_effect" zone(f4_1))
		("sc/call_in_ai_use_effect" zone(f4_2))
		("sc/call_in_ai_use_effect" zone(f4_3))
		
		("sc/call_in_ai_use_effect" zone(f21))
		("sc/call_in_ai_use_effect" zone(f21_1))
		("sc/call_in_ai_use_effect" zone(f21_2))
		("sc/call_in_ai_use_effect" zone(f21_3))
		
		("sc/call_in_ai_use_effect" zone(f22))
		("sc/call_in_ai_use_effect" zone(f22_1))
		("sc/call_in_ai_use_effect" zone(f22_2))
		("sc/call_in_ai_use_effect" zone(f22_3))
		
		("sc/call_in_ai_use_effect" zone(f23))
		("sc/call_in_ai_use_effect" zone(f23_1))
		("sc/call_in_ai_use_effect" zone(f23_2))
		("sc/call_in_ai_use_effect" zone(f23_3))
		
		("sc/call_in_ai_use_effect" zone(f24))
		("sc/call_in_ai_use_effect" zone(f24_1))
		("sc/call_in_ai_use_effect" zone(f24_2))
		("sc/call_in_ai_use_effect" zone(f24_3))
		
		("sc/call_in_ai_use_effect" zone(f5))
		("sc/call_in_ai_use_effect" zone(f6))
		("sc/call_in_ai_use_effect" zone(f7))
		("sc/call_in_ai_use_effect" zone(f8))
		("sc/call_in_ai_use_effect" zone(f9))
		("sc/call_in_ai_use_effect" zone(f10))
		("sc/call_in_ai_use_effect" zone(f11))
		("sc/call_in_ai_use_effect" zone(f12))
		
		{"trigger"
			{name "sc/call_in_ai_use"}
		}
	}
}

{"sc/call_in_ai_use_new"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
							{tag
								{tag _sc_call_in_bot}
							}
						}
						{include
							{state
								{state operatable}
							}
							{prop
								{prop sc_plataform_prop_mp_callin_spawn_troops}
							}
						}
						{exclude
							{tag
								{tag sc_mp_cll_tag_unit_activated}
							}
							{tag
								{tag _sc_call_in_bot_spawn_cooldown_timer}
							}
						}
					}
				}
			}
		}
	}
	{actions
		{"delay"
			{time 10.0}
		}
		(Define "sc/call_in_ai_use_effect"
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{tag
								{tag _sc_call_in_bot}
							}
							{zone
								{zone "%zone"}
							}
						}
						{include
							{state
								{state operatable}
							}
							{prop
								{prop sc_plataform_prop_mp_callin_spawn_troops}
							}
							{zone
								{zone "%zone"}
							}
						}
						{exclude
							{tag
								{tag sc_mp_cll_tag_unit_activated}
							}
							{tag
								{tag _sc_call_in_player}
							}
						}
					}
				}
				{effect sc_mp_cll_call_activate}
			}
		)
		("sc/call_in_ai_use_effect" zone(global))
		
		{"trigger"
			{name "sc/call_in_ai_use_new"}
		}
	}
}

; <<<<	===================	Triggers: Bot build stuff	===================	>>>>

{"sc/bot_use_buildable_turrets"
	{condition
		{terms
			{"1.entities"
				{selector
					{source advanced}
					{group
						{select
							{zone			{zone "global"}}
						}
						{include
							{tag			{tag "sc_h_skin_tag_SC_AI_can_place_objects"}}
						}
						{exclude
							{tag			{tag SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown}}
							{state			{state dead}}
							{state			{state user_control}}
							{movement_type	{type swim}}
							{state			{state linked}}
						}
					}
				}
			}
		}
	}
	{actions
		{"delay"
			{time 10}
		}
		(Define "sc/bot_use_buildable_turrets_effect"
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{zone			{zone "%zone"}}
						}
						{include
							{zone			{zone "%zone"}}
							{tag			{tag "sc_h_skin_tag_SC_AI_can_place_objects"}}
						}
						{exclude
							{tag			{tag SC_AB_Tag_Ability_Place_Small_Object_1_Cooldown}}
							{state			{state dead}}
							{state			{state user_control}}
							{movement_type	{type swim}}
							{state			{state linked}}
						}
					}
				}
				{effect SC_AB_Call_Ability_Place_Small_Object_1}
			}
		)
		("sc/bot_use_buildable_turrets_effect" zone(base_a))
		("sc/bot_use_buildable_turrets_effect" zone(base_b))
		
		("sc/bot_use_buildable_turrets_effect" zone(f0))
		
		("sc/bot_use_buildable_turrets_effect" zone(f1))
		("sc/bot_use_buildable_turrets_effect" zone(f1_1))
		("sc/bot_use_buildable_turrets_effect" zone(f1_2))
		("sc/bot_use_buildable_turrets_effect" zone(f1_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f2))
		("sc/bot_use_buildable_turrets_effect" zone(f2_1))
		("sc/bot_use_buildable_turrets_effect" zone(f2_2))
		("sc/bot_use_buildable_turrets_effect" zone(f2_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f3))
		("sc/bot_use_buildable_turrets_effect" zone(f3_1))
		("sc/bot_use_buildable_turrets_effect" zone(f3_2))
		("sc/bot_use_buildable_turrets_effect" zone(f3_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f4))
		("sc/bot_use_buildable_turrets_effect" zone(f4_1))
		("sc/bot_use_buildable_turrets_effect" zone(f4_2))
		("sc/bot_use_buildable_turrets_effect" zone(f4_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f21))
		("sc/bot_use_buildable_turrets_effect" zone(f21_1))
		("sc/bot_use_buildable_turrets_effect" zone(f21_2))
		("sc/bot_use_buildable_turrets_effect" zone(f21_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f22))
		("sc/bot_use_buildable_turrets_effect" zone(f22_1))
		("sc/bot_use_buildable_turrets_effect" zone(f22_2))
		("sc/bot_use_buildable_turrets_effect" zone(f22_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f23))
		("sc/bot_use_buildable_turrets_effect" zone(f23_1))
		("sc/bot_use_buildable_turrets_effect" zone(f23_2))
		("sc/bot_use_buildable_turrets_effect" zone(f23_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f24))
		("sc/bot_use_buildable_turrets_effect" zone(f24_1))
		("sc/bot_use_buildable_turrets_effect" zone(f24_2))
		("sc/bot_use_buildable_turrets_effect" zone(f24_3))
		
		("sc/bot_use_buildable_turrets_effect" zone(f5))
		("sc/bot_use_buildable_turrets_effect" zone(f6))
		("sc/bot_use_buildable_turrets_effect" zone(f7))
		("sc/bot_use_buildable_turrets_effect" zone(f8))
		("sc/bot_use_buildable_turrets_effect" zone(f9))
		("sc/bot_use_buildable_turrets_effect" zone(f10))
		("sc/bot_use_buildable_turrets_effect" zone(f11))
		("sc/bot_use_buildable_turrets_effect" zone(f12))
		
		{"trigger"
			{name "sc/bot_use_buildable_turrets"}
		}
	}
}

; <<<<	===================	Triggers: Tyranid Synapse	===================	>>>>

(Define "LV40k_Tyranid_Synapse"
	{"sc/dlc_lv40k/synapse/team%player/effect_swarmlord"
		{condition
			{terms
				{"1.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
								}
								{tag
									{tag team%player}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
				}
			}
		}
		{actions
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_receiver_3}
							}
							{tag
								{tag team%player}
							}
						}
						{exclude
							{state
								{state dead}
							}
						}
					}
				}
				{effect sc_ab_call_ability_tyr_synapse_aura_effects_3}
			}
			{"delay"
				{time 8}
			}
			{"trigger"
				{name "sc/dlc_lv40k/synapse/team%player/effect_swarmlord"}
			}
		}
	}
	{"sc/dlc_lv40k/synapse/team%player/break_swarmlord"
		{condition
			{terms
				{"1.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
								}
								{tag
									{tag team%player}
								}
								{state
									{state dead}
								}
							}
							{exclude
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_backlash_released}
								}
							}
						}
					}
				}
				{"2.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag team%player}
								}
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_2}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
					{count
						{op "<<"}
						{value 1}
					}
				}
				{"3.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
								}
								{tag
									{tag team%player}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
					{count
						{op "<<"}
						{value 1}
					}
				}
			}
		}
		{actions
			{"delay"
				{time 0.1}
			}
			{"entity_state"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag team%player}
							}
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
							}
							{state
								{state dead}
							}
						}
						{exclude
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_backlash_released}
							}
						}
					}
				}
				{tag_add sc_ab_tag_aura_tyr_synapse_backlash_released}
			}
			{"delay"
				{time 0.1}
			}
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_receiver_3}
							}
							{tag
								{tag team%player}
							}
						}
						{exclude
							{state
								{state dead}
							}
						}
					}
				}
				{effect sc_ab_call_ability_tyr_synapse_3_break_effects}
			}
			{"delay"
				{time 0.1}
			}
			{"trigger"
				{name "sc/dlc_lv40k/synapse/team%player/break_swarmlord"}
			}
		}
	}

	{"sc/dlc_lv40k/synapse/team%player/effect_tyrant"
		{condition
			{terms
				{"1.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_2}
								}
								{tag
									{tag team%player}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
				}
				{"2.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
								}
								{tag
									{tag team%player}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
					{count
						{op "<<"}
						{value 1}
					}
				}
			}
		}
		{actions
			{"delay"
				{time 0.1}
			}
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_receiver_2}
							}
							{tag
								{tag team%player}
							}
						}
						{exclude
							{state
								{state dead}
							}
						}
					}
				}
				{effect sc_ab_call_ability_tyr_synapse_aura_effects_2}
			}
			{"delay"
				{time 8}
			}
			{"trigger"
				{name "sc/dlc_lv40k/synapse/team%player/effect_tyrant"}
			}
		}
	}
	{"sc/dlc_lv40k/synapse/team%player/break_tyrant"
		{condition
			{terms
				{"1.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_2}
								}
								{tag
									{tag team%player}
								}
								{state
									{state dead}
								}
							}
							{exclude
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_backlash_released}
								}
							}
						}
					}
				}
				{"2.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag team%player}
								}
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_2}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
					{count
						{op "<<"}
						{value 1}
					}
				}
				{"3.entities"
					{selector
						{source advanced}
						{group
							{select
								{zone
									{zone "global"}
								}
							}
							{include
								{tag
									{tag sc_ab_tag_aura_tyr_synapse_transmitter_3}
								}
								{tag
									{tag team%player}
								}
							}
							{exclude
								{state
									{state dead}
								}
							}
						}
					}
					{count
						{op "<<"}
						{value 1}
					}
				}
			}
		}
		{actions
			{"delay"
				{time 0.1}
			}
			{"entity_state"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag team%player}
							}
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_transmitter_2}
							}
							{state
								{state dead}
							}
						}
						{exclude
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_backlash_released}
							}
						}
					}
				}
				{tag_add sc_ab_tag_aura_tyr_synapse_backlash_released}
			}
			{"delay"
				{time 0.1}
			}
			{"effect"
				{selector
					{source advanced}
					{group
						{select
							{zone
								{zone "global"}
							}
						}
						{include
							{tag
								{tag sc_ab_tag_aura_tyr_synapse_receiver_2}
							}
							{tag
								{tag team%player}
							}
						}
						{exclude
							{state
								{state dead}
							}
						}
					}
				}
				{effect sc_ab_call_ability_tyr_synapse_2_break_effects}
			}
			{"delay"
				{time 0.1}
			}
			{"trigger"
				{name "sc/dlc_lv40k/synapse/team%player/break_tyrant"}
			}
		}
	}
)

("LV40k_Tyranid_Synapse" player(0))
("LV40k_Tyranid_Synapse" player(1))
("LV40k_Tyranid_Synapse" player(2))
("LV40k_Tyranid_Synapse" player(3))
("LV40k_Tyranid_Synapse" player(4))
("LV40k_Tyranid_Synapse" player(5))
("LV40k_Tyranid_Synapse" player(6))
("LV40k_Tyranid_Synapse" player(7))
("LV40k_Tyranid_Synapse" player(8))
("LV40k_Tyranid_Synapse" player(9))
("LV40k_Tyranid_Synapse" player(10))
("LV40k_Tyranid_Synapse" player(11))
("LV40k_Tyranid_Synapse" player(12))
("LV40k_Tyranid_Synapse" player(13))
("LV40k_Tyranid_Synapse" player(14))
("LV40k_Tyranid_Synapse" player(15))
("LV40k_Tyranid_Synapse" player(16))
("LV40k_Tyranid_Synapse" player(17))