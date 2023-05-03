#include "lists.h"

/**
 * pop_listint - entry point.
 * @head:pointer value.
 * Return: always 0 (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head)
	{
		n = (*head)->n;
		node = (*head)->next;
		free(*head);
		*head = node;
		return (n);
	}
	return (0);
}
