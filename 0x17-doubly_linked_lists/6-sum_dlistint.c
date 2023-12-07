#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - Return the sum of all the data (n).
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data, 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
