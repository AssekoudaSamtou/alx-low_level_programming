#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array to create
 * @c: first element of the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return NULL;

	ptr[0] = c;

	return ptr;
}
