#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a', mo = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (mo <= 'Z')
	{
		putchar(mo);
		mo++;
	}
	putchar('\n');

	return (0);
}
