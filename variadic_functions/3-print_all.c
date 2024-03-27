#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print char
 * @args: char to be printed
 *
 * Return: nothing
 */

void print_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	printf("%c", c);
}

/**
 * print_int - print int
 * @args: int to be printed
 *
 *
 */

void print_int(va_list *args)
{
	int x;

	x = va_arg(*args, int);
	printf("%d", x);
}

/**
 * print_float - print float
 * @args: float to be printed
 *
 *
 *
 */

void print_float(va_list *args)
{
	double f;

	f = va_arg(*args, double);
	printf("%f", f);
}

/**
 * print_string - print string
 * @args: string to be printed
 *
 *
 *
 */

void print_string(va_list *args)
{
	char *str;

	str = va_arg(*args, char*);

	printf("%s", (str == NULL) ? "(nil)" : str);
}

/**
 * print_all - print anything
 * @format: what need to be printed
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	op_t op[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_list list;
	int i = 0, j = 0;
	int printed_one = 0;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (op[j].type == format[i])
			{
				if (printed_one == 1)
					printf(", ");

				op[j].func(&list);
				printed_one = 1;
			}
			j += 1;
		}
		j = 0;
		i += 1;
	}
	va_end(list);
	printf("\n");
}
