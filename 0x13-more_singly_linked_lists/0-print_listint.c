#include "lists.h"

/**
 * print_listint - entry point.
 * @h:value.
 * Return: always 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
