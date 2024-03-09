#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_divisible - recursively determine if a given number n
 * @n: the number being checked for divisibility.
 * @divisor: the number by which we are checking if n is divisible.
 *
 * Return: 1, otherwise, it returns 0.
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	if (divisor == 2)
		return ((n % 2 == 0) ? 1 : 0);
	if (divisor * divisor > n)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - determine whether the input integer
 * n is a prime number.
 * @n: integer number
 *
 * Return: Check if n is divisible by any number less than
 * or equal to its square root
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, (int)sqrt(n)));
}
