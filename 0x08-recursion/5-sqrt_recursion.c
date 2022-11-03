int test(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
/*	if (n == 0)
		return (0);
	
	if (n == 1)
		return (1);*/
	
	return (test(n, n));
}

int test(int n, int x)
{
	int square = x * x;

	if (x < 0)
		return (-1);

	if (square == n)
		return (x);

	return (test(n, x - 1));
}
