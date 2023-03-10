#include "main.h"

/**
 * _abs - compute the absolute value of a number
 * @n: The number to compute absolute value for
 *
 * Return: int, the asolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
