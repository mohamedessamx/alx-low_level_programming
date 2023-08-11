#include "main.h"
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: int
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
