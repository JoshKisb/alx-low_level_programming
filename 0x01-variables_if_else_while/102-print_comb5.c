#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 2 2 digit number combos seperated by comma
 * Return: 0 (Success)
 */
int main(void)
{
	int num1 = 0, num2 = 1;

	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			if (!(num1 == 0 && num2 == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar((num1 / 10) + 48);
			putchar((num1 % 10) + 48);
			putchar(' ');
			putchar((num2 / 10) + 48);
			putchar((num2 % 10) + 48);

			num2++;
		}
		num1++;
	}

	putchar('\n');

	return (0);
}
