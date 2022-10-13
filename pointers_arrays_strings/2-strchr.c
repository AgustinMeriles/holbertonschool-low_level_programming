#include "main.h"
/**
 *  * _strchr - function that copies memory area;
 *   * @s: string;
 *    * @c: the char;
 *      * Return: pointer to the first occurrence of character c.
 *       **/
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s != NULL)
	{
		while (s[i])
		{
			if (s[i] == c)
			{
				return (s[i]);
			}
			i++;
		}
		return (NULL);
	}
	else
		return (NULL);
}
