#include "lists.h"
/**
 * add_node -  function that adds a new node at the beginning of a list
 * @head: list_t
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup;
	int i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		i++;
	newNode->str = dup;
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
