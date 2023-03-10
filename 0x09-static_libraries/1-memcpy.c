#include "main.h"

/**
 * _memcpy - copy memory contents
 * @dest: The memory address to copy to
 * @src: The memory address to copy from
 * @n: The size of the memory
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (src == dest)
		return (dest);

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
