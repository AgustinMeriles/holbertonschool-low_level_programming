#include "main.h"
/**
 * puts2 - Function that prints the rest of the characters like the first
 * @str: the string
 **/
void puts2(char *str)
	{
		char c = str[0];
		int i;

		for (i = 0; i <= '\0'; i++)
		{
			_putchar(str[i] = c);
		}
		_putchar('\n');
	}
