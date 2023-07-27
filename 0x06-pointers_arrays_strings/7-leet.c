#include "main.h"

/**
 * leet - encode string into 1337
 * @c: string
 * Return: string that is encoded
 */

char *leet(char *c)
{
	char *cp = c;
	char lo[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(lo) / sizeof(char); i++)
		{
			if (*c == lo[i] || *c == lo[i] + 32)
				*c = 48 + v[i];
		}
		c++;
	}
	return (cp);
}
