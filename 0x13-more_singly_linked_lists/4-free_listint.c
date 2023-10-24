#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - sets a linked list free.
 * @head: listint_t list to be set  free.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
