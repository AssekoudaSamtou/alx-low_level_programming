#include <stdio.h>
#include <stdarg.h>

/**
 *  print_numbers- prints numbers, followed by a new line.
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int number;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);

		printf("%d%s", number, separator && (i < n - 1) ? separator : "");
	}
	printf("\n");
}
