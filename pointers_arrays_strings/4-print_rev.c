#include "main.h"

/**
 * print_rev - prints string, in reverse
 * @s: string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;
	char *temp = s;
	int i;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
