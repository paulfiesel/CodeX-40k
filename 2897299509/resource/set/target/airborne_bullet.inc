{selector
	{type "airborne_bullet"}

	{group
		{ignore {class proj_rus_antirad}}
		{ignore {class proj_usa_antirad}}
   		{select {class car}}
    		{select {class human}}
		{sort {weapon "aa"}}
		{sort {weapon "fg"}}
		{sort {weapon "ap"}}
		{sort {weapon}}
		{sort distance}
	}

	{group
		{sort {attacking}}
		{sort distance}
	}
}
