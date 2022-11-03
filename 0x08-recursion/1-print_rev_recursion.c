#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string
 *
 * Return: void
 *
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int last_char_pos = len - 1;

	if (len == 0)
	{
		return;
	}
	
	_putchar(*(s + last_char_pos));	
	
	*(s + last_char_pos) = '\0';
	
	_print_rev_recursion((s + 1));
}
