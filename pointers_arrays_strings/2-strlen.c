#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: paramether thath we will return the length
 * Return: i
 **/
int _strlen(char *s)
	{
		int i;
		int contador;

		contador = 0;

		for (i = *s; *s < '\0'; i++)
		{
			contador++;
		}
		return (contador);
	}
