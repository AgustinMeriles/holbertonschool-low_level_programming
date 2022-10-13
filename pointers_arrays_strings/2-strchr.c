#include "main.h"
/**
 *  * _strchr - function that copies memory area;
 *   * @s: string;
 *    * @c: the char;
 *      * Return: pointer to the first occurrence of character c.
 *       **/
char *_strchr(char *s, char c)
{
	int i;
	int len;
	char *ret;

	len = strlen(s);
	ret = NULL;
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
		ret = s[i];
		}
	}
	return (*ret);
}
