#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: the string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
