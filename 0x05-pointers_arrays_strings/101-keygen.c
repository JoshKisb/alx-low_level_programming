#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHECKSUM_TARGET 2772

/**
 * main - generate valid password
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));
	char str[100];
	int checksum = 0;

	do {
		/* Generate a random string */
		for (int i = 0; i < 99; i++)
		{
			/* Generate a random ASCII character between 32 and 126 */
			str[i] = rand() % 94 + 32;
		}
		str[99] = '\0';

		/* Calculate the checksum */
		checksum = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			checksum += (int) str[i];
		}

	} while (checksum != CHECKSUM_TARGET); /* generate strings til checksum got */

	printf("%s", str);
	return (0);
}
