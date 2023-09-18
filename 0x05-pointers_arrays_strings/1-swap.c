#include "main.h"

/**
 *main - start of code
 *code that swaps the values of two integers
 *Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
