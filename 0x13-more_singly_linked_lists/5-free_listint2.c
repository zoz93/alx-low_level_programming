#include "lists.h"

/**
 * free_listint2 - entry point.
 * @head:pointer value.
 * Return: always 0 (Success)
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		if (*head)
		{
			while (*head != NULL)
			{
				node = *head;
				*head = (*head)->next;
				free(node);
			}
		}
		*head = NULL;
	}
}
