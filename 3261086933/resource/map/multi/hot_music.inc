			{"music/music_regular"
				{condition
					{terms
						{"1.event"
							{id "music_regular"}
						}
						{"2.cmp_i"
							{var "music_rnd$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_regular"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "bot_army$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "user_team$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 174}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 115}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 193}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient4.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 187}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 174}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 115}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 193}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient4.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 187}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 174}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 115}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 193}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 187}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 5}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_regular"}
					}
				}
			}
			{"music/music_regular_attack"
				{condition
					{terms
						{"1.event"
							{id "music_regular"}
						}
						{"2.cmp_i"
							{var "music_rnd$"}
							{op "=="}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_regular"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "bot_army$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 227}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 198}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 206}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 227}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 198}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/regular/regular3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 206}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/regular/regular1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 227}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/regular/regular2.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 198}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/regular/regular3.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 206}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/regular/regular4.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 194}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 5}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_regular_attack"}
					}
				}
			}
			{"music/music_intense"
				{condition
					{terms
						{"1.event"
							{id "music_intense"}
						}
						{"2.cmp_i"
							{var "music_rnd$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_intense"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "bot_army$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 225}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 164}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 264}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 225}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 164}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/high/high3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 264}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/high/high1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 225}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/high/high2.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 164}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/high/high3.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 264}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 5}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_intense"}
					}
				}
			}
			{"music/music_intense_attack"
				{condition
					{terms
						{"1.event"
							{id "music_intense"}
						}
						{"2.cmp_i"
							{var "music_rnd$"}
							{op "=="}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_intense"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "bot_army$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 189}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 191}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 173}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.35}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle1.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 189}
											}
										}
										{"case"
											{condition
												{type rand}
												{value 0.4}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle2.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 191}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/battle/battle3.wav"}
												{stop_all}
												{volume game}
												{fade 5}
											}
											{"delay"
												{time 173}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.35}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/battle/battle1.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 189}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/battle/battle2.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 191}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/battle/battle3.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 173}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 5}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_intense_attack"}
					}
				}
			}
			{"music/start"
				{condition
					{terms
						{"1.event"
							{id "music_start"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_rnd"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.5}
					}
					{"event"
						{event "music_regular"}
						{mode set}
						{delay 0}
					}
				}
			}
			{"music/music_reset"
				{condition
					{expression "1 & !2 & !3"}
					{terms
						{"1.event"
							{id "music_reset"}
						}
						{"2.cmp_i"
							{var "music_hero$"}
							{op ">"}
							{value 2}
						}
						{"3.trigger"
							{name "music/music_detect"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_rnd"}
						{mode set}
						{delay 0}
					}
					{"event"
						{event "music_detect"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "music_intense$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "music_regular"}
								{mode set}
								{delay 0}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "music_intense"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_intense$"}
								{op "="}
								{value 0}
							}
						}
					}
					{"delay"
						{time 4.8}
					}
					{"event"
						{event "music_reset"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_reset"}
					}
				}
			}
			{"music/init"
				{condition
				}
				{actions
					{"delay"
						{time 1.8}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "bot_army$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.5}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient1.wav"}
												{stop_all}
												{volume game}
												{fade 3}
											}
											{"delay"
												{time 174}
											}
											{"music"
												{stop "/music/gos/ambient/genral_ambient1.wav"}
												{volume game}
												{fade 5}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient2.wav"}
												{stop_all}
												{volume game}
												{fade 3}
											}
											{"delay"
												{time 115}
											}
											{"music"
												{stop "/music/gos/ambient/genral_ambient2.wav"}
												{volume game}
												{fade 5}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type rand}
												{value 0.5}
											}
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient1.wav"}
												{stop_all}
												{volume game}
												{fade 3}
											}
											{"delay"
												{time 174}
											}
											{"music"
												{stop "/music/gos/ambient/genral_ambient1.wav"}
												{volume game}
												{fade 5}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"music"
												{start "/music/gos/ambient/genral_ambient2.wav"}
												{stop_all}
												{volume game}
												{fade 3}
											}
											{"delay"
												{time 115}
											}
											{"music"
												{stop "/music/gos/ambient/genral_ambient2.wav"}
												{volume game}
												{fade 5}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.5}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient1.wav"}
										{stop_all}
										{volume game}
										{fade 3}
									}
									{"delay"
										{time 174}
									}
									{"music"
										{stop "/music/gos/ambient/genral_ambient1.wav"}
										{volume game}
										{fade 5}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/ambient/genral_ambient2.wav"}
										{stop_all}
										{volume game}
										{fade 3}
									}
									{"delay"
										{time 115}
									}
									{"music"
										{stop "/music/gos/ambient/genral_ambient2.wav"}
										{volume game}
										{fade 5}
									}
								}
							}
						}
					}
					{"delay"
						{time 3}
					}
					{"event"
						{event "music_start"}
						{mode set}
						{delay 0}
					}
					{"set_i"
						{var "music_intense$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "music_hero$"}
						{op "="}
						{value 0}
					}
				}
			}
			{"music/music_detect"
				{condition
					{expression "(1 & 2) | (1 & 3) | (1 & 4)"}
					{terms
						{"1.event"
							{id "music_detect"}
						}
						{"2.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state dead}
										}
									}
									{exclude
										{tag
											{tag _m}
										}
									}
								}
								{amount 3
								}
							}
							{near_to
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag flag}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 45}
						}
						{"3.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _user}
										}
										{tag
											{tag _bot}
										}
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{prop
											{prop vehicle}
										}
										{broken_components
											{masks
												"body"
											}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{tag
											{tag _m}
										}
									}
								}
							}
						}
						{"4.signal"
							{zone "combat"}
							{signals "explosion mandie"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.33}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "music_hero$"}
										{op "=="}
										{value 0}
									}
									{"delay"
										{time 0.1}
									}
									{"set_i"
										{var "music_hero$"}
										{op "="}
										{value 1}
									}
								}
								{"default"}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_intense$"}
								{op "="}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state dead}
											}
										}
										{exclude
											{tag
												{tag _m}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add _m}
							}
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _user}
											}
											{tag
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
											{prop
												{prop vehicle}
											}
											{broken_components
												{masks
													"body"
												}
											}
										}
										{exclude
											{tag
												{tag _m}
											}
											{state
												{state inactive}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add _m}
							}
						}
					}
					{"delay"
						{time 3.9}
					}
					{"event"
						{event "music_detect"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.4}
					}
					{"trigger"
						{name "music/music_detect"}
					}
				}
			}
			{"music/hero"
				{condition
					{expression "(1 & 2 & 3 & 4) | (1 & 2 & 3 & 5)"}
					{terms
						{"1.event"
							{id "music_detect"}
						}
						{"2.cmp_i"
							{var "music_hero$"}
							{op "=="}
							{value 1}
						}
						{"3.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _user}
										}
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{state
											{state "operatable user_control"}
										}
									}
									{exclude
										{tag
											{tag air_vehicle}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag flag}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 80}
						}
						{"4.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "combat"}
										}
									}
									{include
										{tag
											{tag player_armor}
										}
										{state
											{state "operatable user_control"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{count
								{op ">="}
								{value 4}
							}
						}
						{"5.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "combat"}
										}
									}
									{include
										{tag
											{tag player}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{count
								{op ">"}
								{value 50}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type trigger}
								{name "music/music_reset"}
							}
							{"delay"
								{time 10}
							}
							{"trigger"
								{name "music/hero"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_hero$"}
								{op "="}
								{value 3}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 2}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/usa_hero.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 120}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 3}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/prc_hero.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 87}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/frg_hero.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 166}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 5}
									}
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/pol_hero.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 258}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"music"
										{start "/music/gos/sov_hero.wav"}
										{stop_all}
										{volume game}
										{fade 5}
									}
									{"delay"
										{time 180}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_hero$"}
								{op "="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type event}
										{id "music_reset"}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"event"
										{event "music_reset"}
										{mode set}
										{delay 0}
									}
								}
							}
						}
					}
				}
			}
			{"music/music_rnd"
				{condition
					{terms
						{"1.event"
							{id "music_rnd"}
						}
						{"2.cmp_i"
							{var "user_is_defender$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_rnd"}
						{mode reset}
						{delay 0}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_rnd$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_rnd$"}
								{op "="}
								{value 0}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "music/music_rnd"}
					}
				}
			}