#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the ascii alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 122;

	while (letter > 96)
		putchar(letter--);

	putchar('\n');

	return (0);
}
