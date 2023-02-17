#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the ascii alphabet except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		if (letter != 101 && letter != 113)
			putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
