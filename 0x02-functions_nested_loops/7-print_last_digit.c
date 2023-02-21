#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: The number to print the last digit of
 *
 * Return: int, the last digit
 */
int print_last_digit(int n)
{
	int abs = n, last_digit;

	if (n < 0)
		abs = n * -1;

	last_digit = abs % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
