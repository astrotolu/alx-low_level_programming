#include "main.h"

/**
 * main - start of code
 * code that prints the last digit of a number.
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int i;

	i = num % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
