#include "main.h"

/**
 * print_numbers - print the alphabet
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void print_numbers(void)
{
	int letter = '0';

	while (letter <= '9')
		_putchar(letter++);

	_putchar('\n');
}
