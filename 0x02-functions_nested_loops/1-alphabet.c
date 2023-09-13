#include "main.h"

/**
 * main - starts of code
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Returns: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lower_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(lower_alpha[i]);
	}
	_putchar('\n');
	return (0);
}
