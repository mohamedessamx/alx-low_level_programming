#include "main.h"
/**
 * is_prime_number -  function that returns 1 if the input integer is
 *			a prime number, otherwise return 0.
 * @n: int number
 * @x: int
 * Return: 1 if true, 0 otherwise
 */
int check(int n, int x);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - check if prime
 * @n: int
 * @x: int
 * Return: int
 */
int check(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, x + 1));
	}
}
