#include "main.h"

/**
 * main - start of code
 * code that computes the absolute value of an integer.
 * Return: Always 0 (Success)
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
