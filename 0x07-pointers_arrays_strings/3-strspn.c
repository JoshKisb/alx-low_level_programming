#include "main.h"

/**
 * _strspn - legnth of match for chars in accept in string
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: length of the match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, match;

	for (; *s != '\0'; s++)
	{
		match = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (match)
			len++;
		else if (len > 0)
			break;
	}

	return (len);
}
