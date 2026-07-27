

;/*=========== add by ordos Begin ===========*/
{on "blow_panels1" overload
	{tear "piece_medium_steel" bone "part1" {impulse up 5 rnd_dir 2}}
		{add_view "burnout_blow_panel1" "smoke3_11" "FXfire3"}
		{add_view "burnout_blow_panel2" "smoke3_11" "FXfire3"}
		{add_view "burnout_blow_panel3" "smoke3_11" "FXfire3"}
		{add_view "burnout_blow_panel4" "smoke3_11" "FXfire3"}
}
{on "_explosion" overload
	{tear "piece_medium_steel" bone "part1" {impulse up 5 rnd_dir 2}}
	{tear "piece_medium_steel" bone "part2" {impulse up 5 rnd_dir 2}}
}
{on break overload
	{if volume "ammo_storage_main1"
		{tear "piece_medium_steel" bone "part1" {impulse up 5 rnd_dir 2}}
		{tear "piece_medium_steel" bone "part2" {impulse up 5 rnd_dir 2}}
	}
}

{on "blow_panels" overload
	{tear "piece_medium_steel" bone "part1" {impulse up 5 rnd_dir 2}}
	{tear "piece_medium_steel" bone "part2" {impulse up 5 rnd_dir 2}}
	{tear "piece_medium_steel" bone "part3" {impulse up 5 rnd_dir 2}}
		{add_view "burnout_blow_panel1" "smoke3_11" "FXfire3"}
		{add_view "burnout_blow_panel2" "smoke3_11" "FXfire3"}	
		{add_view "burnout_blow_panel3" "smoke3_11" "FXfire3"}
		{add_view "burnout_blow_panel4" "smoke3_11" "FXfire3"}
}

(define "paradrop_crew_member_with_alt_" 
	{if linked "mi17"
		{if name "emit1" "emit2"
			{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}	
		else name "ropel_node5" "roper_node5"
		{delay  0.1 ("paradrop_crew_member_with_alt" args %0)}
		}
	else linked "mi8amtsh"
	{if name "emit1" "emit2"	
	{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}	
	else name "ropel_node5" "roper_node5"		
	{delay  0.1 ("paradrop_crew_member_with_alt" args %0)}	
	}		
	else linked "apache"	
	{delay 2.8 ("paradrop_crew_member_with_alt" args %0)}		
	else linked "ka50"		
	{delay 2.8 ("paradrop_crew_member_with_alt" args %0)}	
	else linked "ka50sh"			
	{delay 2.8 ("paradrop_crew_member_with_alt" args %0)}	
	else linked "uh60"			
	{if name "emit1" "emit2"			
	{delay  2.5 ("paradrop_crew_member_with_alt" args %0)}	
	else name "emit3" "emit4"			
	{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}	
	else name "ropel_node5" "roper_node5"		
	{delay  0.1 ("paradrop_crew_member_with_alt" args %0)}	
	}	
	else linked "an-12"	
	{delay 0.5 ("paradrop_crew_member_with_alt" args %0)}	
	else linked "il-76td"			
	{delay 0.5 ("paradrop_crew_member_with_alt" args %0)}	
	else linked "mi-24"			
	{if name "emit0"			
	{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}	
	else name "emit1"		
	{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}	
	else name "emit2" "emit3"	
	{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}	
	}		
	else linked "mh-6"	
	{if name "emit1" "emit2"	
	{delay  2.0 ("paradrop_crew_member_with_alt" args %0)}	
	else name  "emit3" "emit4" "emit5" "emit6" "emit7" "emit8"
	{delay  2.0 ("paradrop_crew_member_with_alt" args %0)}	
	}		
	else linked "uh1y"	
	{if name "emit1" "emit2"	
	{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}	
	else name  "emit3" "emit4"	
	{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}	
	else name "ropel_node5" "roper_node5"	
	{delay  0.1 ("paradrop_crew_member_with_alt" args %0)}	
	}		
	else linked "su-34"		
	{delay 1 ("paradrop_crew_member_with_alt" args %0)}	
	else linked "nh90"		
	{delay 0.5 ("paradrop_crew_member_with_alt" args %0)}	
	else			
	{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}	
	}	
)


(define "paradrop_crew_member_with_alt"	   
	{if rand 0.5 		
		{if rand 0.5 			
			{if rand 0.5
				("paradrop_crew_member_with_alt_r" args %0 0)	
			else 
				("paradrop_crew_member_with_alt_r" args %0 1)	
			}	
		else		
			{if rand 0.5
				("paradrop_crew_member_with_alt_r" args %0 2)
			else
				("paradrop_crew_member_with_alt_r" args %0 3)	
			}		
		}	
	else		
		{if rand 0.5 	
			{if rand 0.5
				("paradrop_crew_member_with_alt_r" args %0 4)	
			else
				("paradrop_crew_member_with_alt_r" args %0 5)		
			}		
		else		
			{if rand 0.5
				("paradrop_crew_member_with_alt_r" args %0 6)	
			else
				("paradrop_crew_member_with_alt_r" args %0 7)	
			}		
		}	
	}	
)

(define "paradrop_crew_member_with_alt_r"
	{if not altitude 2
		{tags add "heli_paradrop%1"}
		{delay 5 {tags remove "heli_paradrop%1"}}
		{spawn "parachute_new"  "basis" x no_position
			{tags add "heli_parashute%1"} 
			{call "start_alt_%0"}	
		}
	}
)

{if linked "able_paradrop"
	{if altitude 40	("paradrop_crew_member_with_alt_" args 7)
	else altitude 35	("paradrop_crew_member_with_alt_" args 6)
	else altitude 30	("paradrop_crew_member_with_alt_" args 5)
	else altitude 25	("paradrop_crew_member_with_alt_" args 4)
	else altitude 20	("paradrop_crew_member_with_alt_" args 3)
	else altitude 12	("paradrop_crew_member_with_alt_" args 2)
	else altitude 8	("paradrop_crew_member_with_alt_" args 1)
	else altitude 3	
		{if linked "mi17"
			{delay 2.0 {throw_off up 1 forward 2}}	
		else linked "apache"	
			{delay 2.5 {throw_off up 1 forward 2}}
		else linked "ka50"
			{delay 2.5 {throw_off up 1 forward 2}}
		else linked "ka50sh"	
			{delay 2.5 {throw_off up 1 forward 2}}
		else linked "uh60"
			{if name "emit1" "emit2"
				{delay  2.0 {throw_off up 1 forward 2}}	
			else name "emit3" "emit4"	
				{delay  1.0 {throw_off up 1 forward 2}}	
			}
		else linked "nh90"
			{delay  0.2 {if linked "airborne" {throw_off up 1 forward 2}}}
		else linked "an-12"		
			{delay 3.0 {if linked "airborne" {throw_off up 1 forward 2}}}	
		else linked "il-76td"	
			{delay 3.0 {if linked "airborne"{throw_off up 1 forward 2}}}
		else	
			{delay 2.5 {throw_off up 1 forward 2}}
		}
		else
		}
}


	

;/*=========== add by ordos End ===========*/