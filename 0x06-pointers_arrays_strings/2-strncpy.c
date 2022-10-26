#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: destnation var
 *
 * @src: source var
 *
 * @n: limit
 *
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
