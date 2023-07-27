#include "main.h"
/**
 * isprinttableascii - determine if n is a printable ASCII chat
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isprinttableascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printhexes - print tex values for string b in formatted form
 * @b: gg
 * @start: gg
 * @end: ll
 */
void printhexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
		{
			printf("%02x", *(b + start + i));
		}
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printascii - print ascii value for string b,
 *	formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: gg
 * @end: ll
 */
void printascii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprinttableascii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print a buffer
 * @b: buffer pointer
 * @size: size in bytes of buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printhexes(b, start, end);
			printascii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");

}
