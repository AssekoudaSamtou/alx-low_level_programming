#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: The array inside we gonna look for the index
 * @size: The array size
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp != NULL && array != NULL && cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
