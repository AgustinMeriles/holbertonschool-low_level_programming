#include "main.h"
/**
 * _puts - function that prints a string
 * @str: variable
 **/
void _puts(char *str)
	{

		for (int i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
			_putchar('\n');
	}
