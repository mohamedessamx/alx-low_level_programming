#include "main.h"
/**
 * _memcpy -  function that copies memory area.
 * @dest: memory area
 * @src: sorce
 * @n: length of src to be copied
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int str;

	for (str = 0; n > str; str++)
		dest[str] = src[str];
	return (dest);
}
