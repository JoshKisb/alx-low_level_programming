#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}


	return (*s1 - *s2);
}
