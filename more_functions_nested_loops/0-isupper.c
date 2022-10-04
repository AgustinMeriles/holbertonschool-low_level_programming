#include "main.h"

int _isupper(int c)
	{
		char abc;
		for (abc = 'a'; abc < 'z'; abc++)
			{
				if (abc == 'C')
					return(1);
				else
					return(0);
			}
	}
