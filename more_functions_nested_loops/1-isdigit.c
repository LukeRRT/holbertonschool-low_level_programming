#include "main.h"

/**
 * _isdigit - to check the number is 0 - 9
 * @c: character of numbers
 *
 * Return: return 1 if yes, 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
