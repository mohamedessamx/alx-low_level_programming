#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 *		to make change for an amount of money.
 * @argc: int
 * @argv: list
 * Return: 0 sucess, non-zero-fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				leastcents += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
					break;
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
