#include <main.h>

/**
 * main - start of code
 * code that checks for uppercase character
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
