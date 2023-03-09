#include "main.h"


/**
 * sqrt_search - try guess the sqrt
 * @x: The guess
 * @n: The number
 *
 * Return: int
 */
int sqrt_search(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (sqrt_search(x + 1, n));
}

/**
 * _sqrt_recursion - calc sqrt of a number
 * @n: The number
 *
 * Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_search(1, n));
}
