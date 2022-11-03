int test(int n, int x);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (test(n, n - 1));
}

/**
 * test - test
 *
 * @n: int
 *
 * @x: int
 *
 * Return: int
 */
int test(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);

	return (test(n, x - 1));
}
