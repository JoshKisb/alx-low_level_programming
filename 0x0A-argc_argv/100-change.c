#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: The array of args
 *
 * Description: print the number of args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int centValues[] = {25, 10, 5, 2, 1};
	int total = 0, i, coins, cents, totalCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (cents >= centValues[i])
		{
			coins = cents / centValues[i];
			total += coins * centValues[i];
			cents -= (coins * centValues[i]);
			totalCoins += coins;
		}
	}
	printf("%d\n", totalCoins);
	return (0);
}
