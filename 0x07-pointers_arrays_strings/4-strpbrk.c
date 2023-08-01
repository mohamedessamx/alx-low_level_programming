#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: gg
 * @accept: ll
 * Return: pointer to the byte in @s that matches one of the bytes in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int s_len = strlen(s);
	int accept_len = strlen(accept);
	
	for (int i = 0; i < s_len; i++)
	{
		for (int j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
				return &s[i];
		}
	}
	return (NULL);
}
