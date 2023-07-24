#include "main.h"

/**
 * rev_string - print the sting in a reverse way
 * @s: string parameter input
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, l;
	char temp;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;
	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
