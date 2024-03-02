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
	int row = 0;
	int col = 0;
	
	if (n >= 1)
	{
		while (row < n)
		{
			col = 0;
			while (col < row)
			{
				_putchar(' ');
				col++;
			}
			_putchar('\\');
			_putchar('\n');
			row++;
		}
	}
	else
		_putchar('\n');
}
