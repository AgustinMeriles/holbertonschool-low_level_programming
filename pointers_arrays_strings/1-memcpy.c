#include "main.h"
/**
 * _memcpy - function that copies memory area;
 * @dest: memory area;
 * @src: memory area;
 * @n: bytes;
 * Return: pointer to dest;
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
	{
		char *coso = dest;

		while (n--)
		{
			*dest = *src;
			dest++;
			src++;
		}
		return (coso);
