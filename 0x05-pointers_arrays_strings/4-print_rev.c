#include "main.h"

/**
 * main - start of code
 * code that prints a string, in reverse
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}

	for (counter--; counter >= 0; counter--)
		_putchar(s[counter]);
	_putchar('\n');
}
