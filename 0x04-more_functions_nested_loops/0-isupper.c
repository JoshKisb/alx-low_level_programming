#include "main.h"

/**
 * _isupper - print if character is lowercase
 * @c: The character to test
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
