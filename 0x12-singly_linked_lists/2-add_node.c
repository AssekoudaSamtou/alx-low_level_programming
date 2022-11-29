#include <stdlib.h>
#include "lists.h"
#include <string.h>

int _strlen(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The head of the linked list
 * @str: Value of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(new->str);
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
