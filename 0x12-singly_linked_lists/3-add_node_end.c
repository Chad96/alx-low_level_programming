#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of the linked list it adds a new node
 * @head:it is a two times pointer to the list_t
 * @str: it is the string to put in a new/latest node
 *
 * Return - returns the address to the new element or NULL if it does not pass
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
