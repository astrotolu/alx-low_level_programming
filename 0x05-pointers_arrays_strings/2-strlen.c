#include "main.h"

/**
 * main - start of code
 * code returns the length of a string.
 * Return: length of a string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
