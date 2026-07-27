
(define "SC_Allegiance_Define_Clear_Team_Tags"
	{tags remove "team0"}
	{tags remove "team1"}
	{tags remove "team2"}
	{tags remove "team3"}
	{tags remove "team4"}
	{tags remove "team5"}
	{tags remove "team6"}
	{tags remove "team7"}
	{tags remove "team8"}
	{tags remove "team9"}
	{tags remove "team10"}
	{tags remove "team11"}
	{tags remove "team12"}
	{tags remove "team13"}
	{tags remove "team14"}
	{tags remove "team15"}
	{tags remove "team16"}
	{tags remove "team17"}
)

;=============================================================================================================================
; SC_Allegiance: // Spawn Human
;=============================================================================================================================

(define "SC_Allegiance_Define_Spawn_Human_With_Same_Tag"
	{if tagged  "team0"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 0} %args}}
	else tagged "team1"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 1} %args}}
	else tagged "team2"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 2} %args}}
	else tagged "team3"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 3} %args}}
	else tagged "team4"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 4} %args}}
	else tagged "team5"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 5} %args}}
	else tagged "team6"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 6} %args}}
	else tagged "team7"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 7} %args}}
	else tagged "team8"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 8} %args}}
	else tagged "team9"		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 9} %args}}
	else tagged "team10"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 10} %args}}
	else tagged "team11"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 11} %args}}
	else tagged "team12"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 12} %args}}
	else tagged "team13"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 13} %args}}
	else tagged "team14"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 14} %args}}
	else tagged "team15"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 15} %args}}
	else tagged "team16"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 16} %args}}
	else tagged "team17"	{spawn "%c" "%where" x {Delete} {Spawn_human "%h" {Player 17} %args}}
	else
		{spawn "%c" "%where" x {Delete} {Spawn_human "%h" %args}}
	}
)

; // BUZZ: use this define to spawn humans in multiplayer, this is part of a trigger script that corrects AI and USER settings in triggers.

(Define "SC_Allegiance_Define_Spawn_Human_Multiplayer"		
	{if user_control
		("SC_Allegiance_Define_Spawn_Human_With_Same_Tag" 
			c(sc_empty_helper)
			where(%where) 
			h(%human)
			args(
				{tags add "SC_call-in_spawn"}
				{tags add "SC_call-in_spawn_user"}
			)
		)
	else	
		("SC_Allegiance_Define_Spawn_Human_With_Same_Tag" 
			c(sc_empty_helper)
			where(%where) 
			h(%human)
			args(
				{tags add "SC_call-in_spawn"}
			)
		)
	}
)

;=============================================================================================================================
; SC_Allegiance: // Spawn Actor
;=============================================================================================================================

(define "SC_Allegiance_Define_Spawn_Actor_With_Same_Tag"
	{if tagged  "team0"		{spawn "%c" "%where" x {tags add "team0"} %args}
	else tagged "team1"		{spawn "%c" "%where" x {tags add "team1"} %args}
	else tagged "team2"		{spawn "%c" "%where" x {tags add "team2"} %args}
	else tagged "team3"		{spawn "%c" "%where" x {tags add "team3"} %args}
	else tagged "team4"		{spawn "%c" "%where" x {tags add "team4"} %args}
	else tagged "team5"		{spawn "%c" "%where" x {tags add "team5"} %args}
	else tagged "team6"		{spawn "%c" "%where" x {tags add "team6"} %args}
	else tagged "team7"		{spawn "%c" "%where" x {tags add "team7"} %args}
	else tagged "team8"		{spawn "%c" "%where" x {tags add "team8"} %args}
	else tagged "team9"		{spawn "%c" "%where" x {tags add "team9"} %args} 
	else tagged "team10"	{spawn "%c" "%where" x {tags add "team10"} %args}
	else tagged "team11"	{spawn "%c" "%where" x {tags add "team11"} %args}
	else tagged "team12"	{spawn "%c" "%where" x {tags add "team12"} %args}
	else tagged "team13"	{spawn "%c" "%where" x {tags add "team13"} %args}
	else tagged "team14"	{spawn "%c" "%where" x {tags add "team14"} %args}
	else tagged "team15"	{spawn "%c" "%where" x {tags add "team15"} %args}
	else tagged "team16"	{spawn "%c" "%where" x {tags add "team16"} %args}
	else tagged "team17"	{spawn "%c" "%where" x {tags add "team17"} %args}
	}
)

