#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 3 digit number combos seperated by comma
 * Return: 0 (Success)
 */
int main(void)
{
	int letter1 = 48, letter2, letter3;

	while (letter1 < 58)
	{
		letter2 = letter1 + 1;
		while (letter2 < 58)
		{
			letter3 = letter2 + 1;
			while (letter3 < 58)
			{
				if (!(letter1 == 48 && letter2 == 49 && letter3 == 50))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(letter1);
				putchar(letter2);
				putchar(letter3++);
			}
			letter2++;
		}
		letter1++;
	}

	putchar('\n');

	return (0);
}
