#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of alla parameters
 * @n: a variable;
 * @...: the number of parameters;
 * Return: 0;
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list parameters;

	if (n == 0)
	{
		return (0);
	}
	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}