(define "SC_Allegiance_Define_Spawn_Actor_With_Same_Tag_And_Player"
	{if tagged  "team0"		{spawn "%c" "%where" x {tags add "team0"} {player 0} %args}
	else tagged "team1"		{spawn "%c" "%where" x {tags add "team1"} {player 1} %args}
	else tagged "team2"		{spawn "%c" "%where" x {tags add "team2"} {player 2} %args}
	else tagged "team3"		{spawn "%c" "%where" x {tags add "team3"} {player 3} %args}
	else tagged "team4"		{spawn "%c" "%where" x {tags add "team4"} {player 4} %args}
	else tagged "team5"		{spawn "%c" "%where" x {tags add "team5"} {player 5} %args}
	else tagged "team6"		{spawn "%c" "%where" x {tags add "team6"} {player 6} %args}
	else tagged "team7"		{spawn "%c" "%where" x {tags add "team7"} {player 7} %args}
	else tagged "team8"		{spawn "%c" "%where" x {tags add "team8"} {player 8} %args}
	else tagged "team9"		{spawn "%c" "%where" x {tags add "team9"} {player 9} %args} 
	else tagged "team10"	{spawn "%c" "%where" x {tags add "team10"} {player 10} %args}
	else tagged "team11"	{spawn "%c" "%where" x {tags add "team11"} {player 11} %args}
	else tagged "team12"	{spawn "%c" "%where" x {tags add "team12"} {player 12} %args}
	else tagged "team13"	{spawn "%c" "%where" x {tags add "team13"} {player 13} %args}
	else tagged "team14"	{spawn "%c" "%where" x {tags add "team14"} {player 14} %args}
	else tagged "team15"	{spawn "%c" "%where" x {tags add "team15"} {player 15} %args}
	else tagged "team16"	{spawn "%c" "%where" x {tags add "team16"} {player 16} %args}
	else tagged "team17"	{spawn "%c" "%where" x {tags add "team17"} {player 17} %args}
	}
)
;=============================================================================================================================
; SC_Allegiance: // Check Linked Entity Tag
;=============================================================================================================================

(define "SC_Allegiance_Define_Check_Linked_Entity_Tag"
	{if tagged  "team0"		{with_linked_entity "%where"  {tags add "team0"} {player 0} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 0}}) %args}
	else tagged "team1"		{with_linked_entity "%where"  {tags add "team1"} {player 1} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 1}}) %args}
	else tagged "team2"		{with_linked_entity "%where"  {tags add "team2"} {player 2} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 2}}) %args}
	else tagged "team3"		{with_linked_entity "%where"  {tags add "team3"} {player 3} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 3}}) %args}
	else tagged "team4"		{with_linked_entity "%where"  {tags add "team4"} {player 4} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 4}}) %args}
	else tagged "team5"		{with_linked_entity "%where"  {tags add "team5"} {player 5} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 5}}) %args}
	else tagged "team6"		{with_linked_entity "%where"  {tags add "team6"} {player 6} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 6}}) %args}
	else tagged "team7"		{with_linked_entity "%where"  {tags add "team7"} {player 7} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 7}}) %args}
	else tagged "team8"		{with_linked_entity "%where"  {tags add "team8"} {player 8} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 8}}) %args}
	else tagged "team9"		{with_linked_entity "%where"  {tags add "team9"} {player 9} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 9}}) %args} 
	else tagged "team10"	{with_linked_entity "%where"  {tags add "team10"} {player 10} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 10}}) %args}
	else tagged "team11"	{with_linked_entity "%where"  {tags add "team11"} {player 11} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 11}}) %args}
	else tagged "team12"	{with_linked_entity "%where"  {tags add "team12"} {player 12} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 12}}) %args}
	else tagged "team13"	{with_linked_entity "%where"  {tags add "team13"} {player 13} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 13}}) %args}
	else tagged "team14"	{with_linked_entity "%where"  {tags add "team14"} {player 14} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 14}}) %args}
	else tagged "team15"	{with_linked_entity "%where"  {tags add "team15"} {player 15} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 15}}) %args}
	else tagged "team16"	{with_linked_entity "%where"  {tags add "team16"} {player 16} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 16}}) %args}
	else tagged "team17"	{with_linked_entity "%where"  {tags add "team17"} {player 17} (mod "mp" {Delay 0.5 {Drop_Orders} {Player 17}}) %args}
	}
)

