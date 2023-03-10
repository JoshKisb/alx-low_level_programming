#include "main.h"

/**
 * _puts - print a str
 * @s: The string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
