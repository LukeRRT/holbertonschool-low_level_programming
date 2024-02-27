#include "main.h"

/**
 * print_diagonal - prints \ on location depending on number of n
 * @n: where it prints \
 *
 * Return: no return
 *
 */

void print_diagonal(int n)
{
	if (n >= 1)
	{
		n--;
		while (n >= 1)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
