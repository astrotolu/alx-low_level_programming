#include <stdio.h>

/**
 * main - start of code
 * code that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower_alpha[i]);
	}
	putchar('\n');
	return (0);
}
