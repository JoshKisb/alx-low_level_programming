#include "main.h"

/**
 * puts2 - print every other char in  str
 * @str: The string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int shouldPrint = 1;

	while (*str != '\0')
	{
		if (shouldPrint)
		{
			_putchar(*str);
			shouldPrint = 0;
		}
		else
		{
			shouldPrint = 1;
		}
		str++;
	}
	_putchar('\n');
}
