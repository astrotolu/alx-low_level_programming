#include "main.h"

/**
 * main - start of code
 * code that prints every other character of a strin
 * Return: every other character of a string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
