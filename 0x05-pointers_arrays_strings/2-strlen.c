#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
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
