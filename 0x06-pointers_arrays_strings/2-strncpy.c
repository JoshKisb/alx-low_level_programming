#include "main.h"

/**
 * _strncpy - copy a str with limit
 * @dest: The string to copy to
 * @src: The string to copy from
 * @n: the max number of chars to copy
 *
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *orig = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
	}

	return (orig);
}
