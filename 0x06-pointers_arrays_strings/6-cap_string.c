#include "main.h"

/**
 * cap_string - capitalize a string
 * @str: The string to capitalize
 *
 * Return: *str
 */
char *cap_string(char *str)
{
	int i, cap = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'A' + (str[i] - 'a');

		if (str[i] == ' '
			|| str[i] == '\t'
			|| str[i] == '\n'
			|| str[i] == ','
			|| str[i] == ';'
			|| str[i] == '.'
			|| str[i] == '!'
			|| str[i] == '?'
			|| str[i] == '"'
			|| str[i] == '('
			|| str[i] == ')'
			|| str[i] == '{'
			|| str[i] == '}'
		)
			cap = 1;
		else
			cap = 0;

	}

	return (str);
}
