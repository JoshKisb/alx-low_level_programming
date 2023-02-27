#include "main.h"

/**
 * _strcpy - copy a str
 * @dest: The string to copy to
 * @src: The string to copy from
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	char *orig = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (orig);
}
