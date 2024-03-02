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
	while (i < length)
	{
		if (i >= (length / 2) - 1)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
