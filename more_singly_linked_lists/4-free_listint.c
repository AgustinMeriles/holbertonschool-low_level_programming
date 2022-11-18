#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: a pointer to the list;
 **/
void free_listint(listint_t *head)
{
	listint_t *d;

	while(head)
	{
		d = head->next;
		free(head);
		head = d;
	}
}
