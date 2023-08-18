#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  prints anything.
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *separator = "";
va_list ap;
typedef struct {
	char format;
	void (*print_func)(va_list);
} format_t;

format_t formats[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{0, NULL}
};
va_start(ap, format);
while (format && format[i])
{
	int j = 0;
	while (formats[j].format)
	{
		if (format[i] == formats[j].format)
		{
			printf("%s", separator);
			formats[j].print_func(ap);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;
}
printf("\n");
va_end(ap);
}
/**
 * print_char - formats characters
 * @ap: argument pointer
 */
void print_char(va_list ap)
{
char c = va_arg(ap, int);

printf("%c", c);
}
/**
 * print_int - formats integers
 * @ap: argument pointer
 */
void print_int(va_list ap)
{
int n = va_arg(ap, int);

printf("%d", n);
}
/**
 * print_float - formats float
 * @ap: argument pointer
 */
void print_float(va_list ap)
{
double f = va_arg(ap, double);

printf("%f", f);
}
/**
 * print_string - formats strin
 * @ap: argument pointer
 */
void print_string(va_list ap)
{
char *str = va_arg(ap, char*);

if (str == NULL)
	str = "(nil)";
printf("%s", str);
}
