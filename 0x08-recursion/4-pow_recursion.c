#include "main.h"

/**
 * _pow_recursion - calc number to a power
 * @x: The number
 * @y: The power
 *
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
