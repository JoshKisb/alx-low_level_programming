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
	if (argc < 3)
		printf("Error\n");

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
