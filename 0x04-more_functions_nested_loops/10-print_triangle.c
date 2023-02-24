#include "main.h"

/**
 * print_triangle - print triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			if (col >= (size - row))
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}

}
