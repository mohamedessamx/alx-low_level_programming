#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int n, i, row;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				n = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
