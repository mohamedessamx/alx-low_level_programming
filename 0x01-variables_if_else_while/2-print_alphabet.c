#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