;=============================================================================================================================
; SC_Allegiance: // Check Team Effector
;=============================================================================================================================

(define "SC_Allegiance_Define_Check_Effector_Same_Tag"
	{if tagged  "team0"		{if effector "%effector" {with_effector {if tagged "team0" {with_effector	%do}}}}
	else tagged "team1"		{if effector "%effector" {with_effector {if tagged "team1" {with_effector	%do}}}}
	else tagged "team2"		{if effector "%effector" {with_effector {if tagged "team2" {with_effector	%do}}}}
	else tagged "team3"		{if effector "%effector" {with_effector {if tagged "team3" {with_effector	%do}}}}
	else tagged "team4"		{if effector "%effector" {with_effector {if tagged "team4" {with_effector	%do}}}}
	else tagged "team5"		{if effector "%effector" {with_effector {if tagged "team5" {with_effector	%do}}}}
	else tagged "team6"		{if effector "%effector" {with_effector {if tagged "team6" {with_effector	%do}}}}
	else tagged "team7"		{if effector "%effector" {with_effector {if tagged "team7" {with_effector	%do}}}}
	else tagged "team8"		{if effector "%effector" {with_effector {if tagged "team8" {with_effector	%do}}}}
	else tagged "team9"		{if effector "%effector" {with_effector {if tagged "team9" {with_effector	%do}}}}
	else tagged "team10"	{if effector "%effector" {with_effector {if tagged "team10" {with_effector	%do}}}}
	else tagged "team11"	{if effector "%effector" {with_effector {if tagged "team11" {with_effector	%do}}}}
	else tagged "team12"	{if effector "%effector" {with_effector {if tagged "team12" {with_effector	%do}}}}
	else tagged "team13"	{if effector "%effector" {with_effector {if tagged "team13" {with_effector	%do}}}}
	else tagged "team14"	{if effector "%effector" {with_effector {if tagged "team14" {with_effector	%do}}}}
	else tagged "team15"	{if effector "%effector" {with_effector {if tagged "team15" {with_effector	%do}}}}
	else tagged "team16"	{if effector "%effector" {with_effector {if tagged "team16" {with_effector	%do}}}}
	else tagged "team17"	{if effector "%effector" {with_effector {if tagged "team17" {with_effector	%do}}}}
	}
)

