#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers till 98
 * @n: the number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int current = n;

	if (n > 98)
	{
		while (current >= 98)
		{
			if (current < n)
				printf(", ");
			printf("%d", current--);
		}
	}
	else
	{
		while (current <= 98)
		{
			if (current > n)
				printf(", ");
			printf("%d", current++);
		}
	}

	printf("\n");
}
