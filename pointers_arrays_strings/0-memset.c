#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: area pointed;
 * @b: constant byte;
 * @n: the number of bytes;
 * Return: s;
 **/
char *_memset(char *s, char b, unsigned int n)
	{
		int i = 0, byteD = 0;

		for (i = 0; i <= n; i++)
		{
			byteD = b[i];
			s += byteD;
		}
		return (s);
	}
