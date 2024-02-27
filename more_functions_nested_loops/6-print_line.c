#include "main.h"

/**
 * print_line - prints lines depending on number of n
 * @n: number of lines
 *
 * Return: no return
 *
 */

void print_line(int n)
{
	if (n >= 1)
	{
		while (n >= 1)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
