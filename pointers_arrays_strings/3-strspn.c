#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring;
 * @s: the string;
 * @accept: the bytes;
 * Return: 0;
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, c = 0;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[c])
		{
			return (result);
		}
		else
		{
			for (c = 0; accept[c] != '\0'; c++)
			{
				if (accept[c] == s[i])
				result++;
			}
		}
	}
	return (result);
}
