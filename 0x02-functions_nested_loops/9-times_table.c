#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0, col = 0;

	while (row < 10)
	{
		col = 0;

		while (col < 10)
		{
			int n = row * col;

			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (n > 9)
				_putchar('0' + n / 10);
			else if (col > 0)
				_putchar(' ');
			_putchar('0' + n % 10);
			col++;
		}

		_putchar('\n');
		row++;
	}
}
