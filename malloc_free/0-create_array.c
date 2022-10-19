#include "main.h"
/**
 * create_array - function that creates an array of chars;
 * @size: the size;
 * @c: the chars;
 * Return: NULL if size is 0, else return a pointer to the array;
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *d;

	d = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (d != NULL)
	{
		for (n = 0; n < size; n++)
		{
			d[n] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (d);
}
