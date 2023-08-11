#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: first number in the returned array.
 * @max: max num in the retured array
 * Return: a pointer.
 */
int *array_range(int min, int max)
{
int *ptr;
int size, i;

if (min > max)
{
	return (NULL);
}
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
	return (NULL);
for (i = 0 ; i < size ; i++)
{
if (min > max)
	break;
ptr[i] = min;
min++;
}
return (ptr);
}
