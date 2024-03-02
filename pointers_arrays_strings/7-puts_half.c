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
	if (length % 2 == 0)
	{
		i = length / 2;
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (length - 1) / 2;
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
