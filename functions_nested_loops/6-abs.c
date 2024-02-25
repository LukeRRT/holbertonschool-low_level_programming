#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @n: the integer to compute the absolute value
 *
 * Return: absolute value of n
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
