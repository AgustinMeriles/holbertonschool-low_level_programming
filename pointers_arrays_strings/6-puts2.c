#include "main.h"
/**
 * puts2 - Function that prints the rest of the characters like the first
 * @str: the string
 **/
void puts2(char *str)
	{
		int i;

		for (i = 0; i <= '\0'; i + '2')
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
