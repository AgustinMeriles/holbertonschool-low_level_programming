#include "variadic_functions.h"
/**
 * print_strings - function that will print a string followed by a new line
 * @separator: is the string that the function prints between the strings
 * @n: the number of the strings passed to the function
 * Return: 0;
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
