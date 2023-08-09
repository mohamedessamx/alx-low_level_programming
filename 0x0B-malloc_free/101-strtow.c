#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0, i, in_word = 0;

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == ' ')
		in_word = 0;
	else if (in_word == 0)
	{
		count++;
		in_word = 1;
	}
}
return (count);
}
/**
 * free_words - Frees the memory allocated for an array of words.
 * @words: The array of words.
 * @count: The number of words.
 * Return: nothing
 */
void free_words(char **words, int count)
{
int i;

for (i = 0; i < count; i++)
	free(words[i]);
free(words);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, word_count, word_length, index = 0;

if (str == NULL || *str == '\0')
	return (NULL);
word_count = count_words(str);
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
	return (NULL);
for (i = 0; i < word_count; i++)
{
	while (*str == ' ')
		str++;
	word_length = 0;
	while (str[word_length] != ' ' && str[word_length] != '\0')
		word_length++;
	words[i] = malloc(sizeof(char) * (word_length + 1));
	if (words[i] == NULL)
	{
		free_words(words, i);
		return (NULL);
	}
	for (j = 0, k = index; j < word_length; j++, k++)
		words[i][j] = str[k];
	words[i][j] = '\0';
	index += word_length;
}
words[word_count] = NULL;
return (words);
}
