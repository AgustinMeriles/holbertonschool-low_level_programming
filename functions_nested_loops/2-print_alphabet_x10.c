#include "main.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 * @void: The character to print
 * Return: 0
 */
void print_alphabet_x10(void)
{
int repeats;
char abc;

	for (repeats = 0; repeats < 10; repeats++)
{
		for (abc = 'a'; abc < 'z'; abc++)
		_putchar(abc);
		_putchar('\n');
}
}
