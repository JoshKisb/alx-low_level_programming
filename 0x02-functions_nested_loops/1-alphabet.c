#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the ascii alphabet using _putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97;

	while (letter < 123)
		_putchar(letter++);

	_putchar('\n');

	return (0);
}
