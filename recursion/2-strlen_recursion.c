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
	if (*s == '\0')
		return (0);

	return (1 + _str_resursion(s + 1));
}
