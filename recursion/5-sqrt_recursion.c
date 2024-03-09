#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: integer
 *
 * Return: square root of a number
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_helper - the actual recursive calculation of
 * the natural square root of a number.
 * @n: integer
 * @guess: guess number
 *
 * Return: guess, -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}
