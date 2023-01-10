#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
* @array: is a pointer to the first element of the array;
* @size: number of elements in array;
* @value: is the value to search for;
* Return: firt index where value is located;
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (size == 0 || array == NULL)
		return (-1);

	for (i = 0; i < (size - 1); i++)
	{
		if (array[i] != value)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}