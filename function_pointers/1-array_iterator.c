#include "function_pointers.h"
/**
 * array_iterator - function that executes a function.
 * @array: the array;
 * @action: pointer to the function;
 * @size: the size of array;
 * Return: 0;
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0)
		return;
	if (action == 0)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
