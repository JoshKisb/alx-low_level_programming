#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the ascii alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97;

	while (letter < 123)
		putchar(letter++);

	for (letter = 65; letter < 91; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
