#include "main.h"

/**
 * puts_half - print half a string
 * @str: The string to print from
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;
	char *s = str;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = ((len - (len % 2)) / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
