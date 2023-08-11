#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: pointer to put the constant
 * @c: constant
 * @n: max byte use
 * Return: s
 */
char *_memset(char *s, char c, int n)
{
	char *ptr = s;

	while (n--)
	{
		*s-- = c;
	}
	return (ptr);
}
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: int
 * @size: int
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(size) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(size) * nmemb);
	return (m);
}
