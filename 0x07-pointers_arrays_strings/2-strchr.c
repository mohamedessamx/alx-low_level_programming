#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string search in it
 * @c: character searching for
 * Return: first occurrence of the character @c in the string @s
 */
char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; s[str] >= '\0' ; str++)
	{
		if (s[str] == c)
			return (s + str);
	}
	return ('\0');
}
