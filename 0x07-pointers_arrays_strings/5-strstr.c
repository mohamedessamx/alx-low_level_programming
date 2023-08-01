#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: gg
 * @needle: lolo
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);

	if (needle_len > haystack_len)
	{
		return (NULL);
	}
	for (int i = 0; i <= haystack_len - needle_len; i++)
	{
		if (strncmp(haystack + i, needle, needle_len) == 0)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
