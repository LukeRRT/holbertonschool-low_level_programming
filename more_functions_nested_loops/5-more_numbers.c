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

	while (num <= 10)
	{
		num = 0;

		while (num <= 14)
		{
			_putchar(num + '0');
			num = num + 1;
		}
		_putchar('\n');
	}
}
