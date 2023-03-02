#include "main.h"

/**
 * leet - convert to l337 speak
 * @str: The string to convert
 *
 * Return: *str
 */
char *leet(char *str)
{
	int i, j;
	char leets[] = {'a', 'e', 'o', 't', 'l'};
	char replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leets[j] ||  str[i] == (leets[j] - 'a') + 'A')
			{
				str[i] = replacer[j];
				break;
			}
		}
	}

	return (str);
}
