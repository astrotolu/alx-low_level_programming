#include <unistd.h>
#include "alx_school.h"

/**
 * main - Entry point
 * Description: It prints the word ALX SCHOOL, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[10] = "ALX SCHOOL";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
