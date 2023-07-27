#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: input integer
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int l;

	l = n;

	if (n < 0)
	{
		_putchar('-');
		l = -n;
	}
	if (l / 10 != 0)
	{
		print_number(l / 10);
	}
	_putchar((l % 10) + '0');
}
