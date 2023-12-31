#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements's number in the linked list
 * @h: points to the list_t list
 *
 * Return - the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
