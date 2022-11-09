#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: A pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;
	int *arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(ptr) * height);

	for (i = 0; i < height; i++)
	{
		arr = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
		{
			arr[j] = 0;
		}

		ptr[i] = arr;
	}
	return (ptr);
}
