#include "main.h"

/**
 * print_square - print diagonal line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');

		_putchar('\n');
	}

}
