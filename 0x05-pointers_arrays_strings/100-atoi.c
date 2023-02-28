#include "main.h"

/**
 * _atoi - covert a string to a number
 * @s: The string to covert to number
 *
 * Return: (int) the converted number
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, start = 0;

	while (*s != '\0')
	{

		if (*s >= '0' && *s <= '9')
		{
			if (!start)
			{
				num = (*s) - '0';
				start = 1;
			}
			else
			{
				num *= 10;
				num += (*s) - '0';
			}
		}
		if (start && (*s < '0' || *s > '9'))
			break;

		if (!start && *s == '-')
			sign = -sign;

		s++;
	}

	if (sign == -1)
		num = -num;

	return (num);
}
