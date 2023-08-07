#include "main.h"

/**
 * _puts - gg
 * @str: gg
 * Return: nothing
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
