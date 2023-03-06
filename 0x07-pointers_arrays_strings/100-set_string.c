#include "main.h"
#include <stdio.h>
/**
 * set_string - set string value
 * @s: The address of pointer
 * @to: The value to set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
