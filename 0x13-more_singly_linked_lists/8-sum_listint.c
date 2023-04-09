#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 *		all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * Return: 0 if list is empty, else, return sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}