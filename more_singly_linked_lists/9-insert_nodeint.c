#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer of the function
 * @n: the int that will fill the new node
 * @idx: index list
 * Return: if function can not add a new node return 0;
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cp = *head, *new;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}
	new->next = cp->next;
	cp->next = new;
	return (new);
}
