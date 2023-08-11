#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = min + max + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
