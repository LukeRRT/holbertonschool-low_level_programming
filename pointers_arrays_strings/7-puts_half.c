#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (i % 2 == 0)
	{
		if (i >= length / 2)
		{
			while (i < length)
			{
				_putchar(str[i]);
				i++;
			}
		}
	}
	else
	{
		if (i >= length - 1 / 2)
		{
			while (i < length)
			{
				_putchar(str[i]);
				i++;
			}
		}
	}
	_putchar('\n');
}
