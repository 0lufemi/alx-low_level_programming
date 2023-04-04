#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 *				given position.
 * @head: pointer to the address of the head of the listint_t list.
 * @idx: index of the list where the new node should be added.
 * @n: new node.
 * Return: NULL if failed, else address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *clone = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = clone;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (clone == NULL || clone->next == NULL)
			return (NULL);

		clone = clone->next;
	}

	new->next = clone->next;
	clone->next = new;

	return (new);
}
