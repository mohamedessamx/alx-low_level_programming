#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the string to print
 * @f: printing function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
