#include <stdio.h>

/**
 * main - entry point
 * Description: print 0-9 using putchar
 *		while using int variable
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
