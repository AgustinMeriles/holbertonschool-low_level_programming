#include "main.h"
/**
 * swap_int - function that swap two integrers
 * @a: integrer a
 * @b: integrer b
 **/
void swap_int(int *a, int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
