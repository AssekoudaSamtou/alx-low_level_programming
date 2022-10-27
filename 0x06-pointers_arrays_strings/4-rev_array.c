#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to the array
 *
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int *ptr;

	ptr = (int *)malloc(n * sizeof(int));

	for (i = n - 1; i >= 0; i--)
	{
		ptr[n - i - 1] = *(a + i);
	}

	for (i = 0; i < n; i++)
	{
		a[i] = *(ptr + i);
	}
}
