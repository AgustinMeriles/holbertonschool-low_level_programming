#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: a pointer;
 * @n: the new node int;
 * Return: address of the new element, or NULL if it failed;
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *ultPos;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		ultPos = *head;
		while (ultPos->next != NULL)
			ultPos = ultPos->next;
		ultPos->next = newNode;
	}

	return (*head);
}
