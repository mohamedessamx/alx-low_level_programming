#include<stdio.h>

/**
 * main - Entry point
 * Description: print the type of number negative or positive or equal zreo.
 * Return: 1 (success)
 */

int main(void)
{
	int n;

	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	return (0);
}
