#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print sum of multiple
 * Return: 0 (Success)
 */
int main(void)
{
	int sum = 0, i = 3;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
