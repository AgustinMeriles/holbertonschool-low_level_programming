#include "main.h"
/**
 * array_range - function;
 * @min: the minimum;
 * @max: the maximum;
 * Return: 0;
 **/
int *array_range(int min, int max)
{
	int *pun;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	while (min <= max)
	{
		i++;
		min++;
	}
	pun = malloc(sizeof(int) * i + 1);
	if (pun == NULL)
	{
		return (NULL);
	}
	return (pun);
}
