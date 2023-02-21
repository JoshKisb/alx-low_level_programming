#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
		_putchar(letter++);

	_putchar('\n');
}
