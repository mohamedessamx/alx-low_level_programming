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
	char delimiter[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i <= 13; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
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
	int f = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
		else if (islower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (ptr);
}
