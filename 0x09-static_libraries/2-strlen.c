#include "main.h"

/**
 * _strlen - get length of str
 * @s: The string to get length of
 *
 * Return: int the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
