#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: int
 * @size: int
 * @Return: ptr on success, NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
int *ptr;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
ptr = malloc(sizeof(size) * nmemb);
if (ptr == 0)
{
	return (NULL);
}
for (; i < nmemb; i++)
{
	ptr[i] = 0;
}
ptr[i] = '\0';
return (ptr);
}
