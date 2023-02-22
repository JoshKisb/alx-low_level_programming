#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print fibonnacci to 50
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long current_fib, previous_fib, temp_fib;
	unsigned long current_fib_high, current_fib_low;
	unsigned long previous_fib_high, previous_fib_low, i;

	previous_fib = 1;
	current_fib = 2;

	printf("%ld", previous_fib);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", current_fib);
		temp_fib = current_fib;
		current_fib = previous_fib + current_fib;
		previous_fib = temp_fib;
	}

	previous_fib_high = previous_fib / 1000000000;
	previous_fib_low = previous_fib % 1000000000;
	current_fib_high = current_fib / 1000000000;
	current_fib_low = current_fib % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", current_fib_high + (current_fib_low / 1000000000));
		printf("%09lu", current_fib_low % 1000000000);
		current_fib_high = current_fib_high + previous_fib_high;
		previous_fib_high = current_fib_high - previous_fib_high;
		current_fib_low = current_fib_low + previous_fib_low;
		previous_fib_low = current_fib_low - previous_fib_low;
	}

	printf("\n");

	return (0);
}
