#include "main.h"


/**
 * check_prime - check if is prime
 * @x: The guess
 * @n: The number
 *
 * Return: int
 */
int check_prime(int x, int n)
{
	if (n % x == 0)
		return (0);
	if (x > n / 2)
		return (1);
	return (check_prime(x + 1, n));
}

/**
 * is_prime_number - determine if number is prime
 * @n: The number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}
