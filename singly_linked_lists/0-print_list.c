#include "lists.h"
/**
 * print_list - function that prints all the elements of a list
 * @h: constant list_t;
 * Return: If str is NULL, print [0] (nil), else return the number of nodes;
 *
 **/
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		cont++;
		h = h->next;
	}
	return (cont);
}
