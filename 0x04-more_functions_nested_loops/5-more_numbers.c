#include "main.h"

/**
 * more_numbers - print the alphabet
 *
 * Description: print the ascii alphabet using _putchar
 * Return: void
 */
void more_numbers(void)
{
	int num = 0, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar('0' + (num / 10));
			_putchar('0' + (num % 10));
		}
	}
	_putchar('\n');
}
