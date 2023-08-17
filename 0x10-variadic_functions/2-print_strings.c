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
	unsigned int i = 0;
	char *ptr;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (; i < n; i++)
	{
		ptr = va_arg(ap, char*);
		if (ptr == NULL)
			printf("nil");
		else
			printf("%s", temp);
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
