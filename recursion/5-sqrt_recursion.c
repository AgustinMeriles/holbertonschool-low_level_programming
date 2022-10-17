#include "main.h"
/**
 * _sqrt_recursion - function that return the square root of a number;
 * @n: is the number;
 * Return: n does not have a natural square root, return -1;
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_function(n, 0));
}
/**
 * _function - function;
 * @x: the parameter;
 * @n: the other parameter;
 * Return: something;
 **/
int _function(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_function(n, x + 1));
	}
}
