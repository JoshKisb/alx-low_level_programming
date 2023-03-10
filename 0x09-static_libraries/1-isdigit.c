#include "main.h"

/**
 * _isdigit - print if character is digit
 * @c: The character to test
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
