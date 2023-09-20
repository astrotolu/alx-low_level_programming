#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * code that prints every other character of a strin
 * Return: every other character of a string
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
