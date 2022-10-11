#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: the first string;
 * @src: the second string;
 * Return: 0;
 **/
char *_strcat(char *dest, char *src)
	{
		int i = 0, len = 0;

		len = strlen(src);
		for (i = 0; i <= len; i++)
		dest = src[i];

		return (dest);
														}
