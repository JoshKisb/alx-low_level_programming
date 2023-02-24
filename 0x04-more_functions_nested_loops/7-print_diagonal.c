#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: the length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
		_putchar('\n');

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < row; col++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}
