#include "main.h"

/**
 * print_most_numbers - prints number 0-9 except 2 and 4, follow by new line
 *
 * Return: no return
 *
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 $$ num != 4)
		{
			_putchar(num + '0');
			num = num + 1;
		}
	}
	_putchar('\n');
}
