#include "main.h"
/**
 * strlen - find length of string
 * @s: string
 * Return: type
 */
int strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: gg
 * Return: NULL if ac == 0 or av == NULL,
 *		 pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++; nc++)
		nc += strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++; cmpt++)
			s[cmpt} = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
