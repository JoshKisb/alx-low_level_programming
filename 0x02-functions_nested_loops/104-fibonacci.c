#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print fibonnacci to 50
 * Return: 0 (Success)
 */
int main(void)
{
	long curr_fib, prev_fib, temp_fib;
	long curr_fib_high, curr_fib_low;
	long prev_fib_high, prev_fib_low, i;

	prev_fib = 1;
	curr_fib = 2;

	printf("%lu", prev_fib);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", curr_fib);
		temp_fib = curr_fib;
		curr_fib = prev_fib + curr_fib;
		prev_fib = temp_fib;
	}

	prev_fib_high = prev_fib / 1000000000;
	prev_fib_low = prev_fib % 1000000000;
	curr_fib_high = curr_fib / 1000000000;
	curr_fib_low = curr_fib % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", curr_fib_high + (curr_fib_low / 1000000000));
		printf("%09lu", curr_fib_low % 1000000000);
		curr_fib_high = curr_fib_high + prev_fib_high;
		prev_fib_high = curr_fib_high - prev_fib_high;
		curr_fib_low = curr_fib_low + prev_fib_low;
		prev_fib_low = curr_fib_low - prev_fib_low;
	}

	printf("\n");

	return (0);
}
