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
	int row = 0;
	int col = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (row <= size)
	{
		while (col <= size - row)
		{
			_putchar(' ');
			col++;
		}
		while (col <= row)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
