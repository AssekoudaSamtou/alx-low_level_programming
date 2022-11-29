#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the linked list
 *
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h)
	do {
		count += 1;
		h = h->next;
	} while (h != NULL);

	return (count);
}
