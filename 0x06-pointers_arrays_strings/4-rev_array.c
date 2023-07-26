#include "main.h"
/**
 * reverse_array - function that reverses the content
 *		of an array of integers.
 * @a: an array of integers
 * @n: the number of element to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, l;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		l = a[i];
		a[i] = a[j];
		a[j] = l;
	}
}
