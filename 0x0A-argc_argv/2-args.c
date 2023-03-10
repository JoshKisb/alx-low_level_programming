#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: The array of args
 *
 * Description: print all of the args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
