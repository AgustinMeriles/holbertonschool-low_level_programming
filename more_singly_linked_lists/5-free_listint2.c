#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: the pointer of the list;
 **/
void free_listint2(listint_t **head)
{
	listint_t *d;

	if (head != NULL)
	{
		while (*head)
		{
			d = *head;
			*head = d->next;
			free(d);
		}
	}
}
