#include "main.h"
/**
 * _sqrt_recursion -  natural square root of a number
 * @n: input number
 * @val: square root
 * Return: the root of number
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - find the square root
 * @n: int to find the square root
 * @val: square root
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
