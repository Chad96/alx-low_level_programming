#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the data.
 * @head: node 1 of the linked list.
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
