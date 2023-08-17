#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line
 * @n: number of arguments
 * @...: strings to print
 * @separator:  string to be printed between the strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	char *temp;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		temp = va_arg(ptr, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
