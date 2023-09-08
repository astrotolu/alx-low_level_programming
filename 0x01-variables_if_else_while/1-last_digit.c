#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start of code
 * code will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		pritnf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 5\n", n, r);
	}
	return (0);
}
