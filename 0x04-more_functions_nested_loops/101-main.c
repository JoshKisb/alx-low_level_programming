#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    print_number(3);
    _putchar('\n');
	printf("INT_MIN: %d\n", INT_MIN);
	print_number(INT_MIN);
	_putchar('\n');
    return (0);
}
