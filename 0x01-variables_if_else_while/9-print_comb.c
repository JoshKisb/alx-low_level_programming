#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers seperated by comma
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 48;

	while (letter < 58)
	{
		if (letter > 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(letter++);
	}

	putchar('\n');

	return (0);
}
