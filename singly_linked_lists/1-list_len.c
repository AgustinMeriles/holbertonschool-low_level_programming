#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: constant list_t;
 * Return: number of elements;
 **/
size_t list_len(const list_t *h)
{
	size_t con = 0;

	while (h)
	{
		con++;
		h = h->next;
	}
	return (con);
}
