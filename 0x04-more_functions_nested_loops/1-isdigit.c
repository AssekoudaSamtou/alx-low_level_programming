#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: The int to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	unsigned int result = isdigit(c);

	if (result == 0)
		return (0);
	else
		return (1);
}
