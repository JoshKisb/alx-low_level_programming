#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		int letter = 97;

		while (letter < 123)
			_putchar(letter++);

		_putchar('\n');
	}
}
