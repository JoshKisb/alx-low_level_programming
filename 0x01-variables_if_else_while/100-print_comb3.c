#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 2 digit number combos seperated by comma
 * Return: 0 (Success)
 */
int main(void)
{
	int letter1 = 48, letter2 = 49;

	while (letter1 < 58)
	{
		letter2 = letter1 + 1;
		while (letter2 < 58)
		{
			if (!(letter1 == 48 && letter2 == 49))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(letter1);
			putchar(letter2++);
		}
		letter1++;
	}

	putchar('\n');

	return (0);
}
