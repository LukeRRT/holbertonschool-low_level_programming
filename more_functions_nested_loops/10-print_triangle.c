#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: number of # in triangle
 *
 * Return: no return
 *
 */

void print_triangle(int size)
{
	int row = 1;
	int col = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (row <= size)
	{
		col = 1;
		while (col <= size - row)
		{
			_putchar(' ');
			col++;
		}
		col = 1;
		while (col <= row)
		{
			_putchar(35);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
