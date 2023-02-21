#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print fibonnacci to 50
 * Return: 0 (Success)
 */
int main(void)
{
	long curr = 2, prev = 1, count = 2, tmp;

	printf("1, 2");

	while (count <= 50)
	{
		tmp = curr;
		curr += prev;
		prev = tmp;
		count++;

		printf(", %ld", curr);
	}
	printf("\n");
	return (0);
}
