#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: paramether thath we will return the length
 * Return: i
 **/
int _strlen(char *s)
	{
		char i;
		int contador;

		contador = 0;

		for (i = *s; *s < '\0'; i++)
		{
			contador = contador + 1;
		}
		return (contador);
	}
