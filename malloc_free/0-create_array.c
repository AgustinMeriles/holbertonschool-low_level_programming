#include "main.h"
/**
 * create_array - function that creates an array of chars;
 * @size: the size;
 * @c: the chars;
 * Return: NULL if size is 0, else return a pointer to the array;
 **/
char *create_array(unsigned int size, char c)
{
	char *ar;
	int n;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
