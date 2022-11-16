#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array reference
 * @size: size of the array
 * @action: function to execute
 *
 * Return: Always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int len, i;

	len = (int)size;

	if (array == NULL || action  == NULL)
		return;

	for (i = 0; i < len; i++)
	{
		action(*(array + i));
	}
}
