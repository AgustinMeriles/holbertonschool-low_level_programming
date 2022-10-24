#include "main.h"
/**
 * _calloc - the function,
 * @nmemb: the elements;
 * @size: the size of bytes;
 * Return: 0;
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pun;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pun = malloc(size * nmemb);
	if (pun == NULL)
	{
		return (NULL);
	}
	return (pun);
}
