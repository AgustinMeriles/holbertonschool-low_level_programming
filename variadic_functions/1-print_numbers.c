#include "variadic_functions.h"
/**
 * print_numbers - function that will prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integrers
 * Return: 0;
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (separator == NULL)
		return;
	if (n <= 0)
		return;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
