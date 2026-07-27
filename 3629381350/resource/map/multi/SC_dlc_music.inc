
(Define "SC_Music_Case"
	{"case"
		{condition
			{type rand}
			{value %r}
		}
		{"music"
			{start "%m"}
			{stop_all}
			{volume game}
			{fade 5}
		}
		{"delay"
			{time %time}
		}
		{"trigger"
			{name "sc/music/sc_playlist_%amorac"}	; // Amorac = ambient(am) or(or) action(ac)
			{on}
		}
	}
)

{##"sc/music/sc_playlist_action"
	{condition
		{terms
			{"1.trigger"
				{name "sc/music/sc_playlist_action"}
			}
		}
	}
	{actions
		{"trigger"
			{name "sc/music/sc_playlist_action"}
		}
		{"switch"
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/amb_dow1_10.mp3) time(145))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/amb_dow1_11.mp3) time(170))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/amb_dow1_4.mp3) time(110))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/dow1_wa_17.mp3) time(120))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_1_10.mp3) time(500))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_2_10.mp3) time(540))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_3_10.mp3) time(540))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_4_10.mp3) time(540))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_5_10.mp3) time(540))
			("SC_Music_Case" r(0.1) amorac(action) m(/music/sc_dlc_lv40k_music/DOW2_6_10.mp3) time(540))
			{"default"
				{"music"
					{start "/music/sc_dlc_lv40k_music/DOW2_6_10.mp3"}
					{stop_all}
					{volume game}
					{fade 5}
				}
				{"delay"
					{time 540}
				}
				{"trigger"
					{name "sc/music/sc_playlist_action"}
					{on}
				}
			}
		}
	}
}

{##"sc/music/sc_playlist_ambient"
	{condition
		{terms
			{"1.trigger"
				{name "sc/music/sc_playlist_ambient"}
			}
		}
	}
	{actions
		{"trigger"
			{name "sc/music/sc_playlist_ambient"}
		}
		{"switch"
			("SC_Music_Case" r(0.15) amorac(ambient) m(/music/sc_dlc_lv40k_music/amb_dow1_12.mp3) time(210))
			("SC_Music_Case" r(0.15) amorac(ambient) m(/music/sc_dlc_lv40k_music/amb_dow1_8.mp3) time(140))
			("SC_Music_Case" r(0.15) amorac(ambient) m(/music/sc_dlc_lv40k_music/amb_dow1_9.mp3) time(140))
			("SC_Music_Case" r(0.15) amorac(ambient) m(/music/sc_dlc_lv40k_music/amb_dow1_2.mp3) time(120))
			("SC_Music_Case" r(0.15) amorac(ambient) m(/music/sc_dlc_lv40k_music/amb_dow1_13.mp3) time(180))
			{"default"
				{"music"
					{start "/music/sc_dlc_lv40k_music/amb_dow1_12.mp3"}
					{stop_all}
					{volume game}
					{fade 5}
				}
				{"delay"
					{time 210}
				}
				{"trigger"
					{name "sc/music/sc_playlist_ambient"}
					{on}
				}
			}
		}
	}
}

{##"sc/music/sc_action_watcher"
	{condition
		{terms
			{"1.event"
				{id "action"}	
			}
		}
	}
	{actions
		{"delay"
			{time 2.0}
		}
		{"event"
			{event "action"}	; // <- stops gates of hell vanilla music...
			{mode reset}
			{delay 0}
		}
		{"trigger"
			{name "sc/music/sc_playlist_action"}
			{on}
		}
		{"trigger"
			{name "sc/music/sc_action_watcher"}
		}
	}
}

{##"sc/music/sc_ambient_watcher"
	{condition
		{terms
			{"1.event"
				{id "ambient"}	
			}
		}
	}
	{actions
		{"delay"
			{time 2.0}
		}
		{"event"
			{event "ambient"}	; // <- stops gates of hell vanilla music...
			{mode reset}
			{delay 0}
		}	
		{"trigger"
			{name "sc/music/sc_playlist_ambient"}
			{on}
		}
		{"trigger"
			{name "sc/music/sc_ambient_watcher"}
		}
	}
}
