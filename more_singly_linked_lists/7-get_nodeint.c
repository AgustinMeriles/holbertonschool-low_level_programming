#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: the pointer of the list
 * @index: the index
 * Return: if the node does no exist return NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new;

	for (new = 0; new < index; new++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
		return (head);
}
