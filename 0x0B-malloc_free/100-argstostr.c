#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;/* Account for the newline character */
	}
	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = '\n'; /* Add newline character */
		index++;
	}
	str[index] = '\0'; /* Add null terminator */
	return (str);
}
