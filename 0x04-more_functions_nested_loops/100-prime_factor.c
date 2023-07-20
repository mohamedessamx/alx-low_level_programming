#include <stdio.h>
/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root of x
 */
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}

	return (sqrt);
}
/**
 * larg_prime_factor - finds and prints the largest
 *		prime factor of number (num)
 * @num: number to find
 */
void larg_prime_factor(long int num)
{
	int prnum, larg;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (prnum = 3; prnum <= _sqrt(num); prnum++)
	{
		while (num % prnum == 0)
		{
			num = num / prnum;
			larg = prnum;
		}
	}

	if (num > 2)
		larg = num;
	printf("%d\n", larg);
}
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	larg_prime_factor(612852475143);

	return (0);
}
