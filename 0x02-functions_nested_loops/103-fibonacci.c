#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: calc sum of even fibonnacci to 4m
 * Return: 0 (Success)
 */
int main(void)
{
	long curr = 2, prev = 1, sum = 2, tmp;

	while (curr < 4000000)
	{
		tmp = curr;
		curr += prev;
		prev = tmp;

		if (curr % 2 == 0)
			sum += curr;

	}
	printf("%ld\n", sum);
	return (0);
}
