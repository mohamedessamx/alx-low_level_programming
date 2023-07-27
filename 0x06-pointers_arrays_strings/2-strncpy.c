#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer to destination string input
 * @src: pointer to source input
 * @n: bytes of @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
