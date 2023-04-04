#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 *		nth node of a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: the index of the node.
 * Return: NULL, if node does not exist, else, the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
