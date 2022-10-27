#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: char
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		if (islower(s[i]))
			*(s + i) = toupper(s[i]);
	}
	return (s);
}
