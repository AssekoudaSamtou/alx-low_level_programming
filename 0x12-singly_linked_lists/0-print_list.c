#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: The head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	do {
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count += 1;
		h = h->next;
	} while (h != NULL);

	return (count);
}
