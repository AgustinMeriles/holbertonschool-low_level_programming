#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: paramether thath we will return the length
 * Return: i
 **/
int _strlen(char *s)
	{
		int a;

		for (a = 0; s[a] != '\0'; a++)
			;
		return (a);
	}
