#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: the pointer of the list;
 * Return: a value;
 **/
int pop_listint(listint_t **head)
{
	listint_t *d;
	int v;

	if (head)
	{
		d = *head;
		v = (*head)->n;
		*head = (*head)->next;
		free(d);

		return (v);
	}

	return (0);
}
