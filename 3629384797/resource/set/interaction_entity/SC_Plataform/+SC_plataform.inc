
;	(include "SC_FSM.inc")	; // <- Included by caller.

; // load in order - global defines:
(include "SC_allegiance.inc")
(include "SC_misc.inc")	
(include "SC_shields/SC_sh_main.inc")
(include "SC_infantry_generic/SC_infantry_generic.inc")
(include "SC_abilities/SC_abilities.inc")

; // load unsorted:
(include "SC_construction/SC_construction.inc")
(include "SC_contact/SC_contact.inc")
(include "SC_human/SC_human.inc")
(include "SC_mp_call-ins.inc")
(include "SC_stuff.inc")
(include "SC_troopers.inc")
(include "SC_vehicle.inc")
(include "SC_FSM/SC_FSM_Common.inc")

; // Load DLCs last. So that they can use SC plataform dependencies.
(include "SC_DLC/SC_DLC.inc")