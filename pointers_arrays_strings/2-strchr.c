#include "main.h"
/**
 *  * _memcpy - function that copies memory area;
 *   * @s: string;
 *    * @c: the char;
 *      * Return: pointer to the first occurrence of character c.
 *       **/
char *_strchr(char *s, char c)
{
	int i;
	int len;
	int *ret;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
		ret = s[i];
		}
		return (*ret);
	}
