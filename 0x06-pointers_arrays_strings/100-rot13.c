#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @l: input string
 * Return: encoded string
 */

char *rot13(char *l)
{
	int i;

	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = l;

	while (*l)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*l == rot[i])
			{
				*l = Rot[i];
				break;
			}
		}
		l++;
	}
	return (ptr);
}
