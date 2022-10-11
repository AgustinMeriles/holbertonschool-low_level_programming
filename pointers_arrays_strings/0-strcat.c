#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: the first string;
 * @src: the second string;
 * Return: 0;
 **/
char *_strcat(char *dest, char *src)
	{
		int i, srclen;
		
		srclen = strlen(src);
		for (i = 0; i <= srclen; i++)
		dest += src[i];

		return (dest);
														}
