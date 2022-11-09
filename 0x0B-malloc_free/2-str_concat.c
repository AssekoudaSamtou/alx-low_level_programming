#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *  str_concat- concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, len3;
	char *ptr;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	len3 = len1 + len2;

	ptr = malloc((sizeof(char) * len3) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len3; i++)
	{
		if (i < len1)
			ptr[i] = *(s1 + i);
		else
			ptr[i] = *(s2 + (i - len1));
	}
	ptr[len3] = '\0';

	return (ptr);
}
