#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * code that swaps the values of two integers
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
