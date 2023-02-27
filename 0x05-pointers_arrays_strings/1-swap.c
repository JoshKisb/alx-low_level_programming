#include "main.h"

/**
 * swap_int - swap value between 2 vars
 * @a: The first var
 * @b: The second var
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
