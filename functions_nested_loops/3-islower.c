#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the character to be checked (ASCII value)
 *
 * Return: 1 if yes, 0 if not
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
