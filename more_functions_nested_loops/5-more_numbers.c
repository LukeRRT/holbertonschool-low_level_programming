#include "main.h"

/**
 * more_numbers - prints number 0-14 for 10 lines
 *
 * Return: no return
 *
 */

void more_numbers(void)
{
	int num = 0;
	int row = 0;

	while (row < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
		row++;
	}
}
