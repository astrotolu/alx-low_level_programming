#include <stdio.h>

/**
 * main - starts code
 * code that prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (lower_alpha[i] != 'e' && lower_alpha[i] != 'q')
		{
			putchar(lower_alpha[i]);
		}
	}
	putchar('\n');
	return (0);
}