(define "SC_Allegiance_Define_Check_Effector_Different_Tag"
	{if tagged  "team0"		{if effector "%effector" {with_effector {if not tagged "team0" {with_effector	%do}}}}
	else tagged "team1"		{if effector "%effector" {with_effector {if not tagged "team1" {with_effector	%do}}}}
	else tagged "team2"		{if effector "%effector" {with_effector {if not tagged "team2" {with_effector	%do}}}}
	else tagged "team3"		{if effector "%effector" {with_effector {if not tagged "team3" {with_effector	%do}}}}
	else tagged "team4"		{if effector "%effector" {with_effector {if not tagged "team4" {with_effector	%do}}}}
	else tagged "team5"		{if effector "%effector" {with_effector {if not tagged "team5" {with_effector	%do}}}}
	else tagged "team6"		{if effector "%effector" {with_effector {if not tagged "team6" {with_effector	%do}}}}
	else tagged "team7"		{if effector "%effector" {with_effector {if not tagged "team7" {with_effector	%do}}}}
	else tagged "team8"		{if effector "%effector" {with_effector {if not tagged "team8" {with_effector	%do}}}}
	else tagged "team9"		{if effector "%effector" {with_effector {if not tagged "team9" {with_effector	%do}}}}
	else tagged "team10"	{if effector "%effector" {with_effector {if not tagged "team10" {with_effector	%do}}}}
	else tagged "team11"	{if effector "%effector" {with_effector {if not tagged "team11" {with_effector	%do}}}}
	else tagged "team12"	{if effector "%effector" {with_effector {if not tagged "team12" {with_effector	%do}}}}
	else tagged "team13"	{if effector "%effector" {with_effector {if not tagged "team13" {with_effector	%do}}}}
	else tagged "team14"	{if effector "%effector" {with_effector {if not tagged "team14" {with_effector	%do}}}}
	else tagged "team15"	{if effector "%effector" {with_effector {if not tagged "team15" {with_effector	%do}}}}
	else tagged "team16"	{if effector "%effector" {with_effector {if not tagged "team16" {with_effector	%do}}}}
	else tagged "team17"	{if effector "%effector" {with_effector {if not tagged "team17" {with_effector	%do}}}}
	}
)

;=============================================================================================================================
; SC_Allegiance: // Swap Effector Team
;=============================================================================================================================

(define "SC_Allegiance_Define_Change_Effector_To_Same_Tag"	
	{if tagged  "team0"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team0"}}}
	else tagged "team1"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team1"}}}
	else tagged "team2"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team2"}}}
	else tagged "team3"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team3"}}}
	else tagged "team4"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team4"}}}
	else tagged "team5"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team5"}}}
	else tagged "team6"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team6"}}}
	else tagged "team7"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team7"}}}
	else tagged "team8"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team8"}}}
	else tagged "team9"		{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team9"}}}
	else tagged "team10"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team10"}}}
	else tagged "team11"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team11"}}}
	else tagged "team12"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team12"}}}
	else tagged "team13"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team13"}}}
	else tagged "team14"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team14"}}}
	else tagged "team15"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team15"}}}
	else tagged "team16"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team16"}}}
	else tagged "team17"	{with_effector{if %check ("SC_Allegiance_Define_Clear_Team_Tags"){tags add"team17"}}}
	}
)

;=============================================================================================================================
; SC_Allegiance: // Sync Kill Trigger
;=============================================================================================================================

(define "SC_Allegiance_Define_Check_Sync_Kill"
	{if tagged  "team0"		{if effector "%effector" {with_effector {if not tagged "team0" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team1"		{if effector "%effector" {with_effector {if not tagged "team1" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team2"		{if effector "%effector" {with_effector {if not tagged "team2" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team3"		{if effector "%effector" {with_effector {if not tagged "team3" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team4"		{if effector "%effector" {with_effector {if not tagged "team4" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team5"		{if effector "%effector" {with_effector {if not tagged "team5" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team6"		{if effector "%effector" {with_effector {if not tagged "team6" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team7"		{if effector "%effector" {with_effector {if not tagged "team7" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team8"		{if effector "%effector" {with_effector {if not tagged "team8" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team9"		{if effector "%effector" {with_effector {if not tagged "team9" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team10"	{if effector "%effector" {with_effector {if not tagged "team10" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team11"	{if effector "%effector" {with_effector {if not tagged "team11" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team12"	{if effector "%effector" {with_effector {if not tagged "team12" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team13"	{if effector "%effector" {with_effector {if not tagged "team13" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team14"	{if effector "%effector" {with_effector {if not tagged "team14" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team15"	{if effector "%effector" {with_effector {if not tagged "team15" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team16"	{if effector "%effector" {with_effector {if not tagged "team16" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	else tagged "team17"	{if effector "%effector" {with_effector {if not tagged "team17" {if tagged "sync_kill_oportunity" %do {with_effector	{Call "delete"}}}}}}
	}
)
