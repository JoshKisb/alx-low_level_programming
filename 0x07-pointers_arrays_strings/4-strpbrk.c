#include "main.h"

/**
 * _strpbrk - search for chars in accept in string
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: the first match addr or NULL for no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	return (NULL);
}
