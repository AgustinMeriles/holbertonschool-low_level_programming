#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: a pointer;
 * @n: the list;
 * Return: the addres of the new element, or NULL if it fails;
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	*head = newNode;
	return (newNode);
}
