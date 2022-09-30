#include "main.h"
/**
 * print_last_digit - Short description, single line
 * @n: Description of parameter x
 * Description: Longer description of the function)?
 * Return: n
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
