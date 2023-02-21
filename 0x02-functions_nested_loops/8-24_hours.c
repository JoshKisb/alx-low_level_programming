#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0, min = 0;

	while (hour < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
			min++;
		}

		hour++;
	}
}
