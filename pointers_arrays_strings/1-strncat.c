#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: it's the resulting string.
 * @src: it's the string.
 * @n: the quantity of bytes.
 * Return: pointer to the resulting string dest.
 **/
char *_strncat(char *dest, char *src, int n)
	{
		int i = 0, lenD = 0;

		while (dest[i++])
		lenD++;
		for (i = 0; src[i] && i < n; i++)
		dest[lenD++] = src[i];
		return (dest);
	}
