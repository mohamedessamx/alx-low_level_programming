#include "main.h"
#include <stdio.h>
/**
 * islower - determine whether ascii is lower
 * @c: character
 * Return: 1 if true, 0 if false
 *
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - detrmine whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: gg
 * Return: string
 */
char *cap_string(char *str)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (islower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}