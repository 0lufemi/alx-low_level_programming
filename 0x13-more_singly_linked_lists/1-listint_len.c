#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: head of the list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
