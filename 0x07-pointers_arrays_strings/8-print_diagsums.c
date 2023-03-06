#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in 2d array
 * @a: The 2d array
 * @size: The size of the 2d array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[size - i - 1][size - i - 1];
	}
	printf("%d, %d", sum1, sum2);
}
