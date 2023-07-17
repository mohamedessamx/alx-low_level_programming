#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible different
 *		combinations of two digit.
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0, y;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
				if (x != y && x < y)
				{
					putchar(x + 48);
					putchar(y + 48);

					if (x + y != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
