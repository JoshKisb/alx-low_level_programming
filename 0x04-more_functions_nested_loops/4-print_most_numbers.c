#include "main.h"

/**
 * print_most_numbers - print the alphabet
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int letter = '0';

	while (letter <= '9')
	{
		if (letter != '2' && letter != '4')
			_putchar(letter++);
	}

	_putchar('\n');
}
