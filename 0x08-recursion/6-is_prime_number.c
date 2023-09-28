/**
 * is_prime - checks if a number is prime recursively
 * @n: the number to check
 * @m: the divisor to check
 *
 * Return: 0 if not prime, 1 if prime
 */
int is_prime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n <= 1 || (n % m == 0 && m > 1))
	{
		return (0);
	}
	else
	{
		return (is_prime(n, m - 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
