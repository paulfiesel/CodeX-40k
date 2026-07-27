
;	<<<< --------------------------------------------------------------------->>>>			 
;	<< [=============== Ability: [DLC - LV40k / Land-Raider] ===============] >>
;	<<<<---------------------------------------------------------------------->>>>			 

(Define "SC_AB_Spawn_SM_Landraider"
	{if prop "SM_Landraider"
		{able repaired 0}
	}
)

; <<<<	===================	Ability Event: Damage	===================	>>>>	

(Define "SC_AB_Repair_SM_Landraider"
	; [...]
)

(Define "SC_AB_Break_SM_Landraider"
	{if prop "SM_Landraider"
		{if component "body"		
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'HULL' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 240.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "body" repair}}}
		}
		{if component "turret"		
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'TURRET' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "turret" repair}}}
		}
		{if component "gun"		
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'MAIN GUN' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "gun" repair}}}
		}
		{if component "engine"		
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'ENGINE' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 180.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "engine" repair}}}
		}
		{if component "trackright"	
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'TRACK RIGHT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 45.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "trackright" repair}}}
		}
		{if component "trackleft"	
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'TRACK LEFT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 45.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "trackleft" repair}}}
		}
		{if component "aux_turret1"	
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'SPONSON LEFT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 	
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "aux_turret1" repair}}}
		}
		{if component "aux_turret2"	
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'SPONSON RIGHT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "aux_turret2" repair}}}
		}
		{if component "aux_turret3"	
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'SPONSON BACK LEFT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "aux_turret3" repair}}}
		}
		{if component "aux_turret4"
			{Damage_Report "basis"	"<f(impact)><c(CYAN)>COMPONENT 'SPONSON BACK RIGHT' - MACHINE SPIRIT REPAIR IN PROGRESS"} 	
			{delay 90.0 "SC_AB_Delay_Ability_SM_Landraider" {if not tagged "exploded"	{components "aux_turret4" repair}}}
		}
	}
)

(Define "SC_AB_Destroy_SM_Landraider"
	{Kill_delay "SC_AB_Delay_Ability_SM_Landraider"}
)
