#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 * @h: the list;
 * Return: the number of nodes;
 **/
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->n == 0)
		{
			printf("Error\n");
		}
		else
		{
			printf("%d\n", h->n);
			cont++;
			h = h->next;
		}
	}
	return (cont);
}
