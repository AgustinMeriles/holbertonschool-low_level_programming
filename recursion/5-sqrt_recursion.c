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
	return (_function(0, n));
/**
 * _function - function;
 * @x: the parameter;
 * @n: the other parameter;
 * Return: something;
 **/
int _function(int x, int n)
{
	x = 0;
	if (x * x == n)
		return (x);
	else
		return (_function(x++, n));
