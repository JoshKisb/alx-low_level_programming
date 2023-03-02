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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		*dest = '\0';

	return (dest);
}
