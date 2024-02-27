#include "main.h"

/**
 * print_numbers - prints number 0-9 follow by new line
 *
 * Return: no return
 *
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num = num + 1;
	}
	_putchar('\n');
}
