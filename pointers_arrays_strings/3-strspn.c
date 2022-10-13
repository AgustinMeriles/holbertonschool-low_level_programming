#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring;
 * @s: the string;
 * @accept: the bytes;
 * Return: 0;
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, c = 0, result = 0;

	while (s[i])
	{
		while (accept[c])
		{
			if (s[i] == accept[c])
				i++;
			else
				c++;
		}
		result = i;
	}
	return (result);
}
