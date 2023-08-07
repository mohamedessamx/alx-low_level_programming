#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max byte to use
 * Return: ointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int str;

	for (str = 0; n > 0; str++, n--)
		s[str] = b;
	return (s);
}
