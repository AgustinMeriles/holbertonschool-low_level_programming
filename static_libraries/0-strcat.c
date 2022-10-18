#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: the first string;
 * @src: the second string;
 * Return: 0;
 **/
char *_strcat(char *dest, char *src)
{
int i = 0, lenD = 0;

while (dest[i++])
lenD++;
for (i = 0; src[i]; i++)
dest[lenD++] = src[i];
return (dest);
}
