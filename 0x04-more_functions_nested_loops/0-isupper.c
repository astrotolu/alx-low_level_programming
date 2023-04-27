#include "alx_school.h"

/**
 * _isupper - Checks alx_school.h
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is uppercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			upper = 1;
	}

	return (upper);
}


