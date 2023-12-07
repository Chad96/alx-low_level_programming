#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (; index > 0 && current; index--)
		current = current->next;

	if (!current)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	if (current->next)
		current->next->prev = temp;
	free(current);
	return (1);
}
