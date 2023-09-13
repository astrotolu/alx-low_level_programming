#include "main.h"

/** 
 * main - starts code
 * Write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {45, 56, 879, 4523, 654, 509, 123};
	int i, array_length;

	array_length = sizeof(arr) / sizeof(int);
	for(i = 0; i < array_length; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
	return (0);
}
