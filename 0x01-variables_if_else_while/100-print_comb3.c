include <stdio.h>

/**
 * main - entrypoint
 *
 * Description: 
 *
 * Return: always 0 (success)
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
						putcar(' ');
					}
				}
				y++;
			}
		x++;
	}
	putchar('\n');

        return (0);
}   
