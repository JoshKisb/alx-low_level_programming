#include "main.h"

/**
 * print_number - print a number using _purchar
 * @n: The number to print
 *
 * Desription: Theres probably an easier way but m tired
 * Return: void
 */
void print_number(int n)
{
	int rem = n, digit, div = 1;

	/* absolute value for negatives */
	if (rem < 0)
	{
		rem = -rem;
		_putchar('-');
	}


	do {
		digit = rem / div;

		while (digit > 9)
		{
			digit = digit / 10;
			div *= 10;
		}

		rem = rem % div;
		if (div >= 10)
			_putchar('0' + digit);
		if (div <= 10)
			_putchar('0' + rem);


		div /= 10;
	} while (div >= 10);
}
