{"generic"
	{on bullet_hit
		{if stuff "heat_shell"
			{if component "era"
			{damage_report "body" "component/era_pierced"}			
				{tags add "era"}
				{spawn "restrictor_40"
					{delay 0.1
						{delete}
					}
				
				}
			 else component "fhzj"
				{tags add "fhzj"}
				{spawn "restrictor_100"
					{tags add "fhzj_success"}
					{delay 0.1
						{tags add "fhzj_success1"}
						{delete}
					}
				}
			}
		else stuff "cumulative_charge"
			{if component "era"
			    {damage_report "body" "component/era_pierced"}		
				{tags add "era"}
				{spawn "restrictor_40"
					{delay 0.1
						{delete}
					}
				
				}
			 else component "fhzj"
				{tags add "fhzj"}
				{spawn "restrictor_100"
					{tags add "fhzj_success"}
					{delay 0.1
						{tags add "fhzj_success1"}
						{delete}
					}
				
				}
			}
		}
	}
}

{"restrictor_100"
	{on bullet_hit
		{tags add "debug4"}
	}
}
{"restrictor_40"
	{on bullet_hit
		{tags add "debug40"}
	}
}