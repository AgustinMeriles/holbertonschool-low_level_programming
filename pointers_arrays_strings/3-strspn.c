#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring;
 * @s: the string;
 * @accept: the bytes;
 * Return: 0;
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, c = 0;

	for (i = 0; s[i] < '\0'; i++)
	{
		while (accept[c])
			if (s[i] != accept[c])
			{
				c++;
			}
			else
				return (i + 1);
	}
}
