#include "main.h"

/**
 * _strlen_recursion - calc string length
 * @s: The string to calculate length for
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check if is palindrome
 * @s: The string
 * @n: The index of matching char
 *
 * Return: int
 */
int check_palindrome(char *s, int n)
{
	if (n < 1)
		return (1);
	if (s[0] == s[n] && check_palindrome(s + 1, n - 2))
		return (1);
	return (0);
}

/**
 * is_palindrome - determine if string is palindrone
 * @s: The string
 *
 * Return: 1 if is palindrone 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return (check_palindrome(s, len - 1));
}
