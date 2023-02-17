#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the ascii numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number < 58)
		putchar(number++);

	putchar('\n');

	return (0);
}
