#include "main.h"

/**
 * factorial - calc factorial of a number
 * @n: The number to calculate factorial for
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
