#include "main.h"
/**
 * factorial - function that return the factorial of a number
 * @n: the number;
 * Return: -1 if the value is lower than 0, else return 0;
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
