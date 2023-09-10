#include <stdio.h>

/**
 * main - start of code
 * code that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}
