#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: numer of argument
 * @...: numbers to print
 * @separator: is the string to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ptr);
}
