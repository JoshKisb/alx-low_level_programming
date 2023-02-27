#include "main.h"

/**
 * rev_string -reverse a string
 * @s: The string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;
	char *orig = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = orig[i];
		orig[i] = orig[len - i - 1];
		orig[len - i - 1] = tmp;
	}
}
