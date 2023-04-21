#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	double d;
	long int e;
	long long int f;

	printf("The size of int is %lu byte(s)\n", sizeof(a));
	printf("The size of char is %lu byte(s)\n", sizeof(b));
	printf("The size of float is %lu byte(s)\n", sizeof(c));
	printf("The size of double is %lu byte(s)\n", sizeof(d));
	printf("The size of long int is %lu byte(s)\n", sizeof(e));
	printf("The size of long long int is %lu byte(s)\n", sizeof(f));
	return (0);
}



