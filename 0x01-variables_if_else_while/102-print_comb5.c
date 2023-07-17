#include <stdio.h>

/**
 * main - Entry point
 * Description:
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0, y;

	while (x <= 99)
	{
		y = x;
		while (y <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (x != 98 || y != 99)
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
