#include "lists.h"

/**
 * listint_len -entry point.
 * @h:value.
 * Return: always 0 (success)
 */
size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
