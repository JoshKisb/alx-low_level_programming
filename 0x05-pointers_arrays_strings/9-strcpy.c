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

	do {
		*dest = *src;
		src++;
		dest++;
	} while (*src != '\0');

	return (orig);
}
