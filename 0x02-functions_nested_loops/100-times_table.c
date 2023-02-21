#include "main.h"

/**
 * print_times_table - print the times table to a limit
 * @n: The limit to print until
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row = 0, col = 0;

	if (n < 15 && n > 0)
	{
		while (row <= n)
		{
			col = 0;

			while (col <= n)
			{
				int mul = row * col;

				if (col > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (mul > 99)
				{
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul / 10) % 10));
				}
				else if (col > 0)
				{
					_putchar(' ');
				}
				if (mul > 9 && mul < 100)
					_putchar('0' + (mul / 10));
				else if (col > 0 && mul < 99)
					_putchar(' ');
				_putchar('0' + (mul % 10));
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
}
