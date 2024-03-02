#include "main.h"

/**
 * print_square - prints # depends on number of size
 * @size: size to print square
 *
 * Return: no return
 *
 */

void print_square(int size)
{
	char row = 0;
	char col = 0;

	if (size >= 1)
	{
		while (row < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
		_putchar('\n');
}
