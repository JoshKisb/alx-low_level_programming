#include "main.h"

/**
 * _strchr - search for char in string
 * @s: The string to search
 * @c: The char to search for
 *
 * Return: location of first match or NULL if not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
