#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function to print name
 * @name: character of name
 * @f: function pointer
 *
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
