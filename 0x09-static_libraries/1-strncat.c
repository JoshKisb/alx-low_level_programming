#include "main.h"

/**
 * _strncat - concat a str with limit
 * @dest: The string to concat to
 * @src: The string to copy from
 * @n: the max number of chars to copy
 *
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *orig = dest;
	int i = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';

	return (orig);
}
