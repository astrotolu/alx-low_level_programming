#include "main.h"

/**
 * main - start of code
 * code that prints a string, followed by a new line, to stdout.
 * Return: a string
 */
void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter++;
	}
}
