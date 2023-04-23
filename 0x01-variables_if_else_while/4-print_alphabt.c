#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	printf("The alphabet is: \n");

	for (alpha = 97; alpha < 123; alpha++)
	{
		if (alpha == 101 && alpha == 113)
		{
			continue;
		putchar(alpha);
		}
	}
		putchar('\n');
		return (0);
}
