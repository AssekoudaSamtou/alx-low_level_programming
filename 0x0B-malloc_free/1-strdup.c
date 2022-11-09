#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	len = strlen(str);
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = *(str + i);
	}
	ptr[len] = '\0';

	return (ptr);
}
