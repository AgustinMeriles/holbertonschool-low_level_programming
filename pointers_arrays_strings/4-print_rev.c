#include "main.h"
/**
 * print_rev - print reverse string
 * @s: the string
 **/
void print_rev(char *s)
	{
		int i;

		for (i = '\0'; i != s[0]; i--)
		{
			_putchar (s[i]);
		}
			_putchar ('\n');
	}
