#include "main.h"

/**
 * string_toupper - convert to uppercase
 * @str: The string to convert
 *
 * Return: *str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'A' + (str[i] - 'a');
	}

	return (str);
}
