#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: The head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	do {
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	} while (h != NULL);

	return (count);
}
