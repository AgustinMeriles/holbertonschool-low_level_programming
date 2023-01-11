#include "search_algos.h"

/**
* binary_search -  function that searches for a value in a sorted array
* @array: pointer to the first element of the array to search in;
* @size: the size of the array;
* @value: value to search in the array;
* Return: -1 or index;
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, lef = 0, rig = 0, mid = 0;

	if (array == NULL)
		return (-1);

	lef = 0;
	rig = size - 1;
	


	while (lef <= rig)
	{
		if (rig % 2 == 0)
			mid = rig / 2;
		else
			mid = rig + 1 / 2;
		printf("Searching in array: ");
		for (i = lef; i <= rig; i++)
		{
			if (i > lef)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			lef = mid + 1;
		rig = mid - 1;
	}

	return (-1);
}
