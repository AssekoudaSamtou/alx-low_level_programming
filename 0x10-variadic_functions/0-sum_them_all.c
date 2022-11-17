#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameter items
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = n; i > 0; i--)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
