#include <stdlib.h>
#include "lists.h"
#include <string.h>

int _strlen(char *s);

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: The head of the linked list
 * @n: Value of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
