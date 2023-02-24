#include "main.h"

/**
 * print_line - print lines
 * @n: the length of the line
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
