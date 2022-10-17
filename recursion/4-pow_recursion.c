#include "main.h"
/**
 * _pow_recursion - function that return the rais of a number;
 * @x: variable that have a value;
 * @y: the power;
 * Return: if "y" is lower than 0 returns -1;
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}

