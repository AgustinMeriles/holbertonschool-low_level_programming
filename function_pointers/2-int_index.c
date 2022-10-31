#include "function_pointers.h"
/**
 * int_index - function that searches an integrer
 * @array: the array;
 * @size: the size of the array;
 * @cmp: pointer to the function to be used to compares values;
 * Return: 0;
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0)
		return (-1);
	if (cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
