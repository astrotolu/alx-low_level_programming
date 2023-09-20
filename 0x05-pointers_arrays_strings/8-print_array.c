#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * code that prints n elements of an array of integers
 * Return: every other character of a string
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
