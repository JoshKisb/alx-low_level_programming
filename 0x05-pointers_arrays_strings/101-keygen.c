#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TARGET_CHECKSUM 2772

/**
 * main - generate valid password
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));
	int checksum = 0, ch;
	char str[100] = "";
	int length = 0;

	while (TARGET_CHECKSUM - checksum > 120)
	{
		ch = rand() % (127 - 33) + 33;
		str[length++] = ch;

		checksum += ch;
	}

	str[length++] = TARGET_CHECKSUM - checksum;
	str[length] = '\0';

	printf("%s", str);
	return (0);
}
