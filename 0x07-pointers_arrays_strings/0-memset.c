#include "main.h"

/**
 * _memset - fill memory with value
 * @s: The memory address start
 * @b: The char to fill the memory
 * @n: The size of the memory
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
