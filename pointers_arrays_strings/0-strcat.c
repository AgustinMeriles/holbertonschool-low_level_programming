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

		lens = strlen(src);
		lend = strlen(dest);
		for (i = 0; i <= lens; i++)
		dest[lend] += src[i];
		printf("%s", dest);
		return (0);
	}
