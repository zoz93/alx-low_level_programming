#include "lists.h"

/**
 * add_nodeint -entry point.
 * @head:value pointer to pointer.
 * @n: value
 * Return: always 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
