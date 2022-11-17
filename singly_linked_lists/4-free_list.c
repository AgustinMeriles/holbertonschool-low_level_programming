#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: a pointer of head of the list
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
