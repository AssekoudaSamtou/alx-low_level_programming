#include <stdio.h>
#include <ctype.h>

/*
 * _isupper - check if a character is uppercase or not
 *
 * Return: 1 if c is uppercase, O otherwise
 */
int _isupper(int c)
{
	unsigned int result = isupper(c);

	if (result == 0)
		return (0);
	else
		return (1);
}
