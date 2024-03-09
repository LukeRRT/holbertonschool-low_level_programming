#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - retuerns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	unsigned int count = 0;
	unsigned int i;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
