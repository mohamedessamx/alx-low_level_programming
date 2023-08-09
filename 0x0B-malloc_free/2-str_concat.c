#include "main.h"
#include <stdlib.h>
/**
 * str_concat - bbe
 * @s1: ff
 * @s2: gg
 * Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	ar = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ar[i] = s1[i];
	for (i = 0; i < len2; i++)
		ar[len1 + i] = s2[i];
	return (ar);
}
