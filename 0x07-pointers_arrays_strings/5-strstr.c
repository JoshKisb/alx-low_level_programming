#include "main.h"

/**
 * _strstr - search for substr in string
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: the first match addr or NULL for no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, match;

	for (; *haystack != '\0'; haystack++)
	{
		match = 1;

		for (i = 0; needle[i] != '\0' && haystack[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
			{
				match = 0;
				break;
			}
		}

		if (match)
			return (haystack);
	}

	return (NULL);
}
