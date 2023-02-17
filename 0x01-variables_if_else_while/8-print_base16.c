#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the numbers of base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 48;

	while (letter < 58)
		putchar(letter++);

	for (letter = 97; letter < 103; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
