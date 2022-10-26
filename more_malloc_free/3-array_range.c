#include "main.h"
/**
 * array_range - function;
 * @min: the minimum;
 * @max: the maximum;
 * Return: 0;
 **/
int *array_range(int min, int max)
{
int *new;
int i;
int size;
if (min > max)
return (NULL);
size = max - min + 1;
new = malloc(sizeof(int) * size);
if (new == NULL)
return (NULL);
for (i = 0; min <= max; i++)
new[i] = min++;
return (new);
}
