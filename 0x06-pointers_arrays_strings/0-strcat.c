#include "main.h"

/**
 * _strcat - concat a str
 * @dest: The string to concat to
 * @src: The string to copy from
 *
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	char *orig = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (orig);
}
