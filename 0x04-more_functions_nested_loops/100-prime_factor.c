#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long num = 612852475143, p = 2;

	while (num > (p * p))
	{
		if (num % p == 0)
		{
			num = num / p;
		}
		else
		{
			p += 1;
		}
	}
	printf("%lu\n", num);
	return (0);
}
